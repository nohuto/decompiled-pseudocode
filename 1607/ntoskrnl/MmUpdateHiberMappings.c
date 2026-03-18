/*
 * XREFs of MmUpdateHiberMappings @ 0x1403C9630
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiEnumerateKernelLeafPtes @ 0x1403C9674 (MiEnumerateKernelLeafPtes.c)
 *     MiUpdateUserMappings @ 0x1403C96BC (MiUpdateUserMappings.c)
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
