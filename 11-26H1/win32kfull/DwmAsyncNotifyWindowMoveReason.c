/*
 * XREFs of DwmAsyncNotifyWindowMoveReason @ 0x140255CBC
 * Callers:
 *     ?SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z @ 0x14026F844 (-SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncNotifyWindowMoveReason(PVOID Object, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+54h] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    v7 = 0LL;
    v9 = a2;
    memset(v6, 0, sizeof(v6));
    WORD2(v6[0]) = 0x8000;
    LODWORD(v6[0]) = 3670032;
    v8 = 1073741942;
    v10 = a3;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
