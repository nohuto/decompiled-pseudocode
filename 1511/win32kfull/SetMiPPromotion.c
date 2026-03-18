/*
 * XREFs of SetMiPPromotion @ 0x1C000C34C
 * Callers:
 *     NtUserAutoPromoteMouseInPointer @ 0x1C000C2D0 (NtUserAutoPromoteMouseInPointer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDefPointerProc @ 0x1C02317CC (xxxDefPointerProc.c)
 * Callees:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000C3D0 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

unsigned __int64 __fastcall SetMiPPromotion(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  _DWORD *v5; // rcx

  result = *(_QWORD *)(a1 + 1112);
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit((struct tagTHREADINFO *)a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(a2 - 577);
      if ( (unsigned int)result <= 0x16 )
      {
        v5 = *(_DWORD **)(a1 + 1112);
        if ( (v5[9] & 0x1F0) != 0 )
          *v5 &= ~2u;
        else
          *v5 |= 2u;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 1112) |= 4u;
      **(_DWORD **)(a1 + 1112) &= ~0x10u;
      result = *(_QWORD *)(a1 + 1112);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
