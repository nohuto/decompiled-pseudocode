/*
 * XREFs of ?EndDeferActiveListRemovals@@YAXXZ @ 0x1C01C62CC
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C7A18 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 */

void EndDeferActiveListRemovals(void)
{
  unsigned int v0; // eax
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rcx
  int v3; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v4);
  v0 = dword_1C0323FA8 & 0xFFFFFFFE;
  dword_1C0323FA8 = v0;
  if ( (v0 & 2) != 0 )
  {
    Flink = gActivePointerDeviceList.Flink;
    if ( gActivePointerDeviceList.Flink != &gActivePointerDeviceList )
    {
      do
      {
        p_Blink = &Flink[-1].Blink;
        Flink = Flink->Flink;
        v3 = *((_DWORD *)p_Blink + 6);
        if ( (v3 & 2) != 0 )
        {
          FreePointerDevice((struct tagHID_POINTER_DEVICE_INFO *)*p_Blink);
        }
        else if ( (v3 & 1) != 0 )
        {
          RemoveFromActiveDevices((struct tagHID_POINTER_DEVICE_INFO *)*p_Blink, 0, 0LL);
        }
      }
      while ( Flink != &gActivePointerDeviceList );
      v0 = dword_1C0323FA8;
    }
  }
  dword_1C0323FA8 = v0 & 0xFFFFFFF9;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v4);
}
