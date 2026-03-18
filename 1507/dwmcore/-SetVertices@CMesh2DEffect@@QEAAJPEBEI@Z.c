/*
 * XREFs of ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x18015B78C
 * Callers:
 *     ??$BlobSetter@P8CMesh2DEffect@@EAAJPEBEI@Z$H?SetVertices@1@QEAAJ0I@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x18015AB90 (--$BlobSetter@P8CMesh2DEffect@@EAAJPEBEI@Z$H-SetVertices@1@QEAAJ0I@ZA@UID2D1EffectImpl@@@@YAJPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x18015B004 (-EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z.c)
 */

__int64 __fastcall CMesh2DEffect::SetVertices(CMesh2DEffect *this, const unsigned __int8 *Src, size_t Size)
{
  size_t v3; // r14
  unsigned int v6; // esi
  int v7; // r9d
  __int64 v8; // rsi
  void *v9; // rax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]

  v3 = (unsigned int)Size;
  if ( (Size & 0x1F) != 0 )
  {
    v6 = -2147024809;
    v12 = 384;
LABEL_3:
    v7 = v6;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v12);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 41) = 0;
    return v6;
  }
  if ( *((_QWORD *)this + 21) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_DWORD *)this + 41) = (unsigned int)v3 >> 5;
  v8 = 32LL * ((unsigned int)v3 >> 5);
  if ( !is_mul_ok((unsigned int)v3 >> 5, 0x20uLL) )
    v8 = -1LL;
  v9 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 v8);
  *((_QWORD *)this + 21) = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v12 = 396;
    goto LABEL_3;
  }
  memcpy_0(v9, Src, v3);
  v10 = CMesh2DEffect::EnsureVertexBuffer(this, *((const struct CD3DVertexXYZDUV2 **)this + 21), *((_DWORD *)this + 41));
  v6 = v10;
  if ( v10 < 0 )
  {
    v12 = 407;
    v7 = v10;
    goto LABEL_12;
  }
  return v6;
}
