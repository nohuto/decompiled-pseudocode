/*
 * XREFs of BCryptImportKeyPair @ 0x14068CD58
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB45C (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B4CB0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptImportKeyPair(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_KEY_HANDLE hImportKey,
        LPCWSTR pszBlobType,
        BCRYPT_KEY_HANDLE *phKey,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // r10

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD, const wchar_t *, BCRYPT_KEY_HANDLE *, PUCHAR, ULONG, _DWORD))(ExtensionTable + 192))(
           hAlgorithm,
           0LL,
           L"RSAPUBLICBLOB",
           phKey,
           pbInput,
           cbInput,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
