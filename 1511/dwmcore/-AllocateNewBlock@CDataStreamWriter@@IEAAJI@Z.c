/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009FF2C
 * Callers:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800A006C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // ebx
  SIZE_T v5; // rbp
  LPVOID (__fastcall *v6)(WPF::ProcessHeapImpl *, SIZE_T); // r14
  _QWORD *v7; // rax
  void *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rax
  void (__fastcall *v11)(WPF::ProcessHeapImpl *, void *); // rbp
  CDataStreamWriter **v13; // rcx
  CDataStreamWriter *v14; // rax

  v2 = 0;
  v5 = a2 + 36LL;
  v6 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v6 == WPF::ProcessHeapImpl::Alloc )
    v7 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v5);
  else
    v7 = (_QWORD *)v6(WPF::g_pProcessHeap, v5);
  v8 = v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    v7[2] = 0LL;
    *v7 = &CDataStreamBlock::`vftable';
    *((_DWORD *)v7 + 6) = a2;
    *((_DWORD *)v7 + 7) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = *((_DWORD *)this + 6);
    if ( v9 + (unsigned int)v5 < v9 )
    {
      *((_DWORD *)this + 6) = -1;
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1EFu);
    }
    else
    {
      *((_DWORD *)this + 6) = v9 + v5;
      v10 = *((_QWORD *)this + 2);
      if ( v10 )
      {
        v13 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        v14 = (CDataStreamWriter *)(v10 + 8);
        *(_QWORD *)v14 = this;
        *((_QWORD *)v14 + 1) = v13;
        if ( *v13 != this )
          __fastfail(3u);
        *v13 = v14;
        *((_QWORD *)this + 1) = v14;
      }
      *((_QWORD *)this + 2) = v8;
      v8 = 0LL;
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1ECu);
  }
  v11 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v11 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
  else
    v11(WPF::g_pProcessHeap, v8);
  return v2;
}
