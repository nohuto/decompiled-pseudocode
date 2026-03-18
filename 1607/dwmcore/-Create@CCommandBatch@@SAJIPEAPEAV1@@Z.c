/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0
 * Callers:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800477B4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18004A3B0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180043D84 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004BD28 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  void *(*v3)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CCommandBatch *v4; // rax
  CCommandBatch *v5; // rbx
  int NewBlock; // eax
  int v7; // edi

  v3 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v3 == WPF::ProcessHeapImpl::AllocClear )
    v4 = (CCommandBatch *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x38uLL);
  else
    v4 = (CCommandBatch *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v3)(WPF::g_pProcessHeap, 56LL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = v4;
    *(_QWORD *)v4 = v4;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 12) = 8;
    NewBlock = CDataStreamWriter::AllocateNewBlock(v4, 0x1000u);
    v7 = NewBlock;
    if ( NewBlock < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x142u);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x28u);
      CCommandBatch::`scalar deleting destructor'(v5);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x26u);
  }
  return (unsigned int)v7;
}
