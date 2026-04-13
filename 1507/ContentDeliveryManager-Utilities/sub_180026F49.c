/*
 * XREFs of sub_180026F49 @ 0x180026F49
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001393C @ 0x18001393C (sub_18001393C.c)
 */

void __fastcall sub_180026F49(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    sub_18001393C(*(_QWORD *)(a2 + 48));
  }
}
