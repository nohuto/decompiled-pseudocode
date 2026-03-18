/*
 * XREFs of ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800A9E74
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A87D8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 * Callees:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJH@Z @ 0x180046F5C (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJH@Z.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180047238 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRende.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x180113860 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Create(
        struct CKernelTransport *a1,
        struct CConnection *a2,
        int nPriority,
        struct IDWMCoRenderEngine *a4,
        struct CPartitionVerticalBlankScheduler **a5,
        struct _DWM_TIMING_INFO_EX **a6)
{
  CPartitionVerticalBlankScheduler *v10; // rax
  CPartitionVerticalBlankScheduler *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v15; // edx

  v10 = (CPartitionVerticalBlankScheduler *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                              WPF::g_pProcessHeap,
                                              30280LL);
  if ( v10 )
    v11 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v10, a1, a2, a4);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v12 = CPartitionVerticalBlankScheduler::Initialize(v11, nPriority);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x24u);
      CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v11, v15);
    }
    else
    {
      *a5 = v11;
      *a6 = (CPartitionVerticalBlankScheduler *)((char *)v11 + 21960);
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23u);
  }
  return v13;
}
