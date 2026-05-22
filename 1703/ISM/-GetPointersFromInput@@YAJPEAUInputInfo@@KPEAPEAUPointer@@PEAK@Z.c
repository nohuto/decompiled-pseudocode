/*
 * XREFs of ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006780 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z @ 0x180010078 (-InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010110 (-CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800102D4 (-DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010478 (-DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18001A4F0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x18001AB38 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x18005E99C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005EE00 (-OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall GetPointersFromInput(struct InputInfo *a1, __int64 a2, struct Pointer **a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // rax

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= *((_DWORD *)a1 + 12) )
        break;
      v6 = v5++;
      *a3++ = (struct InputInfo *)((char *)a1 + 48 * v6 + 52);
    }
    while ( v5 < 0xA );
    *a4 = v5;
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, 93, 87);
  }
  return v4;
}
