/*
 * XREFs of BCryptGenRandom @ 0x140219450
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x1402222E4 (SmCrGenRandom.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, PUCHAR, _QWORD, __int64))(ExtensionTable + 160))(
           0LL,
           pbBuffer,
           cbBuffer,
           2LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v6;
}
