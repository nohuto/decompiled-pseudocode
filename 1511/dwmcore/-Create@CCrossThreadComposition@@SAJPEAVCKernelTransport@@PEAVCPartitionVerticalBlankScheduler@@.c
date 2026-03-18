/*
 * XREFs of ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B4614
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18008307C (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 */

__int64 __fastcall CCrossThreadComposition::Create(
        struct CKernelTransport *a1,
        struct CPartitionVerticalBlankScheduler *a2,
        struct IMilNotificationTransport *a3,
        struct CDebugFrameCounter *a4,
        struct CoRenderHost *a5,
        struct CMonitorTreeAssociation ***a6)
{
  CCrossThreadComposition *v10; // rax
  struct CMonitorTreeAssociation **v11; // rbx
  int v12; // eax
  unsigned int v13; // edi

  v10 = (CCrossThreadComposition *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 16LL))(
                                     WPF::g_pProcessHeap,
                                     1208LL);
  if ( v10 )
    v11 = (struct CMonitorTreeAssociation **)CCrossThreadComposition::CCrossThreadComposition(v10, a1, a2, a3, a4, a5);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v12 = CComposition::Initialize(v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x37u);
    }
    else
    {
      CCrossThreadComposition::s_pCrossThreadComposition = (struct CCrossThreadComposition *)v11;
      *a6 = v11;
      v11 = 0LL;
    }
    if ( v11 )
      CMILRefCountBase::Release((CMILRefCountBase *)v11);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x35u);
  }
  return v13;
}
