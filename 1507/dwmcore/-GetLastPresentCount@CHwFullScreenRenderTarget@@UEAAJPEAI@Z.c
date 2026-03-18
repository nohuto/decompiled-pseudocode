/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180043200
 * Callers:
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18004B2E0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z @ 0x180042780 (-GetLastPresentCountInternal@CDWMSwapChain@@MEAAJPEAI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180044CE0 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget *this, unsigned int *a2)
{
  _DWORD *v2; // rdi
  int v4; // ebx
  __int64 v6; // rax
  bool (__fastcall *v7)(CHwDisplayRenderTarget *__hidden); // r14
  bool IsValid; // al
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(CDWMSwapChain *, unsigned int *); // rdi
  int LastPresentCountInternal; // eax
  __int64 result; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_DWORD *)((char *)this - 176);
  v4 = *((_DWORD *)this + 31);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v4, 0x687u);
    goto LABEL_9;
  }
  v6 = *((_QWORD *)v2 + 20);
  if ( v6 )
  {
    v4 = *(_DWORD *)(v6 + 836);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v4, 0x68Eu);
      goto LABEL_9;
    }
    if ( !*((_BYTE *)v2 + 184)
      || *((_QWORD *)v2 + 26)
      && ((v7 = *(bool (__fastcall **)(CHwDisplayRenderTarget *__hidden))(*(_QWORD *)v2 + 192LL),
           v7 != CHwDisplayRenderTarget::IsValid)
        ? (IsValid = v7((CHwDisplayRenderTarget *)v2))
        : (IsValid = CHwDisplayRenderTarget::IsValid((CHwDisplayRenderTarget *)v2)),
          IsValid) )
    {
LABEL_9:
      if ( v4 >= 0 )
        goto LABEL_10;
      goto LABEL_30;
    }
    v4 = -2003304442;
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304442, 0x69Bu);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304307, 0x692u);
  }
LABEL_30:
  v2[75] = v4;
LABEL_10:
  v13 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x17Cu);
  }
  else
  {
    v4 = *((_DWORD *)this + 31);
    v13 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x17Eu);
    }
    else if ( *((_BYTE *)this + 8) && (v9 = *((_QWORD *)this + 4)) != 0 )
    {
      v10 = *(__int64 (__fastcall **)(CDWMSwapChain *, unsigned int *))(*(_QWORD *)v9 + 272LL);
      if ( v10 == CDWMSwapChain::GetLastPresentCountInternal )
        LastPresentCountInternal = CDWMSwapChain::GetLastPresentCountInternal(*((CDWMSwapChain **)this + 4), a2);
      else
        LastPresentCountInternal = v10(*((CDWMSwapChain **)this + 4), a2);
      v4 = LastPresentCountInternal;
      if ( LastPresentCountInternal < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastPresentCountInternal, 0x1B6u);
      v13 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x185u);
    }
    else
    {
      v4 = -2003304315;
      v13 = -2003304315;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304315, 0x182u);
    }
  }
  TranslateDXGIorD3DErrorInContext(v4, 0, &v13);
  result = v13;
  if ( v13 == -2003304442 || v13 == -2003304307 )
  {
    *((_DWORD *)this + 31) = v13;
    *((_BYTE *)this + 8) = 0;
  }
  return result;
}
