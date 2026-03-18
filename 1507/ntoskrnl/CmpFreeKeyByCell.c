/*
 * XREFs of CmpFreeKeyByCell @ 0x140449FBC
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpDestroyHive @ 0x1404EE8E0 (CmpDestroyHive.c)
 *     CmpCommitAddKeyUoW @ 0x1404F2A54 (CmpCommitAddKeyUoW.c)
 *     CmpCommitDeleteKeyUoW @ 0x1404F3380 (CmpCommitDeleteKeyUoW.c)
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     CmpDuplicateKey @ 0x140656794 (CmpDuplicateKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140660848 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 *     CmpDeleteTree @ 0x14066483C (CmpDeleteTree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpMarkKeyDirty @ 0x14042C620 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyBody @ 0x14044A198 (CmpFreeKeyBody.c)
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x14044A4C8 (CmpFreeSecurityDescriptor.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3, __int64 a4)
{
  unsigned __int64 *v4; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  signed __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int i; // edi
  unsigned int v17; // edi
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = (unsigned __int64 *)(BugCheckParameter2 + 2952);
  v22 = -1;
  v23 = -1;
  v21[0] = -1;
  v8 = KeAbPreAcquire(BugCheckParameter2 + 2952, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (ULONG_PTR)v4, v9);
  v11 = 0LL;
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !CmpMarkKeyDirty(BugCheckParameter2, a2, a3) )
  {
    v17 = -1073741443;
    goto LABEL_24;
  }
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v22);
  if ( !v13 )
    goto LABEL_31;
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
      goto LABEL_32;
    v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v13 + 16),
            &v23);
    if ( !v14 )
      goto LABEL_32;
    if ( !(*(_DWORD *)(v14 + 20) + *(_DWORD *)(v14 + 24)) )
    {
      *(_WORD *)(v14 + 52) = 0;
      *(_DWORD *)(v14 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
  }
  if ( (*(_BYTE *)(v13 + 2) & 0x42) != 0 )
    goto LABEL_20;
  if ( !*(_DWORD *)(v13 + 36) )
  {
LABEL_19:
    CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_20:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
    v13 = 0LL;
    if ( (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, a2) )
    {
      v17 = 0;
      goto LABEL_22;
    }
LABEL_31:
    v17 = -1073741670;
    goto LABEL_24;
  }
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v13 + 40),
          v21);
  if ( v15 )
  {
    for ( i = 0; i < *(_DWORD *)(v13 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v15 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v13 + 40));
    goto LABEL_19;
  }
LABEL_32:
  v17 = -1073741670;
LABEL_22:
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
LABEL_24:
  _m_prefetchw(v4);
  v18 = *v4;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v11 = v18 - 16;
  if ( (v18 & 2) != 0 || (v19 = *v4, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v11, v18)) )
    ExfReleasePushLock(v4, v12);
  KeAbPostRelease((ULONG_PTR)v4);
  return v17;
}
