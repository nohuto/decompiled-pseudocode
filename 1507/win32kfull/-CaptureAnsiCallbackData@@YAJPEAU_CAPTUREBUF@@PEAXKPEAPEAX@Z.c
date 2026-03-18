/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8E14
 * Callers:
 *     SfnINSTRINGNULL @ 0x1C0059F90 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C005A840 (SfnINLPCREATESTRUCT.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00E8704 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C0115880 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C011EC40 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C00E8EC4 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(
        struct _CAPTUREBUF *a1,
        PCWCH UnicodeString,
        ULONG MaxBytesInMultiByteString,
        void **a4)
{
  CHAR *v7; // rsi
  ULONG v8; // edx
  ULONG v10; // ecx
  ULONG BytesInMultiByteString; // [rsp+58h] [rbp+10h] BYREF

  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( 2 * (unsigned __int64)MaxBytesInMultiByteString <= *((unsigned int *)a1 + 1) )
  {
    v7 = (CHAR *)*((_QWORD *)a1 + 2);
    v8 = 2 * MaxBytesInMultiByteString;
    if ( (*gpsi & 2) == 0 )
      v8 = MaxBytesInMultiByteString;
    if ( RtlUnicodeToMultiByteN(v7, v8, &BytesInMultiByteString, UnicodeString, 2 * MaxBytesInMultiByteString) < 0 )
      return 3221225473LL;
    v10 = BytesInMultiByteString;
    *((_QWORD *)a1 + 2) = &v7[(BytesInMultiByteString + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v10;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v7);
    return 0LL;
  }
  return 2147483653LL;
}
