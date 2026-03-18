/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1403DFE54
 * Callers:
 *     CmpAssignSecurityDescriptorWrapper @ 0x1403DFD88 (CmpAssignSecurityDescriptorWrapper.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCommitAddKeyUoW @ 0x1404B3A00 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14051A854 (CmpCommitSetSecurityUoW.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  signed __int64 v5; // rbx
  ULONG_PTR v6; // r15
  __int64 v8; // rbp
  char v10; // si
  __int64 v11; // r14
  __int64 v13; // rbp
  signed __int64 v14; // rax
  __int64 v15; // rtt
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h]

  v17 = a3;
  v5 = 0LL;
  v6 = (unsigned int)BugCheckParameter4;
  v8 = a3;
  v10 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
    {
      v13 = KeAbPreAcquire(v11 + 2952, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 2952), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 2952), v13, v11 + 2952);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v8 = v17;
    }
    if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v11, (unsigned int)v6, &v16) )
    {
      if ( !v8 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v11 + 3056) + 16LL * v16 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v10 = 0;
    }
    if ( !a4 )
    {
      _m_prefetchw((const void *)(v11 + 2952));
      v14 = *(_QWORD *)(v11 + 2952);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v5 = v14 - 16;
      if ( (v14 & 2) != 0
        || (v15 = *(_QWORD *)(v11 + 2952),
            v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 2952), v5, v14)) )
      {
        ExfReleasePushLock((_QWORD *)(v11 + 2952));
      }
      KeAbPostRelease(v11 + 2952);
    }
  }
  return v10;
}
