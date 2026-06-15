/*
 * XREFs of ?GetProcessId@CProcess@@UEAAKXZ @ 0x180028B80
 * Callers:
 *     ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x180012458 (-Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x18003A250 (AUDIOSESSIONMANAGER_rundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetProcessId(CProcess *this)
{
  return *((unsigned int *)this + 38);
}
