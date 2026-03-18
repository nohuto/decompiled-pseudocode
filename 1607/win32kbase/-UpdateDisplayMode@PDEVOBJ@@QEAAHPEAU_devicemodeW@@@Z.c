/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7488 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     GreHideSprites_0 @ 0x1C0001250 (GreHideSprites_0.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0031D40 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032B30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032CBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006C2B4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00BEA34 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct SURFACE *v14; // rsi
  __int64 v15; // rcx
  _WORD *v16; // r9
  WORD dmSize; // ax
  __int64 v18; // r11
  __int64 Objt; // rax
  __int64 v20; // r9
  int v21; // r10d
  __int64 v22; // rcx
  unsigned int v23; // r10d
  HSURF v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[32]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v28; // [rsp+70h] [rbp-90h]
  _DWORD v29[80]; // [rsp+80h] [rbp-80h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)this;
  v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v4 + 2704);
  if ( v6 )
  {
    GreHideSprites_0();
    memset(v29, 0, sizeof(v29));
    if ( v6(
           *(_QWORD *)(*(_QWORD *)this + 1824LL),
           *(_QWORD *)(*(_QWORD *)this + 2616LL),
           Src,
           *(_QWORD *)this + 2160LL,
           v29,
           &v25) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = v29[4];
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = v29[5];
      *(_DWORD *)(*(_QWORD *)this + 2168LL) = v29[2];
      *(_DWORD *)(*(_QWORD *)this + 2172LL) = v29[3];
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = v29[10];
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = v29[11];
      *(_DWORD *)(*(_QWORD *)this + 2416LL) = v29[64];
      *(_DWORD *)(*(_QWORD *)this + 2420LL) = v29[65];
      *(_DWORD *)(*(_QWORD *)this + 2224LL) = v29[16];
      *(_DWORD *)(*(_QWORD *)this + 2228LL) = v29[17];
      *(_DWORD *)(*(_QWORD *)this + 2572LL) ^= (*(_DWORD *)(*(_QWORD *)this + 2572LL) ^ ((((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0) << 7)) & 0x80;
      v14 = *(struct SURFACE **)(*(_QWORD *)this + 2576LL);
      PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
      SURFREF::SURFREF((SURFREF *)v27, v14);
      HmgDecrementShareReferenceCount(v28);
      v15 = *((_QWORD *)v14 + 4);
      v28 = 0LL;
      bDeleteSurface(v15);
      SURFREF::~SURFREF((SURFREF *)v27);
      PDEVOBJ::bMakeSurface(this, v25);
      v16 = *(_WORD **)(*(_QWORD *)this + 2616LL);
      dmSize = Src->dmSize;
      if ( v16[34] < dmSize )
        dmSize = v16[34];
      memmove(v16, Src, dmSize);
      LODWORD(v18) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt(v18, 1);
        v20 = Objt;
        if ( !Objt )
          break;
        v21 = *(_DWORD *)(Objt + 36);
        v18 = *(_QWORD *)Objt;
        if ( (v21 & 0x2000) == 0 )
        {
          if ( *(struct SURFACE **)(Objt + 512) == v14 )
          {
            *(_QWORD *)(Objt + 512) = *(_QWORD *)(*(_QWORD *)this + 2576LL);
            v22 = **(_QWORD **)&PDEVOBJ::sizl(this, &v26);
            *(_DWORD *)(v20 + 332) |= 0xFu;
            *(_QWORD *)(v20 + 528) = v22;
          }
          if ( (v21 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v20 + 512) + 112LL) & 0x200) != 0 )
            v23 = v21 | 0x8000;
          else
            v23 = v21 & 0xFFFF7FFF;
          *(_DWORD *)(v20 + 36) = v23;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v9, v8);
      *(_QWORD *)(v10 + 24) = 0LL;
      WdLogEvent5_WdWarning(v10);
      v13 = WdLogNewEntry5_WdWarning(v12, v11);
      WdLogEvent5_WdWarning(v13);
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
