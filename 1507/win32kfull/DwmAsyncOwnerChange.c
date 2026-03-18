/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C005B838
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00527D4 (zzzImeCanDestroyDefIME.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     zzzImeSetOwnerWindow @ 0x1C0081158 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C0081268 (zzzImeSetFutureOwner.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0087DB8 (xxxDW_DestroyOwnedWindows.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C014A8F4 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset((char *)v8 + 2, 0, 0x3AuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741877;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    EtwUpdateEvent(a2);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
