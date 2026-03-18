/*
 * XREFs of ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B7880
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180043998 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnectio.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossThreadComposition::Create(
        struct CKernelTransport *a1,
        struct CPartitionVerticalBlankScheduler *a2,
        struct CConnection *a3,
        struct CDebugFrameCounter *a4,
        struct CoRenderHost *a5,
        struct CCrossThreadComposition **a6)
{
  CComposition *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  v10 = (CComposition *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          1280LL);
  if ( v10 )
  {
    CComposition::CComposition(v10, a1, a2, a3, a4, a5);
    *(_QWORD *)v10 = &CCrossThreadComposition::`vftable';
    *((_QWORD *)v10 + 159) = *((_QWORD *)a2 + 34);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = CComposition::Initialize(v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x58u);
      CMILRefCountBase::Release(v10);
    }
    else
    {
      g_pComposition = v10;
      *a6 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56u);
  }
  return v12;
}
