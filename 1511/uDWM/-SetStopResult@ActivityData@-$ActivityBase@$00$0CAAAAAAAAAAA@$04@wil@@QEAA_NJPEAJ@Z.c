/*
 * XREFs of ?SetStopResult@ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA_NJPEAJ@Z @ 0x180077D00
 * Callers:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180076188 (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180077E8C (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::ActivityBase<1,35184372088832,5>::ActivityData::SetStopResult(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // r10d

  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(a1 + 84) >= 0 )
    *(_DWORD *)(a1 + 84) = a2;
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 80) = v3 - 1;
  return v3 == 1;
}
