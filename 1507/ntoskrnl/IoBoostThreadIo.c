/*
 * XREFs of IoBoostThreadIo @ 0x14014C778
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall IoBoostThreadIo(__int64 a1, int a2, char a3, int a4)
{
  if ( a4 )
    return 3221225485LL;
  if ( a3 == 1 )
  {
    PsBoostThreadIoEx(a1, 1, 1, 0LL);
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 1, 0LL);
    IoBoostThreadIoPriority(a1, a2, 0x80000000);
  }
  return 0LL;
}
