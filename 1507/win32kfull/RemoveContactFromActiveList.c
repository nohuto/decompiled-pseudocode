/*
 * XREFs of RemoveContactFromActiveList @ 0x1C01CC48C
 * Callers:
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C6E14 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 * Callees:
 *     PostPointerEventMessage @ 0x1C0155090 (PostPointerEventMessage.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C5E58 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     ?UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C6A04 (-UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     ReleaseCursor @ 0x1C01CC3BC (ReleaseCursor.c)
 */

void *__fastcall RemoveContactFromActiveList(struct _LIST_ENTRY *a1, unsigned int a2, _WORD *a3)
{
  __int64 v3; // rdi
  void *result; // rax

  v3 = a2;
  if ( LODWORD(a1[44].Flink) <= 1 )
  {
    if ( a3 )
      *a3 = *((_WORD *)&a1[19].Blink->Flink + 6 * (((__int64)a1[42].Blink[150 * a2 + 149].Blink & 8) != 0) + 2);
  }
  else
  {
    ReleaseCursor((__int64)a1, HIDWORD(a1[42].Blink[150 * a2 + 145].Blink));
  }
  --LODWORD(a1[43].Flink);
  result = memset(&a1[42].Blink[150 * v3], 0, 0x960uLL);
  if ( !LODWORD(a1[43].Flink) )
  {
    if ( (struct _LIST_ENTRY *)gPrimaryPointerDevice == a1 )
      UpdatePrimaryDevice(0LL, 0, 0);
    if ( LODWORD(a1[1].Blink) != 8 )
    {
      EtwTracePointerDeviceOutOfRangeMessageStart();
      PostPointerEventMessage((__int64)a1, 0x23Au, 0LL, 0);
      EtwTracePointerDeviceOutOfRangeMessageStop();
    }
    memset(&a1[88].Blink, 0, 0x38uLL);
    return (void *)RemoveFromActiveDevices(a1, 0, 0LL);
  }
  return result;
}
