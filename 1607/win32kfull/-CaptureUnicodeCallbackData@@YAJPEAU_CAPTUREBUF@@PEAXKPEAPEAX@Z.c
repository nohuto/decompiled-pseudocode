/*
 * XREFs of ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0091150
 * Callers:
 *     SfnINSTRINGNULL @ 0x1C006FAA0 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C006FE90 (SfnINLPCREATESTRUCT.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C010FDF0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C0146DF0 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C014D360 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C009129C (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureUnicodeCallbackData(
        struct _CAPTUREBUF *a1,
        CHAR *MultiByteString,
        ULONG MaxBytesInUnicodeString,
        void **a4)
{
  __int64 v5; // rdi
  WCHAR *v7; // r14
  ULONG v9; // [rsp+58h] [rbp+10h] BYREF

  v5 = MaxBytesInUnicodeString;
  if ( !MultiByteString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( MaxBytesInUnicodeString <= *((_DWORD *)a1 + 1) )
  {
    v7 = (WCHAR *)*((_QWORD *)a1 + 2);
    if ( RtlMultiByteToUnicodeN(v7, MaxBytesInUnicodeString, &v9, MultiByteString, MaxBytesInUnicodeString >> 1) < 0 )
      return 3221225473LL;
    *((_QWORD *)a1 + 2) = (char *)v7 + ((v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_DWORD *)a1 + 1) -= v5;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v7);
    return 0LL;
  }
  return 2147483653LL;
}
