/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleYUVBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180190C10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801914C4 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax

  *a5 = 0LL;
  v7 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)(a1 - 112));
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x118u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 248)
                                                                                           + 112LL)
                                                                               + 120LL))(
           *(_QWORD *)(a1 + 248) + 112LL,
           a2,
           a3,
           a4,
           a5);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x11Du);
  }
  return v8;
}
