/*
 * XREFs of IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C0053008
 * Callers:
 *     IntelPptFilter_FilterCommand @ 0x1C00530C0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C0053244 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall IntelPptFilter_CheckAndIncreaseEndpointCount(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // edi
  char result; // al
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 48);
  v4 = v2 + a2;
  if ( (unsigned int)(v2 + a2) > 0x40 )
    return 0;
  v7 = v2 + a2;
  v6 = *(_DWORD *)(a1 + 48);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    0xFu,
    0xDu,
    (__int64)&WPP_e2ff4fa885b404088466d06429dba92e_Traceguids,
    v6,
    v7);
  result = 1;
  *(_DWORD *)(a1 + 48) = v4;
  return result;
}
