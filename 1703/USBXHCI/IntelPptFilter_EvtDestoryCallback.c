/*
 * XREFs of IntelPptFilter_EvtDestoryCallback @ 0x1C00369C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IntelPptFilter_EvtDestoryCallback(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045098);
  MmUnlockPagableImageSection(*(PVOID *)(v1 + 56));
}
