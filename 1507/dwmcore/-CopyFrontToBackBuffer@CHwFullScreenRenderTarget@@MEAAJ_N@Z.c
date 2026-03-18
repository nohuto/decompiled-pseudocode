/*
 * XREFs of ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x1800436A0
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800434D0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@MEAAJ_N@Z @ 0x18013F870 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800435A0 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180043BF0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180134640 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 *     Template_xxdddddd @ 0x180134DAC (Template_xxdddddd.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBuffer(CHwFullScreenRenderTarget *this, char a2)
{
  int v3; // eax
  unsigned int v4; // esi
  struct _RGNDATA *v5; // r13
  struct _RGNDATA *v6; // r12
  _BOOL8 (__fastcall *v7)(CHwFullScreenRenderTarget *); // rbx
  bool v8; // al
  void *v9; // rcx
  _QWORD *v10; // rdi
  void (__fastcall *v12)(CHwFullScreenRenderTarget *, _QWORD, _QWORD, __int64 *); // rbx
  __int64 v13; // rcx
  unsigned int *v14; // r8
  HRGN v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // edi
  int v18; // eax
  DWORD v19; // eax
  char *Buffer; // rdx
  unsigned int v21; // r12d
  unsigned int v22; // r14d
  char *v23; // rcx
  CD3DDeviceLevel1 *v24; // rdx
  int v25; // r8d
  __int64 *v26; // rdi
  int v27; // esi
  __int64 v28; // r9
  __int64 v29; // rax
  void (__fastcall *v30)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD); // rbx
  HRGN v31; // rcx
  unsigned int v32; // r14d
  int v33; // eax
  DWORD v34; // eax
  char *v35; // rdx
  unsigned int v36; // r13d
  unsigned int v37; // r14d
  char *v38; // rcx
  CD3DDeviceLevel1 *v39; // rdx
  int v40; // r8d
  __int64 *v41; // rdi
  int v42; // esi
  __int64 v43; // r9
  __int64 v44; // rax
  void (__fastcall *v45)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD); // rbx
  void (__fastcall *v46)(WPF::ProcessHeapImpl *, void *); // rdi
  void (__fastcall *v47)(WPF::ProcessHeapImpl *, void *); // rdi
  void *v48; // rcx
  void (__fastcall ***v49)(_QWORD, _QWORD *); // r14
  char v50; // [rsp+58h] [rbp-B0h]
  unsigned int v51; // [rsp+5Ch] [rbp-ACh]
  unsigned int v52; // [rsp+5Ch] [rbp-ACh]
  DWORD v53; // [rsp+60h] [rbp-A8h]
  int v54; // [rsp+64h] [rbp-A4h]
  DWORD v55; // [rsp+68h] [rbp-A0h]
  unsigned int v56; // [rsp+6Ch] [rbp-9Ch]
  __int64 v57; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h]
  struct _RGNDATA *v59; // [rsp+80h] [rbp-88h] BYREF
  struct _RGNDATA *v60; // [rsp+88h] [rbp-80h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h]
  __int64 v62; // [rsp+98h] [rbp-70h]
  CD3DDeviceLevel1 *v63; // [rsp+A0h] [rbp-68h]
  char *v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  CD3DDeviceLevel1 *v66; // [rsp+B8h] [rbp-50h]
  char *v67; // [rsp+C0h] [rbp-48h]
  unsigned int v68; // [rsp+C8h] [rbp-40h]
  int v69; // [rsp+CCh] [rbp-3Ch]
  __int64 v70; // [rsp+D0h] [rbp-38h]
  _DWORD v71[6]; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v72[6]; // [rsp+F0h] [rbp-18h] BYREF

  v50 = a2;
  v54 = 0;
  v3 = *((_DWORD *)this + 78) & 0x408;
  v57 = 0LL;
  v59 = 0LL;
  v4 = 0;
  v60 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( v3 == 1032 )
  {
    v7 = *(_BOOL8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL);
    if ( v7 == CHwFullScreenRenderTarget::IsInDirectFlip )
      v8 = CHwFullScreenRenderTarget::IsInDirectFlip(this);
    else
      v8 = v7(this);
    if ( v8 || *((_DWORD *)this + 64) <= 1u || !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) )
      goto LABEL_8;
    v12 = *(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)this + 216LL);
    if ( (char *)v12 == (char *)CHwFullScreenRenderTarget::GetFrontBufferSurface )
      CHwFullScreenRenderTarget::GetFrontBufferSurface(this, 0LL, 0LL, &v57);
    else
      v12(this, 0LL, 0LL, &v57);
    if ( g_LockAndReadCopyOfSwapChainBuffers )
      CD3DDeviceLevel1::ReadTexture(*((CD3DDeviceLevel1 **)this + 20), *(struct ID3D11Texture2D **)(v57 + 136));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v13, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
    v15 = (HRGN)*((_QWORD *)this + 42);
    v16 = 0;
    v51 = 0;
    v17 = 0;
    v56 = 0;
    if ( v15 )
    {
      v18 = HrgnToRgnData(v15, &v59, v14);
      v54 = v18;
      v4 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x36Du);
        v5 = v59;
        goto LABEL_8;
      }
      v5 = v59;
      v19 = 0;
      v53 = 0;
      Buffer = v59->Buffer;
      if ( v59->rdh.nCount )
      {
        v21 = 0;
        do
        {
          v65 = *((_QWORD *)this + 21);
          v22 = *(_DWORD *)(v65 + 144);
          v23 = &Buffer[16 * v19];
          v24 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 20);
          v61 = *(_QWORD *)(v65 + 136);
          v25 = *((_DWORD *)v23 + 1);
          v26 = (__int64 *)*((_QWORD *)v24 + 69);
          v68 = *(_DWORD *)v23;
          v27 = *(_DWORD *)(v57 + 144);
          v71[0] = v68;
          v71[3] = *((_DWORD *)v23 + 2);
          v71[4] = *((_DWORD *)v23 + 3);
          v71[2] = 0;
          v71[1] = v25;
          v62 = v57;
          v28 = *(_QWORD *)(v57 + 136);
          v64 = v23;
          v71[5] = 1;
          v29 = *v26;
          v69 = v25;
          v63 = v24;
          v30 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD))(v29 + 920);
          v58 = v28;
          v30(v26, v61, v22, v68, v25, 0, v28, v27, v71, 0);
          if ( g_LockAndReadCopyOfTexture )
          {
            CD3DDeviceLevel1::ReadTexture(v63, *(struct ID3D11Texture2D **)(v65 + 136));
            CD3DDeviceLevel1::ReadTexture(v63, *(struct ID3D11Texture2D **)(v62 + 136));
          }
          ++v21;
          Buffer = v5->Buffer;
          v19 = v53 + 1;
          v53 = v19;
          v17 = (*((_DWORD *)v64 + 2) - *(_DWORD *)v64) * (*((_DWORD *)v64 + 3) - *((_DWORD *)v64 + 1)) + v56;
          v56 = v17;
        }
        while ( v19 < v5->rdh.nCount );
        v51 = v21;
        v6 = v60;
        v16 = v51;
      }
    }
    v31 = (HRGN)*((_QWORD *)this + 43);
    if ( !v31 )
    {
LABEL_40:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v31, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop, v16, v17);
      if ( g_LockAndReadCopyOfSwapChainBuffers )
        CD3DDeviceLevel1::ReadTexture(
          *((CD3DDeviceLevel1 **)this + 20),
          *(struct ID3D11Texture2D **)(*((_QWORD *)this + 21) + 136LL));
      v4 = v54;
      goto LABEL_8;
    }
    LODWORD(v65) = v16;
    v32 = v16;
    LODWORD(v58) = v17;
    v33 = HrgnToRgnData(v31, &v60, v14);
    v54 = v33;
    v4 = v33;
    if ( v33 >= 0 )
    {
      v6 = v60;
      v34 = 0;
      v55 = 0;
      v35 = v60->Buffer;
      if ( v60->rdh.nCount )
      {
        v36 = v51;
        do
        {
          v63 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 21);
          v37 = *((_DWORD *)v63 + 36);
          v38 = &v35[16 * v34];
          v39 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 20);
          v62 = *((_QWORD *)v63 + 17);
          v40 = *((_DWORD *)v38 + 1);
          v41 = (__int64 *)*((_QWORD *)v39 + 69);
          LODWORD(v64) = *(_DWORD *)v38;
          v42 = *(_DWORD *)(v57 + 144);
          v72[0] = (_DWORD)v64;
          v72[3] = *((_DWORD *)v38 + 2);
          v72[4] = *((_DWORD *)v38 + 3);
          v72[1] = v40;
          v72[2] = 0;
          v70 = v57;
          v43 = *(_QWORD *)(v57 + 136);
          v67 = v38;
          v72[5] = 1;
          v44 = *v41;
          HIDWORD(v64) = v40;
          v66 = v39;
          v45 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD))(v44 + 920);
          v61 = v43;
          v45(v41, v62, v37, (unsigned int)v64, v40, 0, v43, v42, v72, 0);
          if ( g_LockAndReadCopyOfTexture )
          {
            CD3DDeviceLevel1::ReadTexture(v66, *((struct ID3D11Texture2D **)v63 + 17));
            CD3DDeviceLevel1::ReadTexture(v66, *(struct ID3D11Texture2D **)(v70 + 136));
          }
          ++v36;
          v35 = v6->Buffer;
          v31 = (HRGN)(unsigned int)((*((_DWORD *)v67 + 2) - *(_DWORD *)v67)
                                   * (*((_DWORD *)v67 + 3) - *((_DWORD *)v67 + 1)));
          v34 = v55 + 1;
          v55 = v34;
          v17 = (_DWORD)v31 + v56;
          v56 += (unsigned int)v31;
        }
        while ( v34 < v6->rdh.nCount );
        v32 = v65;
        v52 = v36;
        v5 = v59;
        v16 = v52;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v31, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT, v16 - v32, v17 - (unsigned int)v58);
      goto LABEL_40;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x38Fu);
    v6 = v60;
LABEL_8:
    a2 = v50;
  }
  if ( *((_BYTE *)this + 329) )
  {
    v9 = (void *)*((_QWORD *)this + 43);
    if ( v9 && a2 )
    {
      DeleteObject(v9);
      *((_QWORD *)this + 43) = 0LL;
    }
  }
  else
  {
    v48 = (void *)*((_QWORD *)this + 42);
    if ( v48 && a2 )
    {
      DeleteObject(v48);
      *((_QWORD *)this + 42) = 0LL;
    }
  }
  if ( v5 )
  {
    v46 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v46 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
    else
      v46(WPF::g_pProcessHeap, v5);
  }
  if ( v6 )
  {
    v47 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v47 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      v47(WPF::g_pProcessHeap, v6);
  }
  v10 = (_QWORD *)v57;
  if ( v57 && _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 8), 0xFFFFFFFF) == 1 )
  {
    v49 = (void (__fastcall ***)(_QWORD, _QWORD *))v10[2];
    if ( v49 )
      (**v49)(v10[2], v10);
    else
      (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 16LL))(v10, 1LL);
  }
  return v4;
}
