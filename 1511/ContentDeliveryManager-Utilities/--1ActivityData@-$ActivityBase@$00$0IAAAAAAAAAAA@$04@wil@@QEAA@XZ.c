/*
 * XREFs of ??1ActivityData@?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000CFE0
 * Callers:
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000BDB8 (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000CE68 (--1-$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     ??$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180018F20 (--$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<1,140737488355328,5>::ActivityData::~ActivityData(__int64 a1)
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
    _TlgWriteActivityAutoStop<140737488355328,5>(v3, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
