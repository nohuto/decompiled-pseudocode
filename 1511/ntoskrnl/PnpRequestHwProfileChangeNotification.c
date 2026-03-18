/*
 * XREFs of PnpRequestHwProfileChangeNotification @ 0x140601D58
 * Callers:
 *     PpProfileCancelHardwareProfileTransition @ 0x14060DEC0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14060DF40 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14060DFE0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14060E224 (PpProfileQueryHardwareProfileChange.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     PnpNotifyHwProfileChange @ 0x140601AB8 (PnpNotifyHwProfileChange.c)
 *     PnpSetHwProfileChangeEvent @ 0x14060EA28 (PnpSetHwProfileChangeEvent.c)
 */

__int64 __fastcall PnpRequestHwProfileChangeNotification(GUID *Source1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF

  if ( Source1 != &GUID_HWPROFILE_QUERY_CHANGE
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_CANCELLED
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_CANCELLED, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_COMPLETE
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_COMPLETE, 0x10uLL) != 16 )
  {
    return 3221225488LL;
  }
  if ( Source1 != &GUID_HWPROFILE_QUERY_CHANGE && RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16 )
    return PnpSetHwProfileChangeEvent((_DWORD)Source1, 0, 0, 0, 0LL);
  if ( a2 != 1 )
    return PnpNotifyHwProfileChange(Source1, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpSetHwProfileChangeEvent(
             (_DWORD)Source1,
             (unsigned int)&Event,
             (unsigned int)&v10,
             (_DWORD)a3,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
