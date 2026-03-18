/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C
 * Callers:
 *     GreExtEscape @ 0x1C0267554 (GreExtEscape.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0033D5C (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00488E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0265194 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C02662F4 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0266338 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266614 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266BC0 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0298EE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02BBA74 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *a1,
        unsigned int a2,
        signed int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r14
  __int64 v10; // rcx
  HDEV v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  int v14; // r15d
  __int64 v16; // rdx
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // r8
  struct _SURFOBJ *v24; // r15
  HDEV DeviceHdev; // r8
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  HDEV v29; // [rsp+40h] [rbp-398h] BYREF
  int v30; // [rsp+48h] [rbp-390h]
  void *v31; // [rsp+50h] [rbp-388h]
  unsigned __int16 v32; // [rsp+58h] [rbp-380h]
  int v33; // [rsp+5Ch] [rbp-37Ch]
  int v34; // [rsp+60h] [rbp-378h]
  __int64 v35; // [rsp+68h] [rbp-370h] BYREF
  int v36; // [rsp+74h] [rbp-364h]
  struct _RECTL v37; // [rsp+80h] [rbp-358h] BYREF
  _BYTE v38[112]; // [rsp+90h] [rbp-348h] BYREF
  __int128 v39; // [rsp+100h] [rbp-2D8h] BYREF
  int v40; // [rsp+110h] [rbp-2C8h]
  __int64 *v41; // [rsp+118h] [rbp-2C0h]
  _BYTE v42[624]; // [rsp+120h] [rbp-2B8h] BYREF

  v6 = a4;
  v31 = a6;
  v10 = *(_QWORD *)a1;
  v11 = *(HDEV *)(v10 + 48);
  v29 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 9) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 658);
  v14 = 0;
  v30 = 0;
  if ( a2 == 8 )
  {
    if ( (unsigned int)a3 < 4 )
      return 0LL;
    v14 = *(_DWORD *)a4;
    v30 = v14;
    v33 = v14;
    if ( (unsigned int)(v14 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v38, a1);
    if ( (unsigned int)fBlockExtEscape(a1) )
    {
LABEL_16:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
      return 0LL;
    }
    v16 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v16 + 48) + 56LL) & 0x80u) != 0 )
      {
        v19 = *(_QWORD *)(v16 + 512);
        if ( !v19 )
          goto LABEL_25;
        v18 = *(_QWORD *)(v19 + 40) == *((_QWORD *)v29 + 228);
      }
      else
      {
        v17 = *(_QWORD *)(v16 + 512);
        if ( !v17 )
          goto LABEL_16;
        v18 = *(_WORD *)(v17 + 100) == 3;
      }
      if ( !v18 )
        goto LABEL_16;
    }
LABEL_25:
    v35 = 0LL;
    v36 = 0;
    if ( a2 == 25 )
    {
      if ( *((int *)v29 + 462) < 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v35, a1, 0x204u);
        if ( a3 != 20 )
          goto LABEL_16;
        v39 = *(_OWORD *)v6;
        v40 = *((_DWORD *)v6 + 4);
        v41 = &v35;
        v6 = (char *)&v39;
        a3 = 32;
      }
      v20 = *(_QWORD *)a1;
      v21 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      if ( v21 && (*(_DWORD *)(v21 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v29 + 462) < 0) )
      {
        v22 = *(_DWORD *)(v20 + 2524);
        *(_DWORD *)v6 -= *(_DWORD *)(v20 + 2520);
        *((_DWORD *)v6 + 1) -= v22;
      }
    }
    if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
    {
      v28 = DoFontManagement(a1, a2, a3, (unsigned __int16 *)v6, a5, v31);
    }
    else if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v14 - 4119) <= 1 )
    {
      v28 = iCheckPassthroughImage(a1, (struct PDEVOBJ *)&v29, a2, a3, v6, a5, v31);
    }
    else
    {
      if ( (unsigned int)XDCOBJ::bValidSurf(a1) && !v31 )
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 92LL);
      v24 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 512LL));
      if ( ((_DWORD)v29[14] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v30 - 4352) <= 1 )
      {
        v37 = *(struct _RECTL *)(v23 + 1424);
        DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v23 + 48), &v37, 0LL);
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v29 + 322) )
            v24 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 322));
          v29 = DeviceHdev;
        }
      }
      if ( !*((_QWORD *)v29 + 363) )
        goto LABEL_65;
      if ( !v24 )
      {
        memset(v42, 0, 0x268uLL);
        v24 = SURFACE::pSurfobj((SURFACE *)v42);
        v24->dhpdev = *(DHPDEV *)(*(_QWORD *)a1 + 24LL);
        v24->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
        v24->iType = 1;
        if ( a2 == 17 && (unsigned __int64)a3 >= 2 )
        {
          v32 = *(_WORD *)v6;
          *(_DWORD *)(*(_QWORD *)a1 + 2508LL) = v32;
          PDEVOBJ::Escape((PDEVOBJ *)&v29, v24, 0x11u, a3, v6, a5, v31);
LABEL_55:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
          return 1LL;
        }
        if ( a2 == 33 && (unsigned __int64)a3 >= 2 )
        {
          v26 = *(unsigned __int16 *)v6;
          v34 = v26;
          v18 = v26 == 0;
          v27 = *(_QWORD *)a1;
          if ( v18 )
            *(_DWORD *)(v27 + 36) &= ~0x400u;
          else
            *(_DWORD *)(v27 + 36) |= 0x400u;
          goto LABEL_55;
        }
      }
      v28 = PDEVOBJ::Escape((PDEVOBJ *)&v29, v24, a2, a3, v6, a5, v31);
    }
    v12 = v28;
LABEL_65:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    return v12;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) == 0 && !*(_DWORD *)(v10 + 32) )
      return iOpenGLExtEscape(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 == 4354 )
    {
      if ( !*(_DWORD *)(v10 + 32) )
        return iWndObjSetupExtEscape(a1, 0x1102u, a3, a4, a5, a6);
      return 0LL;
    }
    if ( a2 != 3075 && (a2 != 4124 || (unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13)) )
      goto LABEL_15;
  }
  return 0LL;
}
