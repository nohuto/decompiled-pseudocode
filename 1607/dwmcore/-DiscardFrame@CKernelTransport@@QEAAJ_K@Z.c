/*
 * XREFs of ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x180036F54
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18003C134 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKernelTransport::DiscardFrame(CKernelTransport *this, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v2 = 0;
  v3 = NtDCompositionDiscardFrame(*(_QWORD *)this, &v5);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3 | 0x10000000, 0xA2u);
  }
  return v2;
}
