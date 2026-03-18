/*
 * XREFs of ClearWakeBit @ 0x1C00643C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C021B860 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearWakeBit(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a3 )
    goto LABEL_6;
  v3 = *(_QWORD *)(a1 + 384);
  if ( !*(_DWORD *)(v3 + 16) )
  {
    result = *(_QWORD *)(gptiCurrent + 416LL);
    if ( !*(_QWORD *)(result + 48) )
    {
      if ( (*(_DWORD *)(v3 + 332) & 0x20) != 0 )
        a2 &= ~2u;
LABEL_6:
      result = *(_QWORD *)(a1 + 400);
      *(_WORD *)(result + 6) &= ~a2;
    }
  }
  return result;
}
