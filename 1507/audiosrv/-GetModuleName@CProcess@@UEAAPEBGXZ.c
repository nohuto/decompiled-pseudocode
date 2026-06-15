/*
 * XREFs of ?GetModuleName@CProcess@@UEAAPEBGXZ @ 0x180010E90
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18000CE44 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CProcess::GetModuleName(CProcess *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 20);
}
