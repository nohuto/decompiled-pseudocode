/*
 * XREFs of Interrupter_WdfEvtCleanupCallback @ 0x1C0026860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00083DC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00432A0);
  v3 = v2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      5u,
      8u,
      0x1Du,
      (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
      a1,
      v2);
  v4 = *(struct _PCW_INSTANCE **)(v3 + 96);
  if ( v4 )
    PcwCloseInstance(v4);
  if ( !*(_DWORD *)(v3 + 32) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      a1,
      off_1C0043160);
}
