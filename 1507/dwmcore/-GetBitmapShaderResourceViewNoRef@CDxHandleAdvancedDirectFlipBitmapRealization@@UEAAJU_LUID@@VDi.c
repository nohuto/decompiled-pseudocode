/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18014ED10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18001E810 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180124FDC (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014EB48 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        struct _LUID a2,
        int a3,
        __int64 a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // r14
  CDxHandleAdvancedDirectFlipBitmapRealization *v7; // rcx
  int BitmapShaderResourceViewNoRef; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int BitmapShaderResourceViewFromBitmapSourceNoRef; // eax
  _DWORD v14[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  struct _LUID v16; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  struct IBitmapSource *v21; // [rsp+A0h] [rbp+30h] BYREF
  struct _LUID v22; // [rsp+A8h] [rbp+38h]
  int v23; // [rsp+B0h] [rbp+40h]

  v23 = a3;
  v22 = a2;
  v5 = a5;
  v21 = 0LL;
  v7 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 112);
  *a5 = 0LL;
  if ( *((_QWORD *)v7 + 60) || *((_QWORD *)v7 + 61) )
  {
    v10 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v7);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(a1 + 368) + 176LL))(
              *(_QWORD *)(a1 + 368),
              &v21);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v15 = 0LL;
        v18 = 0;
        v20 = 0LL;
        v14[2] = 1;
        v16 = v22;
        v19 = 1;
        v17 = v23;
        v14[0] = 87;
        v14[1] = 3;
        BitmapShaderResourceViewFromBitmapSourceNoRef = GetBitmapShaderResourceViewFromBitmapSourceNoRef(
                                                          v21,
                                                          (const struct PixelFormatInfo *)v14,
                                                          (const struct BitmapSourceInfo *)&v16,
                                                          (const struct _GUID *)(a1 - 80),
                                                          v5);
        v9 = BitmapShaderResourceViewFromBitmapSourceNoRef;
        if ( BitmapShaderResourceViewFromBitmapSourceNoRef < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewFromBitmapSourceNoRef, 0x99u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x83u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x81u);
    }
  }
  else
  {
    BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(a1, a2, a3, a4, v5);
    v9 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0xA2u);
  }
  if ( v21 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v21 + 16LL))(v21);
  return v9;
}
