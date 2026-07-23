/*
 * XREFs of NtQueueApcThreadEx @ 0x1404BB320
 * Callers:
 *     NtQueueApcThread @ 0x1404BB2F8 (NtQueueApcThread.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  PVOID v11; // rdi
  char *PoolWithQuotaTag; // rbx
  void (__fastcall *v13)(PVOID); // r9
  void (__stdcall *v14)(PVOID); // rsi
  int v15; // ebx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v17; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v11 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0
      || (v11 = Object, KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7])
      && !*(_QWORD *)(*((_QWORD *)Object + 68) + 1064LL)
      && (unsigned __int64)-((__int64)ApcRoutine >> 2) <= 0xFFFFFFFF )
    {
      v15 = -1073741816;
    }
    else if ( ReserveHandle )
    {
      v15 = ObReferenceObjectByHandle(ReserveHandle, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v17, 0LL);
      if ( v15 >= 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0) )
        {
          v13 = (void (__fastcall *)(PVOID))PspUserApcReserveKernelRoutine;
          v11 = Object;
          v14 = (void (__stdcall *)(PVOID))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)v17 + 8;
LABEL_7:
          KeInitializeApc(
            (__int64)PoolWithQuotaTag,
            (__int64)v11,
            0,
            (__int64)v13,
            (__int64)v14,
            (__int64)ApcRoutine,
            1,
            (__int64)ApcArgument1);
          if ( (unsigned __int8)KeInsertQueueApc(
                                  (__int64)PoolWithQuotaTag,
                                  (__int64)ApcArgument2,
                                  (__int64)ApcArgument3,
                                  0) )
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
