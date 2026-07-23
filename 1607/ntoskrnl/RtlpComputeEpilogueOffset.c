/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x14015966C
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x140232268 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     sub_14025299C @ 0x14025299C (sub_14025299C.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v4; // r9d
  int v5; // r9d
  _QWORD *v6; // rax

  v3 = a2;
  v4 = 0;
  do
  {
    *a2 ^= a3;
    ++v4;
    ++a2;
  }
  while ( (unsigned __int64)v4 < 0x19 );
  *(_DWORD *)v3 ^= a3;
  v5 = *((_DWORD *)v3 + 49);
  if ( v5 )
  {
    v6 = &a2[v5 - 1];
    do
    {
      *v6 ^= a3;
      a3 = __ROR8__(a3, v5);
      --v6;
      --v5;
    }
    while ( v5 );
  }
  sub_14025299C(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[31])(v3 + 170, 1LL);
}
