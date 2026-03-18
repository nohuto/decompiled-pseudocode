/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180143E40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180143BD8 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]
  unsigned int v14; // [rsp+60h] [rbp+18h]

  v14 = a3;
  v13 = a2;
  v5 = a5;
  v12 = 0LL;
  *a5 = 0LL;
  v7 = CCachedVisualImage::EnsureRenderTargetBitmap((__m128i *)(a1 - 136), a2, a3, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, v7, 0x6A4u);
  }
  else
  {
    if ( !v12 )
      return v9;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(v12 + 112) + 120LL))(
            v12 + 112,
            v13,
            v14,
            a4,
            v5);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, v10, 0x6AFu);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
