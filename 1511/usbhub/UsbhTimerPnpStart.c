/*
 * XREFs of UsbhTimerPnpStart @ 0x1C001E1E0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhTimerPnpStart(PVOID DeferredContext, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_8e0c458a098450731fcb0758acba9ab6_Traceguids);
  v5 = FdoExt((__int64)DeferredContext, a2, a3, a4);
  Log((__int64)DeferredContext, 0x2000, 1684886356, 0LL, 0LL);
  *((_QWORD *)v5 + 469) = v5 + 936;
  *((_QWORD *)v5 + 468) = v5 + 936;
  KeInitializeSpinLock((PKSPIN_LOCK)v5 + 466);
  KeInitializeEvent((PRKEVENT)(v5 + 940), NotificationEvent, 0);
  KeInitializeDpc((PRKDPC)(v5 + 946), (PKDEFERRED_ROUTINE)UsbhDmTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(v5 + 962));
  v6 = UsbhReferenceListAdd(DeferredContext, v5 + 936, 1836338500LL);
  v7 = v6;
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    KeSetEvent((PRKEVENT)(v5 + 940), 0, 0);
  }
  else
  {
    v5[640] |= 0x2000000u;
    v5[934] = 2;
  }
  Log((__int64)DeferredContext, 0x2000, 1098149234, 0LL, v7);
  return (unsigned int)v7;
}
