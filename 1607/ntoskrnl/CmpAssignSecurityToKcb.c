/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1403FCCF8
 * Callers:
 *     CmpRebuildKcbCacheFromNode @ 0x14000AA6C (CmpRebuildKcbCacheFromNode.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14060E3DC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060EA24 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
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
  __int64 v12; // rbp
  signed __int64 v13; // rax
  __int64 v14; // rtt
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h]

  v17 = a3;
  v5 = 0LL;
  v6 = (unsigned int)BugCheckParameter4;
  v8 = a3;
  v10 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter3 + 24);
    if ( !a4 )
    {
      v12 = KeAbPreAcquire(v11 + 2952, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 2952), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 2952), v12, v11 + 2952);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v8 = v17;
    }
    if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v11, (unsigned int)v6, &v16) )
    {
      if ( !v8 )
        *(_QWORD *)(BugCheckParameter3 + 80) = *(_QWORD *)(*(_QWORD *)(v11 + 3056) + 16LL * v16 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v10 = 0;
    }
    if ( !a4 )
    {
      _m_prefetchw((const void *)(v11 + 2952));
      v13 = *(_QWORD *)(v11 + 2952);
      if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v5 = v13 - 16;
      if ( (v13 & 2) != 0
        || (v14 = *(_QWORD *)(v11 + 2952),
            v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 2952), v5, v13)) )
      {
        ExfReleasePushLock((_QWORD *)(v11 + 2952));
      }
      KeAbPostRelease(v11 + 2952);
    }
  }
  return v10;
}
