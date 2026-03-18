/*
 * XREFs of sub_1C00C9004 @ 0x1C00C9004
 * Callers:
 *     rimFixupCompleteFrame @ 0x1C00C9CB0 (rimFixupCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000F9CC (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     sub_1C00C90E0 @ 0x1C00C90E0 (sub_1C00C90E0.c)
 */

__int64 __fastcall sub_1C00C9004(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int16 v3; // r9
  __int64 result; // rax
  __int64 v5; // rdx
  _DWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = 51;
  if ( !*(_DWORD *)(a1 + 56) )
    v3 = 52;
  result = WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             5u,
             v3,
             (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v6 = (_DWORD *)(*(_QWORD *)(a1 + 88) + 48LL);
    do
    {
      LODWORD(v8) = *((unsigned __int16 *)v6 - 20);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        5u,
        0x35u,
        (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
        v8);
      LODWORD(v10) = v6[1];
      LODWORD(v9) = *v6;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        5u,
        0x32u,
        (__int64)&WPP_8a2a59bc22133e299c8a3827982089d1_Traceguids,
        v9,
        v10);
      result = sub_1C00C90E0((unsigned int)*(v6 - 5));
      ++v1;
      v6 += 42;
    }
    while ( v1 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
