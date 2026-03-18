/*
 * XREFs of PcwUnregister @ 0x1406F87D8
 * Callers:
 *     ExpPcwHostCallback @ 0x140594C04 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1401207F8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_REGISTRATION))(ExtensionTable + 8))(Registration);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
