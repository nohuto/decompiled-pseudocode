/*
 * XREFs of RtlSidHashInitialize @ 0x180078410
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r8

  v3 = 0;
  if ( !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    *(_DWORD *)a3 = a2;
    a3[1] = a1;
    if ( a2 > 0x40 )
      a2 = 64;
    do
    {
      v7 = *a1;
      a1 += 2;
      v8 = *(unsigned __int8 *)(v7 + 4LL * *(unsigned __int8 *)(v7 + 1) + 4);
      v9 = 1LL << v3++;
      a3[(v8 & 0xF) + 2] |= v9;
      a3[((unsigned __int64)v8 >> 4) + 18] |= v9;
    }
    while ( v3 < a2 );
  }
  return 0LL;
}
