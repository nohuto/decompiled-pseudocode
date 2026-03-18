/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1405E17EC
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rcx

  v2 = 0;
  CmpLockRegistry();
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v3 + 4) & 0x20000) == 0 )
    v2 = (*(_BYTE *)(*(_QWORD *)(v3 + 32) + 5360LL) & 0x10) != 0;
  CmpUnlockKcb((char *)v3);
  CmpUnlockRegistry();
  return v2;
}
