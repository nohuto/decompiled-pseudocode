/*
 * XREFs of ExpStringCheck @ 0x1407B59E4
 * Callers:
 *     ExInitSystem @ 0x1407B5704 (ExInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpSingleStringCheck @ 0x1407B5CAC (ExpSingleStringCheck.c)
 */

__int64 __fastcall ExpStringCheck(
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

  v33[0] = ExpSingleStringCheck(a1);
  v33[1] = ExpSingleStringCheck(a2);
  v33[2] = ExpSingleStringCheck(a3);
  v33[3] = ExpSingleStringCheck(a4);
  v33[4] = ExpSingleStringCheck(SourceString);
  v33[5] = ExpSingleStringCheck(a6);
  v33[6] = ExpSingleStringCheck(a7);
  v33[7] = ExpSingleStringCheck(a8);
  v33[8] = ExpSingleStringCheck(a9);
  v33[9] = ExpSingleStringCheck(a10);
  v33[10] = ExpSingleStringCheck(a11);
  v33[11] = ExpSingleStringCheck(a12);
  v33[12] = ExpSingleStringCheck(a13);
  v33[13] = ExpSingleStringCheck(a14);
  v33[14] = ExpSingleStringCheck(a15);
  v33[15] = ExpSingleStringCheck(a16);
  v33[16] = ExpSingleStringCheck(a17);
  v33[17] = ExpSingleStringCheck(a18);
  v33[18] = ExpSingleStringCheck(a19);
  v33[19] = ExpSingleStringCheck(a20);
  v33[20] = ExpSingleStringCheck(a21);
  v33[21] = ExpSingleStringCheck(a22);
  v33[22] = ExpSingleStringCheck(a23);
  v33[23] = ExpSingleStringCheck(a24);
  v33[24] = ExpSingleStringCheck(a25);
  v33[25] = ExpSingleStringCheck(a26);
  v33[26] = ExpSingleStringCheck(a27);
  v33[27] = ExpSingleStringCheck(a28);
  for ( i = 0LL; i < 28; ++i )
  {
    result = *(unsigned int *)((char *)qword_1407D5DA0 + i * 4);
    if ( v33[i] != (_DWORD)result )
      LODWORD(KdDumpEnableOffset) = 8;
  }
  return result;
}
