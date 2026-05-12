/*
 * XREFs of GetSrbScsiData @ 0x1C0006DD4
 * Callers:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001334 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaidUnitClaimIrp @ 0x1C0004DF0 (RaidUnitClaimIrp.c)
 *     RaidLogGetParm4 @ 0x1C0005770 (RaidLogGetParm4.c)
 *     RaidLogMiniportCompletion @ 0x1C0005D00 (RaidLogMiniportCompletion.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000EAC4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0011174 (RaidUnitHandleSpecialErrorConditions.c)
 *     StorPortGetPhysicalAddress @ 0x1C00133B0 (StorPortGetPhysicalAddress.c)
 *     RaidLogRequestComplete @ 0x1C00337C0 (RaidLogRequestComplete.c)
 *     StorEtwIORequestDispatch @ 0x1C0036E28 (StorEtwIORequestDispatch.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0037054 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0037374 (StorEtwLogoRequestServiceTimeEventData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _BYTE *a2, _DWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // rbp
  char v7; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rcx

  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 && !*(_DWORD *)(a1 + 20) )
  {
    v11 = 0LL;
    if ( !*(_DWORD *)(a1 + 56) )
      return v6;
    while ( 1 )
    {
      v12 = *(unsigned int *)(a1 + 4 * v11 + 120);
      if ( (unsigned int)v12 >= 0x80 )
      {
        v13 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v12 <= (unsigned int)v13 )
          break;
      }
LABEL_34:
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 56) )
        return v6;
    }
    v14 = (unsigned int)v12;
    v15 = *(_DWORD *)(v12 + a1) - 64;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 && v14 + 40 <= v13 )
        {
          if ( a3 )
            *a3 = *(_DWORD *)(v14 + a1 + 12);
          if ( *(_DWORD *)(v14 + a1 + 12) )
            v6 = v14 + a1 + 32;
          if ( a4 )
            *a4 = *(_BYTE *)(v14 + a1 + 8);
          if ( a5 )
            *a5 = *(_QWORD *)(v14 + a1 + 24);
          if ( a6 )
            *a6 = *(_BYTE *)(v14 + a1 + 9);
          return v6;
        }
        goto LABEL_33;
      }
      v17 = v14 + 56;
    }
    else
    {
      v17 = v14 + 40;
    }
    if ( v17 <= v13 )
    {
      v7 = 1;
      if ( a2 )
        *a2 = *(_BYTE *)(v14 + a1 + 10);
      if ( *(_BYTE *)(v14 + a1 + 10) )
        v6 = v14 + a1 + 24;
      if ( a4 )
        *a4 = *(_BYTE *)(v14 + a1 + 8);
      if ( a5 )
        *a5 = *(_QWORD *)(v14 + a1 + 16);
      if ( !a6 )
        return v6;
      *a6 = *(_BYTE *)(v14 + a1 + 9);
    }
LABEL_33:
    if ( v7 )
      return v6;
    goto LABEL_34;
  }
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  return v6;
}
