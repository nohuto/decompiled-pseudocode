/*
 * XREFs of MmScrubMemory @ 0x1406AACD4
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14012F290 (KeInitializeGate.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 */

NTSTATUS __fastcall MmScrubMemory(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // r14
  int v7; // edi
  _DWORD *v8; // rbx
  unsigned int *v9; // rsi
  unsigned int v10; // ebp
  unsigned int **v11; // r15
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF

  *a2 = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v4 = (unsigned __int16)KeNumberNodes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 40LL * (unsigned __int16)KeNumberNodes + 48, 0x6363454Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = v4;
      KeInitializeGate((__int64)(PoolWithTag + 2));
      v8 = Object;
      v9 = v6 + 12;
      *((_QWORD *)v6 + 4) = Object;
      v10 = 0;
      *((_QWORD *)v6 + 5) = 0LL;
      if ( v4 )
      {
        v11 = (unsigned int **)(v6 + 20);
        do
        {
          *((_DWORD *)v11 - 7) = 0;
          *v9 = v10;
          *(v11 - 3) = 0LL;
          *(v11 - 1) = (unsigned int *)MiScrubMemoryWorker;
          *v11 = v9;
          ExQueueWorkItemEx(v11 - 3, 4, v10);
          v9 += 10;
          v11 += 5;
          ++v10;
        }
        while ( v10 < v4 );
      }
      v13 = 0LL;
      v7 = MiScrubProcesses((__int64)v8, &v13);
      KeWaitForGate(v6 + 2, 0);
      if ( v7 >= 0 )
      {
        while ( 1 )
        {
          v9 -= 10;
          if ( (v9[1] & 0x80000000) != 0 )
            break;
          if ( !--v10 )
            goto LABEL_12;
        }
        v7 = v9[1];
      }
LABEL_12:
      *a2 = v13 + *((_QWORD *)v6 + 5);
      ExFreePoolWithTag(v6, 0);
      if ( v8[1] )
      {
        v7 = -1073741248;
LABEL_16:
        ObfDereferenceObject(v8);
        return v7;
      }
      _InterlockedIncrement(&dword_14034F210);
    }
    else
    {
      v7 = -1073741670;
    }
    v8 = Object;
    goto LABEL_16;
  }
  return result;
}
