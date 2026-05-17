/*
 * XREFs of LdrpAccessResourceData @ 0x180030164
 * Callers:
 *     RtlFindMessage @ 0x18002C7A0 (RtlFindMessage.c)
 *     RtlLoadString @ 0x18002DC10 (RtlLoadString.c)
 *     LdrAccessResource @ 0x18002DE40 (LdrAccessResource.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003122C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x180031464 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800DC374 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+28h] [rbp-20h] BYREF
  char v16; // [rsp+50h] [rbp+8h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  v6 = a2;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L",.", MEMORY[0x7FFE0384]);
  if ( !a1 || !v6 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == v6 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    LOBYTE(a2) = 1;
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = RtlImageDirectoryEntryToData(a1, a2, 2LL, &v16);
    if ( !v11 )
    {
      ImageSize = -1073741687;
      goto LABEL_10;
    }
    if ( v6 < v11 )
      goto LABEL_21;
    ImageSize = LdrpGetImageSize(a1, &v14);
    if ( ImageSize == -1073741701 )
      goto LABEL_10;
    if ( v14 && (v6 < v10 || v6 >= v10 + v14) )
    {
LABEL_21:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v12, v6, v15);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        a1 = AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, v6, a3, a4);
LABEL_10:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return ImageSize;
}
