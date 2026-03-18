/*
 * XREFs of xxEngNineGrid @ 0x1C00C1ADC
 * Callers:
 *     EngNineGrid @ 0x1C00C1A30 (EngNineGrid.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     RenderNineGrid @ 0x1C00C1F78 (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall xxEngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed int *a5,
        _DWORD *a6,
        int *a7,
        __int64 a8)
{
  signed int v10; // edx
  signed int v11; // ecx
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  int v14; // r15d
  int v15; // eax
  int v16; // r14d
  int v17; // edi
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // edi
  int v22; // r14d
  __int64 v23; // r12
  signed int ClearBits; // eax
  __int64 v25; // rsi
  signed int v27; // ebx
  int v28; // ecx
  int v29; // edx
  int v30; // r15d
  int v31; // r13d
  int v32; // edi
  int v33; // r14d
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // r9d
  int v38; // r8d
  _QWORD *v39; // rax
  __int64 v40; // rbx
  SURFOBJ *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  __int64 v45[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  char v48; // [rsp+80h] [rbp-80h]
  int v49; // [rsp+84h] [rbp-7Ch]
  struct _SURFOBJ *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+BCh] [rbp-44h]
  __int128 v58; // [rsp+C4h] [rbp-3Ch]
  int v59; // [rsp+D4h] [rbp-2Ch]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-10h] BYREF
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]

  v50 = a1;
  v51 = a8;
  v52 = a4;
  v60 = a3;
  v53 = a2;
  v55 = (__int64)a6;
  v54 = (__int64)a7;
  v62 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = a5[2];
  v12 = a5[1];
  v13 = a5[3];
  v45[0] = __PAIR64__(v12, v10);
  v45[1] = __PAIR64__(v13, v11);
  if ( v10 > v11 )
  {
    v44 = v10;
    LODWORD(v45[0]) = v11;
    v10 = v11;
    LODWORD(v45[1]) = v44;
    v11 = v44;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  v15 = *a7;
  v46 = v14;
  if ( (v15 & 0x20) != 0 )
  {
    v37 = a6[2] - *a6;
    v38 = a6[3] - a6[1];
    if ( v11 - v10 > v37 )
    {
      if ( v14 )
        LODWORD(v45[0]) = v11 - v37;
      else
        LODWORD(v45[1]) = v37 + v10;
    }
    if ( (int)(v13 - v12) > v38 )
    {
      if ( v14 )
        HIDWORD(v45[0]) = v13 - v38;
      else
        HIDWORD(v45[1]) = v12 + v38;
    }
  }
  *(_OWORD *)v61 = *(_OWORD *)v45;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(v61, (_DWORD *)(a3 + 4));
  v16 = HIDWORD(v61[1]);
  v17 = v61[1];
  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v61) && v18 )
  {
    v21 = v17 - v20;
    v47 = 0LL;
    v22 = v16 - v19;
    v48 = 0;
    v49 = 0;
    v23 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v25 = ClearBits;
    if ( ClearBits == -1 || (v23 = apsoNineGrid[ClearBits]) == 0 )
    {
      v57 = 0LL;
      v58 = 0uLL;
      v59 = 0;
      v39 = *(_QWORD **)(v62 + 120);
      v56 = 0;
      if ( v39 )
      {
        v56 = *(_DWORD *)(v62 + 96);
        v57 = 0x4000000100LL;
        HIDWORD(v58) = 0;
        *(_QWORD *)((char *)&v58 + 4) = *v39;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v47, (struct _DEVBITMAPINFO *)&v56, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v40 = v47;
          if ( (_DWORD)v25 != -1 )
          {
            v41 = EngLockSurface(*(HSURF *)(v47 + 32));
            v42 = v47;
            v48 |= 1u;
            LOBYTE(v43) = 5;
            apsoNineGrid[v25] = v41;
            HmgSetOwner(*(_QWORD *)(v42 + 32), 0LL, v43);
            *(_DWORD *)(v47 + 92) = 0;
          }
          if ( v40 )
            v23 = v40 + 24;
          else
            v23 = 0LL;
        }
      }
    }
    if ( (_DWORD)v25 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v25, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v23 )
    {
      if ( v22 > 64 || v21 > 256 )
      {
        v27 = HIDWORD(v61[0]);
        v28 = HIDWORD(v61[1]);
        if ( SHIDWORD(v61[0]) < SHIDWORD(v61[1]) )
        {
          v29 = v61[1];
          do
          {
            v30 = v27 + 64;
            v31 = v27 + 64;
            if ( v27 + 64 > v28 || v30 < v27 )
              v31 = v28;
            v32 = v61[0];
            if ( SLODWORD(v61[0]) < v29 )
            {
              do
              {
                v33 = v32 + 256;
                v34 = v32 + 256;
                if ( v32 + 256 > v29 || v33 < v32 )
                  v34 = v29;
                v63 = v34;
                v62 = __PAIR64__(v27, v32);
                v64 = v31;
                RenderNineGrid(v50, (__int64)&v62, v52, (__int64)v45, v55, v54, v51, v46);
                v29 = v61[1];
                v35 = v32;
                v32 += 256;
              }
              while ( v33 < SLODWORD(v61[1]) && v33 >= v35 );
              v28 = HIDWORD(v61[1]);
            }
            v36 = v27;
            v27 += 64;
          }
          while ( v30 < v28 && v30 >= v36 );
        }
      }
      else
      {
        RenderNineGrid(v50, (__int64)v61, v52, (__int64)v45, v55, v54, v51, v14);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v25 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v25, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v47);
  }
  return 1LL;
}
