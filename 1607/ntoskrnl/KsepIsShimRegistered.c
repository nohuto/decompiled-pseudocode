/*
 * XREFs of KsepIsShimRegistered @ 0x140570B4C
 * Callers:
 *     KseRegisterShimEx @ 0x14057097C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140652DAC (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14065354C (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepIsShimRegistered(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d
  _QWORD *v6; // r10
  _QWORD *v7; // r9

  v4 = 0;
  if ( !a2 || !a1 )
    return 0LL;
  v6 = *(_QWORD **)(a1 + 16);
  while ( v6 != (_QWORD *)(a1 + 16) )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    if ( (*((_DWORD *)v7 + 7) & 4) == 0 && **(_QWORD **)(v7[2] + 8LL) == *a2 )
    {
      if ( a4 )
        *a4 = v7;
      return 1;
    }
  }
  return v4;
}
