/*
 * XREFs of Usbh_OvercurrentRefHubBusy @ 0x1C0051BB4
 * Callers:
 *     UsbhHandleOvercurrent @ 0x1C00502F4 (UsbhHandleOvercurrent.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 */

LONG __fastcall Usbh_OvercurrentRefHubBusy(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  struct _KEVENT *v3; // rdi

  v3 = (struct _KEVENT *)(a2 + 2888);
  KeWaitForSingleObject((PVOID)(a2 + 2888), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 2912) && !*(_BYTE *)(a2 + 2916) )
    *(_QWORD *)(a2 + 2880) = UsbhIncHubBusy(a1, a2 + 200, a2, 1129280371LL, 0);
  if ( a3 == 1 )
    ++*(_DWORD *)(a2 + 2912);
  else
    *(_BYTE *)(a2 + 2916) = 1;
  return KeSetEvent(v3, 0, 0);
}
