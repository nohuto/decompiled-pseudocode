/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x14043AA00
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x140439150 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14043AB20 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043B180 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(int a1, __int64 a2, int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  _QWORD *v9; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( a3 >= 6 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v13);
    if ( CurrentOperation >= 0 )
    {
      PiPnpRtlDisableRemoveOperationDispatch();
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, (unsigned int)a3, v13, &v14);
      if ( CurrentOperation >= 0 && v14 )
      {
        v9 = (_QWORD *)(v14 + 16);
        if ( *(_QWORD *)(v14 + 16)
          || (CurrentOperation = PnpOpenObjectRegKey(a1, a2, a3, 0x2000000, 0, (__int64)v9, 0LL, 0),
              CurrentOperation >= 0) )
        {
          *a4 = *v9;
        }
        else
        {
          *v9 = 0LL;
        }
      }
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return (unsigned int)CurrentOperation;
}
