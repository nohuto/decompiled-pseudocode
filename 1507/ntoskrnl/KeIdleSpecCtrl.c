/*
 * XREFs of KeIdleSpecCtrl @ 0x140207FE4
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIdleSpecCtrl(__int64 a1, int a2, _DWORD *a3, unsigned __int16 a4)
{
  char v4; // dl
  unsigned __int16 v5; // ax
  __int64 result; // rax
  int v7; // [rsp+10h] [rbp+10h]

  if ( a2 )
  {
    v4 = *(_BYTE *)(a1 + 11570);
    if ( (v4 & 1) != 0 )
    {
      v5 = *(_WORD *)(a1 + 11572);
      if ( v5 )
      {
        *(_WORD *)(a1 + 11568) |= 1u;
        *a3 = v5;
      }
    }
    v7 = 0;
    if ( (v4 & 0x20) != 0 )
      HIWORD(v7) = *(_WORD *)(a1 + 28316);
    *a3 = v7;
    return a4;
  }
  else
  {
    result = 0LL;
    *(_WORD *)(a1 + 11568) &= ~1u;
  }
  return result;
}
