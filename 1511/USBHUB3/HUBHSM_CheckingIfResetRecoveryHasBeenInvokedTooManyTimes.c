/*
 * XREFs of HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C0007070
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
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
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v1 + 56)) <= 600000000 )
  {
    if ( ++*(_WORD *)(v1 + 50) >= 0xAu )
    {
      v5 = *(_DWORD *)(v1 + 2536);
      v2 = 2057;
      *(_DWORD *)(v1 + 2540) = 1073872899;
      if ( (v5 & 1) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierTooManyResets", v1 + 1208);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x40000) != 0 )
        Template_p(v4, &USBHUB3_ETW_EVENT_HUB_TOO_MANY_RESETS, (const GUID *)(v1 + 2356), *(_QWORD *)(v1 + 224));
    }
  }
  else
  {
    *(_WORD *)(v1 + 50) = 1;
    *(_QWORD *)(v1 + 56) = v3;
  }
  return v2;
}
