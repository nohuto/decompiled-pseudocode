/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180049B50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180043D84 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004BD28 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004BE4C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C0D0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, int a2, double a3, double a4, double a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v8; // ebx
  void *(*v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CCommandBatch *v10; // rax
  CCommandBatch *v11; // rsi
  int NewBlock; // eax
  int v13; // r14d
  int v14; // eax
  int v15; // esi
  _DWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  double v18; // [rsp+38h] [rbp-40h]
  _QWORD v19[2]; // [rsp+40h] [rbp-38h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v17[1] = a2;
  v8 = 0;
  v18 = a3;
  *(double *)v19 = a4;
  *(double *)&v19[1] = a5;
  v17[0] = 43;
  if ( *((_QWORD *)this + 21) )
    goto LABEL_10;
  v9 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = (CCommandBatch *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x38uLL);
  else
    v10 = (CCommandBatch *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v9)(WPF::g_pProcessHeap, 56LL);
  v11 = v10;
  if ( !v10 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x26u);
    v8 = -2147024882;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x11Du);
    goto LABEL_10;
  }
  *((_QWORD *)v10 + 1) = v10;
  *(_QWORD *)v10 = v10;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_DWORD *)v10 + 10) = 0;
  *((_DWORD *)v10 + 12) = 8;
  NewBlock = CDataStreamWriter::AllocateNewBlock(v10, 0x1000u);
  v13 = NewBlock;
  if ( NewBlock < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x142u);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x28u);
    CCommandBatch::`scalar deleting destructor'(v11);
  }
  else
  {
    *((_QWORD *)this + 21) = v11;
  }
  v8 = v13;
  if ( v13 < 0 )
    goto LABEL_23;
LABEL_10:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x102u);
  }
  else
  {
    v14 = CDataStreamWriter::EnsureSize(*((CDataStreamWriter **)this + 21), 0x24u);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x159u);
    v8 = v15;
    if ( v15 >= 0 )
    {
      CDataStreamWriter::BeginItem(*((CDataStreamWriter **)this + 21));
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 21), v17, 0x20u);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x107u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9Cu);
LABEL_15:
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7Au);
  else
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 21));
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v8;
}
