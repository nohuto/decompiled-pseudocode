/*
 * XREFs of SepTrustToDiscretionary @ 0x14008D9EC
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTrustToDiscretionary(_DWORD *a1, int a2)
{
  return (a2 & 0xFDFFFFFF) != (a2 & 0xFDFFFFFF & *a1) ? 0xC0000022 : 0;
}
