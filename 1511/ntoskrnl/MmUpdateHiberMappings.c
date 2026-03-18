/*
 * XREFs of MmUpdateHiberMappings @ 0x14039DF40
 * Callers:
 *     PopHiberCheckResume @ 0x14039D7D4 (PopHiberCheckResume.c)
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiEnumerateKernelLeafPtes @ 0x14039DF84 (MiEnumerateKernelLeafPtes.c)
 *     MiUpdateUserMappings @ 0x14039DFB8 (MiUpdateUserMappings.c)
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
