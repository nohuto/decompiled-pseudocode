/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800502E8
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180062150 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180005F40 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x18000DB44 (-Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18002A378 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4,
        int a5)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8

  v8 = CAudioEndpointId::Initialize(this, a3);
  if ( v8 < 0
    || (v8 = CAppAudioSessionId::Initialize((GUID *)((char *)this + 8), a2, a4, a5), v8 < 0)
    || (v8 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)this + 56), a2, a5), v8 < 0)
    || (v8 = CAudioSessionInstanceId::CalculateStaticId(this, v9, v10), v8 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 898, v8);
  }
  return (unsigned int)v8;
}
