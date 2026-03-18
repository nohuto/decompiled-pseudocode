/*
 * XREFs of ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800FADE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800A5470 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     Template_xxddffff @ 0x1801019AC (Template_xxddffff.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x180108668 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801089C0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICImagingFactory@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18010A920 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICI.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18010AB20 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18010AB80 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CComposition::MetaBitmapRenderTarget_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *a4)
{
  unsigned int v8; // edx
  int v9; // r8d
  CMagnifierRenderTarget *Resource; // rax
  struct CResourceTable *v11; // rdx
  CMagnifierRenderTarget *v12; // rbp
  int v13; // r14d
  MagnifierCaptureBitsResponse *v14; // rax
  MagnifierCaptureBitsResponse *v15; // rdi
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  int updated; // eax
  MagnifierCaptureBitsResponse *v20; // rax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  struct WICRect v25; // [rsp+50h] [rbp-28h] BYREF

  v25.X = 0;
  v25.Y = 0;
  v8 = *((_DWORD *)a4 + 1);
  v25.Width = *((_DWORD *)a4 + 2);
  v25.Height = *((_DWORD *)a4 + 3);
  if ( v8 && v8 < *((_DWORD *)a3 + 7) )
    v9 = *(_DWORD *)(v8 * *((_DWORD *)a3 + 6) + *((_QWORD *)a3 + 5));
  else
    v9 = 0;
  if ( v9 != 53
    || (Resource = (CMagnifierRenderTarget *)CResourceTable::GetResource((__int64)a3, v8, 0x35u), (v12 = Resource) == 0LL) )
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xBF2u);
    return v16;
  }
  if ( (*((_BYTE *)a4 + 24) & 2) == 0 )
  {
    *((_BYTE *)Resource + 256) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                Resource,
                v11,
                (const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *)((char *)a4 + 32));
    v16 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xC1Du);
      return v16;
    }
    *((_BYTE *)v12 + 169) = 1;
    *((_BYTE *)v12 + 168) = *((_BYTE *)a4 + 24) & 1;
    v20 = (MagnifierCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                            WPF::g_pProcessHeap,
                                            216LL);
    if ( v20 )
      v15 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
              v20,
              this[5],
              v12,
              *((struct IWICImagingFactory **)this[2] + 8),
              a2,
              &v25,
              *((_QWORD *)a4 + 2));
    else
      v15 = 0LL;
    if ( !v15 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC30u);
      return v16;
    }
    *((_DWORD *)v15 + 4) = 0;
    v21 = CResponseItem::QueueResponse(v15);
    v16 = v21;
    if ( v21 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxddffff(
          v23,
          v22,
          *((_QWORD *)v12 + 33),
          *((_QWORD *)a4 + 2),
          *((_DWORD *)a4 + 8),
          *((_DWORD *)a4 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 7)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 8)).m128_i8[0]);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC3Cu);
    }
LABEL_30:
    CMILRefCountBase::Release(v15);
    return v16;
  }
  v13 = CMagnifierRenderTarget::StopSlicer(Resource);
  v14 = (MagnifierCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                          WPF::g_pProcessHeap,
                                          216LL);
  if ( v14 )
    v15 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
            v14,
            this[5],
            v12,
            *((struct IWICImagingFactory **)this[2] + 8),
            a2,
            &v25,
            *((_QWORD *)a4 + 2));
  else
    v15 = 0LL;
  if ( v15 )
  {
    *((_DWORD *)v15 + 4) = 0;
    if ( v13 < 0 )
    {
      v18 = MagnifierCaptureBitsResponse::SendResponse(v15, v13);
      v16 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC13u);
    }
    else
    {
      v17 = MagnifierCaptureBitsResponse::OnPresentComplete(v15);
      v16 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0Fu);
    }
    goto LABEL_30;
  }
  v16 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC05u);
  return v16;
}
