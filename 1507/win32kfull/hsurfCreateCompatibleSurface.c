/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C009921C
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003FD8 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F81D4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0140EC0 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00F8308 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  HSURF v15; // rbx
  unsigned int v16; // r11d
  unsigned int v17; // esi
  int v19; // r10d
  int v20; // r15d
  int v21; // edx
  bool v22; // zf
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
  int (*v33)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v34; // r10
  int v35; // eax
  __int64 v37; // [rsp+60h] [rbp-89h] BYREF
  __int64 v38; // [rsp+68h] [rbp-81h] BYREF
  __int64 v39; // [rsp+70h] [rbp-79h] BYREF
  char v40; // [rsp+78h] [rbp-71h]
  int v41; // [rsp+7Ch] [rbp-6Dh]
  _BYTE v42[32]; // [rsp+80h] [rbp-69h] BYREF
  SURFACE *v43; // [rsp+A0h] [rbp-49h]
  __int64 v44; // [rsp+A8h] [rbp-41h] BYREF
  _DWORD v45[3]; // [rsp+B0h] [rbp-39h] BYREF
  int v46; // [rsp+BCh] [rbp-2Dh]
  HPALETTE v47; // [rsp+C0h] [rbp-29h]
  __int64 v48; // [rsp+C8h] [rbp-21h]
  unsigned __int64 v49; // [rsp+D0h] [rbp-19h] BYREF
  unsigned int v50; // [rsp+D8h] [rbp-11h]
  unsigned int v51; // [rsp+DCh] [rbp-Dh]

  v15 = 0LL;
  v16 = a2;
  v17 = a6;
  v19 = a14;
  v20 = a13;
  v44 = a15;
  v46 = 0;
  v47 = a3;
  v45[0] = a2;
  v21 = 67108865;
  v48 = 67108865LL;
  v45[1] = a4;
  v45[2] = a5;
  v37 = a1;
  v22 = (*(_DWORD *)(a1 + 56) & 0x8000) == 0;
  LODWORD(v38) = a14;
  if ( !v22 )
    v21 = 67371009;
  LODWORD(v48) = v21;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_51;
    v17 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v37);
    if ( !v17 )
      goto LABEL_52;
    a1 = v37;
    v16 = v45[0];
    v19 = v38;
  }
  if ( a8 )
  {
    v17 = 0;
    if ( g_pDwmState )
      v17 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v17 )
    goto LABEL_52;
  v23 = 0LL;
  v49 = __PAIR64__(a5, a4);
  if ( a8 )
  {
    if ( !a13 )
      v20 = 87;
    v24 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64, _QWORD, _DWORD, int, __int64 *))(a1 + 3472);
    if ( v24 )
    {
      v25 = 1LL;
      v38 = 0LL;
      if ( a11 )
        v25 = 5LL;
      if ( a12 )
        v25 = (unsigned int)v25 | 8;
      v26 = (HSURF)v24(*(_QWORD *)(a1 + 1824), v49, v16, v25, 0LL, 0, v19, &v38);
      v23 = v26;
      if ( v26 )
      {
        SURFREF::SURFREF((SURFREF *)v42, v26);
        v27 = v43;
        if ( v43 )
        {
          if ( a12 )
          {
            *((_DWORD *)v43 + 29) |= 0x400u;
            v27 = v43;
          }
          *((_DWORD *)v27 + 29) |= 1u;
          *((_QWORD *)v43 + 62) = v38;
          if ( (*(_DWORD *)(v37 + 56) & 0x4000000) == 0 )
          {
            v49 = 0LL;
            v28 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v37);
            if ( v28 )
              v29 = (unsigned __int64)*v28;
            else
              v29 = v49;
            *((_QWORD *)v43 + 63) = v29;
          }
          *((_DWORD *)v43 + 128) = v20;
          goto LABEL_29;
        }
        goto LABEL_50;
      }
    }
    if ( a9 )
      return v15;
    goto LABEL_39;
  }
  if ( a10 )
  {
    v30 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64 *))(a1 + 3472);
    if ( !v30 )
      return v15;
    v31 = (HSURF)v30(*(_QWORD *)(a1 + 1824), v49, v16, (a11 != 0 ? 4 : 0) | 2u, 0LL, a13, v38, &v44);
    v23 = v31;
    if ( !v31 )
      return v15;
    SURFREF::SURFREF((SURFREF *)v42, v31);
    if ( v43 )
    {
      *((_DWORD *)v43 + 29) |= 8u;
      *((_QWORD *)v43 + 62) = v44;
LABEL_29:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v42);
      goto LABEL_40;
    }
LABEL_50:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v42);
    return v15;
  }
  v32 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a1 + 2800);
  if ( v32 )
  {
    v23 = (HSURF)v32(*(_QWORD *)(a1 + 1824), v49, v16);
LABEL_39:
    if ( v23 )
    {
LABEL_40:
      if ( (_DWORD)v23 != -1 )
      {
        SURFREF::SURFREF((SURFREF *)v42, v23);
        if ( v43 )
        {
          *((_DWORD *)v43 + 28) |= 0x800000u;
          *((_DWORD *)v43 + 28) |= 0x4000000u;
          *((_DWORD *)v43 + 28) |= 0x4000u;
          if ( v47 )
          {
            EPALOBJ::EPALOBJ((EPALOBJ *)&v49, v47);
            if ( v49 )
              *((_QWORD *)v43 + 15) = v49;
          }
          if ( !a8 && (!a10 || !v44) )
          {
            v49 = 0LL;
            v50 = a4;
            v51 = a5;
            v33 = SURFACE::pfnBitBlt(v43);
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v33)(
              v34,
              0LL,
              0LL,
              0LL,
              0LL,
              &v49,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
          }
          EtwPhysicalSurfCreateEvent(v23, 1LL, *((_QWORD *)v43 + 62), 1LL);
          v15 = v23;
        }
        goto LABEL_50;
      }
    }
LABEL_52:
    v35 = a7;
    if ( a8 )
      v35 = 1;
    goto LABEL_54;
  }
LABEL_51:
  v35 = a7;
LABEL_54:
  LODWORD(v48) = (v35 != 0 ? 0x800 : 0) | v48;
  v39 = 0LL;
  v40 = 0;
  v41 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v39, (struct _DEVBITMAPINFO *)v45, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v39 )
  {
    v40 |= 1u;
    *(_DWORD *)(v39 + 112) |= 0x800000u;
    *(_QWORD *)(v39 + 48) = v37;
    if ( *(_QWORD *)(v39 + 240) )
      *(_DWORD *)(v39 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v39 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v39 + 32), 0LL, 0LL, v17);
    v15 = *(HSURF *)(v39 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v39);
  return v15;
}
