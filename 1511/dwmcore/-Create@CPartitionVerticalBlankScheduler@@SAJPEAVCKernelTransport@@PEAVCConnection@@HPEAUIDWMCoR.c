/*
 * XREFs of ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800B4508
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A3DE8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180090F20 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRende.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800FF678 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
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
  int v13; // esi
  HANDLE Thread; // rax
  struct _DWM_TIMING_INFO_EX *v15; // rdx
  unsigned int v16; // edi

  v10 = (CPartitionVerticalBlankScheduler *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                              WPF::g_pProcessHeap,
                                              30112LL);
  if ( v10 )
    v11 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v10, a1, a2, a4);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23u);
    return v16;
  }
  *((_QWORD *)v11 + 12) = *(_QWORD *)(*((_QWORD *)v11 + 17) + 8LL);
  v12 = CPartitionVerticalBlankScheduler::Reinitialize(v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD8u);
  }
  else
  {
    Thread = CreateThread(0LL, 0LL, CPartitionThread::ThreadMain, v11, 0, (LPDWORD)v11 + 4);
    *((_QWORD *)v11 + 1) = Thread;
    if ( Thread )
    {
      SetThreadPriority(Thread, nPriority);
      v15 = (CPartitionVerticalBlankScheduler *)((char *)v11 + 22336);
      v16 = 0;
      *a5 = v11;
      v11 = 0LL;
      *a6 = v15;
      goto LABEL_7;
    }
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xDDu);
  }
  v16 = v13;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x24u);
LABEL_7:
  if ( v11 )
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v11, (unsigned int)v15);
  return v16;
}
