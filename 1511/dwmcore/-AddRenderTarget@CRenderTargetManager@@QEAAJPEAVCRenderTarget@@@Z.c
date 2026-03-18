/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007AE38
 * Callers:
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18009DABC (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CREATE@@@Z @ 0x1800F466C (-ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CRE.c)
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800FAD40 (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 *     ?Initialize@CAnalogCompositorTarget@@EEAAJXZ @ 0x18013D1D0 (-Initialize@CAnalogCompositorTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x1800B308C (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  char v3; // al
  struct CRenderTarget *v4; // rdi
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  int v20; // r9d
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-10h]
  struct CRenderTarget *v26; // [rsp+58h] [rbp+28h] BYREF

  v26 = a2;
  v3 = (*(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 37LL);
  v4 = v26;
  v5 = v3 == 0;
  v6 = *(_QWORD *)v26;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(v6 + 48))(v26, 42LL) )
    {
      v17 = *((_DWORD *)this + 12);
      v18 = v17 + 1;
      if ( v17 + 1 < v17 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v10 = -2147024362;
LABEL_32:
        v25 = 698;
        goto LABEL_47;
      }
      v10 = 0;
      if ( v18 > *((_DWORD *)this + 11) )
      {
        v19 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v16, &v26);
        v14 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
        v10 = v14;
        if ( v14 < 0 )
          goto LABEL_32;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 12)) = v26;
        *((_DWORD *)this + 12) = v18;
      }
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v26 + 48LL))(v26, 44LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v26 + 48LL))(v26, 54LL) )
          ++*((_DWORD *)this + 16);
        v22 = *((_DWORD *)this + 12);
        v23 = v22 + 1;
        if ( v22 + 1 >= v22 )
        {
          v10 = 0;
          if ( v23 <= *((_DWORD *)this + 11) )
          {
            *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 12)) = v26;
            *((_DWORD *)this + 12) = v23;
            goto LABEL_8;
          }
          v24 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v21, &v26);
          v14 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
          v10 = v14;
          if ( v14 >= 0 )
            goto LABEL_8;
        }
        else
        {
          v14 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v10 = -2147024362;
        }
        v25 = 717;
        goto LABEL_47;
      }
      v9 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v26, 0LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        v25 = 704;
LABEL_36:
        v20 = v9;
LABEL_48:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v25);
        return v10;
      }
    }
    ++*((_DWORD *)this + 17);
    goto LABEL_8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(v6 + 144))(v26) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v4 + 168LL))(v4) )
      v8 = 0LL;
    else
      v8 = *((unsigned int *)this + 14);
    v9 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v26, v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v26 + 136LL))(v26) )
      {
        if ( !*((_DWORD *)this + 15) )
          DwmGenerateMoveData(1LL);
        ++*((_DWORD *)this + 15);
      }
      ++*((_DWORD *)this + 14);
      goto LABEL_8;
    }
    v25 = 676;
    goto LABEL_36;
  }
  v12 = *((_DWORD *)this + 24);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v10 = -2147024362;
LABEL_22:
    v25 = 692;
LABEL_47:
    v20 = v14;
    goto LABEL_48;
  }
  v10 = 0;
  if ( v13 > *((_DWORD *)this + 23) )
  {
    v15 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 72, 8LL, v7, &v26);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    v10 = v14;
    if ( v14 >= 0 )
      goto LABEL_8;
    goto LABEL_22;
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * *((unsigned int *)this + 24)) = v26;
  *((_DWORD *)this + 24) = v13;
LABEL_8:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v26 + 8LL))(v26);
  return v10;
}
