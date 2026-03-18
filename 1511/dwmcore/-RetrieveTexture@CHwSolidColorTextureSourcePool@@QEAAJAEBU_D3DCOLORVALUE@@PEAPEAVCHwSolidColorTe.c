/*
 * XREFs of ?RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTextureSource@@@Z @ 0x18015010C
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ @ 0x180150010 (-AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ.c)
 */

__int64 __fastcall CHwSolidColorTextureSourcePool::RetrieveTexture(
        CHwSolidColorTextureSourcePool *this,
        const struct _D3DCOLORVALUE *a2,
        struct CHwSolidColorTextureSource **a3)
{
  unsigned int v3; // edi
  int v7; // eax
  __int128 v8; // xmm0
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rdx

  v3 = 0;
  if ( *((_DWORD *)this + 10) < *((_DWORD *)this + 6)
    || (v7 = CHwSolidColorTextureSourcePool::AddTexture((struct CD3DDeviceLevel1 **)this), v3 = v7, v7 >= 0) )
  {
    v8 = *(_OWORD *)&a2->r;
    v9 = *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 10));
    *(_BYTE *)(v9 + 112) = 0;
    *(_OWORD *)(v9 + 116) = v8;
    v10 = *(volatile signed __int32 **)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 10));
    *a3 = (struct CHwSolidColorTextureSource *)v10;
    _InterlockedIncrement(v10 + 2);
    ++*((_DWORD *)this + 10);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x55u);
  }
  return v3;
}
