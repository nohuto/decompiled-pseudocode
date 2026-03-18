/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x1C001FCD0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0001C48 (Controller_GetFrameNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043340);
  if ( *(_DWORD *)(v3 + 288) == 1 )
    *a2 = Controller_GetFrameNumber(v3, 1);
  else
    *a2 = -1;
  return 0LL;
}
