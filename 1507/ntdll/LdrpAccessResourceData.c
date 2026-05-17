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

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L",.", MEMORY[0x7FFE0384]);
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((unsigned int **)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v16);
    if ( !v11 )
    {
      ImageSize = -1073741687;
      goto LABEL_10;
    }
    if ( (unsigned __int64)a2 < v11 )
      goto LABEL_21;
    ImageSize = LdrpGetImageSize(a1, &v14);
    if ( ImageSize == -1073741701 )
      goto LABEL_10;
    if ( v14 && ((unsigned __int64)a2 < v10 || (unsigned __int64)a2 >= v10 + v14) )
    {
LABEL_21:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v12, a2, v15);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        a1 = AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, a3, a4);
LABEL_10:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return ImageSize;
}
