/*
 * XREFs of EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00B5B20
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00F4498 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     Template_qqxx @ 0x1C00B8B98 (Template_qqxx.c)
 */

__int64 __fastcall EtwTraceTokenIndependentFlipSkipCompleteEvent(int a1, char a2, int a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_qqxx(a1, (unsigned int)&TokenIndependentFlipSkipCompleteEvent, a3, a1, a2, a3, a4);
  return result;
}
