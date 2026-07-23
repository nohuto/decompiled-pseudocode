/*
 * XREFs of MiCauseOverCommitPopup @ 0x1401ECBBC
 * Callers:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x1401EE9E8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 7336) != *(_QWORD *)(a1 + 5640) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 5652));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 5652));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 5648));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 5648));
  return v1;
}
