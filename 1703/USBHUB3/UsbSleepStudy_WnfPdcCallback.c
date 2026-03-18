/*
 * XREFs of UsbSleepStudy_WnfPdcCallback @ 0x1C0036C20
 * Callers:
 *     <none>
 * Callees:
 *     UsbSleepStudy_CsStateChange @ 0x1C00366E4 (UsbSleepStudy_CsStateChange.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 */

__int64 __fastcall UsbSleepStudy_WnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const void *a6)
{
  int v6; // ebx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+24h] [rbp-34h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]

  v9 = 20;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v6 = ((__int64 (__fastcall *)(__int64, int *, __int64 *, int *))ExQueryWnfStateData)(a1, &v10, &v11, &v9);
  if ( v6 >= 0 )
  {
    v7 = v11 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v11 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v7 = v12 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    UsbSleepStudy_CsStateChange(a6, v7 == 0, v13);
  }
  return (unsigned int)v6;
}
