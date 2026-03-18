/*
 * XREFs of CmpCheckNotifyAccess @ 0x1404EC768
 * Callers:
 *     CmpNotifyTriggerCheck @ 0x1404EC670 (CmpNotifyTriggerCheck.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 */

BOOLEAN __fastcall CmpCheckNotifyAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  signed __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  BOOLEAN v13; // si
  signed __int64 v14; // rax
  unsigned __int64 v15; // rtt
  signed __int64 v17; // rax
  unsigned __int64 v18; // rtt
  NTSTATUS AccessStatus[14]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned __int64 *)(a2 + 2952);
  v8 = 0LL;
  GrantedAccess = 0;
  v9 = KeAbPreAcquire(a2 + 2952, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( CmpFindSecurityCellCacheIndex(a2, *(_DWORD *)(a3 + 44), &v20) )
  {
    v13 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)(*(_QWORD *)(*(_QWORD *)(a2 + 3056) + 16LL * v20 + 8) + 32LL),
            (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
            0,
            0x10u,
            0,
            0LL,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            1,
            &GrantedAccess,
            AccessStatus);
    _m_prefetchw(v4);
    v14 = *v4;
    if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v8 = v14 - 16;
    if ( (v14 & 2) != 0 || (v15 = *v4, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v8, v14)) )
      ExfReleasePushLock(v4, v12);
    KeAbPostRelease((ULONG_PTR)v4);
    return v13;
  }
  else
  {
    _m_prefetchw(v4);
    v17 = *v4;
    if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v8 = v17 - 16;
    if ( (v17 & 2) != 0 || (v18 = *v4, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v8, v17)) )
      ExfReleasePushLock(v4, v11);
    KeAbPostRelease((ULONG_PTR)v4);
    return 0;
  }
}
