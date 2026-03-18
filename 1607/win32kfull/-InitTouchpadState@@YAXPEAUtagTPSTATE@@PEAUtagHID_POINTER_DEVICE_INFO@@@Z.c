/*
 * XREFs of ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7F18
 * Callers:
 *     HoldRimCompleteFrame @ 0x1C01C1F74 (HoldRimCompleteFrame.c)
 * Callees:
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E8868 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E9284 (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 */

void __fastcall InitTouchpadState(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  *((_DWORD *)a1 + 411) = *((_DWORD *)a2 + 172);
  *((_DWORD *)a1 + 480) ^= (*((_DWORD *)a1 + 480) ^ (*((_DWORD *)a2 + 63) << 29)) & 0x20000000;
  TPAAPSetCurtainState(a1, 1);
  UpdatePTPRightClickZone(a1, a2, 1);
  *((_DWORD *)a1 + 480) |= 0x10000000u;
  *((_DWORD *)a1 + 475) = dword_1C0328144;
  *((_DWORD *)a1 + 477) = *((_DWORD *)a2 + 54);
  *((_DWORD *)a1 + 474) = dword_1C0328148;
  *((_DWORD *)a1 + 476) = *((_DWORD *)a2 + 53) - dword_1C032814C;
}
