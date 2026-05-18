/*
 * XREFs of sub_180003370 @ 0x180003370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 */

void __fastcall sub_180003370(__int64 a1, int a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = *(_DWORD **)(a1 + 8);
    if ( v4 )
      sub_180001310(v4);
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
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = a2;
}
