/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x1C002ECF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  unsigned int v6; // esi
  int v7; // edx
  int v8; // r8d
  __int64 *v9; // rbx
  __int64 v10; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v11[1] + 16LL),
         off_1C0045250);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 112LL);
  v5 = Endpoint_Enable(*(_QWORD **)(v3 + 176));
  v6 = v5;
  if ( v5 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xBu,
      0x10u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      v5);
LABEL_5:
    v10 = WdfFunctions_01015;
    *(_QWORD *)(v3 + 440) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v10 + 2104))(WdfDriverGlobals, a2, v6);
    return;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    v9 = *(__int64 **)(v3 + 176);
    LOBYTE(v7) = 1;
    v6 = -1073741810;
    Endpoint_Disable_Internal(v9, v7, v8);
    ESM_AddEvent(v9 + 34);
    goto LABEL_5;
  }
  *(_QWORD *)(v3 + 440) = a2;
  *(_BYTE *)(v3 + 448) = 0;
  memset((void *)(v3 + 456), 0, 0x50uLL);
  *(_QWORD *)(v3 + 512) = v3;
  *(_QWORD *)(v3 + 504) = UsbDevice_EnableCompletion;
  *(_DWORD *)(v3 + 492) = *(_DWORD *)(v3 + 492) & 0xFFFF03FF | 0x2400;
  Command_SendCommand(v4, v3 + 456);
}
