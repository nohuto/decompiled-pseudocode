/*
 * XREFs of Control_WdfEvtIoCanceledOnQueue @ 0x1C0029D70
 * Callers:
 *     <none>
 * Callees:
 *     Control_TransferData_Initialize @ 0x1C0010650 (Control_TransferData_Initialize.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A330 (WPP_RECORDER_SF_DDq.c)
 */

__int64 __fastcall Control_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // edx
  int v9; // r8d
  __int64 *v10; // rdx
  _QWORD v12[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041340);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0041098);
  v6 = v12[1];
  v7 = v5;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
    v8,
    v9,
    39,
    (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
    a2);
  Control_TransferData_Initialize(v4, a2, v6, (_QWORD *)v7);
  *(_DWORD *)(v7 + 96) = 3;
  *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
  v10 = *(__int64 **)(v4 + 320);
  *(_QWORD *)v7 = v4 + 312;
  *(_QWORD *)(v7 + 8) = v10;
  if ( *v10 != v4 + 312 )
    __fastfail(3u);
  *v10 = v7;
  *(_QWORD *)(v4 + 320) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(v4 + 280));
}
