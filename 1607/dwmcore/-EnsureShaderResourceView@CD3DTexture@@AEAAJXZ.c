/*
 * XREFs of ?EnsureShaderResourceView@CD3DTexture@@AEAAJXZ @ 0x1801731C4
 * Callers:
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180173264 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::EnsureShaderResourceView(CD3DTexture *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 24LL))(this)
    && (v3 = *((_QWORD *)this + 16)) != 0 )
  {
    if ( !*((_QWORD *)this + 28) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 568LL);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, v3, 0LL);
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2E2u);
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x2DBu);
  }
  return v2;
}
