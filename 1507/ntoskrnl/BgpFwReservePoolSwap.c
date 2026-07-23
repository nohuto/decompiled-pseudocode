/*
 * XREFs of BgpFwReservePoolSwap @ 0x14075C158
 * Callers:
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x14075CC38 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_1403539B8 = qword_140353958;
      dword_1403539D4 = dword_140353960;
      result = (unsigned int)dword_140353940;
      HintIndex = dword_140353940;
      BitMapHeader = (_RTL_BITMAP)xmmword_140353948;
      dword_14031660C = 1;
    }
  }
  else
  {
    dword_140353940 = HintIndex;
    qword_140353958 = qword_1403539B8;
    dword_140353960 = dword_1403539D4;
    xmmword_140353948 = (__int128)BitMapHeader;
    result = BgpFwInitializeReservePool(a2, a3, a4);
    dword_14031660C = 0;
  }
  return result;
}
