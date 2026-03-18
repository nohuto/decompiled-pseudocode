/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004BD28
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180049B50 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004BE4C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18004BFC8 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  void *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rax
  void (*v12)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  CDataStreamWriter **v14; // rcx
  CDataStreamWriter *v15; // rax

  v2 = 0;
  v5 = a2 + 36;
  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  v7 = a2 + 36LL;
  if ( v6 == WPF::ProcessHeapImpl::Alloc )
    v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
  else
    v8 = (_QWORD *)v6(WPF::g_pProcessHeap, v7);
  v9 = v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    *v8 = &CDataStreamBlock::`vftable';
    *((_DWORD *)v8 + 6) = a2;
    *((_DWORD *)v8 + 7) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = *((_DWORD *)this + 6);
    if ( v10 + v5 < v10 )
    {
      *((_DWORD *)this + 6) = -1;
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1EFu);
    }
    else
    {
      *((_DWORD *)this + 6) = v10 + v5;
      v11 = *((_QWORD *)this + 2);
      if ( v11 )
      {
        v14 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        v15 = (CDataStreamWriter *)(v11 + 8);
        if ( *v14 != this )
          __fastfail(3u);
        *(_QWORD *)v15 = this;
        *((_QWORD *)v15 + 1) = v14;
        *v14 = v15;
        *((_QWORD *)this + 1) = v15;
      }
      *((_QWORD *)this + 2) = v9;
      v9 = 0LL;
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1ECu);
  }
  v12 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v12 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v9);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v12)(WPF::g_pProcessHeap, v9);
  return v2;
}
