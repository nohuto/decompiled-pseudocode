/*
 * XREFs of Endpoint_SM_ResetEndpoint @ 0x1C0023B88
 * Callers:
 *     ESM_ResettingEndpoint @ 0x1C003AD40 (ESM_ResettingEndpoint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 */

void __fastcall Endpoint_SM_ResetEndpoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // ecx
  unsigned int v7; // ecx
  _QWORD v8[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 256);
  LOWORD(v8[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v8);
  v3 = v8[1];
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 256),
         off_1C0043070);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  memset((void *)(v4 + 16), 0, 0x50uLL);
  v6 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 64) = Endpoint_OnResetEndpointResetCompletion;
  v7 = v6 & 0xFFFF03FF | 0x3800;
  *(_QWORD *)(v4 + 72) = v4;
  *(_DWORD *)(v4 + 52) = v7;
  *(_DWORD *)(v4 + 52) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v4 + 55) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  if ( (*(_DWORD *)(v3 + 32) & 1) != 0 )
    *(_DWORD *)(v4 + 52) |= 0x200u;
  else
    *(_DWORD *)(v4 + 52) &= ~0x200u;
  Command_SendCommand(v5, v4 + 16);
}
