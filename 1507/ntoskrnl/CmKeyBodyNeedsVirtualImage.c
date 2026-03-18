/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x140657510
 * Callers:
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  v2 = 0;
  CmpLockRegistry();
  CmpLockKcbShared(*(_QWORD *)(a1 + 8), v3, v4, v5);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v6 + 4) & 0x20000) == 0 )
    v2 = (*(_BYTE *)(*(_QWORD *)(v6 + 32) + 5360LL) & 0x10) != 0;
  CmpUnlockKcb((char *)v6);
  CmpUnlockRegistry();
  return v2;
}
