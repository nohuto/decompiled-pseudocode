/*
 * XREFs of ?EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1800FECE8
 * Callers:
 *     ?EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1801039B8 (-EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDraw.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CWARPDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800FEC38 (-Create@CWARPDrawListCache@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListCacheSet::EnsureWARPCacheNoRef(
        CDrawListCacheSet *this,
        const struct IRenderTarget *a2,
        struct CWARPDrawListCache **a3)
{
  unsigned int v3; // esi
  unsigned int v4; // r9d
  __int64 v8; // rcx
  struct CWARPDrawListCache *v9; // rcx
  struct CWARPDrawListCache *v10; // rbx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // edi
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  struct CWARPDrawListCache *v19; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v8 = *((_QWORD *)this + 4);
    while ( *(const struct IRenderTarget **)(v8 + 16LL * v4 + 8) != a2 )
    {
      if ( ++v4 >= *((_DWORD *)this + 14) )
        goto LABEL_5;
    }
    v9 = *(struct CWARPDrawListCache **)(v8 + 16LL * v4);
  }
  else
  {
LABEL_5:
    v9 = 0LL;
  }
  v10 = 0LL;
  v19 = 0LL;
  if ( v9 )
    goto LABEL_15;
  v11 = CWARPDrawListCache::Create(&v19);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D7u);
    v10 = v19;
    goto LABEL_16;
  }
  v10 = v19;
  v12 = (_QWORD *)((char *)this + 32);
  v13 = *((unsigned int *)this + 14);
  *((_QWORD *)&v18 + 1) = a2;
  *(_QWORD *)&v18 = v19;
  v14 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
  {
    v3 = 0;
    if ( v14 > *((_DWORD *)this + 13) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 0x10u, 1, &v18);
      v15 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      v3 = v15;
      if ( v15 < 0 )
        goto LABEL_22;
    }
    else
    {
      *(_OWORD *)(*v12 + 16 * v13) = v18;
      *((_DWORD *)this + 14) = v14;
    }
    v9 = v10;
    v10 = 0LL;
LABEL_15:
    *a3 = v9;
    goto LABEL_16;
  }
  v15 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_22:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1DCu);
LABEL_16:
  if ( v10 )
    CMILRefCountBase::Release(v10);
  return v3;
}
