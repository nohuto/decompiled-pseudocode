/*
 * XREFs of ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C5E58
 * Callers:
 *     ?EndDeferActiveListRemovals@@YAXXZ @ 0x1C01C470C (-EndDeferActiveListRemovals@@YAXXZ.c)
 *     FreePointerDevice @ 0x1C01CA8D0 (FreePointerDevice.c)
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     ?UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C6A04 (-UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     DwmAsyncNotifyDigitizerActiveContacts @ 0x1C025F70C (DwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RemoveFromActiveDevices(struct _LIST_ENTRY *a1, int a2, int *a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v4; // esi
  int v5; // ebp
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *v11; // r8
  char **v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rax
  struct _LIST_ENTRY *Blink; // rax

  Flink = gActivePointerDeviceList.Flink;
  v4 = 0;
  v5 = 0;
  if ( (struct _LIST_ENTRY *)gPrimaryPointerDevice == a1 )
    UpdatePrimaryDevice(0LL, 0, 0);
  while ( Flink != &gActivePointerDeviceList )
  {
    p_Blink = &Flink[-1].Blink;
    Flink = Flink->Flink;
    if ( *p_Blink == a1 )
    {
      if ( (dword_1C0324798 & 1) != 0 )
      {
        *((_DWORD *)p_Blink + 6) |= 1u;
        dword_1C0324798 |= 2u;
        if ( a2 )
        {
          *((_DWORD *)p_Blink + 6) |= 2u;
          dword_1C0324798 |= 4u;
        }
        v5 = 1;
      }
      else
      {
        v11 = p_Blink[1];
        v12 = (char **)p_Blink[2];
        if ( (struct _LIST_ENTRY **)v11->Blink != p_Blink + 1 || *v12 != (char *)(p_Blink + 1) )
          __fastfail(3u);
        *v12 = (char *)v11;
        v11->Blink = (struct _LIST_ENTRY *)v12;
        Win32FreePool(p_Blink);
        if ( !--dword_1C0324790 )
        {
          FindTimer(0LL, gtmridPointerDeviceTimer, 4u, 1, 0LL);
          gtmridPointerDeviceTimer = 0LL;
          dword_1C0324794 = 0;
          v17 = (void *)ReferenceDwmApiPort(v14, v13, v15, v16);
          DwmAsyncNotifyDigitizerActiveContacts(v17);
          if ( LODWORD(a1[1].Blink) == 8 )
          {
            Blink = a1[43].Blink;
            if ( Blink && LODWORD(Blink->Flink) )
              LODWORD(Blink->Flink) = 0;
            gIsPTPButtonDown = 0;
          }
        }
        v4 = 1;
      }
      break;
    }
  }
  if ( a3 )
    *a3 = v5;
  return v4;
}
