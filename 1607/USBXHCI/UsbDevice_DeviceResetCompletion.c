/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x1C00301C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Endpoint_Disable @ 0x1C00213D0 (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointState @ 0x1C0031120 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dLL @ 0x1C0032F90 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dqLL @ 0x1C00336DC (WPP_RECORDER_SF_dqLL.c)
 */

void __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, _QWORD *a3, int a4)
{
  __int64 v4; // rbx
  char v6; // si
  __int64 *v8; // rsi
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  PWDF_DRIVER_GLOBALS v16; // rcx
  int v17; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 56);
  v6 = a2;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
      4u,
      0xBu,
      0x3Au,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      *(unsigned __int8 *)(v4 + 135),
      *(_QWORD *)v4);
    v8 = (__int64 *)(v4 + 184);
    v9 = 30LL;
    do
    {
      if ( *v8 )
        Endpoint_Disable(*v8);
      ++v8;
      --v9;
    }
    while ( v9 );
LABEL_14:
    v14 = WdfFunctions_01015;
    v15 = *(_QWORD *)(v4 + 440);
    *(_QWORD *)(v4 + 440) = 0LL;
    v16 = WdfDriverGlobals;
    *(_DWORD *)(v4 + 152) = 3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v14 + 2104))(v16, v15, 0LL);
    return;
  }
  if ( *(_BYTE *)(a1 + 68) == 1 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
      4u,
      0xBu,
      0x3Bu,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids);
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1LL) )
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
        *(unsigned __int8 *)(a1 + 69),
        v10,
        v11,
        v17,
        *(_BYTE *)(a1 + 69),
        *(_BYTE *)(a1 + 68),
        v6);
    v12 = (__int64 *)(v4 + 184);
    v13 = 30LL;
    do
    {
      if ( *v12 )
        Endpoint_Disable(*v12);
      ++v12;
      --v13;
    }
    while ( v13 );
    goto LABEL_14;
  }
  WPP_RECORDER_SF_dqLL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL), *(unsigned __int8 *)(a1 + 69), (_DWORD)a3, a4);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)(v4 + 8),
    *(_QWORD *)v4,
    0,
    0x200000LL,
    "Reset Device Command failed",
    (_QWORD *)(a1 + 24),
    a3);
  Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4121, 0LL, 0LL, 0LL);
}
