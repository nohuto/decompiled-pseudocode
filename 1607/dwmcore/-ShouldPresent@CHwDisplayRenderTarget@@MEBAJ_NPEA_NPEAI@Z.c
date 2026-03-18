/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18008EE50
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18007B210 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18017FB30 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18007B350 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x18008EE30 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ShouldPresent(
        CHwDisplayRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  int v7; // ebx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CHwDisplayRenderTarget *); // rax
  char IsValid; // al
  _BOOL8 (__fastcall *v12)(CHwFullScreenRenderTarget *); // rax
  bool v13; // al
  HRGN v14; // rcx
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  *a3 = 0;
  *a4 = 0;
  v7 = *((_DWORD *)this + 77);
  if ( *((_BYTE *)this + 192) )
  {
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v7, 0x55Du);
    }
    else
    {
      v9 = *((_QWORD *)this + 23);
      if ( !v9 )
      {
        v7 = -2003304307;
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304307, 0x568u);
        goto LABEL_25;
      }
      v7 = *(_DWORD *)(v9 + 824);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v7, 0x564u);
      }
      else if ( !*((_QWORD *)this + 27)
             || ((v10 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 208LL),
                  v10 != CHwDisplayRenderTarget::IsValid)
               ? (IsValid = ((__int64 (*)(void))v10)())
               : (IsValid = CHwDisplayRenderTarget::IsValid(this)),
                 !IsValid) )
      {
        v7 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304442, 0x571u);
        goto LABEL_25;
      }
    }
    if ( v7 >= 0 )
    {
      v12 = *(_BOOL8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 264LL);
      if ( v12 == CHwFullScreenRenderTarget::IsInDirectFlip )
        v13 = CHwFullScreenRenderTarget::IsInDirectFlip(this);
      else
        v13 = v12(this);
      if ( v13 )
      {
        *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 272LL))(this);
      }
      else
      {
        v14 = (HRGN)*((_QWORD *)this + 41);
        if ( (!v14 || GetRgnBox(v14, &rc) == 1) && !*((_BYTE *)this + 193) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 22) + 312LL))((char *)this + 176) )
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
LABEL_25:
    *((_DWORD *)this + 77) = v7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x48Bu);
    return (unsigned int)v7;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x484u);
  return (unsigned int)v7;
}
