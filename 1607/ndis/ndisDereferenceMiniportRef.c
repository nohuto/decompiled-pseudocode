/*
 * XREFs of ndisDereferenceMiniportRef @ 0x1C005BC24
 * Callers:
 *     ndisIMDeleteIfStackEntry @ 0x1C005D7F8 (ndisIMDeleteIfStackEntry.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F6940 (NdisCmCloseAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000CE60 (NdisDereferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

bool __fastcall ndisDereferenceMiniportRef(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  ULONG_PTR v6; // rcx
  KIRQL v7; // bp
  bool v8; // zf
  bool v9; // di

  v2 = a1 + 4496;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v6 = *(_QWORD *)(a1 + 4952);
  v7 = v5;
  if ( v6 )
    NdisDereferenceWithTag(v6, a2);
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  v9 = v8;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(0xEu, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, *(_DWORD *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  return v9;
}
