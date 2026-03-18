/*
 * XREFs of ?HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018FCDC
 * Callers:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1800103A0 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x18019161C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::HDRConvertToDecodeBitmap(CDxHandleBitmapRealization *this)
{
  unsigned int v2; // esi
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // rdi
  char v6; // bl
  int v7; // eax
  int v8; // esi
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+30h] [rbp-38h]
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+10h] BYREF
  char v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v2 = CCommonRegistryData::m_fEnableHighColor != 0 ? 0xFFFFFFB3 : 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 52) + 104LL) + 80LL))(
         *((_QWORD *)this + 52) + 104LL,
         &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v13 = 448;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 52) + 104LL) + 48LL))(
    *((_QWORD *)this + 52) + 104LL,
    &v16,
    &v15);
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(CDxHandleBitmapRealization *, char *))(*(_QWORD *)this + 96LL))(this, &v17);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 128LL))((char *)this + 112);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 48LL))((char *)this + 112);
  v14 = v6;
  v3 = CDecodeBitmap::EnsureTargetBitmap(*((_QWORD *)this + 45), v16, v15, v2 + 87, v7, *v5, v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    v13 = 457;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v13);
    return (unsigned int)v4;
  }
  v8 = *((_DWORD *)this + 43);
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 48LL))((char *)this + 112);
  v10 = *((_QWORD *)this + 45);
  v4 = 0;
  if ( !*(_BYTE *)(v10 + 237) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int))(**(_QWORD **)(v10 + 136) + 216LL))(
            *(_QWORD *)(v10 + 136),
            v18,
            v16,
            v15,
            v9,
            v8);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4Au);
    else
      *(_BYTE *)(v10 + 237) = 1;
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1CFu);
  return (unsigned int)v4;
}
