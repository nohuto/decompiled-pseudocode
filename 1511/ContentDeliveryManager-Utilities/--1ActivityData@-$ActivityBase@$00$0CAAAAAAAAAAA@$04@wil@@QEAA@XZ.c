/*
 * XREFs of ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000D064
 * Callers:
 *     ??1?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000CF24 (--1-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180013ACC (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 * Callees:
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180018F94 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::ActivityData::~ActivityData(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 232);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free(*(void **)(a1 + 232));
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_QWORD *)(a1 + 240) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    free(*(void **)(a1 + 64));
    *(_BYTE *)(a1 + 72) = 0;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)a1 = 2;
    _TlgWriteActivityAutoStop<35184372088832,5>(v3, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
