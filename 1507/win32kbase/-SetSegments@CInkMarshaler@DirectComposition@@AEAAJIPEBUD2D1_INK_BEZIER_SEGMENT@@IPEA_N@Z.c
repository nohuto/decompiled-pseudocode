/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D5FBC
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D5DF0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0028CB8 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00D54EC (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     SizeTAdd @ 0x1C00D60DC (SizeTAdd.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  size_t v5; // r12
  DirectComposition::CInkMarshaler *v6; // rdi
  unsigned int v7; // r14d
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  int v10; // esi
  size_t v11; // rbx
  char *v12; // r15
  size_t v13; // rax
  int v14; // eax
  const struct D2D1_INK_BEZIER_SEGMENT *v15; // r14
  __int64 v16; // rdi
  size_t v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]

  v5 = *((_QWORD *)this + 16);
  v6 = this;
  v7 = a2;
  v19 = a2;
  v8 = a4;
  v9 = 0LL;
  if ( SizeTAdd(a2, a4, &v18) < 0 )
    return (unsigned int)-1073741811;
  v11 = v18;
  v12 = (char *)v6 + 96;
  v13 = *((_QWORD *)v6 + 16);
  v10 = 0;
  if ( v5 > v18 )
    v11 = v5;
  if ( v11 >= v13 )
  {
    if ( v11 <= v13 )
      goto LABEL_10;
    v14 = DirectComposition::CDCompDynamicArrayBase::Grow(
            (DirectComposition::CInkMarshaler *)((char *)v6 + 96),
            v11 - v13,
            0x6B694344u);
  }
  else
  {
    v14 = DirectComposition::CDCompDynamicArrayBase::Shrink(
            (DirectComposition::CInkMarshaler *)((char *)v6 + 96),
            v13 - v11);
  }
  v10 = v14;
LABEL_10:
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      v15 = a3;
      v16 = v19;
      do
      {
        memmove((void *)(*((_QWORD *)v12 + 1) + *((_QWORD *)v12 + 5) * (v16 + v9++)), v15, *((_QWORD *)v12 + 5));
        v15 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)v15 + 36);
      }
      while ( v9 < v8 );
      v6 = this;
      v7 = a2;
    }
    if ( v11 != v5 )
      *((_DWORD *)v6 + 4) &= ~0x100u;
    if ( *((_DWORD *)v6 + 36) < v7 )
      v7 = *((_DWORD *)v6 + 36);
    *((_DWORD *)v6 + 36) = v7;
    *a5 = 1;
  }
  return (unsigned int)v10;
}
