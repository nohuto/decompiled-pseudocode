/*
 * XREFs of DwmAsyncChildStyleChange @ 0x14012C0D4
 * Callers:
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     xxxSendEraseBkgnd @ 0x14012BCEC (xxxSendEraseBkgnd.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x1401FE798 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402CF6E0 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, __int64 a3, int a4)
{
  int v5; // r14d
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+58h] [rbp-8h]

  v5 = a3;
  v8 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState(Object, a2, a3) + 96) + 4648LL));
  if ( Object )
  {
    v15 = a4;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 3932180;
    v11 = 0LL;
    WORD2(v10[0]) = 0x8000;
    v12 = 1073741846;
    v13 = a2;
    v14 = v5;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
