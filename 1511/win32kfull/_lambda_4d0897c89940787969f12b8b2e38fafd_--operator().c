/*
 * XREFs of _lambda_4d0897c89940787969f12b8b2e38fafd_::operator() @ 0x1C02A2E00
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C02D9238 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 */

__int64 __fastcall lambda_4d0897c89940787969f12b8b2e38fafd_::operator()(__int64 a1)
{
  unsigned int v2; // r8d
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v4; // rbx
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v5; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 8) + 8LL))(**(_QWORD **)(a1 + 8)) )
    return 3221225473LL;
  v4 = *(struct CMultipleConsumerWorkQueue::CWaitableWorkItem ***)(a1 + 16);
  v5 = CMultipleConsumerWorkQueue::CreateAndQueueWorkItem(
         *(CMultipleConsumerWorkQueue **)a1,
         *(unsigned __int8 **)(a1 + 8),
         v2);
  *v4 = v5;
  return v5 == 0LL ? 0xC0000001 : 0;
}
