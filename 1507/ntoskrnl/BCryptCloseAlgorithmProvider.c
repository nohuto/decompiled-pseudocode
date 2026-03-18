/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x14015E040
 * Callers:
 *     SmCrEncCleanup @ 0x1404FA2D0 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x14058F544 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  unsigned __int64 ExtensionTable; // rax
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt

  v3 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD))(ExtensionTable + 32))(hAlgorithm, 0LL);
    v5 = (struct _EX_RUNDOWN_REF *)(SepBCryptExtensionHost + 64);
    _m_prefetchw((const void *)(SepBCryptExtensionHost + 64));
    v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 - 2, v6) )
      ExfReleaseRundownProtection(v5);
  }
  return v3;
}
