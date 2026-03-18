/*
 * XREFs of ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1801258A8
 * Callers:
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x180125780 (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004FE84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CCoRenderContent@@QEAA@PEAVCComposition@@PEAXPEBV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180155394 (--0CCoRenderContent@@QEAA@PEAVCComposition@@PEAXPEBV-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPoin.c)
 */

__int64 __fastcall CCoRenderVisualProxy::Initialize(CCoRenderVisualProxy *this, struct CComposition *a2, void *a3)
{
  CVisual *v6; // rax
  CVisual *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax

  v6 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    552LL);
  if ( v6 )
    v7 = CVisual::CVisual(v6, a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x87u);
    return v8;
  }
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 8LL))(v7);
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         152LL);
  if ( v9 )
    v10 = CCoRenderContent::CCoRenderContent(v9, a2, a3, (char *)this + 32);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v7 + 232LL))(v7, v10);
    v8 = v11;
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 3) = v7;
      goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8Eu);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Bu);
  }
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_15:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
