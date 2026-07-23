/*
 * XREFs of SepTrustToDiscretionary @ 0x14008D14C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTrustToDiscretionary(_DWORD *a1, int a2)
{
  return (a2 & 0xFDFFFFFF) != (a2 & 0xFDFFFFFF & *a1) ? 0xC0000022 : 0;
}
