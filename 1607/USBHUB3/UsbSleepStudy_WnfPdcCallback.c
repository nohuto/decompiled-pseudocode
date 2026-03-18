/*
 * XREFs of UsbSleepStudy_WnfPdcCallback @ 0x1C0033DE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbSleepStudy_CsStateChange @ 0x1C00338A8 (UsbSleepStudy_CsStateChange.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbSleepStudy_WnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const void *a6)
{
  int v6; // ebx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+24h] [rbp-34h] BYREF
  _QWORD v11[3]; // [rsp+28h] [rbp-30h] BYREF

  v9 = 20;
  memset(v11, 0, 20);
  v6 = ((__int64 (__fastcall *)(__int64, int *, _QWORD *, int *))ExQueryWnfStateData)(a1, &v10, v11, &v9);
  if ( v6 >= 0 )
  {
    v7 = v11[0] - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v11[0] == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v7 = v11[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    UsbSleepStudy_CsStateChange(a6, v7 == 0, v11[2]);
  }
  return (unsigned int)v6;
}
