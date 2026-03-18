/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007B130
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800747B0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z @ 0x18007A630 (-GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18008F84C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget *this, unsigned int *a2)
{
  int v4; // eax
  int v5; // ebx
  CDWMSwapChain *v6; // rcx
  __int64 (__fastcall *v7)(CDWMSwapChain *, unsigned int *); // rax
  int LastPresentCountInternal; // eax
  __int64 result; // rax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwFullScreenRenderTarget *)((char *)this - 176));
  v12 = v4;
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 383;
    v10 = v4;
    goto LABEL_20;
  }
  v5 = *((_DWORD *)this + 33);
  v12 = v5;
  if ( v5 < 0 )
  {
    v11 = 385;
    goto LABEL_17;
  }
  if ( !*((_BYTE *)this + 16) || (v6 = (CDWMSwapChain *)*((_QWORD *)this + 5)) == 0LL )
  {
    v5 = -2003304315;
    v11 = 389;
    v12 = -2003304315;
    goto LABEL_17;
  }
  v7 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int *))(*(_QWORD *)v6 + 288LL);
  if ( v7 == CDWMSwapChain::GetLastPresentCountInternal )
    LastPresentCountInternal = CDWMSwapChain::GetLastPresentCountInternal(v6, a2);
  else
    LastPresentCountInternal = v7(v6, a2);
  v5 = LastPresentCountInternal;
  if ( LastPresentCountInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastPresentCountInternal, 0x1B6u);
  v12 = v5;
  if ( v5 < 0 )
  {
    v11 = 392;
LABEL_17:
    v10 = v5;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v11);
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v5, 0LL, &v12);
  result = v12;
  if ( v12 == -2003304442 || v12 == -2003304307 )
  {
    *((_DWORD *)this + 33) = v12;
    *((_BYTE *)this + 16) = 0;
  }
  return result;
}
