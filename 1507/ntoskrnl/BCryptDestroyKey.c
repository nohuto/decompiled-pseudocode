/*
 * XREFs of BCryptDestroyKey @ 0x14024F028
 * Callers:
 *     SmCrEncCleanup @ 0x1404FA2D0 (SmCrEncCleanup.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptDestroyKey(BCRYPT_KEY_HANDLE hKey)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax
  struct _EX_RUNDOWN_REF *v4; // rcx
  unsigned __int64 v5; // rtt

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE))(ExtensionTable + 64))(hKey);
    v4 = (struct _EX_RUNDOWN_REF *)(SepBCryptExtensionHost + 64);
    _m_prefetchw((const void *)(SepBCryptExtensionHost + 64));
    v5 = v4->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v5 - 2, v5) )
      ExfReleaseRundownProtection(v4);
  }
  return v2;
}
