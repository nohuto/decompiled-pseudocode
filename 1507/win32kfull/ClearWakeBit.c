/*
 * XREFs of ClearWakeBit @ 0x1C00EA55C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C021BAA0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearWakeBit(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a3 )
    goto LABEL_6;
  v3 = *(_QWORD *)(a1 + 392);
  if ( !*(_DWORD *)(v3 + 16) )
  {
    result = *(_QWORD *)(gptiCurrent + 424LL);
    if ( !*(_QWORD *)(result + 48) )
    {
      if ( (*(_DWORD *)(v3 + 332) & 0x20) != 0 )
        a2 &= ~2u;
LABEL_6:
      result = *(_QWORD *)(a1 + 408);
      *(_WORD *)(result + 6) &= ~a2;
    }
  }
  return result;
}
