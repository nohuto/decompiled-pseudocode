/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1405FFE80
 * Callers:
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
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
