/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C
 * Callers:
 *     GreExtEscape @ 0x1C01257FC (GreExtEscape.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009CDAC (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0114568 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0125DF8 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02687F8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02693E4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02696C0 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0269C70 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299C40 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
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
  HDEV v29; // [rsp+40h] [rbp-378h] BYREF
  void *v30; // [rsp+48h] [rbp-370h]
  int v31; // [rsp+50h] [rbp-368h]
  unsigned __int16 v32; // [rsp+54h] [rbp-364h]
  __int64 v33; // [rsp+58h] [rbp-360h] BYREF
  int v34; // [rsp+64h] [rbp-354h]
  int v35; // [rsp+68h] [rbp-350h]
  int v36; // [rsp+6Ch] [rbp-34Ch]
  struct _RECTL v37; // [rsp+70h] [rbp-348h] BYREF
  _BYTE v38[112]; // [rsp+80h] [rbp-338h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-2C8h] BYREF
  int v40; // [rsp+100h] [rbp-2B8h]
  __int64 *v41; // [rsp+108h] [rbp-2B0h]
  _BYTE v42[608]; // [rsp+110h] [rbp-2A8h] BYREF

  v6 = a4;
  v30 = a6;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v29 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 9) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 658);
  v14 = 0;
  v31 = 0;
  if ( a2 == 8 )
  {
    if ( (unsigned int)a3 < 4 )
      return 0LL;
    v14 = *(_DWORD *)a4;
    v31 = v14;
    v36 = v14;
    if ( (unsigned int)(v14 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v38, this);
    if ( (unsigned int)fBlockExtEscape(this) )
    {
LABEL_16:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
      return 0LL;
    }
    v16 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 32LL) )
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
    v33 = 0LL;
    v34 = 0;
    if ( a2 == 25 )
    {
      if ( *((int *)v29 + 462) < 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v33, this, 0x204u);
        if ( a3 != 20 )
          goto LABEL_16;
        v39 = *(_OWORD *)v6;
        v40 = *((_DWORD *)v6 + 4);
        v41 = &v33;
        v6 = (char *)&v39;
        a3 = 32;
      }
      v20 = *(_QWORD *)this;
      v21 = *(_QWORD *)(*(_QWORD *)this + 512LL);
      if ( v21 && (*(_DWORD *)(v21 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v29 + 462) < 0) )
      {
        v22 = *(_DWORD *)(v20 + 2524);
        *(_DWORD *)v6 -= *(_DWORD *)(v20 + 2520);
        *((_DWORD *)v6 + 1) -= v22;
      }
    }
    if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
    {
      v28 = DoFontManagement(this, a2, a3, v6, a5, v30);
    }
    else if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v14 - 4119) <= 1 )
    {
      v28 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v29, a2, a3, v6, a5, v30);
    }
    else
    {
      if ( (unsigned int)XDCOBJ::bValidSurf(this) && !v30 )
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 512LL) + 92LL);
      v24 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)this + 512LL));
      if ( ((_DWORD)v29[14] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v31 - 4352) <= 1 )
      {
        v37 = *(struct _RECTL *)(v23 + 1424);
        DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v23 + 48), &v37, 0LL);
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(*(_QWORD *)this + 512LL) == *((_QWORD *)v29 + 322) )
            v24 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 322));
          v29 = DeviceHdev;
        }
      }
      if ( !*((_QWORD *)v29 + 364) )
        goto LABEL_65;
      if ( !v24 )
      {
        memset(v42, 0, sizeof(v42));
        v24 = SURFACE::pSurfobj((SURFACE *)v42);
        v24->dhpdev = *(DHPDEV *)(*(_QWORD *)this + 24LL);
        v24->hdev = *(HDEV *)(*(_QWORD *)this + 48LL);
        v24->iType = 1;
        if ( a2 == 17 && (unsigned __int64)a3 >= 2 )
        {
          v32 = *(_WORD *)v6;
          *(_DWORD *)(*(_QWORD *)this + 2508LL) = v32;
          PDEVOBJ::Escape((PDEVOBJ *)&v29, v24, 0x11u, a3, v6, a5, v30);
LABEL_55:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
          return 1LL;
        }
        if ( a2 == 33 && (unsigned __int64)a3 >= 2 )
        {
          v26 = *(unsigned __int16 *)v6;
          v35 = v26;
          v18 = v26 == 0;
          v27 = *(_QWORD *)this;
          if ( v18 )
            *(_DWORD *)(v27 + 36) &= ~0x400u;
          else
            *(_DWORD *)(v27 + 36) |= 0x400u;
          goto LABEL_55;
        }
      }
      v28 = PDEVOBJ::Escape((PDEVOBJ *)&v29, v24, a2, a3, v6, a5, v30);
    }
    v12 = v28;
LABEL_65:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    return v12;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) == 0 && !*(_DWORD *)(v10 + 32) )
      return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 == 4354 )
    {
      if ( !*(_DWORD *)(v10 + 32) )
        return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
      return 0LL;
    }
    if ( a2 != 3075 && (a2 != 4124 || (unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13)) )
      goto LABEL_15;
  }
  return 0LL;
}
