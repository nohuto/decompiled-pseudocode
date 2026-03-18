/*
 * XREFs of CmpAssignSecurityToKcb @ 0x140449C5C
 * Callers:
 *     CmpAssignSecurityDescriptorWrapper @ 0x140449A94 (CmpAssignSecurityDescriptorWrapper.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCommitAddKeyUoW @ 0x1404F2A54 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4,
        char a5)
{
  signed __int64 v5; // rbx
  ULONG_PTR v6; // r15
  char v7; // r13
  __int64 v8; // rbp
  char v10; // si
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v14; // rbp
  __int64 v15; // r9
  signed __int64 v16; // rax
  __int64 v17; // rtt
  unsigned int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v5 = 0LL;
  v6 = (unsigned int)BugCheckParameter4;
  v7 = a4;
  v8 = a3;
  v10 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !(_BYTE)a4 )
    {
      v14 = KeAbPreAcquire(v11 + 2952, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 2952), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 2952), v14, v11 + 2952, v15);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v8 = v19;
    }
    if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v11, (unsigned int)v6, &v18) )
    {
      if ( !v8 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v11 + 3056) + 16LL * v18 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v10 = 0;
    }
    if ( !v7 )
    {
      _m_prefetchw((const void *)(v11 + 2952));
      v16 = *(_QWORD *)(v11 + 2952);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v5 = v16 - 16;
      if ( (v16 & 2) != 0
        || (v17 = *(_QWORD *)(v11 + 2952),
            v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 2952), v5, v16)) )
      {
        ExfReleasePushLock((_QWORD *)(v11 + 2952), v12);
      }
      KeAbPostRelease(v11 + 2952);
    }
  }
  return v10;
}
