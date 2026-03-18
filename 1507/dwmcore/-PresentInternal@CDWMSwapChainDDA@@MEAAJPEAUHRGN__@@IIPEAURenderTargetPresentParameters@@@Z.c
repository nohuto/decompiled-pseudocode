/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18013C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x180005874 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18008F0B0 (-GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180134640 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CDWMSwapChainDDA::PresentInternal(CDWMSwapChainDDA *this, HRGN a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rcx
  char *v7; // r13
  struct _RGNDATA *v8; // r15
  DWORD nCount; // r14d
  int v10; // ebx
  _DWORD *v11; // rax
  int Buffer; // eax
  unsigned int *v13; // r8
  unsigned int v14; // esi
  int v15; // eax
  HRGN v16; // rcx
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // r12d
  __int64 v21; // r9
  __int128 v22; // xmm0
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rcx
  struct DXGI_SCROLL_RECT *v26; // rax
  int v27; // eax
  int v28; // r14d
  int v29; // eax
  unsigned int v32; // [rsp+54h] [rbp-4Dh]
  struct ID3D11Texture2D *v34; // [rsp+60h] [rbp-41h] BYREF
  struct DXGI_SCROLL_RECT *v35[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v36; // [rsp+78h] [rbp-29h]
  unsigned int v37; // [rsp+80h] [rbp-21h]
  struct _RGNDATA *v38; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v39; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v40[24]; // [rsp+98h] [rbp-9h] BYREF

  v5 = *((unsigned int *)this + 62);
  v34 = 0LL;
  v7 = 0LL;
  v38 = 0LL;
  v8 = 0LL;
  v32 = 0;
  nCount = 0;
  v10 = 0;
  if ( (_DWORD)v5 )
  {
    v11 = (_DWORD *)*((_QWORD *)this + 28);
    do
    {
      if ( *v11 == 1 )
        ++v10;
      v11 += 12;
      --v5;
    }
    while ( v5 );
  }
  Buffer = CDWMSwapChain::GetBuffer(this, 0, &v39, &v34);
  v14 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0xB6u);
    goto LABEL_38;
  }
  if ( g_LockAndReadDDATarget )
    CD3DDeviceLevel1::ReadTexture(*((CD3DDeviceLevel1 **)this + 52), v34);
  if ( !*((_QWORD *)this + 37) )
  {
    v15 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 120LL),
            0LL,
            a3,
            a4,
            0,
            0LL,
            0,
            0LL,
            0LL,
            0);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBFu);
LABEL_34:
    if ( v14 == 142213121 )
      v14 = 0;
    goto LABEL_36;
  }
  v16 = (HRGN)*((_QWORD *)this + 26);
  if ( v16 )
  {
    HrgnToRgnData(v16, &v38, v13);
    v8 = v38;
    if ( v38 )
    {
      if ( v38->rdh.nCount )
      {
        nCount = v38->rdh.nCount;
        v7 = v38->Buffer;
        v32 = nCount;
      }
    }
  }
  if ( !v10 )
  {
    v17 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 120LL),
            *((struct IDXGISwapChainDWM1 **)this + 37),
            a3,
            a4,
            nCount,
            (const struct tagRECT *)v7,
            0,
            0LL,
            0LL,
            0);
    v14 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE6u);
    goto LABEL_34;
  }
  v18 = 0;
  v19 = 0;
  v37 = 0;
  v20 = 0;
  v36 = 0LL;
  *(_OWORD *)v35 = 0LL;
  if ( !*((_DWORD *)this + 62) )
  {
LABEL_31:
    v29 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 120LL),
            *((struct IDXGISwapChainDWM1 **)this + 37),
            a3,
            a4,
            v32,
            (const struct tagRECT *)v7,
            v18,
            v35[0],
            0LL,
            0);
    v14 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x100u);
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)v35);
    goto LABEL_34;
  }
  while ( 1 )
  {
    v21 = *((_QWORD *)this + 28);
    if ( *(_DWORD *)(v21 + 48LL * v20) != 1 )
      goto LABEL_30;
    *(_QWORD *)v40 = *(_QWORD *)(v21 + 48LL * v20 + 32);
    v22 = *(_OWORD *)(v21 + 48LL * v20 + 16);
    v23 = v18 + 1;
    *(_OWORD *)&v40[8] = v22;
    if ( v18 + 1 < v18 )
      break;
    if ( v23 > v19 )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v35, 0x18u, 1, v40);
      v28 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      v14 = v28;
      if ( v28 < 0 )
        goto LABEL_42;
      v18 = v37;
      v19 = HIDWORD(v36);
    }
    else
    {
      v24 = v18++;
      v37 = v23;
      v25 = 3 * v24;
      v26 = v35[0];
      *(_OWORD *)((char *)v35[0] + 8 * v25) = *(_OWORD *)v40;
      *((_QWORD *)v26 + v25 + 2) = *(_QWORD *)&v40[16];
    }
LABEL_30:
    if ( ++v20 >= *((_DWORD *)this + 62) )
      goto LABEL_31;
  }
  v28 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v14 = -2147024362;
LABEL_42:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xF2u);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)v35);
LABEL_36:
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
LABEL_38:
  if ( v34 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v34->lpVtbl->Release)(v34);
  return v14;
}
