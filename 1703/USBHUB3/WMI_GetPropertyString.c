/*
 * XREFs of WMI_GetPropertyString @ 0x1C0074730
 * Callers:
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C0034070 (WMI_QueryInstanceDeviceNodeInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall WMI_GetPropertyString(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  size_t v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  const void *v11; // rax
  size_t v12; // r8
  __int64 v13; // [rsp+48h] [rbp+7h] BYREF
  size_t v14; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v15[8]; // [rsp+58h] [rbp+17h] BYREF

  v5 = a4;
  memset(v15, 0, 0x38uLL);
  v15[3] = 0x100000001LL;
  LODWORD(v15[0]) = 56;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v13 = 0LL;
  v15[4] = v8;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 656))(
             WdfDriverGlobals,
             v9,
             a2,
             (unsigned int)ExDefaultNonPagedPoolType,
             v15,
             &v13);
  if ( (int)result >= 0 )
  {
    v11 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t *))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          v13,
                          &v14);
    v12 = v14;
    if ( v5 < v14 )
      v12 = v5;
    memmove(a3, v11, v12);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v13);
  }
  return result;
}
