/*
 * XREFs of ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x180094E24
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180092738 (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEA.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800933B0 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
                                     1232LL);
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
