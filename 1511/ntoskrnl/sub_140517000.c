/*
 * XREFs of sub_140517000 @ 0x140517000
 * Callers:
 *     sub_140516FC8 @ 0x140516FC8 (sub_140516FC8.c)
 *     ExIsAppLicensed @ 0x1406685C8 (ExIsAppLicensed.c)
 *     ExIsAppLicensedProduct @ 0x140668618 (ExIsAppLicensedProduct.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExpFindFastCacheDescriptor @ 0x1405170F0 (ExpFindFastCacheDescriptor.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 *     ExpTriggerFastCacheReeval @ 0x14066A550 (ExpTriggerFastCacheReeval.c)
 */

__int64 __fastcall sub_140517000(unsigned int a1, __int64 a2, char a3, unsigned int a4, void *a5, _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  __int64 v11; // rbx
  __int64 FastCacheDescriptor; // rax
  unsigned int v13; // ebx
  size_t v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v9 = a1;
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpFastCacheLock, v11, (ULONG_PTR)&ExpFastCacheLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *((_DWORD *)&unk_1406FB430 + 18 * v9 + 8) )
  {
    if ( !a3 )
      ExpTriggerFastCacheReeval();
    v13 = -1073700221;
  }
  else
  {
    FastCacheDescriptor = ExpFindFastCacheDescriptor((unsigned int)v9, a2);
    if ( FastCacheDescriptor )
    {
      if ( *((_BYTE *)&unk_1406FB430 + 72 * v9 + 64)
        && (unsigned __int64)qword_1406FBAD8 > *(_QWORD *)(FastCacheDescriptor + 32) )
      {
        sub_14066A098(8444LL);
        if ( !a3 )
          ExpTriggerFastCacheReeval();
        v13 = -1073700222;
      }
      else
      {
        v15 = *(unsigned int *)(FastCacheDescriptor + 40);
        *a6 = v15;
        if ( (unsigned int)v15 <= a4 )
        {
          memmove(a5, (const void *)(FastCacheDescriptor + 44), v15);
          v13 = 0;
        }
        else
        {
          v13 = -1073741789;
        }
      }
    }
    else
    {
      v13 = -1073700223;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v13;
}
