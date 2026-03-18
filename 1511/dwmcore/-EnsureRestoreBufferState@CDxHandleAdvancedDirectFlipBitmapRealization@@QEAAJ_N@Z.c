/*
 * XREFs of ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18015D4C0
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015D608 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DD38 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DE28 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800FEAA0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        char a2)
{
  __int64 *v2; // r14
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  int RenderTargetBitmapFromTexture; // eax
  int v12[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v13[8]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+40h]

  v2 = (__int64 *)*((_QWORD *)this + 61);
  v3 = 0;
  v15 = 0LL;
  if ( v2 )
  {
    v12[0] = 87;
    v16 = 1LL;
    v12[1] = 3;
    GetPixelFormatColorSpace(87, (enum ColorSpace *)v13);
    v6 = *v2;
    v14 = 0LL;
    LOBYTE(v7) = a2;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v6 + 344))(v2, v7, &v15);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)this + 60);
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 60));
        *((_QWORD *)this + 60) = 0LL;
      }
      RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                        (__int64)&qword_1801A3D78,
                                        v16,
                                        0LL,
                                        (__int64)v12,
                                        (struct _GUID *)this + 2,
                                        *(struct _LUID *)((char *)this + 312),
                                        *((_DWORD *)this + 116),
                                        v15,
                                        (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this + 480));
      v3 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x18Bu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x180u);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v3;
}
