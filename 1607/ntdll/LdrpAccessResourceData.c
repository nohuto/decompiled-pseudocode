/*
 * XREFs of LdrpAccessResourceData @ 0x180030154
 * Callers:
 *     RtlFindMessage @ 0x18002C790 (RtlFindMessage.c)
 *     RtlLoadString @ 0x18002DC00 (RtlLoadString.c)
 *     LdrAccessResource @ 0x18002DE30 (LdrAccessResource.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003121C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x180031454 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC434 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  unsigned int ImageSize; // esi
  unsigned __int64 v6; // r14
  PVOID v7; // rax
  __int64 v8; // rdx
  char *AlternateResourceModuleHandle; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L",.", MEMORY[0x7FFE0384]);
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == BaseOfImage
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    BaseOfImage = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v6 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &Size);
    if ( !v7 )
    {
      ImageSize = -1073741687;
      goto LABEL_10;
    }
    if ( a2 < (unsigned __int64)v7 )
      goto LABEL_21;
    ImageSize = LdrpGetImageSize(BaseOfImage, &v10);
    if ( ImageSize == -1073741701 )
      goto LABEL_10;
    if ( v10 && (a2 < v6 || a2 >= v6 + v10) )
    {
LABEL_21:
      AlternateResourceModuleHandle = (char *)LdrpGetAlternateResourceModuleHandleEx(BaseOfImage, v8, a2, v11);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        BaseOfImage = (unsigned __int64)AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage((PVOID)BaseOfImage);
LABEL_10:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return ImageSize;
}
