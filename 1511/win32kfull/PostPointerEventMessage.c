/*
 * XREFs of PostPointerEventMessage @ 0x1C0110BB0
 * Callers:
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 *     ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01C7540 (-NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET.c)
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C7698 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C01CDE80 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C01CDE90 (PostPointerDeviceOutOfRangeMessage.c)
 *     RemoveContactFromActiveList @ 0x1C01CE06C (RemoveContactFromActiveList.c)
 * Callees:
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     PHIDTtoPT @ 0x1C011DAA0 (PHIDTtoPT.c)
 */

void __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-38h]

  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
    a3 = (int)PHIDTtoPT();
  while ( Flink != &gPointerDeviceClients )
  {
    v9 = (__int64)Flink[-1].Flink;
    v10 = *(_QWORD *)(v9 + 16);
    if ( a4 )
    {
      if ( a2 == 568 && a3 - 1 <= 1 )
      {
        if ( **(_DWORD **)(*(_QWORD *)(v10 + 408) + 24LL) != gSessionId )
          goto LABEL_14;
      }
      else if ( *(_QWORD *)(v10 + 408) != grpdeskRitInput )
      {
        goto LABEL_14;
      }
      LODWORD(v12) = 0;
      LODWORD(v11) = 0;
      PostInputMessage(*(_QWORD *)(v10 + 384), v9, a2, a3, *(_QWORD *)(a1 + 736), v11, 0LL, 0LL, v12, 0LL, 0LL, 0LL);
    }
    else if ( LODWORD(Flink[-1].Blink) && *(_QWORD *)(v10 + 408) == grpdeskRitInput )
    {
      PostMessage((__int64)Flink[-1].Flink, a2, a3, *(_QWORD *)(a1 + 736));
    }
LABEL_14:
    Flink = Flink->Flink;
  }
}
