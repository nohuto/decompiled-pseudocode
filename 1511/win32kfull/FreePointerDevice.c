/*
 * XREFs of FreePointerDevice @ 0x1C01CC4B0
 * Callers:
 *     ?EndDeferActiveListRemovals@@YAXXZ @ 0x1C01C62CC (-EndDeferActiveListRemovals@@YAXXZ.c)
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     ReleasePointerDeviceInfo @ 0x1C01CE000 (ReleasePointerDeviceInfo.c)
 * Callees:
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C7A18 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     ?RemoveFromCurrentPointerDevicesList@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7B58 (-RemoveFromCurrentPointerDevicesList@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7BB0 (-ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     FreePointerDeviceCalData @ 0x1C01CC6A0 (FreePointerDeviceCalData.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C0230CD4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

__int64 __fastcall FreePointerDevice(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rdi
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rcx
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0;
  result = RemoveFromActiveDevices(a1, 1, &v15);
  if ( !v15 )
  {
    result = HMMarkObjectDestroy(a1);
    if ( (_DWORD)result )
    {
      RemoveFromCurrentPointerDevicesList(a1);
      Flink = a1[46].Flink;
      if ( Flink )
      {
        HoldingFrameForDevice = FindHoldingFrameForDevice(Flink);
        if ( HoldingFrameForDevice )
          UnlinkAndFreeHoldingFrame(HoldingFrameForDevice);
      }
      Blink = a1[20].Blink;
      if ( Blink )
      {
        Win32FreePool(Blink);
        a1[20].Blink = 0LL;
      }
      v6 = a1[96].Flink;
      if ( v6 )
      {
        Win32FreePool(v6);
        a1[96].Flink = 0LL;
      }
      if ( a1[20].Flink )
      {
        FreePointerDeviceCalData();
        Win32FreePool(a1[20].Flink);
        a1[20].Flink = 0LL;
      }
      v7 = a1[43].Blink;
      if ( v7 )
      {
        Win32FreePool(v7);
        a1[43].Blink = 0LL;
      }
      v8 = a1[44].Blink;
      if ( v8 )
      {
        v9 = v8[1].Blink;
        if ( v9 )
        {
          Win32FreePool(v9);
          a1[44].Blink[1].Blink = 0LL;
        }
        v10 = a1[44].Blink[2].Flink;
        if ( v10 )
        {
          Win32FreePool(v10);
          a1[44].Blink[2].Flink = 0LL;
        }
        v11 = a1[44].Blink;
        if ( v11[3].Flink )
        {
          ResetPointerDeviceFrameContactIdMgr((struct tagHID_POINTER_DEVICE_INFO *)a1);
          Win32FreePool(v11[3].Flink);
          v11[3].Flink = 0LL;
        }
        Win32FreePool(a1[44].Blink);
        a1[44].Blink = 0LL;
      }
      v12 = a1[18].Blink;
      if ( v12 )
      {
        Win32FreePool(v12);
        a1[18].Blink = 0LL;
      }
      if ( (unsigned int)(LODWORD(a1[1].Blink) - 7) <= 1 || (HIDWORD(a1[15].Blink) & 0x20) != 0 )
      {
        v13 = a1[17].Blink;
        if ( v13 )
        {
          Win32FreePool(v13);
          a1[17].Blink = 0LL;
        }
      }
      v14 = a1[88].Blink;
      if ( v14 )
      {
        Win32FreePool(v14);
        a1[88].Blink = 0LL;
      }
      if ( (HIDWORD(a1[15].Blink) & 0x1000) != 0 )
        gulPointerDeviceContactCount -= LODWORD(a1[45].Flink);
      return HMFreeObject(a1);
    }
  }
  return result;
}
