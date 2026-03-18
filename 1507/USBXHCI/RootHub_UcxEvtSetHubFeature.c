/*
 * XREFs of RootHub_UcxEvtSetHubFeature @ 0x1C001F150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtSetHubFeature(__int64 a1, __int64 a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  LOWORD(v4[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v4);
  *(_DWORD *)(v4[1] + 4LL) = -1073741820;
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a2,
           3221225473LL);
}
