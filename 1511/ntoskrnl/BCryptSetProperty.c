/*
 * XREFs of BCryptSetProperty @ 0x14064D5C4
 * Callers:
 *     SmCrEncStart @ 0x14065BF44 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptSetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v7; // ebx
  unsigned __int64 ExtensionTable; // rax

  v7 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v7 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, const wchar_t *, PUCHAR, __int64, _DWORD))(ExtensionTable + 232))(
           hObject,
           L"ChainingMode",
           pbInput,
           32LL,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v7;
}
