/*
 * XREFs of ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180033320
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18003322C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18001B890 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180035098 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x180132090 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@@Z @ 0x180143AF0 (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTarget.c)
 */

__int64 __fastcall CCachedVisualImage::CreateNewRenderTarget(
        CComposition **a1,
        struct _LUID a2,
        int a3,
        int a4,
        int a5,
        struct MilRectF *a6,
        CCachedVisualImage::RenderTargetBitmapInfo **a7)
{
  unsigned int v7; // ebx
  struct CRenderTargetBitmap *v8; // rdi
  bool v11; // cf
  CComposition *v12; // rbx
  char v13; // al
  struct _LUID v14; // rdx
  int RenderTargetBitmap; // eax
  int v16; // eax
  int v17; // eax
  struct CRenderTargetBitmap *v19; // [rsp+88h] [rbp-21h] BYREF
  struct IRenderTargetBitmap *v20; // [rsp+90h] [rbp-19h] BYREF
  int v21[2]; // [rsp+98h] [rbp-11h] BYREF
  int v22; // [rsp+A0h] [rbp-9h]
  _DWORD v23[4]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+Fh]

  v7 = 0;
  v20 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  *a7 = 0LL;
  if ( !a4 || !a5 )
    return v7;
  CCachedVisualImage::ChoosePixelFormat(a1);
  v23[0] = *((_DWORD *)a1 + 51);
  v11 = *((_DWORD *)a1 + 52) != 0;
  v22 = 23;
  v23[2] = *((_DWORD *)a1 + 53);
  v24 = 0LL;
  v12 = a1[4];
  *(_QWORD *)v21 = "DWM Cached Visual Image";
  v23[1] = v11 ? 1 : 3;
  v13 = CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, a2);
  RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                         (int)&qword_1801F0018,
                         (int)v21,
                         a4,
                         a5,
                         1LL,
                         0,
                         (__int64)v23,
                         1,
                         (struct _GUID *)((char *)v12 + 252),
                         v14,
                         a3,
                         v13,
                         0,
                         1,
                         (CD3DDeviceManager *)&v20);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x456u);
    goto LABEL_11;
  }
  v16 = CRenderTargetBitmap::Create(v20, &v19);
  v7 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x459u);
    goto LABEL_9;
  }
  v17 = DynArrayImpl<1>::AddMultiple(a1 + 29, 48LL, 1LL, a7);
  v7 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x45Eu);
LABEL_9:
    v8 = v19;
    goto LABEL_11;
  }
  v8 = v19;
  CCachedVisualImage::RenderTargetBitmapInfo::Construct(*a7, a6, (struct CCachedVisualImage *)a1, v19);
LABEL_11:
  if ( v8 )
    (*(void (__fastcall **)(struct CRenderTargetBitmap *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v20 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v20 + 16LL))(v20);
  return v7;
}
