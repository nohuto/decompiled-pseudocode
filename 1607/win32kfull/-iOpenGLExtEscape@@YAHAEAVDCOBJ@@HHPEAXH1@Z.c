/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266614
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C013AFB8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C013B00C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0265040 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0265078 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x1C0265130 (--1DEVEXCLUDEWNDOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C026514C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0265F34 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0267010 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C02786E0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0298EE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B9FE8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, int a3, void *a4, int a5, void *a6)
{
  unsigned __int64 v6; // r13
  unsigned int v8; // ebx
  __int64 v9; // rax
  XLATEOBJ *v11; // r12
  struct SURFACE *v12; // rdi
  __int64 v13; // r8
  HDEV DeviceHdev; // r8
  size_t v15; // rax
  ULONG v16; // ecx
  HDC *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  WNDOBJ *v20; // rdx
  ULONG v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  _WORD *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  struct REGION *v28; // rax
  struct REGION *v29; // rax
  HDEV v31; // [rsp+38h] [rbp-7D0h] BYREF
  XLATEOBJ *v32; // [rsp+40h] [rbp-7C8h] BYREF
  int v33; // [rsp+48h] [rbp-7C0h]
  struct SURFACE *v34; // [rsp+50h] [rbp-7B8h]
  void *Src; // [rsp+58h] [rbp-7B0h]
  WNDOBJ *v36; // [rsp+60h] [rbp-7A8h] BYREF
  struct _RECTL v37; // [rsp+70h] [rbp-798h] BYREF
  HDEV *Parameter; // [rsp+80h] [rbp-788h] BYREF
  char *v39; // [rsp+88h] [rbp-780h]
  int v40; // [rsp+90h] [rbp-778h]
  int v41; // [rsp+94h] [rbp-774h]
  void *v42; // [rsp+98h] [rbp-770h]
  int v43; // [rsp+A0h] [rbp-768h]
  void *v44; // [rsp+A8h] [rbp-760h]
  unsigned int v45; // [rsp+B0h] [rbp-758h]
  _BYTE v46[112]; // [rsp+C0h] [rbp-748h] BYREF
  WNDOBJ *pwo; // [rsp+130h] [rbp-6D8h]
  void *v48; // [rsp+140h] [rbp-6C8h] BYREF
  int v49; // [rsp+148h] [rbp-6C0h]
  int v50; // [rsp+14Ch] [rbp-6BCh]
  __int64 *v51[6]; // [rsp+150h] [rbp-6B8h] BYREF
  char v52[4]; // [rsp+180h] [rbp-688h] BYREF
  struct _RECTL v53; // [rsp+184h] [rbp-684h] BYREF
  char v54[768]; // [rsp+220h] [rbp-5E8h] BYREF
  char v55; // [rsp+520h] [rbp-2E8h] BYREF
  _BYTE v56[512]; // [rsp+5C0h] [rbp-248h] BYREF

  Src = a4;
  v6 = a3;
  v48 = a6;
  v8 = 0;
  v33 = 0;
  `vector constructor iterator'(v54, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v54, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v32 = 0LL;
  v11 = 0LL;
  v31 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v46[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v12 = XDCOBJ::pSurfaceEff(a1);
  v34 = v12;
  if ( ((_DWORD)v31[14] & 0x20000) != 0 )
  {
    v37 = *(struct _RECTL *)(v13 + 1424);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v13 + 48), &v37, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v31 + 322) )
      {
        v12 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 322);
        v34 = v12;
      }
      v31 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v31 + 363) || ((_DWORD)v31[14] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v32);
    goto LABEL_3;
  }
  *(_QWORD *)&v37.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v36 = 0LL;
  v51[4] = 0LL;
  LODWORD(v51[0]) = 0;
  Parameter = &v31;
  if ( v12 )
    v39 = (char *)v12 + 24;
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
      v8 = v45;
    goto LABEL_66;
  }
  v15 = v6;
  if ( v6 >= 0x18 )
  {
    if ( v6 > 0x98 )
    {
      v17 = (HDC *)PALLOCMEM2((unsigned int)v6, 1818718023LL, 0);
      if ( !v17 )
      {
        v16 = 8;
        goto LABEL_21;
      }
      v15 = v6;
    }
    else
    {
      v17 = (HDC *)&v55;
    }
    memmove(v17, Src, v15);
    if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
    {
      v19 = *((unsigned int *)v17 + 2);
      if ( (unsigned int)v19 > 0x10 || (unsigned int)v6 < (unsigned __int64)(8 * v19 + 24) )
      {
        v21 = 8;
        goto LABEL_33;
      }
      a2 = LookUpWndobjs(a1, (struct DCOBJ *)v54, v17 + 3, v19);
      if ( a2 < 0 )
      {
LABEL_62:
        if ( v6 > 0x98 )
          Win32FreePool(v17, v20, v18);
        goto LABEL_66;
      }
    }
    if ( (*((_DWORD *)v17 + 1) & 2) != 0 )
    {
      v22 = *((_DWORD *)v31 + 533);
      if ( (unsigned int)(v22 - 2) > 1 )
        goto LABEL_45;
      v18 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      if ( v18 )
      {
        v23 = 256;
        if ( v22 == 2 )
          v23 = 16;
        v24 = 0;
        v25 = v56;
        do
          *v25++ = v24++;
        while ( v24 < v23 );
        if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v32, v56, v18, v34, v23, v23) )
          v11 = v32;
      }
      if ( !v11 )
LABEL_45:
        v11 = xloIdent;
    }
    v17[2] = (HDC)v11;
    v26 = *((_DWORD *)v17 + 1);
    if ( (v26 & 4) != 0 )
      goto LABEL_55;
    if ( (v26 & 1) == 0 )
    {
      v17[1] = 0LL;
      goto LABEL_55;
    }
    v20 = pwo;
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v27 != *(_QWORD *)(*(_QWORD *)a1 + 512LL)
        && *(_QWORD *)(*(_QWORD *)(v27 + 48) + 40LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        goto LABEL_62;
      }
      v17[1] = (HDC)pwo;
LABEL_55:
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
      v42 = v17;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v8 = v45;
        if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
          v8 = (a2 << 16) | (unsigned __int16)v45;
      }
      goto LABEL_62;
    }
    v21 = 6;
LABEL_33:
    EngSetLastError(v21);
    goto LABEL_62;
  }
  v16 = 87;
LABEL_21:
  EngSetLastError(v16);
LABEL_66:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v51);
  DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(&v36);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v32);
  `vector destructor iterator'(v54, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
