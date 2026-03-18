/*
 * XREFs of HUBFDO_EvtDeviceUsageNotification @ 0x1C000AFD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_NotifyForwardProgress @ 0x1C002155C (HUBUCX_NotifyForwardProgress.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 *__fastcall HUBFDO_EvtDeviceUsageNotification(__int64 a1, int a2, char a3)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // edi
  int v9; // edi
  int v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+3Ch] [rbp-1Ch]

  result = (volatile signed __int32 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                        WdfDriverGlobals,
                                        a1,
                                        off_1C005B0C0);
  v7 = result;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_7;
    if ( v9 != 2 )
      return result;
  }
  if ( !a3 )
    return result;
  _InterlockedOr(result + 10, 0x400000u);
  v13 = 0x10100000001LL;
  v11 = 0x500000014LL;
  v12 = 1;
  result = (volatile signed __int32 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376))(
                                        WdfDriverGlobals,
                                        a1,
                                        &v11);
  if ( (int)result < 0 )
  {
    v10 = (int)result;
    result = (volatile signed __int32 *)WPP_RECORDER_SF_d(
                                          *((_QWORD *)v7 + 311),
                                          2u,
                                          3u,
                                          0x19u,
                                          (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
                                          v10);
  }
LABEL_7:
  if ( a3 && !*((_BYTE *)v7 + 2240) )
  {
    *((_BYTE *)v7 + 2240) = 1;
    result = (volatile signed __int32 *)HUBUCX_NotifyForwardProgress(v7);
    if ( !*((_BYTE *)v7 + 232) )
      return (volatile signed __int32 *)MmLockPagableDataSection(HUBFDO_EvtDeviceAdd);
  }
  return result;
}
