/*
 * XREFs of RtlExtendedMagicDivide @ 0x140123324
 * Callers:
 *     sub_1401232DC @ 0x1401232DC (sub_1401232DC.c)
 *     RtlTimeToSecondsSince1970 @ 0x1401F75FC (RtlTimeToSecondsSince1970.c)
 *     RtlTimeToSecondsSince1980 @ 0x1401F7638 (RtlTimeToSecondsSince1980.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __stdcall RtlExtendedMagicDivide(LARGE_INTEGER Dividend, LARGE_INTEGER MagicDivisor, CCHAR ShiftCount)
{
  unsigned __int128 v3; // rax
  LARGE_INTEGER v4; // rdx

  if ( Dividend.QuadPart < 0 )
    v3 = (unsigned __int64)-Dividend.QuadPart * (unsigned __int128)(unsigned __int64)MagicDivisor.QuadPart;
  else
    v3 = (unsigned __int64)Dividend.QuadPart * (unsigned __int128)(unsigned __int64)MagicDivisor.QuadPart;
  v4.QuadPart = *((_QWORD *)&v3 + 1) >> ShiftCount;
  if ( Dividend.QuadPart < 0 )
    v4.QuadPart = -v4.QuadPart;
  return v4;
}
