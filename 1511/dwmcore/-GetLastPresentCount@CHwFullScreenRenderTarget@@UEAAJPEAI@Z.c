/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180073FD0
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18007C970 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z @ 0x180073360 (-GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180081820 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget *this, unsigned int *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(CDWMSwapChain *, unsigned int *); // rsi
  int LastPresentCountInternal; // eax
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwFullScreenRenderTarget *)((char *)this - 176));
  v11 = v4;
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x17Cu);
    goto LABEL_10;
  }
  v5 = *((_DWORD *)this + 31);
  v11 = v5;
  if ( v5 < 0 )
  {
    v10 = 382;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v10);
    goto LABEL_10;
  }
  if ( !*((_BYTE *)this + 8) || (v6 = *((_QWORD *)this + 4)) == 0 )
  {
    v5 = -2003304315;
    v10 = 386;
    v11 = -2003304315;
    goto LABEL_19;
  }
  v7 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int *))(*(_QWORD *)v6 + 288LL);
  if ( v7 == CDWMSwapChain::GetLastPresentCountInternal )
    LastPresentCountInternal = CDWMSwapChain::GetLastPresentCountInternal(*((CDWMSwapChain **)this + 4), a2);
  else
    LastPresentCountInternal = v7(*((CDWMSwapChain **)this + 4), a2);
  v5 = LastPresentCountInternal;
  if ( LastPresentCountInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastPresentCountInternal, 0x1B6u);
  v11 = v5;
  if ( v5 < 0 )
  {
    v10 = 389;
    goto LABEL_19;
  }
LABEL_10:
  TranslateDXGIorD3DErrorInContext((unsigned int)v5, 0LL, &v11);
  result = v11;
  if ( v11 == -2003304442 || v11 == -2003304307 )
  {
    *((_DWORD *)this + 31) = v11;
    *((_BYTE *)this + 8) = 0;
  }
  return result;
}
