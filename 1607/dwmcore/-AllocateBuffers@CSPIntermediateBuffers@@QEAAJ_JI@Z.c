/*
 * XREFs of ?AllocateBuffers@CSPIntermediateBuffers@@QEAAJ_JI@Z @ 0x180185190
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x18018525C (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSPIntermediateBuffers::AllocateBuffers(CSPIntermediateBuffers *this, __int64 a2, unsigned int a3)
{
  CSPIntermediateBuffers *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  SIZE_T v6; // rdx
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  v3 = this;
  v4 = 0;
  v5 = a3;
  if ( !this || !a3 || 0xFFFFFFFFFFFFFFFFuLL / a3 <= 0x30 )
  {
    v4 = -2147024809;
    goto LABEL_13;
  }
  v6 = 48LL * a3;
  v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v7 == WPF::ProcessHeapImpl::Alloc )
    v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v6);
  else
    v8 = v7(WPF::g_pProcessHeap, v6);
  *(_QWORD *)v3 = v8;
  if ( !v8 )
  {
    v4 = -2147024882;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x35u);
    return v4;
  }
  v9 = 16 * v5;
  v10 = (_QWORD *)((char *)v3 + 8);
  v11 = 2LL;
  do
  {
    v12 = *(_QWORD *)v3;
    v3 = (CSPIntermediateBuffers *)((char *)v3 + 8);
    *v10++ = v9 + v12;
    --v11;
  }
  while ( v11 );
  return v4;
}
