/*
 * XREFs of LdrpAccessResourceData @ 0x1404A1380
 * Callers:
 *     RtlFindMessage @ 0x1404A12D4 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1405341C0 (LdrAccessResource.c)
 *     RtlLoadString @ 0x140647DA0 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD36C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetImageSize @ 0x1400DD694 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404A1430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  PVOID v3; // rdi
  unsigned __int64 v4; // rsi
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  v10[0] = 0LL;
  v9 = 0LL;
  v3 = (PVOID)BaseOfImage;
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( PnPBootDriversInitialized != 1 )
    return LdrpAccessResourceDataNoMultipleLanguage(v3);
  v4 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &v11);
  if ( !v5 )
    return 3221225609LL;
  if ( a2 < (unsigned __int64)v5 )
  {
LABEL_6:
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx((__int64)v3, v6, a2, v10);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v3 = (PVOID)AlternateResourceModuleHandle;
    return LdrpAccessResourceDataNoMultipleLanguage(v3);
  }
  result = LdrpGetImageSize((__int64)v3, &v9);
  if ( (_DWORD)result != -1073741701 )
  {
    if ( !v9 || a2 >= v4 && a2 < v4 + v9 )
      return LdrpAccessResourceDataNoMultipleLanguage(v3);
    goto LABEL_6;
  }
  return result;
}
