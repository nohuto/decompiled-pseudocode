/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18000BE18
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007F590 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x18000B078 (-Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18000CE44 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18000D408 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4,
        int a5)
{
  int v8; // ebx

  v8 = CAudioEndpointId::Initialize(this, a3);
  if ( v8 < 0
    || (v8 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)this + 8), a2, a4, a5), v8 < 0)
    || (v8 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)this + 56), a2, a5), v8 < 0)
    || (v8 = CAudioSessionInstanceId::CalculateStaticId(this), v8 < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        24LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v8);
    }
  }
  return (unsigned int)v8;
}
