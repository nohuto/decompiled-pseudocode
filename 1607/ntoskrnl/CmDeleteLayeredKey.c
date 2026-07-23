/*
 * XREFs of CmDeleteLayeredKey @ 0x1401B5C94
 * Callers:
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14000AA6C (CmpRebuildKcbCacheFromNode.c)
 *     CmpHashCompressedComponent @ 0x14010BF1C (CmpHashCompressedComponent.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1403FAE14 (CmpLockKcbStackExclusive.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FB840 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140436860 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140581CD4 (CmpInitializeDiscardReplaceContext.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1405FF870 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpFreeKeyValues @ 0x140608CBC (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14060A088 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060B9BC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14060BC08 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060BE64 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rdi
  char v5; // si
  __int64 v6; // r15
  char v7; // r12
  int started; // ebx
  char IsKeyDeletedForKeyBody; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // r14d
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  unsigned int v20; // r14d
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // rdx
  _WORD v25[4]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-41h]
  _BYTE v27[32]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v29[80]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v30; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+7Fh] BYREF

  CmpInitializeKcbStack(v27);
  CmpInitializeKcbStack(v28);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 64);
  v32 = 0xFFFFFFFFLL;
  v31 = 0xFFFFFFFFLL;
  CmpInitializeDiscardReplaceContext(v29);
  v7 = 0;
  if ( (*(_BYTE *)(v4 + 178) & 8) != 0 )
  {
    started = -1073741535;
    goto LABEL_51;
  }
  started = CmpStartKcbStackForTopLayerKcb(v27, v4);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v28, v6);
    if ( started >= 0 )
    {
      CmpLockHashEntryExclusiveByKcb(v4);
      CmpLockKcbStackTopExclusiveRestShared(v28);
      CmpLockKcbStackExclusive(v27);
      IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
      started = 0;
      while ( 1 )
      {
        if ( IsKeyDeletedForKeyBody || (started = CmpGetSubKeyCountForKcbStack(v27, v10, &v30), started < 0) )
        {
LABEL_49:
          CmpUnlockKcbStack(v27);
          CmpUnlockKcbStack(v28);
LABEL_50:
          CmpUnlockHashEntryByKcb(v4);
          break;
        }
        started = 0;
        if ( v30 )
        {
          started = -1073741535;
          goto LABEL_49;
        }
        v11 = *(_QWORD *)(v4 + 184);
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 32) != v11 + 32 && !v5 )
            goto LABEL_23;
          if ( *(_QWORD *)(v11 + 32) != v11 + 32 )
          {
            v7 = 1;
            started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
            if ( started < 0 )
              goto LABEL_49;
            started = 0;
          }
        }
        if ( *(_DWORD *)(v4 + 32) != -1 )
        {
          if ( v5 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 8LL))(
                    *(_QWORD *)(v4 + 24),
                    *(unsigned int *)(v4 + 32),
                    &v32);
            v15 = 0;
            if ( *(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 20) )
            {
              while ( 1 )
              {
                started = CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v14, v15, &v30);
                if ( started < 0 )
                  break;
                started = 0;
                if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), v30) )
                  goto LABEL_36;
                if ( ++v15 >= *(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 20) )
                  goto LABEL_34;
              }
            }
            else
            {
LABEL_34:
              if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32)) )
              {
                CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v14, 0LL, &v30);
                while ( 1 )
                {
                  v20 = v30;
                  if ( v30 == -1 )
                    break;
                  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 8LL))(
                          *(_QWORD *)(v4 + 24),
                          v30,
                          &v31);
                  if ( (*(_BYTE *)(v16 + 2) & 0x20) != 0 )
                  {
                    v17 = CmpHashCompressedComponent((_BYTE *)(v16 + 76), *(unsigned __int16 *)(v16 + 72));
                  }
                  else
                  {
                    v26 = v16 + 76;
                    v25[0] = *(_WORD *)(v16 + 72);
                    v25[1] = v25[0];
                    v17 = CmpHashUnicodeComponent(v25);
                  }
                  v18 = v17;
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v31);
                  KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                                *(_QWORD *)(v4 + 24),
                                                (unsigned int)(v18 + 37 * *(_DWORD *)(v4 + 8)),
                                                v20);
                  started = 0;
                  if ( KcbInHashEntryByCellIndex )
                    *(_DWORD *)(KcbInHashEntryByCellIndex + 32) = -1;
                  CmpFreeKeyByCell(*(_QWORD *)(v4 + 24), v20);
                  CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v14, 0LL, &v30);
                }
                CmpFreeKeyValues(*(_QWORD *)(v4 + 24));
                v21 = *(_BYTE *)(v14 + 13);
                *(_WORD *)(v14 + 2) &= 0x20u;
                *(_QWORD *)(v14 + 56) = 0LL;
                *(_BYTE *)(v14 + 55) = 0;
                *(_DWORD *)(v14 + 52) &= 0xFF00FFFF;
                *(_BYTE *)(v14 + 13) = v21 & 0xFC | 1;
                *(_QWORD *)(v14 + 4) = 0LL;
                *(_DWORD *)(v14 + 64) = 0;
                *(_WORD *)(v14 + 52) = 0;
                CmpRebuildKcbCacheFromNode(v4, v14);
                CmpReportNotify(v4, *(_QWORD *)(v4 + 24), *(_DWORD *)(v4 + 32), 0, 1, a2);
                LOBYTE(v22) = 1;
                CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v23, v22);
                CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
                if ( v7 )
                {
                  CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
                }
                else
                {
                  CmpMarkKeyUnbacked(v4);
                  CmpDiscardKcb(v4);
                }
              }
              else
              {
LABEL_36:
                started = -1073741670;
              }
            }
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v32);
            goto LABEL_49;
          }
LABEL_23:
          CmpUnlockKcbStack(v27);
          CmpUnlockKcbStack(v28);
          CmpUnlockHashEntryByKcb(v4);
          CmpUnlockRegistry();
          CmpLockRegistryExclusive();
          v5 = 1;
          CmpLockHashEntryExclusiveByKcb(v4);
          CmpLockKcbStackTopExclusiveRestShared(v28);
          CmpLockKcbStackExclusive(v27);
          goto LABEL_24;
        }
        if ( *(_DWORD *)(v6 + 32) != -1 )
          goto LABEL_19;
        CmpUnlockKcbStack(v27);
        CmpUnlockKcbStack(v28);
        v12 = CmpPromoteKey((__int64)v28, 0, 1);
        started = v12;
        if ( v12 == -1073741444 )
        {
          started = 0;
          goto LABEL_50;
        }
        if ( v12 < 0 )
          goto LABEL_50;
        CmpLockKcbStackExclusive(v27);
        started = 0;
        if ( v5 )
        {
LABEL_19:
          started = CmpCreateTombstone(v11, v27);
          if ( started >= 0 )
          {
            CmpReportNotify(v4, *(_QWORD *)(v4 + 24), *(_DWORD *)(v4 + 32), 0, 1, a2);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v13, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
            if ( v7 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
            }
            else
            {
              CmpMarkKeyUnbacked(v4);
              CmpDiscardKcb(v4);
            }
            started = 0;
          }
          goto LABEL_49;
        }
LABEL_24:
        IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
      }
    }
  }
LABEL_51:
  CmpCleanupDiscardReplaceContext(v29);
  CmpCleanupKcbStack(v27);
  CmpCleanupKcbStack(v28);
  return (unsigned int)started;
}
