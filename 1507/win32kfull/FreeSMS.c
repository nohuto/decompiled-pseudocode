/*
 * XREFs of FreeSMS @ 0x1C01ECC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeSMS(__int64 a1)
{
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
