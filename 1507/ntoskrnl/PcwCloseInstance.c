/*
 * XREFs of PcwCloseInstance @ 0x14053C65C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1401207F8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

void __stdcall PcwCloseInstance(PPCW_INSTANCE Instance)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_INSTANCE))(ExtensionTable + 24))(Instance);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
