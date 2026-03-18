/*
 * XREFs of SepTrustToDiscretionary @ 0x14009C134
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTrustToDiscretionary(_DWORD *a1, int a2)
{
  return (a2 & 0xFDFFFFFF) != (a2 & 0xFDFFFFFF & *a1) ? 0xC0000022 : 0;
}
