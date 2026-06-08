/*
 * XREFs of InvokePTStateChangeHidden @ 0x1C00065BC
 * Callers:
 *     PerfControlPTStatesHiddenSwAll @ 0x1C00066A0 (PerfControlPTStatesHiddenSwAll.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChangeHidden(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( *((_BYTE *)a3 + 25) == 1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a2 + 24))(a1, *(_QWORD *)(a2 + 32), *a3, a3[1]);
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a2 + 16))(a1, *(_QWORD *)(a2 + 40), *a3, a3[1]);
}
