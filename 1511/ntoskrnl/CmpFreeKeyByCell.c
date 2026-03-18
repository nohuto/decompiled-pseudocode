/*
 * XREFs of CmpFreeKeyByCell @ 0x1403D84C4
 * Callers:
 *     CmpCommitDeleteKeyUoW @ 0x1403B4CF0 (CmpCommitDeleteKeyUoW.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpDestroyHive @ 0x140499400 (CmpDestroyHive.c)
 *     CmpCommitAddKeyUoW @ 0x1404B3A00 (CmpCommitAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14050EF5C (CmpSyncSubKeysAfterDelete.c)
 *     CmpDeleteTree @ 0x14050FC98 (CmpDeleteTree.c)
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 *     CmpDuplicateKey @ 0x1405E0AE4 (CmpDuplicateKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpFreeKeyBody @ 0x1403D7D40 (CmpFreeKeyBody.c)
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpMarkKeyDirty @ 0x1403DA3B4 (CmpMarkKeyDirty.c)
 *     CmpFreeSecurityDescriptor @ 0x1403DA6FC (CmpFreeSecurityDescriptor.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3)
{
  unsigned __int64 *v3; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  signed __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int i; // edi
  unsigned int v15; // edi
  signed __int64 v16; // rax
  unsigned __int64 v17; // rtt
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)(BugCheckParameter2 + 2952);
  v20 = -1;
  v21 = -1;
  v19[0] = -1;
  v7 = KeAbPreAcquire(BugCheckParameter2 + 2952, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  v9 = 0LL;
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( !(unsigned __int8)CmpMarkKeyDirty(BugCheckParameter2, a2) )
  {
    v15 = -1073741443;
    goto LABEL_24;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v20);
  v11 = v10;
  if ( !v10 )
    goto LABEL_31;
  if ( a3 == 1 )
  {
    if ( !CmpRemoveSubKey(BugCheckParameter2, *(_DWORD *)(v10 + 16), a2) )
      goto LABEL_32;
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v11 + 16),
            &v21);
    if ( !v12 )
      goto LABEL_32;
    if ( !(*(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24)) )
    {
      *(_WORD *)(v12 + 52) = 0;
      *(_DWORD *)(v12 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
  }
  if ( (*(_BYTE *)(v11 + 2) & 0x42) != 0 )
    goto LABEL_20;
  if ( !*(_DWORD *)(v11 + 36) )
  {
LABEL_19:
    CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_20:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
    v11 = 0LL;
    if ( CmpFreeKeyBody(BugCheckParameter2, a2) )
    {
      v15 = 0;
      goto LABEL_22;
    }
LABEL_31:
    v15 = -1073741670;
    goto LABEL_24;
  }
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v11 + 40),
          v19);
  if ( v13 )
  {
    for ( i = 0; i < *(_DWORD *)(v11 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v13 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v11 + 40));
    goto LABEL_19;
  }
LABEL_32:
  v15 = -1073741670;
LABEL_22:
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
LABEL_24:
  _m_prefetchw(v3);
  v16 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v16 - 16;
  if ( (v16 & 2) != 0 || (v17 = *v3, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v9, v16)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v15;
}
