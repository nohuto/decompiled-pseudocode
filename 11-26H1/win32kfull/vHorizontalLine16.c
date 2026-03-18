/*
 * XREFs of vHorizontalLine16 @ 0x140340F00
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine16(__int64 a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r8d
  _WORD *v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rbx
  void *v8; // rsi

  v4 = a3 - a2;
  if ( v4 )
  {
    v5 = (_WORD *)(a1 + 2LL * a2);
    if ( (a2 & 1) != 0 )
    {
      *v5++ = a4;
      --v4;
    }
    v6 = v4 >> 1;
    if ( !(v4 >> 1) )
      goto LABEL_10;
    v7 = (unsigned int)v6;
    v8 = v5;
    if ( ((unsigned __int8)v5 & 4) != 0 )
    {
      *(_DWORD *)v5 = a4;
      v7 = v6 - 1;
      if ( v6 == 1 )
      {
LABEL_10:
        if ( (v4 & 1) != 0 )
          v5[2 * v6] = a4;
        return;
      }
      v8 = v5 + 2;
    }
    memset64(v8, a4 | ((unsigned __int64)a4 << 32), v7 >> 1);
    if ( (v7 & 1) != 0 )
      *((_DWORD *)v8 + v7 - 1) = a4;
    goto LABEL_10;
  }
}
