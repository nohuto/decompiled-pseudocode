/*
 * XREFs of GetSrbScsiData @ 0x1C0020990
 * Callers:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001310 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaidUnitClaimIrp @ 0x1C0003EF0 (RaidUnitClaimIrp.c)
 *     RaidLogGetParm4 @ 0x1C0004810 (RaidLogGetParm4.c)
 *     RaidLogMiniportCompletion @ 0x1C0004DE0 (RaidLogMiniportCompletion.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000C854 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000EE60 (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 *     StorPortGetPhysicalAddress @ 0x1C0010DF0 (StorPortGetPhysicalAddress.c)
 *     RaidLogRequestComplete @ 0x1C0031F60 (RaidLogRequestComplete.c)
 *     StorEtwIORequestDispatch @ 0x1C00350B4 (StorEtwIORequestDispatch.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C00352E0 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0035600 (StorEtwLogoRequestServiceTimeEventData.c)
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
