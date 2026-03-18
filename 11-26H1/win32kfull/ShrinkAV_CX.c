/*
 * XREFs of ShrinkAV_CX @ 0x140308E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShrinkAV_CX(__int64 a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  int v3; // ebx
  _BYTE *v4; // rdi
  unsigned __int16 *v5; // r10
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rbp
  unsigned int v9; // edx
  int v10; // r11d
  int i; // r11d
  int v12; // ecx

  result = *(_QWORD *)(a1 + 304);
  v2 = *(_BYTE **)(a1 + 352);
  v3 = *(_DWORD *)a1 & 0x2000;
  v4 = *(_BYTE **)(a1 + 360);
  v5 = *(unsigned __int16 **)(result + 216);
  v6 = *(_QWORD *)(result + 224);
  v7 = *(_QWORD *)(a1 + 248);
  v8 = *(int *)(a1 + 368);
  do
  {
    LOBYTE(v9) = -1;
    if ( (unsigned __int64)v5 < v6 )
    {
      v9 = *(unsigned __int8 *)(v7 + 3);
      if ( v3 )
        v9 = ((unsigned __int8)*v2 + v9 + 1) >> 1;
      v10 = *v5;
      v7 += 4LL;
      ++v5;
      for ( i = v10 - 1; i; --i )
      {
        v12 = *(unsigned __int8 *)(v7 + 3);
        v7 += 4LL;
        v9 = (v12 + (unsigned int)(unsigned __int8)v9 + 1) >> 1;
      }
    }
    *v2 = v9;
    v2 += v8;
  }
  while ( v2 != v4 );
  return result;
}
