/*
 * XREFs of BCryptFinishHash @ 0x14058F7D8
 * Callers:
 *     RtlGenerateClass5Guid @ 0x14058F544 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1401207F8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

NTSTATUS __stdcall BCryptFinishHash(BCRYPT_HASH_HANDLE hHash, PUCHAR pbOutput, ULONG cbOutput, ULONG dwFlags)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(BCRYPT_HASH_HANDLE, PUCHAR, __int64))(ExtensionTable + 120))(hHash, pbOutput, 20LL);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v6;
}
