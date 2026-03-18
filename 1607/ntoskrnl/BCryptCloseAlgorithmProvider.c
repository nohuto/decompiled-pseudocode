/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x14013C1B4
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1401CBA9C (SecureDump_Init.c)
 *     SmCrEncCleanup @ 0x1403E4534 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x1405501AC (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  unsigned __int64 ExtensionTable; // rax

  v3 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD))(ExtensionTable + 32))(hAlgorithm, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v3;
}
