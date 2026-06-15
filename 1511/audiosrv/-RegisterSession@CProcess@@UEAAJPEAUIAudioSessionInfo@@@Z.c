/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800299C0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RegisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::RegisterSession(this, (CProcess *)((char *)this - 16), a2);
  else
    return 2147942487LL;
}
