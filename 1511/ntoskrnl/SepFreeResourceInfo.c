/*
 * XREFs of SepFreeResourceInfo @ 0x14009C168
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepFreeResourceInfo(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return sub_140183648();
  return result;
}
