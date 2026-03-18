/*
 * XREFs of CmpDestroyTemporaryHive @ 0x1405EA4D8
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 */

void __fastcall CmpDestroyTemporaryHive(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rbx
  __int64 v3; // r8
  __int64 *v4; // rsi
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rbp
  __int64 *v8; // rcx
  __int64 **v9; // rax
  ULONG_PTR v10; // rtt

  if ( BugCheckParameter2 )
  {
    v2 = 0LL;
    CmpDestroySecurityCache(BugCheckParameter2);
    v4 = (__int64 *)(BugCheckParameter2 + 5368);
    if ( (__int64 *)*v4 != v4 )
    {
      v5 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v7 = v5;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v5, (ULONG_PTR)&CmpHiveListHeadLock);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      v8 = (__int64 *)*v4;
      v9 = *(__int64 ***)(BugCheckParameter2 + 5376);
      if ( *(__int64 **)(*v4 + 8) != v4 || *v9 != v4 )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v2 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v10 = CmpHiveListHeadLock,
            v10 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v2,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 2) != 0 )
      CmpRemoveHiveFromMapping(BugCheckParameter2);
    HvFreeHive(BugCheckParameter2, 1, v3);
    CmpDereferenceHive(BugCheckParameter2);
  }
}
