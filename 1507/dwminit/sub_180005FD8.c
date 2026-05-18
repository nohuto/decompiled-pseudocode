/*
 * XREFs of sub_180005FD8 @ 0x180005FD8
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 * Callees:
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_180005F4C @ 0x180005F4C (sub_180005F4C.c)
 *     sub_18000603C @ 0x18000603C (sub_18000603C.c)
 *     sub_180006328 @ 0x180006328 (sub_180006328.c)
 */

void __fastcall sub_180005FD8(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax

  if ( !a2 )
    sub_180006328(2147500037LL);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 64);
  --*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v4 = sub_180005F4C(a1, v3);
    sub_180005E50(a1, v4);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    sub_18000603C(a1);
}
