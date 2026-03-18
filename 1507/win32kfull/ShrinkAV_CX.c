/*
 * XREFs of ShrinkAV_CX @ 0x1C02539B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShrinkAV_CX(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  _BYTE *v3; // r8
  __int64 v4; // rbx
  unsigned __int16 *v5; // r10
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // edx
  int v10; // r11d

  result = *(_QWORD *)(a1 + 304);
  v2 = *(int *)(a1 + 368);
  v3 = *(_BYTE **)(a1 + 352);
  v4 = *(_DWORD *)a1 & 0x2000;
  v5 = *(unsigned __int16 **)(result + 216);
  v6 = *(_QWORD *)(result + 224);
  v7 = *(_BYTE **)(a1 + 360);
  v8 = *(_QWORD *)(a1 + 248);
  do
  {
    LOBYTE(v9) = -1;
    if ( (unsigned __int64)v5 < v6 )
    {
      LOBYTE(v9) = *(_BYTE *)(v8 + 3);
      if ( v4 )
        v9 = ((unsigned __int8)*v3 + (unsigned int)(unsigned __int8)v9 + 1) >> 1;
      v10 = *v5;
      v8 += 4LL;
      ++v5;
      while ( --v10 )
      {
        result = (unsigned int)((*(unsigned __int8 *)(v8 + 3) + (unsigned __int8)v9 + 1) / 2);
        v8 += 4LL;
        LOBYTE(v9) = result;
      }
    }
    *v3 = v9;
    v3 += v2;
  }
  while ( v3 != v7 );
  return result;
}
