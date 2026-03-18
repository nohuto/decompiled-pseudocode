/*
 * XREFs of TransferWakeBit @ 0x1400554A0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rsi

  result = CalcWakeMask((unsigned int)a2, a2, 0LL);
  v4 = *(_QWORD *)(a1 + 480);
  v5 = result & 0x1C07;
  if ( (v5 & *(_DWORD *)(v4 + 8)) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 464);
    if ( (result & 1) != 0 )
    {
      v7 = *(_QWORD *)(v6 + 104);
      *(_QWORD *)(v6 + 104) = a1;
    }
    else
    {
      v7 = *(_QWORD *)(v6 + 96);
      *(_QWORD *)(v6 + 96) = a1;
      EditionUpdateRawMouseMode(*(_QWORD *)(a1 + 464), v4);
    }
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v7 + 480) + 8LL), ~v5);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 480) + 8LL), v5);
    result = *(_QWORD *)(a1 + 480);
    _InterlockedOr((volatile signed __int32 *)(result + 4), v5);
  }
  return result;
}
