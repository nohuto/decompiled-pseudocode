/*
 * XREFs of ndisDereferenceMiniportRef @ 0x1C0057758
 * Callers:
 *     ndisIMDeleteIfStackEntry @ 0x1C0059304 (ndisIMDeleteIfStackEntry.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F6940 (NdisCmCloseAddressFamilyComplete.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

bool __fastcall ndisDereferenceMiniportRef(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  ULONG_PTR v6; // rcx
  KIRQL v7; // bp
  bool v8; // di

  v2 = a1 + 4496;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v6 = *(_QWORD *)(a1 + 4952);
  v7 = v5;
  if ( v6 )
    ndisDereferenceWithTag(v6, a2);
  v8 = --*(_DWORD *)(v2 + 8) == 0;
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qD(0xEu, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, *(_DWORD *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  return v8;
}
