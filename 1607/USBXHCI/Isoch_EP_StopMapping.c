/*
 * XREFs of Isoch_EP_StopMapping @ 0x1C002B4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C0028AA4 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Isoch_EP_StopMapping(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  v2 = TR_AttemptStateChange(a1, 5, 1);
  if ( v2 == 4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 272),
      0LL);
  result = (unsigned int)(v2 - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
    return TR_AttemptStateChange(a1, 1, 0);
  return result;
}
