/*
 * XREFs of Interrupter_WdfEvtInterruptIsr @ 0x1C000F990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00432A0);
  v5 = v4;
  if ( a2 )
  {
    v6 = WdfFunctions_01015;
    ++*(_DWORD *)(v4 + 48);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v6 + 1136))(WdfDriverGlobals, a1);
    return 1;
  }
  if ( (*(_DWORD *)(v4 + 104) & 1) != 0 )
  {
LABEL_4:
    v7 = WdfFunctions_01015;
    ++*(_DWORD *)(v5 + 48);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v7 + 1136))(WdfDriverGlobals, a1);
    return 1;
  }
  v9 = **(_DWORD **)(v4 + 24);
  if ( (v9 & 1) != 0 )
  {
    **(_DWORD **)(v5 + 24) = v9;
    _InterlockedOr(v10, 0);
    goto LABEL_4;
  }
  return 0;
}
