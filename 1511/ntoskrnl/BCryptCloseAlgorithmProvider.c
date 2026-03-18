/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x140133C04
 * Callers:
 *     SmCrEncCleanup @ 0x1404D1300 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x140521FD8 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v3;
}
