/*
 * XREFs of BCryptGetProperty @ 0x14052234C
 * Callers:
 *     RtlGenerateClass5Guid @ 0x140521FD8 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x14065BF44 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
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
