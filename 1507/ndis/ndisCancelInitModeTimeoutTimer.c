/*
 * XREFs of ndisCancelInitModeTimeoutTimer @ 0x1C00B032C
 * Callers:
 *     ndisSetSystemPower @ 0x1C009B6DC (ndisSetSystemPower.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B02D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     NdisCancelTimer @ 0x1C001E590 (NdisCancelTimer.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(__int64 a1, char a2)
{
  BOOLEAN TimerCancelled; // [rsp+40h] [rbp+8h] BYREF

  NdisCancelTimer((PNDIS_TIMER)(a1 + 2816), &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent((PRKEVENT)(a1 + 3024), 0, 0);
    ndisDereferenceMiniport(a1, 0x15u);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 3024), Executive, 0, 0, 0LL);
  }
}
