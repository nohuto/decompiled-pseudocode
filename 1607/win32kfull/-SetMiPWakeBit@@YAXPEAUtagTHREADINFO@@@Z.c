/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01D82CC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMiPPromotion @ 0x1C01D88CC (SetMiPPromotion.c)
 * Callees:
 *     <none>
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  v3 = 4LL;
  if ( (**((_DWORD **)a1 + 142) & 0x20) == 0 )
    v3 = 2LL;
  SetWakeBit((__int64)a1, v3, a3);
}
