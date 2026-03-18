/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x1404EC33C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

__int64 __fastcall LsaLookupAuthenticationPackage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(ExtensionTable + 32))(a1, a2, a3);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
