/*
 * XREFs of _GetWinStationInfo @ 0x1C02032A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(unsigned __int64 a1)
{
  _BYTE *v2; // rdx

  if ( (((((unsigned __int128)-(__int128)(unsigned __int64)PsGetCurrentProcessWow64Process(a1) >> 64) & 0xFFFFFFFD) + 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = (_BYTE *)a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = (_BYTE *)W32UserProbeAddress;
  *v2 = *v2;
  v2[39] = v2[39];
  *(_OWORD *)a1 = gWinStationInfo;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)&gWinStationInfo + 1);
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&gWinStationInfo + 4);
  return 1LL;
}
