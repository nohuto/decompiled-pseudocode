/*
 * XREFs of GreMarkDeletableRgn @ 0x1C000F580
 * Callers:
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreMarkDeletableRgn(__int64 a1)
{
  __int64 v2; // rdx

  PsGetCurrentProcessId();
  LOBYTE(v2) = 4;
  return HmgMarkDeletable(a1, v2);
}
