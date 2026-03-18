/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018F1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // rsi
  CDxHandleAdvancedDirectFlipBitmapRealization *v7; // rcx
  int BitmapShaderResourceViewNoRef; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int BitmapShaderResourceViewFromBitmapSourceNoRef; // eax
  _DWORD v14[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  struct IBitmapSource *v21; // [rsp+90h] [rbp+20h] BYREF
  __int64 v22; // [rsp+98h] [rbp+28h]
  unsigned int v23; // [rsp+A0h] [rbp+30h]

  v23 = a3;
  v22 = a2;
  v5 = a5;
  v21 = 0LL;
  v7 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 112);
  *a5 = 0LL;
  if ( *((_QWORD *)v7 + 55) || *((_QWORD *)v7 + 56) )
  {
    v10 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v7);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x92u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(a1 + 328) + 184LL))(
              *(_QWORD *)(a1 + 328),
              &v21);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x94u);
      }
      else
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewFromBitmapSourceNoRef, 0xA8u);
      }
    }
  }
  else
  {
    BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(a1, a2, a3, a4, v5);
    v9 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0xAFu);
  }
  if ( v21 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v21 + 16LL))(v21);
  return v9;
}
