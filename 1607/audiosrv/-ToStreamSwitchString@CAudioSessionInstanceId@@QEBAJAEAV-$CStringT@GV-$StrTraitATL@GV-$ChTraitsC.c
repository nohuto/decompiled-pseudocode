/*
 * XREFs of ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180066B30
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18005C710 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000DAE4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180012720 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A1D0 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180065AB0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionInstanceId::ToStreamSwitchString(__int64 a1, wchar_t *const *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+60h] [rbp+18h] BYREF
  const wchar_t *v10; // [rsp+68h] [rbp+20h] BYREF

  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v10);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v9);
  v6 = CAppAudioSessionId::ToString(a1 + 8, &v10, v4, v5);
  if ( v6 < 0 )
    goto LABEL_5;
  v6 = CAppInstanceId::ToString((unsigned int *)(a1 + 56), (__int64)&v9);
  if ( v6 < 0 )
    goto LABEL_5;
  try
  {
    CAudioIdentifier::EscapeIdentifierString(&v10);
    CAudioIdentifier::EscapeIdentifierString(&v9);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%s|%s",
      v10,
      v9,
      -2LL);
  }
  catch ( ATL::CAtlException *v8 )
  {
    v6 = *(_DWORD *)v8;
  }
  if ( v6 < 0 )
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToStreamSwitchString", 1172, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 12));
  return (unsigned int)v6;
}
