/*
 * XREFs of sub_140004B10 @ 0x140004B10
 * Callers:
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 * Callees:
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140004B10(__int64 a1, __m128i *a2)
{
  unsigned __int16 v3; // ax
  SIZE_T v4; // rdi
  PVOID Heap; // rax
  UNICODE_STRING v7; // [rsp+30h] [rbp-48h] BYREF
  WCHAR Source[20]; // [rsp+40h] [rbp-38h] BYREF

  v3 = _mm_cvtsi128_si32(*a2);
  v7 = (UNICODE_STRING)*a2;
  v4 = ImageFileName.Length + 40LL + v3;
  if ( v4 > 0xFFFF )
    return 3221225485LL;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags + 0x80000, v4);
  if ( !Heap )
    return 3221225495LL;
  a2->m128i_i16[0] = 0;
  a2->m128i_i16[1] = v4;
  a2->m128i_i64[1] = (__int64)Heap;
  RtlAppendUnicodeStringToString((PUNICODE_STRING)a2, &ImageFileName);
  sub_140004C0C(Source);
  RtlAppendUnicodeToString((PUNICODE_STRING)a2, Source);
  RtlAppendUnicodeStringToString((PUNICODE_STRING)a2, &v7);
  return 0LL;
}
