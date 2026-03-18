/*
 * XREFs of HUBDSM_CheckingIfAddDeviceToGlobalListRetryCountExceededLimit @ 0x1C001C0B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAddDeviceToGlobalListRetryCountExceededLimit(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  int v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4061;
  v4 = (unsigned __int8)++*(_BYTE *)(v1 + 2440);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
    3u,
    5u,
    0x12u,
    (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
    v4);
  if ( *(_BYTE *)(v1 + 2440) > 0xAu )
  {
    v2 = 4089;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x13u,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
  }
  return v2;
}
