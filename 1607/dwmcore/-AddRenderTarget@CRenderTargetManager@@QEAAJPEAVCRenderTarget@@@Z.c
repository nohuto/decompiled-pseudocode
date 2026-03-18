/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180072DB8
 * Callers:
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800436D8 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CREATE@@@Z @ 0x1801082DC (-ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CRE.c)
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x18010F7B4 (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 *     ?Initialize@CAnalogCompositorTarget@@EEAAJXZ @ 0x180167180 (-Initialize@CAnalogCompositorTarget@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x180075CE8 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  struct CRenderTarget *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // r14d
  int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // edi
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-10h]
  struct CRenderTarget *v24; // [rsp+48h] [rbp+18h] BYREF

  v24 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 38LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v24 + 48LL))(v24, 43LL) )
    {
      v14 = *((_DWORD *)this + 12);
      v15 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v16 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        goto LABEL_32;
      }
      v7 = 0;
      if ( v15 > *((_DWORD *)this + 11) )
      {
        v17 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v13, &v24);
        v16 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
LABEL_32:
        v7 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2C6u);
          return v7;
        }
        goto LABEL_36;
      }
      *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 12)) = v24;
      *((_DWORD *)this + 12) = v15;
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v24 + 48LL))(v24, 45LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v24 + 48LL))(v24, 55LL) )
          ++*((_DWORD *)this + 16);
        v19 = *((_DWORD *)this + 12);
        v20 = v19 + 1;
        if ( v19 + 1 >= v19 )
        {
          v7 = 0;
          if ( v20 <= *((_DWORD *)this + 11) )
          {
            *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 12)) = v24;
            *((_DWORD *)this + 12) = v20;
            goto LABEL_8;
          }
          v22 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v18, &v24);
          v21 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
        }
        else
        {
          v21 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        v7 = v21;
        if ( v21 < 0 )
        {
          v23 = 729;
          v9 = v21;
          goto LABEL_47;
        }
        goto LABEL_8;
      }
      v6 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v24, 0LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v23 = 716;
LABEL_16:
        v9 = v6;
LABEL_47:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v23);
        return v7;
      }
    }
LABEL_36:
    ++*((_DWORD *)this + 17);
    goto LABEL_8;
  }
  v3 = v24;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 152LL))(v24) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v3 + 176LL))(v3) )
      v5 = 0LL;
    else
      v5 = *((unsigned int *)this + 14);
    v6 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v24, v5);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 144LL))(v24) )
      {
        if ( !*((_DWORD *)this + 15) )
          DwmGenerateMoveData(1LL);
        ++*((_DWORD *)this + 15);
      }
      ++*((_DWORD *)this + 14);
      goto LABEL_8;
    }
    v23 = 688;
    goto LABEL_16;
  }
  v10 = *((_DWORD *)this + 24);
  v11 = v10 + 1;
  if ( v10 + 1 >= v10 )
  {
    v7 = 0;
    if ( v11 <= *((_DWORD *)this + 23) )
    {
      *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * *((unsigned int *)this + 24)) = v24;
      *((_DWORD *)this + 24) = v11;
      goto LABEL_8;
    }
    v12 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 72, 8LL, v4, &v24);
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2C0u);
    return v7;
  }
LABEL_8:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 8LL))(v24);
  return v7;
}
