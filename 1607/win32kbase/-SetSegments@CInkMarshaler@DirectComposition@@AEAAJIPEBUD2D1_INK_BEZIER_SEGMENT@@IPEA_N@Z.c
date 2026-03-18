/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00E57E0
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00E5630 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00E4D28 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     SizeTAdd @ 0x1C00E58DC (SizeTAdd.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  size_t v5; // r15
  unsigned int v6; // edi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  char *v12; // rdi
  bool *v13; // rax
  __int64 v15; // [rsp+20h] [rbp-58h]
  size_t v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+10h]
  void *Src; // [rsp+90h] [rbp+18h]
  int v19; // [rsp+98h] [rbp+20h]

  Src = a3;
  v17 = a2;
  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v8 = a4;
  v15 = a2;
  v9 = 0LL;
  if ( SizeTAdd(a2, a4, &v16) >= 0 )
  {
    v11 = v16;
    if ( v5 > v16 )
      v11 = v5;
    v19 = DirectComposition::CDCompDynamicArrayBase::SetCount(
            (DirectComposition::CInkMarshaler *)((char *)this + 96),
            v11);
    v10 = v19;
    if ( v19 >= 0 )
    {
      if ( v8 )
      {
        v12 = (char *)Src;
        do
        {
          memmove((void *)(*((_QWORD *)this + 13) + *((_QWORD *)this + 17) * (v15 + v9++)), v12, *((_QWORD *)this + 17));
          v12 += 36;
        }
        while ( v9 < v8 );
        v6 = v17;
        v10 = v19;
      }
      if ( v11 != v5 )
        *((_DWORD *)this + 4) &= ~0x80u;
      if ( *((_DWORD *)this + 36) < v6 )
        v6 = *((_DWORD *)this + 36);
      v13 = a5;
      *((_DWORD *)this + 36) = v6;
      *v13 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
