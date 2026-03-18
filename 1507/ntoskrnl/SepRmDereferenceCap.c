/*
 * XREFs of SepRmDereferenceCap @ 0x14024F67C
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x14024F694 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCap(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) )
    return SepRmDereferenceCapTable();
  return result;
}
