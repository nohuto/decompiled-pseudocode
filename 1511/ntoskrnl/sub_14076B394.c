/*
 * XREFs of sub_14076B394 @ 0x14076B394
 * Callers:
 *     ExInitSystem @ 0x14076AC48 (ExInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sub_14076B65C @ 0x14076B65C (sub_14076B65C.c)
 */

__int64 __fastcall sub_14076B394(
        const WCHAR *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        const WCHAR *SourceString,
        const WCHAR *a6,
        const WCHAR *a7,
        const WCHAR *a8,
        const WCHAR *a9,
        const WCHAR *a10,
        const WCHAR *a11,
        const WCHAR *a12,
        const WCHAR *a13,
        const WCHAR *a14,
        const WCHAR *a15,
        const WCHAR *a16,
        const WCHAR *a17,
        const WCHAR *a18,
        const WCHAR *a19,
        const WCHAR *a20,
        const WCHAR *a21,
        const WCHAR *a22,
        const WCHAR *a23,
        const WCHAR *a24,
        const WCHAR *a25,
        const WCHAR *a26,
        const WCHAR *a27,
        const WCHAR *a28)
{
  __int64 i; // rcx
  __int64 result; // rax
  _DWORD v33[28]; // [rsp+C0h] [rbp-40h]

  v33[0] = sub_14076B65C(a1);
  v33[1] = sub_14076B65C(a2);
  v33[2] = sub_14076B65C(a3);
  v33[3] = sub_14076B65C(a4);
  v33[4] = sub_14076B65C(SourceString);
  v33[5] = sub_14076B65C(a6);
  v33[6] = sub_14076B65C(a7);
  v33[7] = sub_14076B65C(a8);
  v33[8] = sub_14076B65C(a9);
  v33[9] = sub_14076B65C(a10);
  v33[10] = sub_14076B65C(a11);
  v33[11] = sub_14076B65C(a12);
  v33[12] = sub_14076B65C(a13);
  v33[13] = sub_14076B65C(a14);
  v33[14] = sub_14076B65C(a15);
  v33[15] = sub_14076B65C(a16);
  v33[16] = sub_14076B65C(a17);
  v33[17] = sub_14076B65C(a18);
  v33[18] = sub_14076B65C(a19);
  v33[19] = sub_14076B65C(a20);
  v33[20] = sub_14076B65C(a21);
  v33[21] = sub_14076B65C(a22);
  v33[22] = sub_14076B65C(a23);
  v33[23] = sub_14076B65C(a24);
  v33[24] = sub_14076B65C(a25);
  v33[25] = sub_14076B65C(a26);
  v33[26] = sub_14076B65C(a27);
  v33[27] = sub_14076B65C(a28);
  for ( i = 0LL; i < 28; ++i )
  {
    result = *(unsigned int *)((char *)qword_1407899E0 + i * 4);
    if ( v33[i] != (_DWORD)result )
      LODWORD(KdDumpEnableOffset) = 8;
  }
  return result;
}
