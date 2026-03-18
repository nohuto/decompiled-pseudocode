/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180080740
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180074220 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18014F190 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x180073FC0 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800743D0 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180080700 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ShouldPresent(
        CHwDisplayRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  int v7; // edi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CHwDisplayRenderTarget *); // rbx
  char IsValid; // al
  _BOOL8 (__fastcall *v12)(CHwFullScreenRenderTarget *); // rbx
  bool v13; // al
  HRGN v14; // rcx
  _BOOL8 (__fastcall *v16)(CDisplay **); // rbx
  bool IsPrimary; // al
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  *a3 = 0;
  *a4 = 0;
  v7 = *((_DWORD *)this + 75);
  if ( *((_BYTE *)this + 184) )
  {
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v7, 0x6ACu);
    }
    else
    {
      v9 = *((_QWORD *)this + 20);
      if ( !v9 )
      {
        v7 = -2003304307;
        MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304307, 0x6B7u);
        goto LABEL_34;
      }
      v7 = *(_DWORD *)(v9 + 800);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v7, 0x6B3u);
      }
      else if ( !*((_QWORD *)this + 26)
             || ((v10 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 192LL),
                  v10 != CHwDisplayRenderTarget::IsValid)
               ? (IsValid = v10(this))
               : (IsValid = CHwDisplayRenderTarget::IsValid(this)),
                 !IsValid) )
      {
        v7 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304442, 0x6C0u);
        goto LABEL_34;
      }
    }
    if ( v7 >= 0 )
    {
      v12 = *(_BOOL8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL);
      if ( v12 == CHwFullScreenRenderTarget::IsInDirectFlip )
        v13 = CHwFullScreenRenderTarget::IsInDirectFlip(this);
      else
        v13 = v12(this);
      if ( v13 )
      {
        *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 256LL))(this);
      }
      else
      {
        v14 = (HRGN)*((_QWORD *)this + 40);
        if ( (!v14 || GetRgnBox(v14, &rc) == 1) && !*((_BYTE *)this + 185) )
        {
          v16 = *(_BOOL8 (__fastcall **)(CDisplay **))(*((_QWORD *)this + 22) + 296LL);
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
          return (unsigned int)v7;
        }
      }
      *a3 = 1;
      return (unsigned int)v7;
    }
LABEL_34:
    *((_DWORD *)this + 75) = v7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5DAu);
    return (unsigned int)v7;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5D3u);
  return (unsigned int)v7;
}
