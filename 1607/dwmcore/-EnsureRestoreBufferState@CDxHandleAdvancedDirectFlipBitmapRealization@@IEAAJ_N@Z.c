/*
 * XREFs of ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x18018EEB4
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F6C8 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F7C4 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180112BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  __int64 *v4; // r9
  __int64 v5; // rax
  char v6; // r10
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int RenderTargetBitmapFromTexture; // eax
  int v12[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v13[8]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+80h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h]

  v1 = *((_QWORD *)this + 56);
  v2 = 0;
  v15 = 0LL;
  if ( v1 )
  {
    v12[0] = 87;
    v16 = 1LL;
    v12[1] = 3;
    GetPixelFormatColorSpace(87, (enum ColorSpace *)v13);
    v5 = *v4;
    v14 = 0LL;
    LOBYTE(v7) = v6;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 360))(v4, v7, &v15);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Du);
    }
    else
    {
      v9 = *((_QWORD *)this + 55);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        *((_QWORD *)this + 55) = 0LL;
      }
      RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                        (__int64)&qword_1801F0018,
                                        v16,
                                        0LL,
                                        (__int64)v12,
                                        (struct _GUID *)this + 2,
                                        *(struct _LUID *)((char *)this + 264),
                                        *((_DWORD *)this + 106),
                                        v15,
                                        (_QWORD *)this + 55);
      v2 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x198u);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v2;
}
