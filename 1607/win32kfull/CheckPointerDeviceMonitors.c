/*
 * XREFs of CheckPointerDeviceMonitors @ 0x1C01356D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckPointerDeviceMonitors(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h]

  EnterDeviceInfoListCrit_(a1);
  v3 = aDeviceTemplate[153];
  if ( v3 && (int)RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL) >= 0 )
  {
    RIMOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  return LeaveDeviceInfoListCrit_(v3, v2);
}
