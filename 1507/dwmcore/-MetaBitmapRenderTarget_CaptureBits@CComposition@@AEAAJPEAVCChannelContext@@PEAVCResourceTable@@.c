/*
 * XREFs of ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800E2B0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180061FB4 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xxddffff @ 0x1800E3F7C (Template_xxddffff.c)
 *     ?AddRenderParameter@COffScreenRenderTarget@@QEAAJPEAUMilVisualRenderParameter@@@Z @ 0x1800EBED8 (-AddRenderParameter@COffScreenRenderTarget@@QEAAJPEAUMilVisualRenderParameter@@@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1800ED010 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1800EDBD0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICImagingFactory@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1800F0BC4 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICI.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1800F0DD0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1800F0E30 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CComposition::MetaBitmapRenderTarget_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *a4)
{
  unsigned int v8; // edx
  __int64 v9; // r8
  COffScreenRenderTarget *Resource; // rax
  struct CResourceTable *v11; // rdx
  COffScreenRenderTarget *v12; // rbp
  int v13; // r14d
  MagnifierCaptureBitsResponse *v14; // rax
  MagnifierCaptureBitsResponse *v15; // rdi
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  int updated; // eax
  int v20; // r9d
  bool v21; // zf
  MagnifierCaptureBitsResponse *v22; // rax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int v27; // [rsp+20h] [rbp-98h]
  struct WICRect v28; // [rsp+50h] [rbp-68h] BYREF
  _DWORD v29[4]; // [rsp+60h] [rbp-58h] BYREF
  int v30; // [rsp+70h] [rbp-48h]

  v28.X = 0;
  v28.Y = 0;
  v8 = *((_DWORD *)a4 + 1);
  v28.Width = *((_DWORD *)a4 + 2);
  v28.Height = *((_DWORD *)a4 + 3);
  if ( v8 && v8 < *((_DWORD *)a3 + 7) )
    v9 = *(unsigned int *)(v8 * *((_DWORD *)a3 + 6) + *((_QWORD *)a3 + 5));
  else
    v9 = 0LL;
  if ( (_DWORD)v9 != 49
    || (Resource = (COffScreenRenderTarget *)CResourceTable::GetResource((__int64)a3, v8, v9), (v12 = Resource) == 0LL) )
  {
    v16 = -2003303421;
    v27 = 2962;
    v20 = -2003303421;
    goto LABEL_38;
  }
  if ( (*((_BYTE *)a4 + 24) & 2) == 0 )
  {
    *((_BYTE *)Resource + 280) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                Resource,
                v11,
                (const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *)((char *)a4 + 32));
    v16 = updated;
    if ( updated < 0 )
    {
      v27 = 3007;
LABEL_20:
      v20 = updated;
LABEL_38:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v27);
      return v16;
    }
    v21 = (*((_BYTE *)a4 + 24) & 1) == 0;
    v29[0] = 2;
    if ( v21 )
    {
      v30 = 1;
      updated = COffScreenRenderTarget::AddRenderParameter(v12, (struct MilVisualRenderParameter *)v29);
      v16 = updated;
      if ( updated < 0 )
      {
        v27 = 3021;
        goto LABEL_20;
      }
    }
    else
    {
      v30 = 0;
      updated = COffScreenRenderTarget::AddRenderParameter(v12, (struct MilVisualRenderParameter *)v29);
      v16 = updated;
      if ( updated < 0 )
      {
        v27 = 3016;
        goto LABEL_20;
      }
    }
    v22 = (MagnifierCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                            WPF::g_pProcessHeap,
                                            216LL);
    if ( v22 )
      v15 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
              v22,
              this[5],
              v12,
              *((struct IWICImagingFactory **)this[2] + 8),
              a2,
              &v28,
              *((_QWORD *)a4 + 2));
    else
      v15 = 0LL;
    if ( !v15 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBD9u);
      return v16;
    }
    *((_DWORD *)v15 + 4) = 0;
    v23 = CResponseItem::QueueResponse(v15);
    v16 = v23;
    if ( v23 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxddffff(
          v25,
          v24,
          *((_QWORD *)v12 + 36),
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xBE5u);
    }
LABEL_36:
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
            &v28,
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xBB3u);
    }
    else
    {
      v17 = MagnifierCaptureBitsResponse::OnPresentComplete(v15);
      v16 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xBAFu);
    }
    goto LABEL_36;
  }
  v16 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBA5u);
  return v16;
}
