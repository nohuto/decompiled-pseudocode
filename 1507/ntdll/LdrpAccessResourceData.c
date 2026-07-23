/*
 * XREFs of LdrpAccessResourceData @ 0x180018AC0
 * Callers:
 *     RtlFindMessage @ 0x1800659D0 (RtlFindMessage.c)
 *     RtlLoadString @ 0x180066530 (RtlLoadString.c)
 *     LdrAccessResource @ 0x180073AB0 (LdrAccessResource.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetImageSize @ 0x180017484 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800CB764 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(__int64 BaseOfImage, ULONG *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // r14
  ULONG *v11; // rax
  __int64 v12; // rdx
  char *AlternateResourceModuleHandle; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L",.", MEMORY[0x7FFE0384]);
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == BaseOfImage
    && *((ULONG **)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    BaseOfImage = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v10 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = (ULONG *)RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &Size);
    if ( !v11 )
    {
      ImageSize = -1073741687;
      goto LABEL_10;
    }
    if ( a2 < v11 )
      goto LABEL_21;
    ImageSize = LdrpGetImageSize(BaseOfImage, &v14);
    if ( ImageSize == -1073741701 )
      goto LABEL_10;
    if ( v14 && ((unsigned __int64)a2 < v10 || (unsigned __int64)a2 >= v10 + v14) )
    {
LABEL_21:
      AlternateResourceModuleHandle = (char *)LdrpGetAlternateResourceModuleHandleEx(BaseOfImage, v12, a2, v15);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        BaseOfImage = (__int64)AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage, a2, a3, a4);
LABEL_10:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return ImageSize;
}
