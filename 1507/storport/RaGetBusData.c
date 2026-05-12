/*
 * XREFs of RaGetBusData @ 0x1C0025DBC
 * Callers:
 *     RaidAdapterHack @ 0x1C00214D8 (RaidAdapterHack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(a1 + 64))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3,
           0LL,
           a5);
}
