/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02696C0
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0105E88 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0105EDC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C02686A4 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02686DC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x1C0268794 (--1DEVEXCLUDEWNDOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02687B0 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0269018 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C026A110 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C027B1A0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299C40 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7A38 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
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
  __int64 v18; // r9
  ULONG v19; // ecx
  int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // ecx
  _WORD *v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  struct REGION *v27; // rax
  struct REGION *v28; // rax
  XLATEOBJ *v30; // [rsp+38h] [rbp-7C0h] BYREF
  HDEV v31; // [rsp+40h] [rbp-7B8h] BYREF
  int v32; // [rsp+48h] [rbp-7B0h]
  struct SURFACE *v33; // [rsp+50h] [rbp-7A8h]
  WNDOBJ *v34; // [rsp+58h] [rbp-7A0h] BYREF
  void *Src; // [rsp+60h] [rbp-798h]
  HDEV *Parameter; // [rsp+68h] [rbp-790h] BYREF
  char *v37; // [rsp+70h] [rbp-788h]
  int v38; // [rsp+78h] [rbp-780h]
  int v39; // [rsp+7Ch] [rbp-77Ch]
  void *v40; // [rsp+80h] [rbp-778h]
  int v41; // [rsp+88h] [rbp-770h]
  void *v42; // [rsp+90h] [rbp-768h]
  unsigned int v43; // [rsp+98h] [rbp-760h]
  struct _RECTL v44; // [rsp+A0h] [rbp-758h] BYREF
  _BYTE v45[112]; // [rsp+B0h] [rbp-748h] BYREF
  WNDOBJ *pwo; // [rsp+120h] [rbp-6D8h]
  void *v47; // [rsp+130h] [rbp-6C8h] BYREF
  int v48; // [rsp+138h] [rbp-6C0h]
  int v49; // [rsp+13Ch] [rbp-6BCh]
  __int64 *v50[6]; // [rsp+140h] [rbp-6B8h] BYREF
  char v51[4]; // [rsp+170h] [rbp-688h] BYREF
  struct _RECTL v52; // [rsp+174h] [rbp-684h] BYREF
  char v53[768]; // [rsp+210h] [rbp-5E8h] BYREF
  char v54; // [rsp+510h] [rbp-2E8h] BYREF
  _BYTE v55[512]; // [rsp+5B0h] [rbp-248h] BYREF

  Src = a4;
  v6 = a3;
  v47 = a6;
  v8 = 0;
  v32 = 0;
  `vector constructor iterator'(v53, 48LL, 16, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v53, 48LL, 16, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v30 = 0LL;
  v11 = 0LL;
  v31 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v45, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v45[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v12 = XDCOBJ::pSurfaceEff(a1);
  v33 = v12;
  if ( ((_DWORD)v31[14] & 0x20000) != 0 )
  {
    v44 = *(struct _RECTL *)(v13 + 1424);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v13 + 48), &v44, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v31 + 322) )
      {
        v12 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 322);
        v33 = v12;
      }
      v31 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v31 + 364) || ((_DWORD)v31[14] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v45);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
    goto LABEL_3;
  }
  *(_QWORD *)&v44.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v34 = 0LL;
  v50[4] = 0LL;
  LODWORD(v50[0]) = 0;
  Parameter = &v31;
  if ( v12 )
    v37 = (char *)v12 + 24;
  else
    v37 = 0LL;
  v38 = a2;
  v39 = v6;
  v41 = a5;
  v42 = v47;
  if ( a2 != 4352 )
  {
    v40 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v8 = v43;
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
      v17 = (HDC *)&v54;
    }
    memmove(v17, Src, v15);
    if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
    {
      v18 = *((unsigned int *)v17 + 2);
      if ( (unsigned int)v18 > 0x10 || (unsigned int)v6 < (unsigned __int64)(8 * v18 + 24) )
      {
        v19 = 8;
        goto LABEL_33;
      }
      a2 = LookUpWndobjs(a1, (struct DCOBJ *)v53, v17 + 3, v18);
      if ( a2 < 0 )
      {
LABEL_62:
        if ( v6 > 0x98 )
          Win32FreePool(v17);
        goto LABEL_66;
      }
    }
    if ( (*((_DWORD *)v17 + 1) & 2) != 0 )
    {
      v20 = *((_DWORD *)v31 + 533);
      if ( (unsigned int)(v20 - 2) > 1 )
        goto LABEL_45;
      v21 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      if ( v21 )
      {
        v22 = 256;
        if ( v20 == 2 )
          v22 = 16;
        v23 = 0;
        v24 = v55;
        do
          *v24++ = v23++;
        while ( v23 < v22 );
        if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v30, v55, v21, v33, v22, v22) )
          v11 = v30;
      }
      if ( !v11 )
LABEL_45:
        v11 = xloIdent;
    }
    v17[2] = (HDC)v11;
    v25 = *((_DWORD *)v17 + 1);
    if ( (v25 & 4) != 0 )
      goto LABEL_55;
    if ( (v25 & 1) == 0 )
    {
      v17[1] = 0LL;
      goto LABEL_55;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v26 != *(_QWORD *)(*(_QWORD *)a1 + 512LL)
        && *(_QWORD *)(*(_QWORD *)(v26 + 48) + 40LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        goto LABEL_62;
      }
      v17[1] = (HDC)pwo;
LABEL_55:
      if ( pwo )
      {
        if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
        {
          v34 = pwo;
          EngControlSprites(pwo, 1u);
        }
      }
      else
      {
        v27 = XDCOBJ::prgnEffRao(a1);
        v47 = (void *)*((_QWORD *)v27 + 11);
        v48 = *((_DWORD *)v27 + 24);
        v49 = *((_DWORD *)v27 + 25);
        v28 = XDCOBJ::prgnEffRao(a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v51, v28, (struct ERECTL *)&v47, 0);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v50, a1, &v52);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 92LL);
      v40 = v17;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v8 = v43;
        if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
          v8 = (a2 << 16) | (unsigned __int16)v43;
      }
      goto LABEL_62;
    }
    v19 = 6;
LABEL_33:
    EngSetLastError(v19);
    goto LABEL_62;
  }
  v16 = 87;
LABEL_21:
  EngSetLastError(v16);
LABEL_66:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v50);
  DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(&v34);
  SEMOBJ::vUnlock((SEMOBJ *)&v44);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v45);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
  `vector destructor iterator'(v53, 48LL, 16, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
