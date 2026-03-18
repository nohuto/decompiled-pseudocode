/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1405FFDCC
 * Callers:
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x14050FD50 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140435440 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v2; // bl
  __int64 v3; // rsi
  __int64 v4; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  CmpLockRegistry();
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v2 = (*(_BYTE *)(v3 + 5360) & 0x10) != 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(v4 + 58) )
    v2 = 0;
  CmpUnlockKcb((char *)v4);
  CmpUnlockRegistry();
  return v2;
}
