/*
 * XREFs of ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x18010F858
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AAB54 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxddffff @ 0x180117324 (Template_xxddffff.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18011F0EC (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18011F440 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x180120FD4 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180121100 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180121160 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CComposition::MetaBitmapRenderTarget_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *a4)
{
  MagnifierCaptureBitsResponse *v5; // rdi
  unsigned int v9; // edx
  int v10; // r8d
  CMagnifierRenderTarget *Resource; // rax
  struct CResourceTable *v12; // rdx
  CMagnifierRenderTarget *v13; // rbp
  int v14; // ebx
  MagnifierCaptureBitsResponse *v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  int updated; // eax
  MagnifierCaptureBitsResponse *v20; // rax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  struct WICRect v25; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0LL;
  v25.X = 0;
  v25.Y = 0;
  v9 = *((_DWORD *)a4 + 1);
  v25.Width = *((_DWORD *)a4 + 2);
  v25.Height = *((_DWORD *)a4 + 3);
  if ( v9 && v9 < *((_DWORD *)a3 + 7) )
    v10 = *(_DWORD *)(v9 * *((_DWORD *)a3 + 6) + *((_QWORD *)a3 + 5));
  else
    v10 = 0;
  if ( v10 != 54
    || (Resource = (CMagnifierRenderTarget *)CResourceTable::GetResource((__int64)a3, v9, 0x36u), (v13 = Resource) == 0LL) )
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xABFu);
    return v16;
  }
  if ( (*((_BYTE *)a4 + 24) & 2) != 0 )
  {
    v14 = CMagnifierRenderTarget::StopSlicer(Resource);
    v15 = (MagnifierCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                            WPF::g_pProcessHeap,
                                            176LL);
    if ( v15 )
      v5 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(v15, this[5], v13, a2, &v25, *((_QWORD *)a4 + 2));
    if ( !v5 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xAD1u);
      return v16;
    }
    *((_DWORD *)v5 + 4) = 0;
    if ( v14 < 0 )
    {
      v18 = MagnifierCaptureBitsResponse::SendResponse(v5, v14);
      v16 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xADFu);
    }
    else
    {
      v17 = MagnifierCaptureBitsResponse::OnPresentComplete(v5);
      v16 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xADBu);
    }
  }
  else
  {
    *((_BYTE *)Resource + 328) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                Resource,
                v12,
                (const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *)((char *)a4 + 32));
    v16 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xAE9u);
    }
    else
    {
      *((_BYTE *)v13 + 241) = 1;
      *((_BYTE *)v13 + 240) = *((_BYTE *)a4 + 24) & 1;
      v20 = (MagnifierCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                              WPF::g_pProcessHeap,
                                              176LL);
      if ( v20 )
        v5 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
               v20,
               this[5],
               v13,
               a2,
               &v25,
               *((_QWORD *)a4 + 2));
      if ( !v5 )
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xAFBu);
        return v16;
      }
      *((_DWORD *)v5 + 4) = 0;
      v21 = CResponseItem::QueueResponse(v5);
      v16 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xB07u);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        Template_xxddffff(
          v23,
          v22,
          *((_QWORD *)v13 + 42),
          *((_QWORD *)a4 + 2),
          *((_DWORD *)a4 + 8),
          *((_DWORD *)a4 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 7)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 8)).m128_i8[0]);
      }
    }
  }
  if ( v5 )
    CMILRefCountBase::Release(v5);
  return v16;
}
