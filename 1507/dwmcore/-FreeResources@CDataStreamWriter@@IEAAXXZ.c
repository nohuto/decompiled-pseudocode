/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18004F7F0
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x18004F448 (--1CRenderData@@MEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18004F964 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1800DEC28 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDataStreamWriter::FreeResources(CDataStreamWriter *this)
{
  CDataStreamWriter *v2; // rax
  void *v3; // rsi
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rbx
  __int64 v5; // rcx
  WPF::ProcessHeapImpl *v6; // rdi
  char *v7; // rsi
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rbp

  while ( 1 )
  {
    v2 = *(CDataStreamWriter **)this;
    if ( *(CDataStreamWriter **)this == this )
      break;
    v5 = *(_QWORD *)v2;
    if ( *((CDataStreamWriter **)v2 + 1) != this || *(CDataStreamWriter **)(v5 + 8) != v2 )
      __fastfail(3u);
    v6 = WPF::g_pProcessHeap;
    v7 = (char *)v2 - 8;
    *(_QWORD *)this = v5;
    *(_QWORD *)(v5 + 8) = this;
    v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)v6 + 32LL);
    if ( v8 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(v6, v7);
    else
      v8(v6, v7);
  }
  v3 = (void *)*((_QWORD *)this + 2);
  v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
  else
    v4(WPF::g_pProcessHeap, v3);
}
