/*
 * XREFs of SetMiPPromotion @ 0x1C00012DC
 * Callers:
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0001260 (NtUserAutoPromoteMouseInPointer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDefPointerProc @ 0x1C023139C (xxxDefPointerProc.c)
 * Callees:
 *     ?IsPointerMessage@@YAHI@Z @ 0x1C0001360 (-IsPointerMessage@@YAHI@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0001374 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

_DWORD *__fastcall SetMiPPromotion(__int64 a1, unsigned int a2)
{
  _DWORD *result; // rax
  _DWORD *v5; // rcx

  result = *(_DWORD **)(a1 + 1120);
  if ( result )
  {
    if ( (*result & 4) == 0 )
      SetMiPWakeBit((struct tagTHREADINFO *)a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (_DWORD *)IsPointerMessage(a2);
      if ( (_DWORD)result )
      {
        v5 = *(_DWORD **)(a1 + 1120);
        if ( (v5[9] & 0x1F0) != 0 )
          *v5 &= ~2u;
        else
          *v5 |= 2u;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 1120) |= 4u;
      **(_DWORD **)(a1 + 1120) &= ~0x10u;
      result = *(_DWORD **)(a1 + 1120);
      *result &= ~2u;
    }
  }
  return result;
}
