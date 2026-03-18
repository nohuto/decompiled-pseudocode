/*
 * XREFs of RemoveContactFromActiveList @ 0x1C01CE06C
 * Callers:
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C89D4 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     GetPointerDeviceContactState @ 0x1C01CCC50 (GetPointerDeviceContactState.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CFA74 (xxxUpdateDeviceFrameState.c)
 * Callees:
 *     PostPointerEventMessage @ 0x1C0110BB0 (PostPointerEventMessage.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C7A18 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     ?UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C85C4 (-UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     ReleaseCursor @ 0x1C01CDF9C (ReleaseCursor.c)
 */

void *__fastcall RemoveContactFromActiveList(struct _LIST_ENTRY *a1, unsigned int a2, _WORD *a3)
{
  __int64 v3; // rdi
  void *result; // rax

  v3 = a2;
  if ( LODWORD(a1[45].Flink) <= 1 )
  {
    if ( a3 )
      *a3 = *((_WORD *)&a1[20].Blink->Flink + 6 * (((__int64)a1[43].Blink[150 * a2 + 149].Blink & 8) != 0) + 2);
  }
  else
  {
    ReleaseCursor((__int64)a1, HIDWORD(a1[43].Blink[150 * a2 + 145].Blink));
  }
  --LODWORD(a1[44].Flink);
  result = memset(&a1[43].Blink[150 * v3], 0, 0x960uLL);
  if ( !LODWORD(a1[44].Flink) )
  {
    if ( (struct _LIST_ENTRY *)gPrimaryPointerDevice == a1 )
      UpdatePrimaryDevice(0LL, 0, 0);
    if ( LODWORD(a1[1].Blink) != 8 )
    {
      EtwTracePointerDeviceOutOfRangeMessageStart();
      PostPointerEventMessage((__int64)a1, 0x23Au, 0LL, 0);
      EtwTracePointerDeviceOutOfRangeMessageStop();
    }
    memset(&a1[89].Blink, 0, 0x38uLL);
    return (void *)RemoveFromActiveDevices(a1, 0, 0LL);
  }
  return result;
}
