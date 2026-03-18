/*
 * XREFs of IncActiveContacts @ 0x1C01CBD8C
 * Callers:
 *     ?ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z @ 0x1C01C5CD0 (-ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CE218 (-GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncActiveContacts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rax

  ++*(_DWORD *)(a1 + 20);
  v4 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
  return DwmAsyncNotifyDigitizerActiveContacts(v4);
}
