/*
 * XREFs of ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180028C30
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800270A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?BelongsToPackagedApp@CAudioSession@@UEAAHXZ @ 0x180028950 (-BelongsToPackagedApp@CAudioSession@@UEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::IsPackagedApp(CProcess *this)
{
  return *((unsigned int *)this + 101);
}
