/*
 * XREFs of Template_qq @ 0x18000D5D4
 * Callers:
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z @ 0x18000DB24 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18001A4F0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?TransitionToDisabled@ControllerProcessor@@AEAAJXZ @ 0x180032F2C (-TransitionToDisabled@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qq(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-38h] BYREF
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v5.Ptr = (ULONGLONG)&v9;
  v5.Reserved = 0;
  v5.Size = 4;
  v6 = &v10;
  v8 = 0;
  v7 = 4;
  return EventWrite(Microsoft_OneCore_MinInputHandle, a2, 2u, &v5);
}
