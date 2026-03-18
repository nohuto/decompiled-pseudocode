/*
 * XREFs of PcwUnregister @ 0x140674194
 * Callers:
 *     ExpPcwHostCallback @ 0x140527CF0 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
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
