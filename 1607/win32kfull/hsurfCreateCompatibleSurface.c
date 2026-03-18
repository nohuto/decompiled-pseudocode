/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C00F0964
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0009B98 (GreCreateBitmapFromDxSurface.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0029B78 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F0E78 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00F0FAC (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

HSURF __fastcall hsurfCreateCompatibleSurface(
        __int64 a1,
        unsigned int a2,
        HPALETTE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  unsigned int v15; // r11d
  unsigned int v17; // esi
  int v18; // r10d
  int v19; // r15d
  int v20; // edx
  bool v21; // zf
  HSURF v22; // rbx
  HSURF v23; // rdi
  __int64 (__fastcall *v24)(_QWORD, unsigned __int64, _QWORD, __int64, _QWORD, _DWORD, int, __int64 *); // rax
  __int64 v25; // r9
  HSURF v26; // rax
  SURFACE *v27; // rax
  struct _LUID *v28; // rax
  unsigned __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64 *); // r10
  HSURF v31; // rax
  __int64 (__fastcall *v32)(_QWORD, unsigned __int64, _QWORD); // rax
  unsigned __int64 v33; // rax
  int (*v34)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v35; // r10
  int v36; // eax
  __int64 v38; // [rsp+60h] [rbp-89h] BYREF
  __int64 v39; // [rsp+68h] [rbp-81h] BYREF
  __int64 v40; // [rsp+70h] [rbp-79h] BYREF
  char v41; // [rsp+78h] [rbp-71h]
  int v42; // [rsp+7Ch] [rbp-6Dh]
  _BYTE v43[32]; // [rsp+80h] [rbp-69h] BYREF
  SURFACE *v44; // [rsp+A0h] [rbp-49h]
  __int64 v45; // [rsp+A8h] [rbp-41h] BYREF
  _DWORD v46[3]; // [rsp+B0h] [rbp-39h] BYREF
  int v47; // [rsp+BCh] [rbp-2Dh]
  HPALETTE v48; // [rsp+C0h] [rbp-29h]
  __int64 v49; // [rsp+C8h] [rbp-21h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-19h] BYREF
  unsigned int v51; // [rsp+D8h] [rbp-11h]
  unsigned int v52; // [rsp+DCh] [rbp-Dh]

  v15 = a2;
  v17 = a6;
  v18 = a14;
  v19 = a13;
  v45 = a15;
  v47 = 0;
  v46[0] = a2;
  v20 = 67108865;
  v49 = 67108865LL;
  v48 = a3;
  v46[1] = a4;
  v46[2] = a5;
  v39 = a1;
  v21 = (*(_DWORD *)(a1 + 56) & 0x8000) == 0;
  LODWORD(v38) = a14;
  if ( !v21 )
    v20 = 67371009;
  v22 = 0LL;
  LODWORD(v49) = v20;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_52;
    v17 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v39);
    if ( !v17 )
      goto LABEL_53;
    a1 = v39;
    v15 = v46[0];
    v18 = v38;
  }
  if ( a8 )
  {
    v17 = 0;
    if ( g_pDwmState )
      v17 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v17 )
    goto LABEL_53;
  v23 = 0LL;
  v50 = __PAIR64__(a5, a4);
  if ( a8 )
  {
    if ( !a13 )
      v19 = 87;
    v24 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64, _QWORD, _DWORD, int, __int64 *))(a1 + 3464);
    if ( v24 )
    {
      v25 = 1LL;
      v38 = 0LL;
      if ( a11 )
        v25 = 5LL;
      if ( a12 )
        v25 = (unsigned int)v25 | 8;
      v26 = (HSURF)v24(*(_QWORD *)(a1 + 1824), v50, v15, v25, 0LL, 0, v18, &v38);
      v23 = v26;
      if ( v26 )
      {
        SURFREF::SURFREF((SURFREF *)v43, v26);
        v27 = v44;
        if ( v44 )
        {
          if ( a12 )
          {
            *((_DWORD *)v44 + 29) |= 0x400u;
            v27 = v44;
          }
          *((_DWORD *)v27 + 29) |= 1u;
          *((_QWORD *)v44 + 63) = v38;
          if ( (*(_DWORD *)(v39 + 56) & 0x4000000) == 0 )
          {
            v50 = 0LL;
            v28 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v39);
            if ( v28 )
              v29 = (unsigned __int64)*v28;
            else
              v29 = v50;
            *((_QWORD *)v44 + 64) = v29;
          }
          *((_DWORD *)v44 + 130) = v19;
          goto LABEL_29;
        }
        goto LABEL_51;
      }
    }
    if ( a9 )
      return v22;
    goto LABEL_39;
  }
  if ( a10 )
  {
    v30 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64 *))(a1 + 3464);
    if ( !v30 )
      return v22;
    v31 = (HSURF)v30(*(_QWORD *)(a1 + 1824), v50, v15, (a11 != 0 ? 4 : 0) | 2u, 0LL, a13, v38, &v45);
    v23 = v31;
    if ( !v31 )
      return v22;
    SURFREF::SURFREF((SURFREF *)v43, v31);
    if ( v44 )
    {
      *((_DWORD *)v44 + 29) |= 8u;
      *((_QWORD *)v44 + 63) = v45;
LABEL_29:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
      goto LABEL_40;
    }
LABEL_51:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
    return v22;
  }
  v32 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a1 + 2792);
  if ( v32 )
  {
    v23 = (HSURF)v32(*(_QWORD *)(a1 + 1824), v50, v15);
LABEL_39:
    if ( v23 )
    {
LABEL_40:
      if ( (_DWORD)v23 != -1 )
      {
        SURFREF::SURFREF((SURFREF *)v43, v23);
        if ( v44 )
        {
          *((_DWORD *)v44 + 28) |= 0x800000u;
          *((_DWORD *)v44 + 28) |= 0x4000000u;
          *((_DWORD *)v44 + 28) |= 0x4000u;
          if ( v48 )
          {
            EPALOBJ::EPALOBJ((EPALOBJ *)&v50, v48);
            v33 = v50;
            if ( v50 )
            {
              v50 = 0LL;
              *((_QWORD *)v44 + 15) = v33;
            }
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v50);
          }
          if ( !a8 && (!a10 || !v45) )
          {
            v50 = 0LL;
            v51 = a4;
            v52 = a5;
            v34 = SURFACE::pfnBitBlt(v44);
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v34)(
              v35,
              0LL,
              0LL,
              0LL,
              0LL,
              &v50,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
          }
          EtwPhysicalSurfCreateEvent(v23, 1LL, *((_QWORD *)v44 + 63), 1LL);
          v22 = v23;
        }
        goto LABEL_51;
      }
    }
LABEL_53:
    v36 = a7;
    if ( a8 )
      v36 = 1;
    goto LABEL_55;
  }
LABEL_52:
  v36 = a7;
LABEL_55:
  LODWORD(v49) = (v36 != 0 ? 0x800 : 0) | v49;
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v40, (struct _DEVBITMAPINFO *)v46, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v40 )
  {
    v41 |= 1u;
    *(_DWORD *)(v40 + 112) |= 0x800000u;
    *(_QWORD *)(v40 + 48) = v39;
    if ( *(_QWORD *)(v40 + 248) )
      *(_DWORD *)(v40 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v40 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v40 + 32), 0LL, 0LL, v17);
    v22 = *(HSURF *)(v40 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v40);
  return v22;
}
