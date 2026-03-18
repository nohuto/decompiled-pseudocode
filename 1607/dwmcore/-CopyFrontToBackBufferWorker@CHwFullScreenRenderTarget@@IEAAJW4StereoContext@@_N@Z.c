/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007B468
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18007B450 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x18017F410 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18007B350 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18007B9B0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x18007EAA0 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(_DWORD *a1, unsigned int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // r14d
  struct _RGNDATA *v5; // rdi
  struct _RGNDATA *v6; // rsi
  _BOOL8 (__fastcall *v9)(CHwFullScreenRenderTarget *); // rax
  bool v10; // al
  void *v11; // rcx
  void (__fastcall *v13)(_DWORD *, _QWORD, _QWORD, CMILPoolResource **); // rax
  __int64 v14; // rcx
  unsigned int *v15; // r8
  HRGN v16; // rcx
  unsigned int v17; // r15d
  unsigned int v18; // r12d
  int v19; // eax
  unsigned int x; // esi
  char *Buffer; // r14
  CD3DDeviceLevel1 *v22; // rcx
  unsigned int v23; // r8d
  tagPOINT *v24; // r13
  HRGN v25; // rcx
  unsigned int v26; // r13d
  int v27; // eax
  unsigned int v28; // edi
  char *v29; // r14
  struct _RGNDATA *v30; // rcx
  unsigned int v31; // r8d
  tagPOINT *v32; // r13
  void (__fastcall *v33)(WPF::ProcessHeapImpl *, void *); // rax
  void (__fastcall *v34)(WPF::ProcessHeapImpl *, void *); // rax
  void *v35; // rcx
  struct _RGNDATA *v36; // [rsp+40h] [rbp-40h] BYREF
  CMILPoolResource *v37; // [rsp+48h] [rbp-38h] BYREF
  CD3DDeviceLevel1 *v38; // [rsp+50h] [rbp-30h]
  struct _RGNDATA *v39; // [rsp+58h] [rbp-28h] BYREF
  __int64 v40; // [rsp+60h] [rbp-20h]
  CMILPoolResource *v41; // [rsp+68h] [rbp-18h]
  CMILPoolResource *v42; // [rsp+70h] [rbp-10h]
  int v43; // [rsp+C0h] [rbp+40h]
  int v44; // [rsp+C0h] [rbp+40h]
  char v45; // [rsp+D0h] [rbp+50h]
  tagPOINT v46; // [rsp+D8h] [rbp+58h] BYREF

  v45 = a3;
  v3 = a1[80];
  v4 = 0;
  v37 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  if ( (v3 & 0x408) == 0x408 )
  {
    v9 = *(_BOOL8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)a1 + 264LL);
    if ( v9 == CHwFullScreenRenderTarget::IsInDirectFlip )
      v10 = CHwFullScreenRenderTarget::IsInDirectFlip((CHwFullScreenRenderTarget *)a1);
    else
      v10 = v9((CHwFullScreenRenderTarget *)a1);
    if ( v10 || a1[66] <= 1u || !*((_QWORD *)a1 + 43) && !*((_QWORD *)a1 + 44) )
      goto LABEL_8;
    v13 = *(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, CMILPoolResource **))(*(_QWORD *)a1 + 232LL);
    if ( (char *)v13 == (char *)CHwFullScreenRenderTarget::GetFrontBufferSurface )
      CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, 0LL, &v37);
    else
      v13(a1, a2, 0LL, &v37);
    if ( g_LockAndReadCopyOfSwapChainBuffers )
      CD3DDeviceLevel1::ReadTexture(*((CD3DDeviceLevel1 **)a1 + 23), *((struct ID3D11Texture2D **)v37 + 17));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v14, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
    v16 = (HRGN)*((_QWORD *)a1 + 43);
    v17 = 0;
    v18 = 0;
    if ( v16 )
    {
      v19 = HrgnToRgnData(v16, &v39, v15);
      v43 = v19;
      v4 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x3E9u);
        v5 = v39;
        goto LABEL_8;
      }
      v5 = v39;
      v46.x = 0;
      if ( v39->rdh.nCount )
      {
        x = v46.x;
        Buffer = v39->Buffer;
        do
        {
          v22 = (CD3DDeviceLevel1 *)*((_QWORD *)a1 + 23);
          v40 = *((_QWORD *)a1 + 21);
          v23 = *((_DWORD *)v37 + 36);
          v24 = (tagPOINT *)&Buffer[16 * x];
          v38 = v22;
          v41 = v37;
          v46 = *v24;
          CD3DDeviceLevel1::CopySubresourceRectInternal1(
            v22,
            *((struct ID3D11Resource **)v37 + 17),
            v23,
            (const struct tagRECT *)v24,
            *(struct ID3D11Resource **)(v40 + 136),
            *(_DWORD *)(v40 + 144),
            &v46,
            0);
          if ( g_LockAndReadCopyOfTexture )
          {
            CD3DDeviceLevel1::ReadTexture(v38, *(struct ID3D11Texture2D **)(v40 + 136));
            CD3DDeviceLevel1::ReadTexture(v38, *((struct ID3D11Texture2D **)v41 + 17));
          }
          ++v17;
          ++x;
          v18 += (v24[1].x - v24->x) * (v24[1].y - v24->y);
        }
        while ( x < v5->rdh.nCount );
        v6 = v36;
        v4 = v43;
      }
    }
    v25 = (HRGN)*((_QWORD *)a1 + 44);
    if ( !v25 )
    {
LABEL_40:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v25, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop, v17, v18);
      if ( g_LockAndReadCopyOfSwapChainBuffers )
        CD3DDeviceLevel1::ReadTexture(
          *((CD3DDeviceLevel1 **)a1 + 23),
          *(struct ID3D11Texture2D **)(*((_QWORD *)a1 + 21) + 136LL));
      goto LABEL_8;
    }
    LODWORD(v40) = v17;
    v26 = v17;
    LODWORD(v38) = v18;
    v27 = HrgnToRgnData(v25, &v36, v15);
    v44 = v27;
    v4 = v27;
    if ( v27 >= 0 )
    {
      v6 = v36;
      v46.x = 0;
      if ( v36->rdh.nCount )
      {
        v28 = v46.x;
        v29 = v36->Buffer;
        do
        {
          v30 = (struct _RGNDATA *)*((_QWORD *)a1 + 23);
          v41 = (CMILPoolResource *)*((_QWORD *)a1 + 21);
          v31 = *((_DWORD *)v37 + 36);
          v32 = (tagPOINT *)&v29[16 * v28];
          v36 = v30;
          v42 = v37;
          v46 = *v32;
          CD3DDeviceLevel1::CopySubresourceRectInternal1(
            (CD3DDeviceLevel1 *)v30,
            *((struct ID3D11Resource **)v37 + 17),
            v31,
            (const struct tagRECT *)v32,
            *((struct ID3D11Resource **)v41 + 17),
            *((_DWORD *)v41 + 36),
            &v46,
            0);
          if ( g_LockAndReadCopyOfTexture )
          {
            CD3DDeviceLevel1::ReadTexture((CD3DDeviceLevel1 *)v36, *((struct ID3D11Texture2D **)v41 + 17));
            CD3DDeviceLevel1::ReadTexture((CD3DDeviceLevel1 *)v36, *((struct ID3D11Texture2D **)v42 + 17));
          }
          ++v17;
          ++v28;
          v25 = (HRGN)(unsigned int)((v32[1].x - v32->x) * (v32[1].y - v32->y));
          v18 += (unsigned int)v25;
        }
        while ( v28 < v6->rdh.nCount );
        v5 = v39;
        v4 = v44;
        v26 = v40;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v25, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT, v17 - v26, v18 - (unsigned int)v38);
      goto LABEL_40;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x40Bu);
    v6 = v36;
LABEL_8:
    a3 = v45;
  }
  if ( a1[66] == 3 )
  {
    v11 = (void *)*((_QWORD *)a1 + 44);
    if ( v11 && a3 )
    {
      DeleteObject(v11);
      *((_QWORD *)a1 + 44) = 0LL;
    }
  }
  else
  {
    v35 = (void *)*((_QWORD *)a1 + 43);
    if ( v35 && a3 )
    {
      DeleteObject(v35);
      *((_QWORD *)a1 + 43) = 0LL;
    }
  }
  if ( v5 )
  {
    v33 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v33 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
    else
      v33(WPF::g_pProcessHeap, v5);
  }
  if ( v6 )
  {
    v34 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v34 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      v34(WPF::g_pProcessHeap, v6);
  }
  if ( v37 )
    CMILPoolResource::Release(v37);
  return v4;
}
