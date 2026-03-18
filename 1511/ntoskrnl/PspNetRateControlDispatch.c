/*
 * XREFs of PspNetRateControlDispatch @ 0x140642198
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 (__fastcall **ExtensionTable)(__int64); // rax
  unsigned int v3; // ebx

  ExtensionTable = (__int64 (__fastcall **)(__int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*ExtensionTable)(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
