/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x1C002CDA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     UsbDevice_GetEndpointState @ 0x1C002DE18 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dLL @ 0x1C002FDE0 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dqLL @ 0x1C0030464 (WPP_RECORDER_SF_dqLL.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, _QWORD *a3, int a4)
{
  __int64 v4; // rbx
  char v6; // si
  int v8; // r8d
  __int64 **v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbp
  int v12; // r8d
  int v13; // r9d
  __int64 **v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  PWDF_DRIVER_GLOBALS v19; // rcx
  int v20; // [rsp+20h] [rbp-38h]

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
    v9 = (__int64 **)(v4 + 184);
    v10 = 30LL;
    do
    {
      v11 = *v9;
      if ( *v9 )
      {
        Endpoint_Disable_Internal(*v9, 0, v8);
        ESM_AddEvent(v11 + 34);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
LABEL_14:
    v17 = WdfFunctions_01015;
    v18 = *(_QWORD *)(v4 + 440);
    *(_QWORD *)(v4 + 440) = 0LL;
    v19 = WdfDriverGlobals;
    *(_DWORD *)(v4 + 152) = 3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v17 + 2104))(v19, v18, 0LL);
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
        v12,
        v13,
        v20,
        *(_BYTE *)(a1 + 69),
        *(_BYTE *)(a1 + 68),
        v6);
    v14 = (__int64 **)(v4 + 184);
    v15 = 30LL;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        Endpoint_Disable_Internal(*v14, 0, v12);
        ESM_AddEvent(v16 + 34);
      }
      ++v14;
      --v15;
    }
    while ( v15 );
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
