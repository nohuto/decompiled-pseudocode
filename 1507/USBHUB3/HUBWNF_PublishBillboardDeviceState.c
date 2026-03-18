/*
 * XREFs of HUBWNF_PublishBillboardDeviceState @ 0x1C00306D0
 * Callers:
 *     HUBPDO_BillboardCleanup @ 0x1C0013AB8 (HUBPDO_BillboardCleanup.c)
 *     HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C0018D90 (HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

__int64 __fastcall HUBWNF_PublishBillboardDeviceState(__int64 *a1)
{
  __int64 v1; // xmm0_8
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  __int16 v4; // [rsp+48h] [rbp-20h]
  char v5; // [rsp+4Ah] [rbp-1Eh]

  v1 = *a1;
  v4 = *((_WORD *)a1 + 4);
  v5 = *((_BYTE *)a1 + 10);
  v3 = v1;
  return ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_DEVICE_STATE, &v3, 11LL, 0LL, 0LL, 0, 0);
}
