/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180044B70
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800434D0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18013FF80 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x1800431F0 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800435A0 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180044CE0 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ShouldPresent(
        CHwDisplayRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  int v7; // ebx
  __int64 v9; // rax
  bool (__fastcall *v10)(CHwDisplayRenderTarget *__hidden); // rsi
  bool IsValid; // al
  HRGN v12; // rcx
  _BOOL8 (__fastcall *v14)(CHwFullScreenRenderTarget *); // rsi
  bool v15; // al
  bool (__fastcall *v16)(CDisplay **); // rsi
  bool IsPrimary; // al
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  *a3 = 0;
  *a4 = 0;
  v7 = *((_DWORD *)this + 75);
  if ( *((_BYTE *)this + 184) )
  {
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v7, 0x687u);
    }
    else
    {
      v9 = *((_QWORD *)this + 20);
      if ( !v9 )
      {
        v7 = -2003304307;
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304307, 0x692u);
        goto LABEL_31;
      }
      v7 = *(_DWORD *)(v9 + 836);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v7, 0x68Eu);
      }
      else if ( !*((_QWORD *)this + 26)
             || ((v10 = *(bool (__fastcall **)(CHwDisplayRenderTarget *__hidden))(*(_QWORD *)this + 192LL),
                  v10 != CHwDisplayRenderTarget::IsValid)
               ? (IsValid = v10(this))
               : (IsValid = CHwDisplayRenderTarget::IsValid(this)),
                 !IsValid) )
      {
        v7 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304442, 0x69Bu);
        goto LABEL_31;
      }
    }
    if ( v7 >= 0 )
    {
      v12 = (HRGN)*((_QWORD *)this + 40);
      if ( v12 && GetRgnBox(v12, &rc) != 1
        || *((_BYTE *)this + 185)
        || ((v14 = *(_BOOL8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL),
             v14 != CHwFullScreenRenderTarget::IsInDirectFlip)
          ? (v15 = v14(this))
          : (v15 = CHwFullScreenRenderTarget::IsInDirectFlip(this)),
            v15) )
      {
        *a3 = 1;
      }
      else
      {
        v16 = *(bool (__fastcall **)(CDisplay **))(*((_QWORD *)this + 22) + 288LL);
        if ( v16 == CHwFullScreenRenderTarget::IsPrimary )
          IsPrimary = CHwFullScreenRenderTarget::IsPrimary((CDisplay **)this + 22);
        else
          IsPrimary = v16((CDisplay **)this + 22);
        if ( IsPrimary )
        {
          *a3 = 1;
          if ( !a2 )
            *a4 |= 2u;
        }
      }
      return (unsigned int)v7;
    }
LABEL_31:
    *((_DWORD *)this + 75) = v7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5B5u);
    return (unsigned int)v7;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5AEu);
  return (unsigned int)v7;
}
