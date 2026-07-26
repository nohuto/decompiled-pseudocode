/*
 * XREFs of ndisDeletePatternEntry @ 0x1C000E4A8
 * Callers:
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C000DE90 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C00444AC (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C00444F4 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0044DF0 (ndisOidPostPMRemoveWOLPattern.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisDeletePatternEntry(_DWORD *a1, int a2)
{
  char result; // al
  _QWORD *v3; // r8

  result = 0;
  while ( 1 )
  {
    v3 = a1;
    a1 = *(_DWORD **)a1;
    if ( !a1 )
      break;
    if ( a1[10] == a2 )
    {
      *v3 = *(_QWORD *)a1;
      ExFreePoolWithTag(a1, 0);
      return 1;
    }
  }
  return result;
}
