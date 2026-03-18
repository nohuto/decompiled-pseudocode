/*
 * XREFs of RtlExtendedMagicDivide @ 0x140138118
 * Callers:
 *     sub_1401380D0 @ 0x1401380D0 (sub_1401380D0.c)
 *     RtlTimeToSecondsSince1970 @ 0x1402463A8 (RtlTimeToSecondsSince1970.c)
 *     RtlTimeToSecondsSince1980 @ 0x1402463E4 (RtlTimeToSecondsSince1980.c)
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
