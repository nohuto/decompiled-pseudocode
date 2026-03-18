/*
 * XREFs of CmpDestroyTemporaryHive @ 0x140661D60
 * Callers:
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpRemoveHiveFromMapping @ 0x140658DD0 (CmpRemoveHiveFromMapping.c)
 */

void __fastcall CmpDestroyTemporaryHive(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 *v12; // rcx
  __int64 **v13; // rax
  ULONG_PTR v14; // rtt

  if ( BugCheckParameter2 )
  {
    v2 = 0LL;
    CmpDestroySecurityCache(BugCheckParameter2);
    v6 = (__int64 *)(BugCheckParameter2 + 5368);
    if ( (__int64 *)*v6 != v6 )
    {
      v7 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v5);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v11 = v7;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v7, (ULONG_PTR)&CmpHiveListHeadLock, v9);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v12 = (__int64 *)*v6;
      v13 = *(__int64 ***)(BugCheckParameter2 + 5376);
      if ( *(__int64 **)(*v6 + 8) != v6 || *v13 != v6 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = (__int64)v13;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v2 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v14 = CmpHiveListHeadLock,
            v14 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v2,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock, v8);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 2) != 0 )
      CmpRemoveHiveFromMapping(BugCheckParameter2, v3, v4, v5);
    HvFreeHive(BugCheckParameter2, 1, v4);
    CmpDereferenceHive(BugCheckParameter2);
  }
}
