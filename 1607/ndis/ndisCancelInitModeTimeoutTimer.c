/*
 * XREFs of ndisCancelInitModeTimeoutTimer @ 0x1C00AD438
 * Callers:
 *     ndisSetSystemPower @ 0x1C009C3F4 (ndisSetSystemPower.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AD3D0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     NdisCancelTimer @ 0x1C001BF60 (NdisCancelTimer.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(__int64 a1, char a2)
{
  BOOLEAN TimerCancelled; // [rsp+40h] [rbp+8h] BYREF

  NdisCancelTimer((PNDIS_TIMER)(a1 + 2816), &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent((PRKEVENT)(a1 + 3024), 0, 0);
    ndisDereferenceMiniport(a1);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 3024), Executive, 0, 0, 0LL);
  }
}
