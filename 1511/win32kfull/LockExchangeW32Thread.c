/*
 * XREFs of LockExchangeW32Thread @ 0x1C008D7DC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ReferenceW32Thread @ 0x1C008E0DC (ReferenceW32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LockExchangeW32Thread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a1 )
    result = ReferenceW32Thread();
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( v5 )
    return (*(__int64 (**)(void))(a2 + 16))();
  return result;
}
