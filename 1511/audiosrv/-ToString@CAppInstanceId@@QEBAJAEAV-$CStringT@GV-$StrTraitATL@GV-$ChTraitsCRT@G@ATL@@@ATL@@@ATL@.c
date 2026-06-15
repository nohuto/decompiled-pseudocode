/*
 * XREFs of ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800124F0
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007EF00 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180018F50 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAppInstanceId::ToString(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  ATL::CAtlException *v4; // rbx
  ATL::CAtlException *v5; // rbx
  ATL::CAtlException *v6; // [rsp+28h] [rbp-20h] BYREF
  ATL::CAtlException *v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+8h]

  v2 = 0;
  if ( a1[2] )
  {
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        a2,
        L"%d|#",
        a1[1]);
    }
    catch ( ATL::CAtlException *v7 )
    {
      v5 = v7;
      if ( *(_DWORD *)v7 == -1073741571 )
        _resetstkoflw();
      v8 = *(_DWORD *)v5;
LABEL_4:
      v2 = v8;
      if ( v8 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          21LL,
          &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
          (unsigned int)v8);
      }
    }
  }
  else
  {
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        a2,
        L"%d|%d",
        a1[1],
        *a1,
        -2LL);
    }
    catch ( ATL::CAtlException *v6 )
    {
      v4 = v6;
      if ( *(_DWORD *)v6 == -1073741571 )
        _resetstkoflw();
      v8 = *(_DWORD *)v4;
      goto LABEL_4;
    }
  }
  return v2;
}
