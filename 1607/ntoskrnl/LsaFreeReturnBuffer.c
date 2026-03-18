/*
 * XREFs of LsaFreeReturnBuffer @ 0x1404F1A6C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B6E88 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall LsaFreeReturnBuffer(PVOID Buffer)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(PVOID))(ExtensionTable + 16))(Buffer);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
