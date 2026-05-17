/*
 * XREFs of LdrpAccessResourceData @ 0x18007031C
 * Callers:
 *     RtlFindMessage @ 0x18006FF90 (RtlFindMessage.c)
 *     RtlLoadString @ 0x1800700A0 (RtlLoadString.c)
 *     LdrAccessResource @ 0x180070310 (LdrAccessResource.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180031654 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x18003188C (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800D3FA4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int ImageSize; // esi
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
LABEL_18:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, a3, a4);
    goto LABEL_19;
  }
  v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v16);
  if ( v9 )
  {
    if ( (unsigned __int64)a2 >= v9 )
    {
      ImageSize = LdrpGetImageSize(a1, &v14);
      if ( ImageSize == -1073741701 )
        goto LABEL_19;
      if ( !v14 || (unsigned __int64)a2 >= v8 && (unsigned __int64)a2 < v8 + v14 )
        goto LABEL_18;
    }
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v10, a2, v15);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      a1 = AlternateResourceModuleHandle;
    goto LABEL_18;
  }
  ImageSize = -1073741687;
LABEL_19:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return ImageSize;
}
