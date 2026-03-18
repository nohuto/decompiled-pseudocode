/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x140445F6C
 * Callers:
 *     PspSystemThreadStartup @ 0x1400F7154 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspLockUnlockProcessExclusive @ 0x140096778 (PspLockUnlockProcessExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x1401C39B0 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1401CA5E0 (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x1403BE378 (SeTokenIsAdmin.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     MmSynchronizeAddressPolicy @ 0x140626748 (MmSynchronizeAddressPolicy.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  PACCESS_TOKEN v2; // rbx
  BOOL v3; // edi
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 768), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (unsigned int)KeKvaShadowingActive() )
  {
    v2 = PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( *(_QWORD *)(v1 + 720) )
      v3 = 1;
    if ( v3 )
    {
      *(_BYTE *)(v1 + 640) = 1;
      _InterlockedOr(v4, 0);
    }
    if ( *(_BYTE *)(v1 + 640) == 1 )
      *(_QWORD *)(v1 + 1936) = 0LL;
    KeSynchronizeAddressPolicy(v1);
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1724), 0xFu) && *(_BYTE *)(v1 + 640) == 1 )
      MmSynchronizeAddressPolicy(v1);
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1724), 0xFu);
  }
}
