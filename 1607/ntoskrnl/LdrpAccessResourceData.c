/*
 * XREFs of LdrpAccessResourceData @ 0x1404FFA10
 * Callers:
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x140564BF4 (LdrAccessResource.c)
 *     RtlLoadString @ 0x1406877B0 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     LdrpGetImageSize @ 0x1400F8024 (LdrpGetImageSize.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F8308 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404FFAE4 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  PVOID v3; // rdi
  unsigned __int64 v4; // rsi
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  v10[0] = 0LL;
  v9 = 0LL;
  v3 = (PVOID)BaseOfImage;
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( PnPBootDriversInitialized == 1 )
  {
    v4 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &v11);
    if ( !v5 )
      return 3221225609LL;
    if ( a2 < (unsigned __int64)v5 )
      goto LABEL_10;
    result = LdrpGetImageSize((__int64)v3, &v9);
    if ( (_DWORD)result == -1073741701 )
      return result;
    if ( v9 && (a2 < v4 || a2 >= v4 + v9) )
    {
LABEL_10:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx((__int64)v3, v6, a2, v10);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v3 = (PVOID)AlternateResourceModuleHandle;
    }
  }
  return LdrpAccessResourceDataNoMultipleLanguage(v3);
}
