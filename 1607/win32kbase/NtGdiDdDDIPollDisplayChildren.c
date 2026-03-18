/*
 * XREFs of NtGdiDdDDIPollDisplayChildren @ 0x1C0088CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDIPollDisplayChildren(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C011B3D0)(a1, a2);
}
