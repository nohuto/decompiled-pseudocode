/*
 * XREFs of SepRmDereferenceCap @ 0x140219C64
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x140219C7C (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCap(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) )
    return SepRmDereferenceCapTable();
  return result;
}
