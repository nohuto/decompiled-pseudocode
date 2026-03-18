/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x18019161C
 * Callers:
 *     ?HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018FCDC (-HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801914C4 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18013289C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z @ 0x1801440E0 (-SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180175230 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        enum DXGI_ALPHA_MODE a5,
        int a6,
        char a7)
{
  char v7; // r12
  unsigned int v8; // edi
  __int64 v10; // rcx
  int v14; // eax
  int RenderTargetBitmap; // eax
  int v16; // eax
  struct _LUID v18; // [rsp+48h] [rbp-49h]
  int v19[2]; // [rsp+88h] [rbp-9h] BYREF
  int v20; // [rsp+90h] [rbp-1h]
  __int64 v21[3]; // [rsp+98h] [rbp+7h] BYREF
  struct IRenderTargetBitmap *v22; // [rsp+E0h] [rbp+4Fh] BYREF

  v7 = a7;
  v8 = 0;
  v22 = 0LL;
  v10 = *(_QWORD *)(a1 + 136);
  if ( v10
    && *(_DWORD *)(a1 + 224) == a2
    && *(_DWORD *)(a1 + 228) == a3
    && *(_DWORD *)(a1 + 232) == a4
    && *(_BYTE *)(a1 + 236) == a7 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 152LL))(v10, (unsigned int)a5);
    CRenderTargetBitmap::SetDisplayId(a1);
  }
  else
  {
    v14 = PixelFormatInfoFromDXGIFormatAndAlphaMode(a4, a5, (struct PixelFormatInfo *)v21);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x84u);
    }
    else
    {
      CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)a1);
      *(_DWORD *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 228) = 0;
      *(_QWORD *)v19 = "DWM Rendertarget (DecodeBitmap)";
      *(_BYTE *)(a1 + 237) = 0;
      v18 = *(struct _LUID *)(a1 + 216);
      v20 = 31;
      RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                             (__int64)&qword_1801F0018,
                             (__int64)v19,
                             a2,
                             a3,
                             1LL,
                             0,
                             (struct PixelFormatInfo *)v21,
                             0,
                             (struct _GUID *)(a1 + 32),
                             v18,
                             a6,
                             v7,
                             0,
                             1,
                             (void **)&v22);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x9Du);
      }
      else
      {
        v16 = CRenderTargetBitmap::Initialize(
                (CRenderTargetBitmap *)a1,
                (__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, __int64 *))v22);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA1u);
        }
        else
        {
          *(_DWORD *)(a1 + 224) = a2;
          *(_DWORD *)(a1 + 228) = a3;
          *(_DWORD *)(a1 + 232) = a4;
          *(_BYTE *)(a1 + 236) = v7;
        }
      }
    }
  }
  if ( v22 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
  return v8;
}
