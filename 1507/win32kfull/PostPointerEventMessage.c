/*
 * XREFs of PostPointerEventMessage @ 0x1C0155090
 * Callers:
 *     PostDeviceNotification @ 0x1C00790B0 (PostDeviceNotification.c)
 *     ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01C5980 (-NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET.c)
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C5AD8 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C01CC2A0 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C01CC2B0 (PostPointerDeviceOutOfRangeMessage.c)
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 * Callees:
 *     PHIDTtoPT @ 0x1C000F43C (PHIDTtoPT.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 */

void __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  LARGE_INTEGER *v9; // r11
  LARGE_INTEGER v10; // r10
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-38h]

  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
    a3 = (int)PHIDTtoPT(a1);
  while ( Flink != &gPointerDeviceClients )
  {
    v9 = (LARGE_INTEGER *)Flink[-1].Flink;
    v10 = v9[2];
    if ( a4 )
    {
      if ( a2 == 568 && a3 - 1 <= 1 )
      {
        if ( **(_DWORD **)(*(_QWORD *)(v10.QuadPart + 416) + 24LL) != gSessionId )
          goto LABEL_14;
      }
      else if ( *(_QWORD *)(v10.QuadPart + 416) != grpdeskRitInput )
      {
        goto LABEL_14;
      }
      LODWORD(v12) = 0;
      LODWORD(v11) = 0;
      PostInputMessage(
        *(_QWORD *)(v10.QuadPart + 392),
        v9,
        a2,
        a3,
        *(_QWORD *)(a1 + 720),
        v11,
        0LL,
        0LL,
        v12,
        0LL,
        0LL,
        0LL);
    }
    else if ( LODWORD(Flink[-1].Blink) && *(_QWORD *)(v10.QuadPart + 416) == grpdeskRitInput )
    {
      PostMessage((__int64)Flink[-1].Flink, a2, a3, *(struct _LARGE_STRING **)(a1 + 720));
    }
LABEL_14:
    Flink = Flink->Flink;
  }
}
