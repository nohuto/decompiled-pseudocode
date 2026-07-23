/*
 * XREFs of CmpFreeKeyByCell @ 0x1403FF488
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053AF14 (CmpCleanupLightWeightUoWData.c)
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmpDuplicateKey @ 0x1405FECC0 (CmpDuplicateKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140609D10 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x14060E29C (CmpDeleteTree.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpRemoveSubKey @ 0x1404B8258 (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x1404BCD30 (CmpFreeSecurityDescriptor.c)
 *     CmpFreeKeyBody @ 0x1404C1630 (CmpFreeKeyBody.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  signed __int64 v4; // rbx
  unsigned int v6; // r12d
  unsigned __int64 *v7; // r15
  _BYTE *v8; // rax
  _BYTE *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int i; // edi
  unsigned int v14; // edi
  signed __int64 v15; // rax
  unsigned __int64 v16; // rtt
  _DWORD v18[4]; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+70h] [rbp+40h] BYREF
  int v20; // [rsp+74h] [rbp+44h]
  int v21; // [rsp+88h] [rbp+58h] BYREF
  int v22; // [rsp+8Ch] [rbp+5Ch]

  v4 = 0LL;
  v20 = 0;
  v19 = -1;
  v6 = BugCheckParameter3;
  v21 = -1;
  v18[0] = -1;
  v7 = (unsigned __int64 *)(BugCheckParameter2 + 2952);
  v22 = 0;
  v18[1] = 0;
  v8 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2 + 2952, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    v9[26] |= 1u;
  if ( !CmpMarkKeyDirty(BugCheckParameter2, v6, a3) )
  {
    v14 = -1073741443;
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v19);
  if ( !v10 )
    goto LABEL_32;
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
      goto LABEL_33;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v10 + 16),
            &v21);
    if ( !v11 )
      goto LABEL_33;
    if ( !(*(_DWORD *)(v11 + 20) + *(_DWORD *)(v11 + 24)) )
    {
      *(_WORD *)(v11 + 52) = 0;
      *(_DWORD *)(v11 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
  }
  if ( (*(_BYTE *)(v10 + 2) & 0x42) != 0 )
    goto LABEL_21;
  if ( !*(_DWORD *)(v10 + 36) )
  {
LABEL_19:
    if ( *(_DWORD *)(v10 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_21:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
    v10 = 0LL;
    if ( (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, v6) )
    {
      v14 = 0;
      goto LABEL_23;
    }
LABEL_32:
    v14 = -1073741670;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v10 + 40),
          v18);
  if ( v12 )
  {
    for ( i = 0; i < *(_DWORD *)(v10 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v12 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v10 + 40));
    goto LABEL_19;
  }
LABEL_33:
  v14 = -1073741670;
LABEL_23:
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
LABEL_25:
  _m_prefetchw(v7);
  v15 = *v7;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v15 - 16;
  if ( (v15 & 2) != 0 || (v16 = *v7, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v4, v15)) )
    ExfReleasePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v14;
}
