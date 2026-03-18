/*
 * XREFs of MmUpdateHiberMappings @ 0x1403F02FC
 * Callers:
 *     PopHiberCheckResume @ 0x1403EFBB8 (PopHiberCheckResume.c)
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiEnumerateKernelLeafPtes @ 0x1403F0340 (MiEnumerateKernelLeafPtes.c)
 *     MiUpdateUserMappings @ 0x1403F0374 (MiUpdateUserMappings.c)
 */

void __fastcall MmUpdateHiberMappings(int a1, __int64 a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      MiEnumerateKernelLeafPtes(MiInvalidateHiberPhasePages, a2);
      KeFlushCurrentTbOnly(0);
    }
    else
    {
      MiUpdateUserMappings();
      MiEnumerateKernelLeafPtes(MiRevertHiberPhasePages, 0LL);
    }
  }
  else
  {
    MiUpdateUserMappings();
  }
}
