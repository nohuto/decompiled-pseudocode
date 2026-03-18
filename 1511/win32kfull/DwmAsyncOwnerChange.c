/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C0068E08
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0069BD0 (xxxDW_DestroyOwnedWindows.c)
 *     zzzImeCanDestroyDefIME @ 0x1C008FB88 (zzzImeCanDestroyDefIME.c)
 *     zzzImeSetOwnerWindow @ 0x1C00904B8 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C00905E0 (zzzImeSetFutureOwner.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D26D8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
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
