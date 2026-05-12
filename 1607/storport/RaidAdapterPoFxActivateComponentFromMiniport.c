/*
 * XREFs of RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C002CE94
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxActivateComponentFromMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al

  v4 = RaidAdapterPoFxActivateComponent(a1, a2, a3);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 88LL));
  return v4 == 0 ? 0xC100000C : 0;
}
