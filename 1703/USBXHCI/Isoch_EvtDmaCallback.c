/*
 * XREFs of Isoch_EvtDmaCallback @ 0x1C0027D80
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_Stage_MapIntoRing @ 0x1C000EDE0 (Isoch_Stage_MapIntoRing.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C0025084 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Isoch_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 40);
  a4[9] = a3;
  result = Isoch_Stage_MapIntoRing(a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 292), 1u) )
  {
    if ( *(_DWORD *)(v4 + 304) )
    {
      result = TR_AttemptStateChange(v4, 3, 4);
      if ( (_DWORD)result == 3 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v4 + 272),
                 -100000000LL);
    }
    else
    {
      result = TR_AttemptStateChange(v4, 3, 3);
      if ( (_DWORD)result == 3 )
        return Isoch_MapTransfers(v4);
    }
  }
  return result;
}
