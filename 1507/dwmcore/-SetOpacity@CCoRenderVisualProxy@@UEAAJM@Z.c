/*
 * XREFs of ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x1800F5D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800349B4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetOpacity(CCoRenderVisualProxy *this, float a2)
{
  unsigned int v2; // ebx
  CBitmapOfDeviceBitmaps *v3; // rdi
  float v5; // xmm1_4
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  float v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = 0;
  v3 = 0LL;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v5 < 0.0000011920929 || *(_QWORD *)(*((_QWORD *)this + 3) + 408LL) )
    goto LABEL_10;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  v3 = (CBitmapOfDeviceBitmaps *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = v7;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 32) = 0;
    *(_QWORD *)v6 = &CEffectGroup::`vftable';
    *(_QWORD *)(v6 + 40) = 0x3FF0000000000000LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x139u);
    return v2;
  }
  CBitmapOfDeviceBitmaps::AddRef(v3);
  v8 = CVisual::SetEffect(*((struct CResource ***)this + 3), v3);
  v2 = v8;
  if ( v8 >= 0 )
  {
LABEL_10:
    v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 408LL);
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, float *))(*(_QWORD *)v9 + 80LL))(v9, 0LL, 17LL, &v12);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x143u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13Bu);
  }
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  return v2;
}
