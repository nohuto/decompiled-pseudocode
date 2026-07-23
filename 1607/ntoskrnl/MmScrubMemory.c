/*
 * XREFs of MmScrubMemory @ 0x140665370
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     KeInitializeGate @ 0x1400ADD84 (KeInitializeGate.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 */

NTSTATUS __fastcall MmScrubMemory(void *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v5; // ebp
  _DWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  int v8; // ebp
  _DWORD *v9; // rdi
  unsigned int *v10; // rsi
  unsigned int v11; // r14d
  unsigned int **v12; // r15
  __int64 v13; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  Object = a1;
  *a3 = 0LL;
  result = ObReferenceObjectByHandle(
             a2,
             1u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 40LL * (unsigned __int16)KeNumberNodes + 56, 0x6363454Du);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = v5;
      KeInitializeGate((__int64)(PoolWithTag + 2));
      v9 = Object;
      v7[6] = MiSystemPartition;
      v10 = (unsigned int *)(v7 + 7);
      v7[4] = v9;
      v11 = 0;
      v7[5] = 0LL;
      if ( v5 )
      {
        v12 = (unsigned int **)(v7 + 11);
        do
        {
          *((_DWORD *)v12 - 7) = 0;
          *v10 = v11;
          *(v12 - 3) = 0LL;
          *(v12 - 1) = (unsigned int *)MiScrubMemoryWorker;
          *v12 = v10;
          ExQueueWorkItemEx(v12 - 3, 4u, v11);
          v10 += 10;
          v12 += 5;
          ++v11;
        }
        while ( v11 < v5 );
      }
      v13 = v7[6];
      v15 = 0LL;
      v8 = MiScrubProcesses(v13, (__int64)v9, &v15);
      KeWaitForGate((__int64)(v7 + 1), 0);
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          v10 -= 10;
          if ( (v10[1] & 0x80000000) != 0 )
            break;
          if ( !--v11 )
            goto LABEL_12;
        }
        v8 = v10[1];
      }
LABEL_12:
      *a3 = v15 + v7[5];
      ExFreePoolWithTag(v7, 0);
      if ( v9[1] )
      {
        v8 = -1073741248;
LABEL_16:
        ObfDereferenceObject(v9);
        return v8;
      }
      _InterlockedIncrement(&dword_14032716C);
    }
    else
    {
      v8 = -1073741670;
    }
    v9 = Object;
    goto LABEL_16;
  }
  return result;
}
