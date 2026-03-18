/*
 * XREFs of ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1A54
 * Callers:
 *     ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F72C (-FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C0230E2C (HoldRimCompleteFrame.c)
 * Callees:
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F25A4 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F2D84 (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 */

void __fastcall InitTouchpadState(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  *((_DWORD *)a1 + 327) = *((_DWORD *)a2 + 180);
  *((_DWORD *)a1 + 386) = *((_DWORD *)a1 + 386) & 0x7FFFFFFF | (*((_DWORD *)a2 + 63) << 31);
  TPAAPSetCurtainState(a1, 1);
  UpdatePTPRightClickZone(a1, a2, 1);
  *((_DWORD *)a1 + 386) |= 0x40000000u;
  *((_DWORD *)a1 + 381) = dword_1C0321F84;
  *((_DWORD *)a1 + 383) = *((_DWORD *)a2 + 54);
  *((_DWORD *)a1 + 380) = dword_1C0321F88;
  *((_DWORD *)a1 + 382) = *((_DWORD *)a2 + 53) - dword_1C0321F8C;
}
