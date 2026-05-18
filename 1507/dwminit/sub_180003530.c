/*
 * XREFs of sub_180003530 @ 0x180003530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 */

void __fastcall sub_180003530(__int64 a1, char a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rax

  v4 = *(_DWORD **)(a1 + 8);
  if ( v4 )
    sub_180001310(v4);
  if ( a2 )
  {
    v5 = *(_DWORD **)(a1 + 8);
    if ( v5 )
    {
      v5[2] = 0;
      v5[3] = 0;
      v5[4] = 0;
      v5[5] = 0;
    }
    *(_BYTE *)(a1 + 16) = 0;
  }
}
