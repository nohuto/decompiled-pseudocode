/*
 * XREFs of UsbhTimerPnpStart @ 0x1C0009D90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhTimerPnpStart(PVOID DeferredContext)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_8e0c458a098450731fcb0758acba9ab6_Traceguids);
  v2 = FdoExt(DeferredContext);
  Log((_DWORD)DeferredContext, 0x2000, 1684886356, 0, 0LL);
  *(_QWORD *)(v2 + 3752) = v2 + 3744;
  *(_QWORD *)(v2 + 3744) = v2 + 3744;
  KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 3728));
  KeInitializeEvent((PRKEVENT)(v2 + 3760), NotificationEvent, 0);
  KeInitializeDpc((PRKDPC)(v2 + 3784), UsbhDmTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(v2 + 3848));
  v3 = UsbhReferenceListAdd(DeferredContext, v2 + 3744, 1836338500LL);
  v4 = v3;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    KeSetEvent((PRKEVENT)(v2 + 3760), 0, 0);
  }
  else
  {
    *(_DWORD *)(v2 + 2560) |= 0x2000000u;
    *(_DWORD *)(v2 + 3736) = 2;
  }
  Log((_DWORD)DeferredContext, 0x2000, 1098149234, 0, v4);
  return (unsigned int)v4;
}
