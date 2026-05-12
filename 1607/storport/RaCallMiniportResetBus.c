/*
 * XREFs of RaCallMiniportResetBus @ 0x1C0026474
 * Callers:
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportResetBus(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // al

  if ( (qword_1C004F2A0 & 0x400) != 0 )
    DbgLogRequest(*(_QWORD *)a1, 11, *(_QWORD *)a1, *(unsigned int *)(*(_QWORD *)a1 + 56LL), a2, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 232);
  v5 = *(_QWORD *)(a1 + 240);
  *(_BYTE *)(a1 + 248) |= 2u;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v4 + 40))(v5 + 16, a2);
  *(_BYTE *)(a1 + 248) &= ~2u;
  return v6 == 0 ? 0xC0000001 : 0;
}
