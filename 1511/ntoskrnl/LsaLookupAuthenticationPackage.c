/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x1404EC33C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

NTSTATUS __cdecl LsaLookupAuthenticationPackage(
        HANDLE LsaHandle,
        PLSA_STRING PackageName,
        PULONG AuthenticationPackage)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(HANDLE, PLSA_STRING, PULONG))(ExtensionTable + 32))(
           LsaHandle,
           PackageName,
           AuthenticationPackage);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
