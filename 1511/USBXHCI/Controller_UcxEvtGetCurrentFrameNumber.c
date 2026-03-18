/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x1C001F870
 * Callers:
 *     <none>
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0002CD8 (Controller_GetFrameNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00410E8);
  if ( *(_DWORD *)(v3 + 280) == 1 )
    *a2 = Controller_GetFrameNumber(v3, 1);
  else
    *a2 = -1;
  return 0LL;
}
