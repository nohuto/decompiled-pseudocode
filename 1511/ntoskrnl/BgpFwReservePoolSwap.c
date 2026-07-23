/*
 * XREFs of BgpFwReservePoolSwap @ 0x1406D931C
 * Callers:
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x1406D9BF0 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140305C38 = qword_140305BD8;
      dword_140305C54 = dword_140305BE0;
      result = (unsigned int)dword_140305BC0;
      HintIndex = dword_140305BC0;
      BitMapHeader = (_RTL_BITMAP)xmmword_140305BC8;
      dword_1402C7530 = 1;
    }
  }
  else
  {
    dword_140305BC0 = HintIndex;
    qword_140305BD8 = qword_140305C38;
    dword_140305BE0 = dword_140305C54;
    xmmword_140305BC8 = (__int128)BitMapHeader;
    result = BgpFwInitializeReservePool(a2, a3, a4);
    dword_1402C7530 = 0;
  }
  return result;
}
