/*
 * XREFs of CmpCheckNotifyAccess @ 0x1403FCBD4
 * Callers:
 *     CmpNotifyTriggerCheck @ 0x1403FCB5C (CmpNotifyTriggerCheck.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 */

BOOLEAN __fastcall CmpCheckNotifyAccess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  signed __int64 v7; // rbx
  __int64 v8; // rsi
  BOOLEAN v9; // si
  signed __int64 v10; // rax
  unsigned __int64 v11; // rtt
  signed __int64 v13; // rax
  unsigned __int64 v14; // rtt
  NTSTATUS AccessStatus[14]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)(a2 + 2952);
  v7 = 0LL;
  GrantedAccess = 0;
  v8 = KeAbPreAcquire(a2 + 2952, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v8, (ULONG_PTR)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(a2, *(unsigned int *)(a3 + 44), &v16) )
  {
    v9 = SeAccessCheck(
           (PSECURITY_DESCRIPTOR)(*(_QWORD *)(*(_QWORD *)(a2 + 3056) + 16LL * v16 + 8) + 32LL),
           (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
           0,
           0x10u,
           0,
           0LL,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           AccessStatus);
    _m_prefetchw(v3);
    v10 = *v3;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v7 = v10 - 16;
    if ( (v10 & 2) != 0 || (v11 = *v3, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v7, v10)) )
      ExfReleasePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return v9;
  }
  else
  {
    _m_prefetchw(v3);
    v13 = *v3;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v7 = v13 - 16;
    if ( (v13 & 2) != 0 || (v14 = *v3, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v7, v13)) )
      ExfReleasePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return 0;
  }
}
