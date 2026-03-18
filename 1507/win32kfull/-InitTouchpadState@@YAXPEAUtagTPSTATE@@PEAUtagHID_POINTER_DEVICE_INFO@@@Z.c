/*
 * XREFs of ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1904
 * Callers:
 *     ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F2E0 (-FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C02309FC (HoldRimCompleteFrame.c)
 * Callees:
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F2258 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall InitTouchpadState(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  *((_DWORD *)a1 + 267) = *((_DWORD *)a2 + 176);
  TPAAPSetCurtainState(a1, 1);
  UpdatePTPRightClickZone(a1, a2, 1);
}
