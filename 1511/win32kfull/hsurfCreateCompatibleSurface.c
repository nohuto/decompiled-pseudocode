/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C0040E24
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0006F58 (GreCreateBitmapFromDxSurface.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C001C5DC (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01009F4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0038DCC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0100B28 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall hsurfCreateCompatibleSurface(
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
  __int64 v15; // rdi
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned int v18; // r14d
  int v19; // r13d
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(_QWORD, unsigned __int64, _QWORD, __int64, _QWORD, _DWORD, int, __int64 *); // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  struct _LUID *v28; // rax
  unsigned __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r10
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 (__fastcall *v34)(_QWORD, unsigned __int64, _QWORD); // rax
  __int64 v35; // rax
  SURFACE *v36; // rbx
  int (*v37)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v38; // eax
  unsigned __int64 v40; // [rsp+60h] [rbp-69h] BYREF
  __int64 v41; // [rsp+68h] [rbp-61h] BYREF
  __int64 v42; // [rsp+70h] [rbp-59h] BYREF
  char v43; // [rsp+78h] [rbp-51h]
  int v44; // [rsp+7Ch] [rbp-4Dh]
  int v45; // [rsp+80h] [rbp-49h]
  __int64 v46; // [rsp+88h] [rbp-41h] BYREF
  __int64 v47; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v48[3]; // [rsp+98h] [rbp-31h] BYREF
  int v49; // [rsp+A4h] [rbp-25h]
  HPALETTE v50; // [rsp+A8h] [rbp-21h]
  __int64 v51; // [rsp+B0h] [rbp-19h]
  __int64 v52; // [rsp+B8h] [rbp-11h] BYREF
  int v53; // [rsp+C0h] [rbp-9h]
  unsigned int v54; // [rsp+C4h] [rbp-5h]

  v15 = 0LL;
  v16 = a5;
  v17 = a2;
  v18 = a6;
  v19 = a13;
  v47 = a15;
  v49 = 0;
  v48[0] = a2;
  v51 = 1LL;
  v20 = 1LL;
  v50 = a3;
  v46 = a1;
  v48[1] = a4;
  v48[2] = a5;
  v21 = (*(_DWORD *)(a1 + 56) & 0x8000) == 0;
  v45 = a4;
  if ( !v21 )
    v20 = 262145LL;
  LODWORD(v51) = v20;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_52;
    v18 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v46);
    if ( !v18 )
      goto LABEL_53;
    a1 = v46;
    v17 = v48[0];
    a4 = v45;
    v16 = a5;
  }
  if ( a8 )
  {
    v18 = 0;
    if ( g_pDwmState )
      v18 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v18 )
    goto LABEL_53;
  v22 = 0LL;
  v40 = __PAIR64__(v16, a4);
  if ( a8 )
  {
    if ( !a13 )
      v19 = 87;
    v23 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64, _QWORD, _DWORD, int, __int64 *))(a1 + 3472);
    if ( v23 )
    {
      v24 = 1LL;
      v52 = 0LL;
      if ( a11 )
        v24 = 5LL;
      if ( a12 )
        v24 = (unsigned int)v24 | 8;
      v25 = v23(*(_QWORD *)(a1 + 1824), v40, v17, v24, 0LL, 0, a14, &v52);
      v22 = v25;
      if ( v25 )
      {
        LOBYTE(v20) = 5;
        v26 = HmgShareLockCheck(v25, v20);
        v41 = v26;
        v27 = v26;
        if ( v26 )
        {
          if ( a12 )
            *(_DWORD *)(v26 + 116) |= 0x400u;
          *(_DWORD *)(v26 + 116) |= 1u;
          *(_QWORD *)(v26 + 496) = v52;
          if ( (*(_DWORD *)(v46 + 56) & 0x4000000) == 0 )
          {
            v40 = 0LL;
            v28 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v46);
            if ( v28 )
              v29 = (unsigned __int64)*v28;
            else
              v29 = v40;
            *(_QWORD *)(v27 + 504) = v29;
          }
          *(_DWORD *)(v27 + 512) = v19;
          goto LABEL_29;
        }
        goto LABEL_51;
      }
    }
    if ( a9 )
      return v15;
    goto LABEL_39;
  }
  if ( a10 )
  {
    v30 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(a1 + 3472);
    if ( !v30 )
      return v15;
    v31 = v30(*(_QWORD *)(a1 + 1824), v40, v17, (a11 != 0 ? 4 : 0) | 2u, 0LL, a13, a14, &v47);
    v22 = v31;
    if ( !v31 )
      return v15;
    LOBYTE(v32) = 5;
    v33 = HmgShareLockCheck(v31, v32);
    v41 = v33;
    if ( v33 )
    {
      *(_DWORD *)(v33 + 116) |= 8u;
      *(_QWORD *)(v33 + 496) = v47;
LABEL_29:
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v41);
      goto LABEL_40;
    }
LABEL_51:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v41);
    return v15;
  }
  v34 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a1 + 2800);
  if ( v34 )
  {
    v22 = v34(*(_QWORD *)(a1 + 1824), v40, v17);
LABEL_39:
    if ( v22 )
    {
LABEL_40:
      if ( (_DWORD)v22 != -1 )
      {
        LOBYTE(v20) = 5;
        v35 = HmgShareLockCheck(v22, v20);
        v41 = v35;
        v36 = (SURFACE *)v35;
        if ( v35 )
        {
          *(_DWORD *)(v35 + 112) |= 0x4804000u;
          if ( v50 )
          {
            EPALOBJ::EPALOBJ((EPALOBJ *)&v40, v50);
            if ( v40 )
            {
              *((_QWORD *)v36 + 15) = v40;
              v40 = 0LL;
            }
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v40);
          }
          if ( !a8 && (!a10 || !v47) )
          {
            v53 = v45;
            v54 = a5;
            v52 = 0LL;
            v37 = SURFACE::pfnBitBlt(v36);
            ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v37)(
              (char *)v36 + 24,
              0LL,
              0LL,
              0LL,
              0LL,
              &v52,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
          }
          EtwPhysicalSurfCreateEvent(v22, 1LL, *((_QWORD *)v36 + 62), 1LL);
          v15 = v22;
        }
        goto LABEL_51;
      }
    }
LABEL_53:
    v38 = a7;
    if ( a8 )
      v38 = 1;
    goto LABEL_55;
  }
LABEL_52:
  v38 = a7;
LABEL_55:
  LODWORD(v51) = (v38 != 0 ? 0x800 : 0) | v51;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)v48, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v42 )
  {
    v43 |= 1u;
    *(_DWORD *)(v42 + 112) |= 0x800000u;
    *(_DWORD *)(v42 + 112) |= 0x4000000u;
    *(_QWORD *)(v42 + 48) = v46;
    if ( *(_QWORD *)(v42 + 240) )
      *(_DWORD *)(v42 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v42 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v42 + 32), 0LL, 0LL, v18);
    v15 = *(_QWORD *)(v42 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return v15;
}
