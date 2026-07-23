/*
 * XREFs of BCryptSetProperty @ 0x14068CDD4
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x140699C50 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B4CB0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptSetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, _QWORD, _DWORD))(ExtensionTable + 232))(
           hObject,
           pszProperty,
           pbInput,
           cbInput,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
