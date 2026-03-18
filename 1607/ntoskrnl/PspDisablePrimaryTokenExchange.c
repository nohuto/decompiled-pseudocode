/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x140459688
 * Callers:
 *     PspSystemThreadStartup @ 0x140002BE4 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PspLockUnlockProcessExclusive @ 0x1400AA9B4 (PspLockUnlockProcessExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D232C (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1401D8DB4 (KeKvaShadowingActive.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x140475CE4 (SeTokenIsAdmin.c)
 *     MmSynchronizeAddressPolicy @ 0x14065BF18 (MmSynchronizeAddressPolicy.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  PACCESS_TOKEN v5; // rbx
  BOOL v6; // esi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 768), 0xFu);
    PspLockUnlockProcessExclusive(v4, a1, a3, a4);
  }
  if ( ((unsigned int)KeKvaShadowingActive() || (KeGetCurrentPrcb()->BpbFeatures & 2) != 0)
    && (*(_DWORD *)(v4 + 1740) & 0x800000) == 0 )
  {
    v5 = PsReferencePrimaryToken((PEPROCESS)v4);
    v6 = SeTokenIsAdmin(v5) != 0;
    ObfDereferenceObject(v5);
    if ( *(_QWORD *)(v4 + 720) )
      v6 = 1;
    if ( v6 )
      *(_QWORD *)(v4 + 1976) = 0LL;
    if ( (unsigned int)KeKvaShadowingActive() )
    {
      if ( v6 )
      {
        *(_BYTE *)(v4 + 703) = 1;
        _InterlockedOr(v7, 0);
      }
      KeSynchronizeAddressPolicy(v4);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1740), 0x17u) && *(_BYTE *)(v4 + 703) == 1 )
        MmSynchronizeAddressPolicy(v4);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 1740), 0x17u);
    }
  }
}
