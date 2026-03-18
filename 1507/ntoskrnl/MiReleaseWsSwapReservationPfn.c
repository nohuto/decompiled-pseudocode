/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1400DE69C
 * Callers:
 *     MiProcessWsInSwapFault @ 0x1400DDE3C (MiProcessWsInSwapFault.c)
 *     MiInPageSingleKernelStack @ 0x1400DE01C (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 v1; // r10
  __int64 result; // rax
  unsigned __int64 *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r11

  v1 = a1;
  result = 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
  {
    v3 = (unsigned __int64 *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 16);
    if ( (v4 & 6) != 0 )
    {
      if ( (*(_BYTE *)(v1 + 34) & 8) == 0 )
      {
        v5 = *(_QWORD *)(v1 + 16);
        if ( (v4 & 4) != 0 )
        {
          result = *(_QWORD *)(v1 + 16);
          if ( (unsigned __int64)(v1 + 0x90482413010LL) <= 0x7F8 )
            result = MiReadPteShadow(v1 + 16, v5);
          *v3 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else if ( (v5 & 2) != 0 )
        {
          result = *(_QWORD *)(v1 + 16);
          if ( (unsigned __int64)(v1 + 0x90482413010LL) <= 0x7F8 )
            result = MiReadPteShadow(v1 + 16, v5);
        }
        *v3 &= ~2uLL;
      }
      *(_BYTE *)(v1 + 34) |= 0x10u;
    }
  }
  return result;
}
