/*
 * XREFs of SepFreeResourceInfo @ 0x14010D734
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepFreeResourceInfo(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return sub_1401BF710();
  return result;
}
