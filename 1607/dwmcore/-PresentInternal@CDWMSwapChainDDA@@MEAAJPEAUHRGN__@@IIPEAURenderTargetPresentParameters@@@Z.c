/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18017D200
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18007AA60 (-GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18010F29C (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CDWMSwapChainDDA::PresentInternal(CDWMSwapChainDDA *this, HRGN a2, unsigned int a3, unsigned int a4)
{
  struct _RGNDATA *v4; // r15
  DWORD nCount; // r14d
  __int64 v7; // rcx
  char *v8; // r13
  int v9; // edi
  _DWORD *v11; // rax
  int Buffer; // eax
  unsigned int *v13; // r8
  int v14; // ebx
  int v15; // eax
  HRGN v16; // rcx
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int128 v21; // xmm0
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct DXGI_SCROLL_RECT *v25; // rax
  int v26; // eax
  int v27; // eax
  unsigned int v30; // [rsp+54h] [rbp-4Dh]
  struct ID3D11Texture2D *v32; // [rsp+60h] [rbp-41h] BYREF
  struct DXGI_SCROLL_RECT *v33[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v34; // [rsp+78h] [rbp-29h]
  unsigned int v35; // [rsp+80h] [rbp-21h]
  struct _RGNDATA *v36; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v37; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v38[24]; // [rsp+98h] [rbp-9h] BYREF

  v32 = 0LL;
  v4 = 0LL;
  nCount = 0;
  v7 = *((unsigned int *)this + 62);
  v8 = 0LL;
  v9 = 0;
  v36 = 0LL;
  v30 = 0;
  if ( (_DWORD)v7 )
  {
    v11 = (_DWORD *)*((_QWORD *)this + 28);
    do
    {
      if ( *v11 == 1 )
        ++v9;
      v11 += 12;
      --v7;
    }
    while ( v7 );
  }
  Buffer = CDWMSwapChain::GetBuffer(this, 0LL, &v37, &v32);
  v14 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0xB6u);
    goto LABEL_38;
  }
  if ( g_LockAndReadDDATarget )
    CD3DDeviceLevel1::ReadTexture(*((CD3DDeviceLevel1 **)this + 52), v32);
  if ( *((_QWORD *)this + 37) )
  {
    v16 = (HRGN)*((_QWORD *)this + 26);
    if ( v16 )
    {
      HrgnToRgnData(v16, &v36, v13);
      v4 = v36;
      if ( v36 )
      {
        if ( v36->rdh.nCount )
        {
          nCount = v36->rdh.nCount;
          v8 = v36->Buffer;
          v30 = nCount;
        }
      }
    }
    if ( !v9 )
    {
      v17 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 128LL),
              *((struct IDXGISwapChainDWM1 **)this + 37),
              a3,
              a4,
              nCount,
              (const struct tagRECT *)v8,
              0,
              0LL,
              0LL,
              0);
      v14 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xECu);
      goto LABEL_34;
    }
    v34 = 0LL;
    v18 = 0;
    v35 = 0;
    v19 = 0;
    *(_OWORD *)v33 = 0LL;
    if ( !*((_DWORD *)this + 62) )
    {
LABEL_31:
      v27 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 128LL),
              *((struct IDXGISwapChainDWM1 **)this + 37),
              a3,
              a4,
              v30,
              (const struct tagRECT *)v8,
              v18,
              v33[0],
              0LL,
              0);
      v14 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x104u);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v33);
      goto LABEL_34;
    }
    while ( 1 )
    {
      v20 = *((_QWORD *)this + 28);
      if ( *(_DWORD *)(v20 + 48LL * v19) == 1 )
      {
        *(_QWORD *)v38 = *(_QWORD *)(v20 + 48LL * v19 + 32);
        v21 = *(_OWORD *)(v20 + 48LL * v19 + 16);
        v22 = v18 + 1;
        *(_OWORD *)&v38[8] = v21;
        if ( v18 + 1 >= v18 )
        {
          if ( v22 <= HIDWORD(v34) )
          {
            v23 = v18++;
            v35 = v22;
            v24 = 3 * v23;
            v25 = v33[0];
            *(_OWORD *)((char *)v33[0] + 8 * v24) = *(_OWORD *)v38;
            *((_QWORD *)v25 + v24 + 2) = *(_QWORD *)&v38[16];
            goto LABEL_30;
          }
          v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v33, 0x18u, 1, v38);
          v14 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
          v18 = v35;
        }
        else
        {
          v14 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF8u);
          DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v33);
          goto LABEL_38;
        }
      }
LABEL_30:
      if ( ++v19 >= *((_DWORD *)this + 62) )
        goto LABEL_31;
    }
  }
  v15 = CD2DContext::D2DPresentDWM(
          *(CD2DContext **)(*((_QWORD *)this + 2) + 128LL),
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC7u);
LABEL_34:
  if ( v14 == 142213121 )
    v14 = 0;
LABEL_38:
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  if ( v32 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v32->lpVtbl->Release)(v32);
  return (unsigned int)v14;
}
