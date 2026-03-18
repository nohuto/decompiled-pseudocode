/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180049DC4
 * Callers:
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006C4F4 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800E2E2C (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800EE6EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessCreate@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_CREATE@@@Z @ 0x1801268AC (-ProcessCreate@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_CREAT.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180051AB0 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x180060B28 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800683F8 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CComposition **this, struct CRenderTarget *a2)
{
  char v3; // al
  struct CRenderTarget *v4; // rdi
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // r9d
  __int64 v22; // r8
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-10h]
  struct CRenderTarget *v25; // [rsp+58h] [rbp+28h] BYREF

  v25 = a2;
  v3 = (*(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 36LL);
  v4 = v25;
  v5 = v3 == 0;
  v6 = *(_QWORD *)v25;
  if ( v5 )
  {
    v5 = (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(v6 + 48))(v25, 40LL) == 0;
    v16 = *(_QWORD *)v25;
    if ( !v5 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(v16 + 160))(v25) )
      {
        v9 = DynArray<CRenderTarget *,1>::InsertAt(this + 3, &v25, 0LL);
        v10 = v9;
        if ( v9 < 0 )
        {
          v24 = 715;
LABEL_35:
          v21 = v9;
LABEL_46:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v24);
          return v10;
        }
        goto LABEL_8;
      }
      CComposition::ResetScheduler(this[2]);
      v18 = *((unsigned int *)this + 12);
      v19 = v18 + 1;
      if ( (int)v18 + 1 < (unsigned int)v18 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v10 = -2147024362;
LABEL_31:
        v24 = 710;
        goto LABEL_45;
      }
      v10 = 0;
      if ( v19 > *((_DWORD *)this + 11) )
      {
        v20 = DynArrayImpl<1>::AddMultipleAndSet(this + 3, 8LL, v17, &v25);
        v14 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
        v10 = v14;
        if ( v14 >= 0 )
          goto LABEL_8;
        goto LABEL_31;
      }
LABEL_32:
      *((_QWORD *)this[3] + v18) = v25;
      *((_DWORD *)this + 12) = v19;
      goto LABEL_8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(v16 + 48))(v25, 50LL) )
      ++*((_DWORD *)this + 16);
    v18 = *((unsigned int *)this + 12);
    v19 = v18 + 1;
    if ( (int)v18 + 1 >= (unsigned int)v18 )
    {
      v10 = 0;
      if ( v19 <= *((_DWORD *)this + 11) )
        goto LABEL_32;
      v23 = DynArrayImpl<1>::AddMultipleAndSet(this + 3, 8LL, v22, &v25);
      v14 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
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
    v24 = 728;
    goto LABEL_45;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(v6 + 136))(v25) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v4 + 160LL))(v4) )
      v8 = 0LL;
    else
      v8 = *((unsigned int *)this + 14);
    v9 = DynArray<CRenderTarget *,1>::InsertAt(this + 3, &v25, v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v25 + 128LL))(v25) )
      {
        if ( !*((_DWORD *)this + 15) )
          DwmGenerateMoveData(1LL);
        ++*((_DWORD *)this + 15);
      }
      ++*((_DWORD *)this + 14);
      goto LABEL_8;
    }
    v24 = 684;
    goto LABEL_35;
  }
  v12 = *((_DWORD *)this + 24);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v10 = -2147024362;
LABEL_22:
    v24 = 700;
LABEL_45:
    v21 = v14;
    goto LABEL_46;
  }
  v10 = 0;
  if ( v13 > *((_DWORD *)this + 23) )
  {
    v15 = DynArrayImpl<1>::AddMultipleAndSet(this + 9, 8LL, v7, &v25);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    v10 = v14;
    if ( v14 >= 0 )
      goto LABEL_8;
    goto LABEL_22;
  }
  *((_QWORD *)this[9] + *((unsigned int *)this + 24)) = v25;
  *((_DWORD *)this + 24) = v13;
LABEL_8:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v25 + 8LL))(v25);
  return v10;
}
