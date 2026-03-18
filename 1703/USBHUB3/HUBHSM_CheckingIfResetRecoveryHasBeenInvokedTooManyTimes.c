/*
 * XREFs of HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C00073B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 2041;
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = 1LL;
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v1 + 64)) <= 600000000 )
  {
    if ( ++*(_WORD *)(v1 + 54) >= 0xAu )
    {
      v5 = *(_DWORD *)(v1 + 2560);
      v2 = 2057;
      *(_DWORD *)(v1 + 2564) = 1073872899;
      if ( (v5 & 1) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierTooManyResets", v1 + 1232);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400000) != 0 )
        Template_p(v4, &USBHUB3_ETW_EVENT_HUB_TOO_MANY_RESETS, (const GUID *)(v1 + 2380), *(_QWORD *)(v1 + 240));
    }
  }
  else
  {
    *(_WORD *)(v1 + 54) = 1;
    *(_QWORD *)(v1 + 64) = v3;
  }
  return v2;
}
