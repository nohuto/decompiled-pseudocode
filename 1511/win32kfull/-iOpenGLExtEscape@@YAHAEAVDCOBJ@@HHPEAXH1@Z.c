/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02682E4
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00F05E0 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00F0B1C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0267344 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0267388 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x1C0267440 (--1DEVEXCLUDEWNDOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C026745C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0267C90 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0268CB4 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C027A190 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299740 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B6E48 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, unsigned int a3, void *a4, int a5, void *a6)
{
  unsigned __int64 v6; // r12
  unsigned int v9; // ebx
  __int64 v10; // rax
  XLATEOBJ *v12; // r15
  __int64 v13; // rdx
  struct SURFACE *v14; // rsi
  __int64 v15; // r8
  HDEV DeviceHdev; // r8
  ULONG v17; // ecx
  HDC *v18; // rsi
  __int64 v19; // r9
  ULONG v20; // ecx
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // ecx
  _WORD *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  struct REGION *v28; // rax
  struct REGION *v29; // rax
  __int64 v30; // rdx
  XLATEOBJ *v31; // [rsp+30h] [rbp-5A8h] BYREF
  HDEV v32; // [rsp+38h] [rbp-5A0h] BYREF
  int v33; // [rsp+40h] [rbp-598h]
  struct SURFACE *v34; // [rsp+48h] [rbp-590h]
  void *Src; // [rsp+50h] [rbp-588h]
  WNDOBJ *v36; // [rsp+58h] [rbp-580h] BYREF
  struct _RECTL v37; // [rsp+60h] [rbp-578h] BYREF
  HDEV *Parameter; // [rsp+70h] [rbp-568h] BYREF
  char *v39; // [rsp+78h] [rbp-560h]
  int v40; // [rsp+80h] [rbp-558h]
  int v41; // [rsp+84h] [rbp-554h]
  void *v42; // [rsp+88h] [rbp-550h]
  int v43; // [rsp+90h] [rbp-548h]
  void *v44; // [rsp+98h] [rbp-540h]
  unsigned int v45; // [rsp+A0h] [rbp-538h]
  _BYTE v46[80]; // [rsp+B0h] [rbp-528h] BYREF
  WNDOBJ *pwo; // [rsp+100h] [rbp-4D8h]
  void *v48; // [rsp+110h] [rbp-4C8h] BYREF
  int v49; // [rsp+118h] [rbp-4C0h]
  int v50; // [rsp+11Ch] [rbp-4BCh]
  __int64 *v51[6]; // [rsp+120h] [rbp-4B8h] BYREF
  char v52[4]; // [rsp+150h] [rbp-488h] BYREF
  struct _RECTL v53; // [rsp+154h] [rbp-484h] BYREF
  char v54[256]; // [rsp+1F0h] [rbp-3E8h] BYREF
  char v55; // [rsp+2F0h] [rbp-2E8h] BYREF
  _BYTE v56[512]; // [rsp+390h] [rbp-248h] BYREF

  Src = a4;
  v6 = a3;
  v48 = a6;
  v9 = 0;
  v33 = 0;
  `vector constructor iterator'(v54, 16LL, 16, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v10 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v54, 16LL, 16, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v31 = 0LL;
  v12 = 0LL;
  v32 = *(HDEV *)(v10 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v46[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v14 = XDCOBJ::pSurfaceEff(a1);
  v34 = v14;
  if ( ((_DWORD)v32[14] & 0x20000) != 0 )
  {
    v37 = *(struct _RECTL *)(v15 + 1424);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v15 + 48), &v37, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v32 + 322) )
      {
        v14 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 322);
        v34 = v14;
      }
      v32 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v32 + 364) || ((_DWORD)v32[14] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31, v13);
    goto LABEL_3;
  }
  *(_QWORD *)&v37.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v36 = 0LL;
  v51[4] = 0LL;
  LODWORD(v51[0]) = 0;
  Parameter = &v32;
  if ( v14 )
    v39 = (char *)v14 + 24;
  else
    v39 = 0LL;
  v40 = a2;
  v41 = v6;
  v43 = a5;
  v44 = v48;
  if ( a2 != 4352 )
  {
    v42 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v9 = v45;
    goto LABEL_65;
  }
  if ( (unsigned __int64)(int)v6 >= 0x18 )
  {
    if ( (unsigned __int64)(int)v6 > 0x98 )
    {
      v18 = (HDC *)PALLOCMEM2((unsigned int)v6, 1818718023LL, 0);
      if ( !v18 )
      {
        v17 = 8;
        goto LABEL_21;
      }
    }
    else
    {
      v18 = (HDC *)&v55;
    }
    memmove(v18, Src, (int)v6);
    if ( (*((_DWORD *)v18 + 1) & 4) != 0 )
    {
      v19 = *((unsigned int *)v18 + 2);
      if ( (unsigned int)v19 > 0x10 || v6 < 8 * v19 + 24 )
      {
        v20 = 8;
        goto LABEL_32;
      }
      v33 = LookUpWndobjs(a1, (struct DCOBJ *)v54, v18 + 3, v19);
      if ( v33 < 0 )
      {
LABEL_61:
        if ( (unsigned __int64)(int)v6 > 0x98 )
          Win32FreePool(v18);
        goto LABEL_65;
      }
    }
    if ( (*((_DWORD *)v18 + 1) & 2) != 0 )
    {
      v21 = *((_DWORD *)v32 + 533);
      if ( (unsigned int)(v21 - 2) > 1 )
        goto LABEL_44;
      v22 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      if ( v22 )
      {
        v23 = 256;
        if ( v21 == 2 )
          v23 = 16;
        v24 = 0;
        v25 = v56;
        do
          *v25++ = v24++;
        while ( v24 < v23 );
        if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v31, v56, v22, v34, v23, v23) )
          v12 = v31;
      }
      if ( !v12 )
LABEL_44:
        v12 = xloIdent;
    }
    v18[2] = (HDC)v12;
    v26 = *((_DWORD *)v18 + 1);
    if ( (v26 & 4) != 0 )
      goto LABEL_54;
    if ( (v26 & 1) == 0 )
    {
      v18[1] = 0LL;
      goto LABEL_54;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v27 != *(_QWORD *)(*(_QWORD *)a1 + 512LL)
        && *(_QWORD *)(*(_QWORD *)(v27 + 48) + 40LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        goto LABEL_61;
      }
      v18[1] = (HDC)pwo;
LABEL_54:
      if ( pwo )
      {
        if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
        {
          v36 = pwo;
          EngControlSprites(pwo, 1u);
        }
      }
      else
      {
        v28 = XDCOBJ::prgnEffRao(a1);
        v48 = (void *)*((_QWORD *)v28 + 11);
        v49 = *((_DWORD *)v28 + 24);
        v50 = *((_DWORD *)v28 + 25);
        v29 = XDCOBJ::prgnEffRao(a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v52, v29, (struct ERECTL *)&v48, 0);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v51, a1, &v53);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 92LL);
      v42 = v18;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v9 = v45;
        if ( (*((_DWORD *)v18 + 1) & 4) != 0 )
          v9 = (v33 << 16) | (unsigned __int16)v45;
      }
      goto LABEL_61;
    }
    v20 = 6;
LABEL_32:
    EngSetLastError(v20);
    goto LABEL_61;
  }
  v17 = 87;
LABEL_21:
  EngSetLastError(v17);
LABEL_65:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v51);
  DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(&v36);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31, v30);
  `vector destructor iterator'(v54, 16LL, 16, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v9;
}
