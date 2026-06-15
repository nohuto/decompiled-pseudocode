/*
 * XREFs of ?AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z @ 0x1800AC008
 * Callers:
 *     ?GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800745D0 (-GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf.c)
 * Callees:
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

void __fastcall AEWMILOG_PERFORMANCE(__int64 a1, void *a2, char a3)
{
  _WORD v4[2]; // [rsp+20h] [rbp-58h] BYREF
  char v5; // [rsp+24h] [rbp-54h]
  __int128 v6; // [rsp+38h] [rbp-40h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-10h]

  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v4, 0, 0x40uLL);
    v7 = 0x20000;
    v4[0] = 80;
    v8 = 0LL;
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    v6 = AEWMIGUID_PERFORMANCE;
    v5 = a3;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v4);
  }
}
