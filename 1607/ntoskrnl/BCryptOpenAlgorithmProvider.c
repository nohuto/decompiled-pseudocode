/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x1405505A0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 *     RtlGenerateClass5Guid @ 0x1405501AC (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x140699B6C (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B6E88 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx
  unsigned __int64 ExtensionTable; // rax

  v8 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v8 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE *, LPCWSTR, LPCWSTR, _QWORD))(ExtensionTable + 200))(
           phAlgorithm,
           pszAlgId,
           pszImplementation,
           dwFlags);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v8;
}
