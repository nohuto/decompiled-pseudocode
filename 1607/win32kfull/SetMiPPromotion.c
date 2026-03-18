/*
 * XREFs of SetMiPPromotion @ 0x1C01D88CC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0210C50 (NtUserAutoPromoteMouseInPointer.c)
 *     xxxDefPointerProc @ 0x1C022A614 (xxxDefPointerProc.c)
 * Callees:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01D82CC (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

unsigned __int64 __fastcall SetMiPPromotion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  int v4; // edi
  _DWORD *v6; // rcx

  result = *(_QWORD *)(a1 + 1136);
  v4 = a2;
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit((struct tagTHREADINFO *)a1, a2, a3);
    if ( ((v4 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(v4 - 577);
      if ( (unsigned int)result <= 0x16 )
      {
        v6 = *(_DWORD **)(a1 + 1136);
        if ( (v6[9] & 0x1F0) != 0 )
          *v6 &= ~2u;
        else
          *v6 |= 2u;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 1136) |= 4u;
      **(_DWORD **)(a1 + 1136) &= ~0x10u;
      result = *(_QWORD *)(a1 + 1136);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
