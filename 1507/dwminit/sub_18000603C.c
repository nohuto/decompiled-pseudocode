/*
 * XREFs of sub_18000603C @ 0x18000603C
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_180005FD8 @ 0x180005FD8 (sub_180005FD8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000603C(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
