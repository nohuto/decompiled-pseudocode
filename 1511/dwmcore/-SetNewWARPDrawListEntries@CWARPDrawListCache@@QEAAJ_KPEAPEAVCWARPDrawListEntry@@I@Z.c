/*
 * XREFs of ?SetNewWARPDrawListEntries@CWARPDrawListCache@@QEAAJ_KPEAPEAVCWARPDrawListEntry@@I@Z @ 0x180117C98
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWARPDrawListCache::SetNewWARPDrawListEntries(
        CWARPDrawListCache *this,
        __int64 a2,
        struct CWARPDrawListEntry **a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r8

  v6 = 0;
  v7 = 8LL;
  if ( !is_mul_ok(1uLL, 8uLL) )
    v7 = -1LL;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   v7);
  *((_QWORD *)this + 2) = v8;
  if ( v8 )
  {
    v9 = 0;
    *v8 = *a3;
    *((_DWORD *)this + 6) = 1;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v9);
      if ( v10 )
        _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      ++v9;
    }
    while ( v9 < *((_DWORD *)this + 6) );
    *((_QWORD *)this + 4) = a2;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12Eu);
  }
  return v6;
}
