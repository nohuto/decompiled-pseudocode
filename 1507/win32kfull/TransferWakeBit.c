/*
 * XREFs of TransferWakeBit @ 0x1C00EAAA4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcWakeMask @ 0x1C006AE00 (CalcWakeMask.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int16 v4; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx

  result = CalcWakeMask(a2, a2, 0);
  v4 = result & 0x1C07;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 408) + 6LL) & result & 0x1C07) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 392);
      v6 = *(_QWORD *)(v7 + 56);
      *(_QWORD *)(v7 + 56) = a1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 392);
      v6 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v5 + 48) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 392));
    }
    *(_WORD *)(*(_QWORD *)(v6 + 408) + 6LL) &= ~v4;
    *(_WORD *)(*(_QWORD *)(a1 + 408) + 6LL) |= v4;
    result = *(_QWORD *)(a1 + 408);
    *(_WORD *)(result + 4) |= v4;
  }
  return result;
}
