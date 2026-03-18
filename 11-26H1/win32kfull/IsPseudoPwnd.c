/*
 * XREFs of IsPseudoPwnd @ 0x14012E280
 * Callers:
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1401BBD98 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 *     NtUserfnOUTCBOXSTRING @ 0x1401D4B90 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1401D4D50 (NtUserfnOUTLBOXSTRING.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPseudoPwnd(__int64 a1)
{
  return (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL;
}
