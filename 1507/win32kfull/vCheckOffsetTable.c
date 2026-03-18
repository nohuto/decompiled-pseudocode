/*
 * XREFs of vCheckOffsetTable @ 0x1C0148B1C
 * Callers:
 *     bConvertFontRes @ 0x1C0147A10 (bConvertFontRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vCheckOffsetTable(__int64 a1, _QWORD *a2)
{
  int v3; // r10d
  unsigned __int16 *v4; // rcx
  bool v5; // zf
  unsigned __int16 v6; // dx
  __int64 v7; // r10
  unsigned __int16 v8; // r9
  __int64 result; // rax

  v3 = *(unsigned __int8 *)(a1 + 5) - *(unsigned __int8 *)(a1 + 4);
  v4 = (unsigned __int16 *)(*a2 + *(int *)(a1 + 16));
  v5 = *(_WORD *)a1 == 512;
  v6 = 0;
  *(_WORD *)(a1 + 2) = 0;
  v7 = (unsigned int)(v3 + 1);
  if ( (_DWORD)v7 )
  {
    do
    {
      if ( *v4 > v6 )
        v6 = *v4;
      if ( !*v4 )
        *(_WORD *)(a1 + 2) |= 1u;
      v4 += (unsigned int)!v5 + 2;
      --v7;
    }
    while ( v7 );
  }
  v8 = v6;
  result = *(unsigned __int16 *)(a1 + 10);
  *(_DWORD *)(a1 + 28) = ((*(unsigned __int16 *)(a1 + 8) * ((v6 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
  if ( (unsigned __int16)result > v6 )
    v8 = result;
  *(_WORD *)(a1 + 10) = v8;
  return result;
}
