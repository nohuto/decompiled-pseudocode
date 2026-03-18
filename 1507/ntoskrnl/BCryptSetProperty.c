/*
 * XREFs of BCryptSetProperty @ 0x1406D0A10
 * Callers:
 *     SmCrEncStart @ 0x1406DE798 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1401207F8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
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
