/*
 * XREFs of BCryptGetProperty @ 0x140550520
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 *     RtlGenerateClass5Guid @ 0x1405501AC (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x140699B6C (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B6E88 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // r10

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, __int64, ULONG *, _DWORD))(ExtensionTable + 168))(
           hObject,
           pszProperty,
           pbOutput,
           4LL,
           pcbResult,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
