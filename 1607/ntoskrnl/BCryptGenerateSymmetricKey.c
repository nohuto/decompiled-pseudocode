/*
 * XREFs of BCryptGenerateSymmetricKey @ 0x14068CBE0
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x140699B6C (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B6E88 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptGenerateSymmetricKey(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_KEY_HANDLE *phKey,
        PUCHAR pbKeyObject,
        ULONG cbKeyObject,
        PUCHAR pbSecret,
        ULONG cbSecret,
        ULONG dwFlags)
{
  NTSTATUS v11; // ebx
  unsigned __int64 ExtensionTable; // r10

  v11 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v11 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, BCRYPT_KEY_HANDLE *, PUCHAR, _QWORD, PUCHAR, ULONG, _DWORD))(ExtensionTable + 152))(
            hAlgorithm,
            phKey,
            pbKeyObject,
            cbKeyObject,
            pbSecret,
            cbSecret,
            0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v11;
}
