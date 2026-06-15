/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x14000C850
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x1400076A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x14000C760 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x1400175EC (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComPtr@UIAudioEndpointControl@@@ATL@@QEAA@XZ @ 0x140017C30 (--1-$CComPtr@UIAudioEndpointControl@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 31) )
  {
    v6 = 0LL;
    v3 = (_QWORD *)*((_QWORD *)this + 2);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
               **(_QWORD **)(v4 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v6);
        if ( v2 < 0 )
          break;
        v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
        if ( v2 < 0 )
          break;
        ATL::CComPtrBase<IAudioProcessor>::Release(&v6);
      }
    }
    ATL::CComPtr<IAudioEndpointControl>::~CComPtr<IAudioEndpointControl>(&v6);
    if ( v2 < 0 )
    {
      CPipeInstance::Stop(this);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          66LL,
          &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
          (unsigned int)v2);
      }
    }
  }
  return (unsigned int)v2;
}
