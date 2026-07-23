/*
 * XREFs of BgpFwReservePoolSwap @ 0x140725168
 * Callers:
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140328B78 = qword_140328B90;
      dword_140328BA8 = dword_140328B84;
      result = (unsigned int)dword_140328B80;
      HintIndex = dword_140328B80;
      BitMapHeader = (_RTL_BITMAP)xmmword_140328BB0;
    }
  }
  else
  {
    dword_140328B80 = HintIndex;
    qword_140328B90 = qword_140328B78;
    dword_140328B84 = dword_140328BA8;
    xmmword_140328BB0 = (__int128)BitMapHeader;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
