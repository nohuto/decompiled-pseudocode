/*
 * XREFs of MiCauseOverCommitPopup @ 0x140220B2C
 * Callers:
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x140221DAC (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 5736) != *(_QWORD *)(a1 + 4744) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 4756));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 4756));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 4752));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4752));
  return v1;
}
