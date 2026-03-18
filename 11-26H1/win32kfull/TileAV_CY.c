/*
 * XREFs of TileAV_CY @ 0x1403091E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TileAV_CY(__int64 a1)
{
  unsigned __int64 v1; // r10
  _BYTE *v2; // r9
  _BYTE *v3; // r11
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 248);
  v2 = *(_BYTE **)(a1 + 352);
  v3 = *(_BYTE **)(a1 + 360);
  v4 = v1 + 4LL * *(int *)(a1 + 56);
  v5 = v1 + 4LL * *(int *)(*(_QWORD *)(a1 + 304) + 24LL);
  v6 = *(int *)(a1 + 368);
  do
  {
    *v2 = *(_BYTE *)(v5 + 3);
    v7 = v5 + 4;
    v2 += v6;
    v5 = v1;
    if ( v7 < v4 )
      v5 = v7;
  }
  while ( v2 != v3 );
  result = (unsigned int)--*(_DWORD *)(a1 + 256);
  if ( (int)result <= 0 )
  {
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 32);
    result = *(unsigned int *)(a1 + 40);
    *(_DWORD *)(a1 + 256) = result;
  }
  return result;
}
