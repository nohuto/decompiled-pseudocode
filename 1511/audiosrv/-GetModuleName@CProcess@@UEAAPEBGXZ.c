/*
 * XREFs of ?GetModuleName@CProcess@@UEAAPEBGXZ @ 0x180028C40
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x180011EBC (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CProcess::GetModuleName(CProcess *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 20);
}
