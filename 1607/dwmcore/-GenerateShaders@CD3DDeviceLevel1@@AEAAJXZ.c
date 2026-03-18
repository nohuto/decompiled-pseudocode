/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F2F4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F5B8 (-EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  _UNKNOWN **v2; // r14
  unsigned int i; // esi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  _UNKNOWN **v7; // r14
  int v8; // eax
  unsigned int v9; // esi
  _UNKNOWN **v10; // r14
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax

  v2 = &CommonRenderingVertexShaders::g_rgShaders;
  for ( i = 0; i < 4; ++i )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 71) + 96LL))(
           *((_QWORD *)this + 71),
           *v2,
           *((int *)v2 + 2),
           0LL,
           (char *)this + 8 * i + 1096);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( IsOOM(v4) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x353u);
      return v5;
    }
    v2 += 2;
  }
  v6 = 0;
  v7 = &CommonRenderingPixelShaders::g_rgShaders;
  do
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 71) + 120LL))(
           *((_QWORD *)this + 71),
           *v7,
           *((int *)v7 + 2),
           0LL,
           (char *)this + 8 * v6 + 1128);
    v5 = v8;
    if ( v8 < 0 )
    {
      if ( IsOOM(v8) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x35Du);
      return v5;
    }
    ++v6;
    v7 += 2;
  }
  while ( v6 < 0xC );
  v9 = 0;
  v10 = &off_1801EAAD0;
  do
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 71) + 88LL))(
            *((_QWORD *)this + 71),
            *(v10 - 2),
            *((unsigned int *)v10 - 2),
            *v10,
            *((unsigned int *)v10 + 2),
            (char *)this + 8 * v9 + 1424);
    v5 = v11;
    if ( v11 < 0 )
    {
      if ( IsOOM(v11) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x368u);
      return v5;
    }
    ++v9;
    v10 += 4;
  }
  while ( v9 < 2 );
  v12 = 0LL;
  do
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 71) + 160LL))(
            *((_QWORD *)this + 71),
            &g_rgBlendModes[264 * (unsigned int)v12],
            (char *)this + 8 * v12 + 1440);
    v5 = v13;
    if ( v13 < 0 )
    {
      if ( IsOOM(v13) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x370u);
      return v5;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < 0x18 );
  v14 = 0LL;
  do
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 71) + 176LL))(
            *((_QWORD *)this + 71),
            &g_rgRasterizerModes[40 * v14],
            (char *)this + 8 * v14 + 1888);
    v5 = v15;
    if ( v15 < 0 )
    {
      if ( IsOOM(v15) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x378u);
      return v5;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( !(_DWORD)v14 );
  v16 = 0LL;
  while ( 1 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 71) + 168LL))(
            *((_QWORD *)this + 71),
            &g_rgDepthStencilModes[52 * (unsigned int)v16],
            (char *)this + 8 * v16 + 1896);
    v5 = v17;
    if ( v17 < 0 )
      break;
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= 4 )
    {
      v18 = CD3DDeviceLevel1::EnsureHDRConversionResources(this);
      v5 = v18;
      if ( v18 < 0 )
      {
        if ( IsOOM(v18) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x383u);
      }
      return v5;
    }
  }
  if ( IsOOM(v17) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x380u);
  return v5;
}
