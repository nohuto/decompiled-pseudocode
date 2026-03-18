/*
 * XREFs of NtQueueApcThreadEx @ 0x1404D7D1C
 * Callers:
 *     NtQueueApcThread @ 0x1404D7CF4 (NtQueueApcThread.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x1400C9FD0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400F0F58 (KeInitializeApc.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx(void *a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  PVOID v11; // rdi
  char *PoolWithQuotaTag; // rbx
  void (__fastcall *v13)(PVOID); // r9
  void (__stdcall *v14)(PVOID); // rsi
  NTSTATUS v15; // ebx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v17; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v11 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0
      || (v11 = Object, KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7])
      && !*(_QWORD *)(*((_QWORD *)Object + 68) + 1064LL)
      && (unsigned __int64)-(a3 >> 2) <= 0xFFFFFFFF )
    {
      v15 = -1073741816;
    }
    else if ( a2 )
    {
      v15 = ObReferenceObjectByHandle(a2, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v17, 0LL);
      if ( v15 >= 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0) )
        {
          v13 = (void (__fastcall *)(PVOID))PspUserApcReserveKernelRoutine;
          v11 = Object;
          v14 = (void (__stdcall *)(PVOID))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)v17 + 8;
LABEL_7:
          KeInitializeApc((__int64)PoolWithQuotaTag, (__int64)v11, 0, (__int64)v13, (__int64)v14, a3, 1, a4);
          if ( (unsigned __int8)KeInsertQueueApc((__int64)PoolWithQuotaTag, a5, a6, 0) )
          {
            v15 = 0;
          }
          else
          {
            v14(PoolWithQuotaTag);
            v15 = -1073741823;
          }
          goto LABEL_9;
        }
        ObfDereferenceObject(v17);
        v11 = Object;
        v15 = -1073741584;
      }
    }
    else
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
      if ( PoolWithQuotaTag )
      {
        v13 = PspQueueApcSpecialApc;
        v14 = ExFreePool;
        goto LABEL_7;
      }
      v15 = -1073741801;
    }
LABEL_9:
    ObfDereferenceObject(v11);
    return v15;
  }
  return result;
}
