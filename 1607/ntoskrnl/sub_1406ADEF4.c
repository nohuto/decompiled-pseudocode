/*
 * XREFs of sub_1406ADEF4 @ 0x1406ADEF4
 * Callers:
 *     ExIsAppLicensed @ 0x1406ADDF4 (ExIsAppLicensed.c)
 *     ExIsAppLicensedProduct @ 0x1406ADE40 (ExIsAppLicensedProduct.c)
 *     sub_1406ADEB8 @ 0x1406ADEB8 (sub_1406ADEB8.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExpFindFastCacheDescriptor @ 0x1406AEFD0 (ExpFindFastCacheDescriptor.c)
 *     sub_1406AF784 @ 0x1406AF784 (sub_1406AF784.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFB08 (ExpTriggerFastCacheReeval.c)
 */

__int64 __fastcall sub_1406ADEF4(unsigned int a1, __int64 a2, char a3, unsigned int a4, void *a5, _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  __int64 v11; // rbx
  unsigned int v12; // ebx
  __int64 FastCacheDescriptor; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  CurrentThread = KeGetCurrentThread();
  v9 = a1;
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpFastCacheLock, v11, (ULONG_PTR)&ExpFastCacheLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *((_DWORD *)&unk_1407474A0 + 18 * v9 + 8) )
  {
    if ( !a3 )
      ExpTriggerFastCacheReeval();
    v12 = -1073700221;
  }
  else
  {
    FastCacheDescriptor = ExpFindFastCacheDescriptor((unsigned int)v9, a2);
    if ( FastCacheDescriptor )
    {
      if ( *((_BYTE *)&unk_1407474A0 + 72 * v9 + 64)
        && (unsigned __int64)qword_140747BD8 > *(_QWORD *)(FastCacheDescriptor + 32) )
      {
        sub_1406AF784(8444LL);
        if ( !a3 )
          ExpTriggerFastCacheReeval();
        v12 = -1073700222;
      }
      else
      {
        *a6 = *(_DWORD *)(FastCacheDescriptor + 40);
        if ( *(_DWORD *)(FastCacheDescriptor + 40) <= a4 )
        {
          memmove(a5, (const void *)(FastCacheDescriptor + 44), *(unsigned int *)(FastCacheDescriptor + 40));
          v12 = 0;
        }
        else
        {
          v12 = -1073741789;
        }
      }
    }
    else
    {
      v12 = -1073700223;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  return v12;
}
