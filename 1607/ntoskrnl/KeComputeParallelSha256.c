/*
 * XREFs of KeComputeParallelSha256 @ 0x1401D24A8
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptSha256Init @ 0x1400B3D68 (SymCryptSha256Init.c)
 *     SymCryptParallelSha256Process @ 0x140237160 (SymCryptParallelSha256Process.c)
 */

__int64 __fastcall KeComputeParallelSha256(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v2 = 0LL;
  v3 = (a1 + 399) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( a2 )
  {
    v6 = (a1 + 399) & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = a2;
    do
    {
      SymCryptSha256Init(v6);
      v6 += 128LL;
      --v7;
    }
    while ( v7 );
  }
  if ( a2 )
  {
    v8 = a1 + 16;
    v9 = (_QWORD *)(v3 + 1040);
    do
    {
      *(v9 - 2) = v2;
      *((_DWORD *)v9 - 2) = 1;
      *v9 = *(_QWORD *)(v8 - 16);
      v9 += 10;
      *(v9 - 9) = *(_QWORD *)(v8 - 8);
      *(v9 - 7) = v2++;
      *(v9 - 5) = v8;
      v8 += 48LL;
      *((_DWORD *)v9 - 12) = 2;
      *(v9 - 4) = 32LL;
    }
    while ( v2 < a2 );
  }
  return SymCryptParallelSha256Process(v3, a2, (int)v3 + 1024, 2 * (int)a2, v3 + 1664);
}
