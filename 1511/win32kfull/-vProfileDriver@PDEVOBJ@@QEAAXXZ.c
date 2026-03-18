/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C001C5DC
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C0114D60 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0040E24 (hsurfCreateCompatibleSurface.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
  __int64 CompatibleSurface; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdx
  signed __int32 v15; // ett
  __int64 v16; // rdx
  signed __int32 v17; // ett
  int v18; // eax
  __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h] BYREF
  int v26; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h] BYREF
  char v31; // [rsp+E8h] [rbp-20h]
  int v32; // [rsp+ECh] [rbp-1Ch]
  int v33; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v34; // [rsp+F4h] [rbp-14h]
  __int128 v35; // [rsp+FCh] [rbp-Ch]
  int v36; // [rsp+10Ch] [rbp+4h]
  __int64 v37; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v38[80]; // [rsp+118h] [rbp+10h] BYREF
  __m128i v39; // [rsp+168h] [rbp+60h] BYREF
  int v40; // [rsp+178h] [rbp+70h] BYREF
  __m128i si128; // [rsp+17Ch] [rbp+74h]
  int v42; // [rsp+18Ch] [rbp+84h]

  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0;
  v2 = *(_QWORD *)this;
  v33 = 0;
  if ( (*(_DWORD *)(v2 + 56) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v38, this);
    v37 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v3 = *(_QWORD *)this;
    v4 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
    v5 = *(_QWORD *)(*(_QWORD *)this + 1832LL);
    v40 = 0;
    v42 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v39 = si128;
    *(_DWORD *)(v3 + 2464) = 0;
    v33 = 6;
    *(_QWORD *)((char *)&v35 + 4) = *(_QWORD *)gppalRGB;
    v34 = 0x2800000028LL;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v24 = 0LL;
    v22 = 0LL;
    v19 = 0LL;
    HIDWORD(v35) = 1;
    v6 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v30, (struct _DEVBITMAPINFO *)&v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v24,
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
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v22, 0LL, 0LL, v5, gppalRGB, ppalDefault, ppalDefault, 0, 0, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v19, 0LL, 0LL, gppalRGB, v5, ppalDefault, ppalDefault, 0, 0, 0, 0) )
    {
      v7 = *(_QWORD *)this;
      v27 = v24;
      v28 = v22;
      v29 = v19;
      v26 = 33488896;
      _m_prefetchw((const void *)(v7 + 56));
      do
        v8 = *(_DWORD *)(v7 + 56);
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 56), v8 & 0xFFFBFFFF, v8) );
      if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
        v9 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3288LL);
      else
        v9 = EngAlphaBlend;
      v10 = 0LL;
      if ( v30 )
        v10 = v30 + 24;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v9)(
             v4 + 24,
             v10,
             &v40,
             v19,
             &v39,
             &v39,
             &v26)
        && (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2464LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 60LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
    SURFMEM::~SURFMEM((SURFMEM *)&v30);
    CompatibleSurface = hsurfCreateCompatibleSurface(
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
    v13 = CompatibleSurface;
    if ( CompatibleSurface )
    {
      LOBYTE(v12) = 5;
      v20 = HmgShareLockCheck(CompatibleSurface, v12);
      if ( v20 )
      {
        v21 = 0LL;
        v25 = 0LL;
        v23 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v21, 0LL, 0LL, v5, v5, ppalDefault, ppalDefault, 0, 0, 0, 0)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(&v25, 0LL, 0LL, v5, gppalRGB, ppalDefault, ppalDefault, 0, 0, 0, 0)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(&v23, 0LL, 0LL, gppalRGB, v5, ppalDefault, ppalDefault, 0, 0, 0, 0) )
        {
          v14 = *(_QWORD *)this;
          v27 = v25;
          v28 = v25;
          v29 = v23;
          v26 = 8716288;
          _m_prefetchw((const void *)(v14 + 56));
          do
            v15 = *(_DWORD *)(v14 + 56);
          while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 56), v15 & 0xFFFBFFFF, v15) );
          if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
            v6 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3288LL);
          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v6)(
                 v4 + 24,
                 v20 + 24,
                 &v40,
                 v21,
                 &v39,
                 &v39,
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
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))(*(_QWORD *)this + 3312LL))(
                  v4 + 24,
                  v20 + 24,
                  0LL,
                  0LL,
                  &v39,
                  &v39,
                  1,
                  0);
        else
          v18 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))EngTransparentBlt)(
                  v4 + 24,
                  v20 + 24,
                  0LL,
                  0LL,
                  &v39,
                  &v39,
                  1,
                  0);
        if ( v18 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x40000) == 0 )
            *(_DWORD *)(*(_QWORD *)this + 60LL) |= 4u;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v25);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
    }
    bDeleteSurface(v13);
    SEMOBJ::vUnlock((SEMOBJ *)&v37);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v38);
  }
}
