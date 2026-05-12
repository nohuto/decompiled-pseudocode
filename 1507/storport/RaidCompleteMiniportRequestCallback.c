/*
 * XREFs of RaidCompleteMiniportRequestCallback @ 0x1C002FFA0
 * Callers:
 *     StorPurgeEventQueue @ 0x1C0026578 (StorPurgeEventQueue.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     DbgGetAddressLongFromXrb @ 0x1C0020964 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0021D20 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidCompleteMiniportRequestCallback(
        __int64 a1,
        char a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, __int64))
{
  __int64 result; // rax
  unsigned int AddressLongFromXrb; // eax
  __int64 v10; // r8

  result = *(_BYTE *)(a3 - 32) & 0x1C;
  if ( (_BYTE)result == 12 )
  {
    if ( (qword_1C0044010 & 0x40) != 0 )
    {
      AddressLongFromXrb = DbgGetAddressLongFromXrb(a3 - 48);
      DbgLogRequest(
        *(_QWORD *)(a3 + 160),
        13,
        *(_QWORD *)(a3 + 104),
        AddressLongFromXrb,
        *(_QWORD *)(a3 + 112),
        v10,
        0LL);
    }
    if ( (*(_BYTE *)(a3 - 31) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(*(_QWORD *)(a3 + 160), *(unsigned int *)(a3 + 684));
      *(_BYTE *)(a3 - 31) &= ~1u;
    }
    a4(a1, a3);
    *(_BYTE *)(*(_QWORD *)(a3 + 112) + 3LL) = a2;
    return (*(__int64 (__fastcall **)(__int64))(a3 + 600))(a3 - 48);
  }
  return result;
}
