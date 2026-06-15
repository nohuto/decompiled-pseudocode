/*
 * XREFs of ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180010E80
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?BelongsToPackagedApp@CAudioSession@@UEAAHXZ @ 0x180010B50 (-BelongsToPackagedApp@CAudioSession@@UEAAHXZ.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::IsPackagedApp(CProcess *this)
{
  return *((unsigned int *)this + 101);
}
