/*
 * XREFs of ExFetchLicenseData @ 0x1406EB574
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // r9
  unsigned int *v10; // rdx
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  unsigned int v14; // [rsp+20h] [rbp-38h]

  v14 = 0;
  if ( a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_14077EA20, v8, (ULONG_PTR)&qword_14077EA20, v9);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( BYTE1(NlsMbCodePageTag) )
      goto LABEL_8;
    v10 = (unsigned int *)Data;
    if ( off_14077E020 )
      v10 = (unsigned int *)off_14077E020;
    if ( !v10 )
    {
LABEL_8:
      v14 = -1073741595;
    }
    else
    {
      *a3 = *v10;
      if ( a1 && a2 && a2 >= *v10 )
      {
        memmove(a1, v10, *v10);
        if ( a2 >= 0x14 )
          *((_DWORD *)a1 + 3) &= ~1u;
      }
      else
      {
        v14 = -1073741789;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v14;
}
