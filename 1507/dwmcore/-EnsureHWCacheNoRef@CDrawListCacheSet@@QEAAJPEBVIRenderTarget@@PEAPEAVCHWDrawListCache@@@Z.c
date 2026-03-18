/*
 * XREFs of ?EnsureHWCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DECD0
 * Callers:
 *     ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DCC64 (-EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawList.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHWDrawListCache@@SAJPEAPEAV1@@Z @ 0x180073378 (-Create@CHWDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawListCacheSet::EnsureHWCacheNoRef(
        CDrawListCacheSet *this,
        const struct IRenderTarget *a2,
        struct CHWDrawListCache **a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ecx
  __int64 v8; // r9
  struct CHWDrawListCache *v9; // rcx
  struct CHWDrawListCache *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // ebx
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  struct CHWDrawListCache *v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v8 = *(_QWORD *)this;
    while ( *(const struct IRenderTarget **)(v8 + 16LL * v5 + 8) != a2 )
    {
      if ( ++v5 >= *((_DWORD *)this + 6) )
        goto LABEL_5;
    }
    v9 = *(struct CHWDrawListCache **)(v8 + 16LL * v5);
  }
  else
  {
LABEL_5:
    v9 = 0LL;
  }
  v10 = 0LL;
  v18 = 0LL;
  if ( v9 )
    goto LABEL_15;
  v11 = CHWDrawListCache::Create(&v18);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1B4u);
    v10 = v18;
    goto LABEL_16;
  }
  v12 = *((unsigned int *)this + 6);
  v10 = v18;
  *((_QWORD *)&v17 + 1) = a2;
  *(_QWORD *)&v17 = v18;
  v13 = v12 + 1;
  if ( (int)v12 + 1 >= (unsigned int)v12 )
  {
    v4 = 0;
    if ( v13 > *((_DWORD *)this + 5) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, 1, &v17);
      v14 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      v4 = v14;
      if ( v14 < 0 )
        goto LABEL_22;
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)this + 16 * v12) = v17;
      *((_DWORD *)this + 6) = v13;
    }
    v9 = v10;
    v10 = 0LL;
LABEL_15:
    *a3 = v9;
    goto LABEL_16;
  }
  v14 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v4 = -2147024362;
LABEL_22:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1B9u);
LABEL_16:
  if ( v10 )
    (*(void (__fastcall **)(struct CHWDrawListCache *))(*(_QWORD *)v10 + 8LL))(v10);
  return v4;
}
