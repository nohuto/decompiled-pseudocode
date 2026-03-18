/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0029B78
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C0135C80 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00F0964 (hsurfCreateCompatibleSurface.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rsi
  BOOL (__stdcall *v6)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r13
  __int64 v7; // rdx
  signed __int32 v8; // ett
  BOOL (__stdcall *v9)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v10; // rdx
  HSURF CompatibleSurface; // rax
  HSURF v12; // r12
  __int64 v13; // rdx
  signed __int32 v14; // ett
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17; // ett
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // r10
  __int64 v19; // rdx
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h] BYREF
  int v26; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h] BYREF
  char v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E4h] [rbp-24h]
  int v33; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v34; // [rsp+ECh] [rbp-1Ch]
  __int128 v35; // [rsp+F4h] [rbp-14h]
  int v36; // [rsp+104h] [rbp-4h]
  __int64 v37; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v38[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v39; // [rsp+130h] [rbp+28h]
  _BYTE v40[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v41[80]; // [rsp+158h] [rbp+50h] BYREF
  __m128i v42; // [rsp+1A8h] [rbp+A0h] BYREF
  int v43; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128i si128; // [rsp+1BCh] [rbp+B4h]
  int v45; // [rsp+1CCh] [rbp+C4h]

  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0;
  v2 = *(_QWORD *)this;
  v33 = 0;
  if ( (*(_DWORD *)(v2 + 56) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40, this);
    v37 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v3 = *(_QWORD *)this;
    v4 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
    v5 = *(_QWORD *)(*(_QWORD *)this + 1832LL);
    v43 = 0;
    v45 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v42 = si128;
    *(_DWORD *)(v3 + 2464) = 0;
    v33 = 6;
    *(_QWORD *)((char *)&v35 + 4) = *(_QWORD *)gppalRGB;
    v34 = 0x2800000028LL;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    HIDWORD(v35) = 1;
    v6 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v30, (struct _DEVBITMAPINFO *)&v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v22,
                         0LL,
                         0LL,
                         gppalRGB,
                         gppalRGB,
                         ppalDefault,
                         ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v21, 0LL, 0LL, v5, gppalRGB, ppalDefault, ppalDefault, 0, 0, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v20, 0LL, 0LL, gppalRGB, v5, ppalDefault, ppalDefault, 0, 0, 0, 0) )
    {
      v7 = *(_QWORD *)this;
      v27 = v22;
      v28 = v21;
      v29 = v20;
      v26 = 33488896;
      _m_prefetchw((const void *)(v7 + 56));
      do
        v8 = *(_DWORD *)(v7 + 56);
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 56), v8 & 0xFFFBFFFF, v8) );
      if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
        v9 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3280LL);
      else
        v9 = EngAlphaBlend;
      v10 = 0LL;
      if ( v30 )
        v10 = v30 + 24;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v9)(
             v4 + 24,
             v10,
             &v43,
             v20,
             &v42,
             &v42,
             &v26)
        && (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2464LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 60LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
    SURFMEM::~SURFMEM((SURFMEM *)&v30);
    CompatibleSurface = (HSURF)hsurfCreateCompatibleSurface(
                                 *(_QWORD *)this,
                                 *(_DWORD *)(v4 + 96),
                                 0,
                                 40,
                                 40,
                                 1,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0LL);
    v12 = CompatibleSurface;
    if ( CompatibleSurface )
    {
      SURFREF::SURFREF((SURFREF *)v38, CompatibleSurface);
      if ( v39 )
      {
        v25 = 0LL;
        v24 = 0LL;
        v23 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v25, 0LL, 0LL, v5, v5, ppalDefault, ppalDefault, 0, 0, 0, 0)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(&v24, 0LL, 0LL, v5, gppalRGB, ppalDefault, ppalDefault, 0, 0, 0, 0)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(&v23, 0LL, 0LL, gppalRGB, v5, ppalDefault, ppalDefault, 0, 0, 0, 0) )
        {
          v13 = *(_QWORD *)this;
          v27 = v24;
          v28 = v24;
          v29 = v23;
          v26 = 8716288;
          _m_prefetchw((const void *)(v13 + 56));
          do
            v14 = *(_DWORD *)(v13 + 56);
          while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 56), v14 & 0xFFFBFFFF, v14) );
          if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
            v6 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3280LL);
          v15 = 0LL;
          if ( v39 )
            v15 = v39 + 24;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v6)(
                 v4 + 24,
                 v15,
                 &v43,
                 v25,
                 &v42,
                 &v42,
                 &v26)
            && (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x40000) == 0 )
          {
            *(_DWORD *)(*(_QWORD *)this + 2464LL) |= 1u;
            *(_DWORD *)(*(_QWORD *)this + 60LL) |= 1u;
          }
        }
        v16 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 56LL));
        do
          v17 = *(_DWORD *)(v16 + 56);
        while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 56), v17 & 0xFFFBFFFF, v17) );
        if ( (*(_DWORD *)(v4 + 112) & 0x8000) != 0 )
          v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)this + 3304LL);
        else
          v18 = EngTransparentBlt;
        v19 = 0LL;
        if ( v39 )
          v19 = v39 + 24;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))v18)(
               v4 + 24,
               v19,
               0LL,
               0LL,
               &v42,
               &v42,
               1,
               0) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x40000) == 0 )
            *(_DWORD *)(*(_QWORD *)this + 60LL) |= 4u;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v25);
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
    }
    bDeleteSurface(v12);
    SEMOBJ::vUnlock((SEMOBJ *)&v37);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v40);
    DCOBJ::~DCOBJ((DCOBJ *)v41);
  }
}
