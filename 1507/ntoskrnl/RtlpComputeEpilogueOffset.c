/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x14017DD98
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x140268988 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     sub_1402862F4 @ 0x1402862F4 (sub_1402862F4.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // r9d
  __int64 v6; // rcx
  _QWORD *v7; // r9

  v3 = a2;
  v5 = 0;
  do
  {
    *a2 ^= a3;
    ++v5;
    ++a2;
  }
  while ( (unsigned __int64)v5 < 0x19 );
  *(_DWORD *)v3 ^= a3;
  v6 = *((int *)v3 + 49);
  if ( (_DWORD)v6 )
  {
    v7 = &a2[v6 - 1];
    do
    {
      *v7-- ^= a3;
      a3 = __ROR8__(a3, v6);
      LODWORD(v6) = v6 - 1;
    }
    while ( (_DWORD)v6 );
  }
  sub_1402862F4(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[32])(v3 + 160, 1LL);
}
