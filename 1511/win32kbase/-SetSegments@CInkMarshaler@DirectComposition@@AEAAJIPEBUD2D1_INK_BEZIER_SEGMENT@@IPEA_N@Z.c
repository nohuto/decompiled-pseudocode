/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D7F70
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D7DA0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E328 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00D758C (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  unsigned __int64 v5; // r13
  DirectComposition::CInkMarshaler *v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned int v11; // r14d
  int v12; // eax
  const struct D2D1_INK_BEZIER_SEGMENT *v13; // r13
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]

  v5 = *((_QWORD *)this + 16);
  v6 = this;
  v7 = a4;
  v8 = a2;
  v15 = v5;
  v9 = a2 + a4;
  if ( v5 > v9 )
    v9 = *((_QWORD *)this + 16);
  v10 = 0LL;
  v11 = 0;
  if ( v9 < v5 )
  {
    v12 = DirectComposition::CDCompDynamicArrayBase::Shrink(
            (DirectComposition::CInkMarshaler *)((char *)this + 96),
            v5 - v9);
    goto LABEL_7;
  }
  if ( v9 > v5 )
  {
    v12 = DirectComposition::CDCompDynamicArrayBase::Grow(
            (DirectComposition::CInkMarshaler *)((char *)this + 96),
            v9 - v5,
            0x6B694344u);
LABEL_7:
    v11 = v12;
    if ( v12 < 0 )
      return v11;
  }
  if ( v7 )
  {
    v13 = a3;
    do
    {
      memmove((void *)(*((_QWORD *)v6 + 13) + *((_QWORD *)v6 + 17) * (v8 + v10++)), v13, *((_QWORD *)v6 + 17));
      v13 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)v13 + 36);
    }
    while ( v10 < v7 );
    v6 = this;
    v5 = v15;
  }
  if ( v9 != v5 )
    *((_DWORD *)v6 + 4) &= ~0x100u;
  if ( *((_DWORD *)v6 + 36) < (unsigned int)v8 )
    LODWORD(v8) = *((_DWORD *)v6 + 36);
  *((_DWORD *)v6 + 36) = v8;
  *a5 = 1;
  return v11;
}
