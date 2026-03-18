/*
 * XREFs of Template_pdqqq @ 0x1C002ECC4
 * Callers:
 *     DpiMiracastIoCompleteRoutine @ 0x1C002BE30 (DpiMiracastIoCompleteRoutine.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0097840 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00DFF00 (DpiDxgkDdiSetPowerState.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C0145F88 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0197BB0 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C0197E9C (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C019E774 (DpiDxgkDdiNotifyAcpiEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pdqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h]
  va_list v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  va_list v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  va_list v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v15; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C8h] [rbp+6Fh]
  __int64 v19; // [rsp+D0h] [rbp+77h] BYREF
  va_list va3; // [rsp+D0h] [rbp+77h]
  va_list va4; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  v8 = 4LL;
  v10 = 4LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 5u, &UserData);
}
