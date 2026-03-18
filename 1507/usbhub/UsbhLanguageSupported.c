/*
 * XREFs of UsbhLanguageSupported @ 0x1C0029008
 * Callers:
 *     UsbhGetProductIdString @ 0x1C0028D74 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
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
              (__int64)&WPP_b5bedc0385d045a5d3e2a0dae42ed85e_Traceguids,
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
      (__int64)&WPP_b5bedc0385d045a5d3e2a0dae42ed85e_Traceguids);
LABEL_11:
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_b5bedc0385d045a5d3e2a0dae42ed85e_Traceguids,
        v4);
  }
  return 0;
}
