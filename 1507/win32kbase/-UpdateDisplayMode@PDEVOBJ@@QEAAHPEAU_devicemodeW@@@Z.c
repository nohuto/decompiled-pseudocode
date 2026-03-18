/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9D70 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     GreHideSprites_0 @ 0x1C0001250 (GreHideSprites_0.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00346E0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0035490 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003561C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 *     HmgSafeNextObjt @ 0x1C005DA10 (HmgSafeNextObjt.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C005E7C4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00B0AD0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct SURFACE *v12; // rsi
  HSURF v13; // rcx
  _WORD *v14; // r9
  WORD dmSize; // ax
  __int64 v16; // r11
  __int64 Objt; // rax
  __int64 v18; // r9
  int v19; // r10d
  __int64 v20; // rcx
  unsigned int v21; // r10d
  HSURF v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp-90h]
  _DWORD v27[80]; // [rsp+80h] [rbp-80h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)this;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v4 + 2712);
  if ( v6 )
  {
    GreHideSprites_0();
    memset(v27, 0, sizeof(v27));
    if ( v6(
           *(_QWORD *)(*(_QWORD *)this + 1824LL),
           *(_QWORD *)(*(_QWORD *)this + 2616LL),
           Src,
           *(_QWORD *)this + 2160LL,
           v27,
           &v23) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = v27[4];
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = v27[5];
      *(_DWORD *)(*(_QWORD *)this + 2168LL) = v27[2];
      *(_DWORD *)(*(_QWORD *)this + 2172LL) = v27[3];
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = v27[10];
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = v27[11];
      *(_DWORD *)(*(_QWORD *)this + 2416LL) = v27[64];
      *(_DWORD *)(*(_QWORD *)this + 2420LL) = v27[65];
      *(_DWORD *)(*(_QWORD *)this + 2224LL) = v27[16];
      *(_DWORD *)(*(_QWORD *)this + 2228LL) = v27[17];
      *(_DWORD *)(*(_QWORD *)this + 2572LL) ^= (*(_DWORD *)(*(_QWORD *)this + 2572LL) ^ ((((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0) << 7)) & 0x80;
      v12 = *(struct SURFACE **)(*(_QWORD *)this + 2576LL);
      PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
      SURFREF::SURFREF((SURFREF *)v25, v12);
      HmgDecrementShareReferenceCount(v26);
      v13 = (HSURF)*((_QWORD *)v12 + 4);
      v26 = 0LL;
      bDeleteSurface(v13);
      SURFREF::~SURFREF((SURFREF *)v25);
      PDEVOBJ::bMakeSurface(this, v23);
      v14 = *(_WORD **)(*(_QWORD *)this + 2616LL);
      dmSize = Src->dmSize;
      if ( v14[34] < dmSize )
        dmSize = v14[34];
      memmove(v14, Src, dmSize);
      LOWORD(v16) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt(v16, 1);
        v18 = Objt;
        if ( !Objt )
          break;
        v19 = *(_DWORD *)(Objt + 36);
        v16 = *(_QWORD *)Objt;
        if ( (v19 & 0x2000) == 0 )
        {
          if ( *(struct SURFACE **)(Objt + 512) == v12 )
          {
            *(_QWORD *)(Objt + 512) = *(_QWORD *)(*(_QWORD *)this + 2576LL);
            v20 = **(_QWORD **)&PDEVOBJ::sizl(this, &v24);
            *(_DWORD *)(v18 + 332) |= 0xFu;
            *(_QWORD *)(v18 + 528) = v20;
          }
          if ( (v19 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v18 + 512) + 112LL) & 0x200) != 0 )
            v21 = v19 | 0x8000;
          else
            v21 = v19 & 0xFFFF7FFF;
          *(_DWORD *)(v18 + 36) = v21;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(v8);
      *(_QWORD *)(v9 + 24) = 0LL;
      WdLogEvent5_WdWarning(v9);
      v11 = WdLogNewEntry5_WdWarning(v10);
      WdLogEvent5_WdWarning(v11);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdEvent(v4, Src);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdEvent(v7);
  }
  return v3;
}
