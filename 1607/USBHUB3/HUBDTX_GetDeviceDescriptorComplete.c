/*
 * XREFs of HUBDTX_GetDeviceDescriptorComplete @ 0x1C0023120
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BA78 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_GetDeviceDescriptorComplete(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rax

  v5 = *(_DWORD *)(a3 + 8);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C0058180);
  v9 = 4004;
  v10 = v8;
  if ( v5 >= 0 )
    v9 = 4012;
  HUBSM_AddEvent((__int64)(a4 + 61), v9);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a1);
  HUBFDO_CompleteGetDescriptorRequest(*a4, *(unsigned __int16 *)(a4[1] + 200), a1, v11, *(_DWORD *)(v10 + 60));
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a4);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v12,
           "User Mode FDO Request",
           5792LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\devicexfer.c");
}
