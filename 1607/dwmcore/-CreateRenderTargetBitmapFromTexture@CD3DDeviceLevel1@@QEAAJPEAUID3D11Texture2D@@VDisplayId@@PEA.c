/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18017378C
 * Callers:
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180173B08 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18017B70C (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  int v5; // eax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0LL;
  *a5 = 0LL;
  v5 = CHwTextureRenderTarget::CreateFromTexture(a1, a3, a4, a2, v10);
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v10[0];
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( IsOOM(v5) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x595u);
  }
  else
  {
    v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v10[0])(
           v10[0],
           &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
           a5);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( IsOOM(v8) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x598u);
    }
  }
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
  return v7;
}
