/*
 * XREFs of UsbDevice_UcxEvtHubInfo @ 0x1C002F640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Etw_DeviceUpdate @ 0x1C0030F18 (Etw_DeviceUpdate.c)
 */

__int64 __fastcall UsbDevice_UcxEvtHubInfo(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  LOWORD(v7[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, a2, v7);
  v3 = (_DWORD *)v7[1];
  v4 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v7[1] + 16LL),
                   off_1C0045250);
  v4[35] = v3[6];
  v4[36] = v3[7];
  v5 = (unsigned int)v3[8];
  v4[37] = v5;
  Etw_DeviceUpdate(v5, v4);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
