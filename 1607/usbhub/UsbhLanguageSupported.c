/*
 * XREFs of UsbhLanguageSupported @ 0x1C0028688
 * Callers:
 *     UsbhGetProductIdString @ 0x1C00283F4 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhLanguageSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  _DWORD *v5; // rax
  _WORD *v6; // rcx

  v4 = a3;
  v5 = PdoExt(a2, a2, a3, a4);
  v6 = (_WORD *)*((_QWORD *)v5 + 272);
  if ( v6 )
  {
    if ( v5[543] )
    {
      while ( *v6 )
      {
        if ( *v6 == v4 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              20,
              (__int64)&WPP_2d2b0fda08bf32e864eb2e9af8737d93_Traceguids,
              v4);
          return 1;
        }
        ++v6;
      }
    }
    goto LABEL_11;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_2d2b0fda08bf32e864eb2e9af8737d93_Traceguids);
LABEL_11:
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_2d2b0fda08bf32e864eb2e9af8737d93_Traceguids,
        v4);
  }
  return 0;
}
