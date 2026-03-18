/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801914C4
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleYUVBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180190C10 (-GetBitmapShaderResourceViewNoRef@CDxHandleYUVBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4Ster.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180190CB0 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180190A44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x18019161C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-28h]
  char v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 217;
    goto LABEL_11;
  }
  v4 = (_DWORD *)(*(__int64 (__fastcall **)(CDxHandleYUVBitmapRealization *, char *))(*(_QWORD *)this + 96LL))(
                   this,
                   &v10);
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 128LL))((char *)this + 112);
  v2 = CDecodeBitmap::EnsureTargetBitmap(
         *((_QWORD *)this + 45),
         *((unsigned int *)this + 55),
         *((unsigned int *)this + 56),
         87LL,
         3,
         *v4,
         v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 228;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, v8);
    return (unsigned int)v3;
  }
  v5 = *((_QWORD *)this + 45);
  v3 = 0;
  if ( !*(_BYTE *)(v5 + 237) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *, char *))(**(_QWORD **)(v5 + 136) + 208LL))(
           *(_QWORD *)(v5 + 136),
           *(_QWORD *)(*((_QWORD *)this + 53) + 128LL),
           *((unsigned int *)this + 68),
           *((unsigned int *)this + 43),
           (char *)this + 176,
           (char *)this + 228);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x30u);
    else
      *(_BYTE *)(v5 + 237) = 1;
  }
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xEAu);
  return (unsigned int)v3;
}
