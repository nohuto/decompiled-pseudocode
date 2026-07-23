/*
 * XREFs of PfpPrefetchRequestPatchOffsets @ 0x1403EF338
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPrefetchRequestPatchOffsets(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r11
  __int64 v3; // r10
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r9

  v1 = 0LL;
  for ( *(_QWORD *)(a1 + 32) = a1 + *(unsigned int *)(a1 + 32);
        (unsigned int)v1 < *(_DWORD *)(a1 + 8);
        v1 = (unsigned int)(v1 + 1) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v3 = 5 * v1;
    v4 = 0LL;
    *(_QWORD *)(v2 + 8 * v3 + 32) = a1 + *(unsigned int *)(v2 + 40 * v1 + 32);
    v5 = (*(_DWORD *)(v2 + 40 * v1 + 12) & 0xFFFFFFFE) == 0;
    *(_QWORD *)(v2 + 8 * v3 + 16) = a1 + *(unsigned int *)(v2 + 40 * v1 + 16);
    if ( !v5 )
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 40 * v1 + 16) + 48 * v4;
        v7 = *(unsigned int *)(v6 + 32);
        if ( (_DWORD)v7 )
          *(_QWORD *)(v6 + 32) = a1 + v7;
        if ( *(_DWORD *)(v6 + 16) )
          *(_QWORD *)(v6 + 24) = a1 + *(unsigned int *)(v6 + 24);
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(v2 + 40 * v1 + 12) >> 1 );
    }
  }
  v8 = 0LL;
  result = a1 + *(unsigned int *)(a1 + 56);
  for ( *(_QWORD *)(a1 + 56) = result; (unsigned int)v8 < *(_DWORD *)(a1 + 20); v8 = (unsigned int)(v8 + 1) )
  {
    v10 = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(v10 + 40 * v8 + 24) )
    {
      result = a1 + *(unsigned int *)(v10 + 40 * v8 + 32);
      *(_QWORD *)(v10 + 40 * v8 + 32) = result;
    }
  }
  return result;
}
