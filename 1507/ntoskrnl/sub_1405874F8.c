/*
 * XREFs of sub_1405874F8 @ 0x1405874F8
 * Callers:
 *     ExQueryClipSp @ 0x14015B0B0 (ExQueryClipSp.c)
 *     sub_140587464 @ 0x140587464 (sub_140587464.c)
 *     ExIsAppLicensed @ 0x1406EB9B8 (ExIsAppLicensed.c)
 *     ExIsAppLicensedProduct @ 0x1406EBA08 (ExIsAppLicensedProduct.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExpFindFastCacheDescriptor @ 0x140587608 (ExpFindFastCacheDescriptor.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 *     ExpTriggerFastCacheReeval @ 0x1406EDB4C (ExpTriggerFastCacheReeval.c)
 */

__int64 __fastcall sub_1405874F8(unsigned int a1, __int64 a2, char a3, __int64 a4, void *a5, _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebp
  __int64 v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 FastCacheDescriptor; // rax
  unsigned int v17; // ebx
  struct _KTHREAD *v18; // rdx
  __int16 v19; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v24; // rcx

  CurrentThread = KeGetCurrentThread();
  v7 = a4;
  v9 = a1;
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0LL, a4);
  v15 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpFastCacheLock, v12, (ULONG_PTR)&ExpFastCacheLock, v14);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( *((_DWORD *)&unk_14077E460 + 18 * v9 + 8) )
  {
    if ( !a3 )
      ExpTriggerFastCacheReeval(v15, v11, v13);
    v17 = -1073700221;
  }
  else
  {
    FastCacheDescriptor = ExpFindFastCacheDescriptor((unsigned int)v9, a2);
    if ( FastCacheDescriptor )
    {
      if ( *((_BYTE *)&unk_14077E460 + 72 * v9 + 64)
        && (unsigned __int64)qword_14077EAD0 > *(_QWORD *)(FastCacheDescriptor + 32) )
      {
        sub_1406ED694(8444LL);
        if ( !a3 )
          ExpTriggerFastCacheReeval(v22, v21, v23);
        v17 = -1073700222;
      }
      else
      {
        v24 = *(unsigned int *)(FastCacheDescriptor + 40);
        *a6 = v24;
        if ( (unsigned int)v24 <= v7 )
        {
          memmove(a5, (const void *)(FastCacheDescriptor + 44), v24);
          v17 = 0;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
    else
    {
      v17 = -1073700223;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v17;
}
