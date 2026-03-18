/*
 * XREFs of SepRmDereferenceCap @ 0x14020077C
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x140200794 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCap(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) )
    return SepRmDereferenceCapTable();
  return result;
}
