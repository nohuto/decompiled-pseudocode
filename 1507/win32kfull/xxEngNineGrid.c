/*
 * XREFs of xxEngNineGrid @ 0x1C00C177C
 * Callers:
 *     EngNineGrid @ 0x1C00C16D0 (EngNineGrid.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     RenderNineGrid @ 0x1C00C1C0C (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  int v14; // eax
  int v15; // r15d
  int v16; // eax
  int v17; // r9d
  int v18; // r8d
  LONG bottom; // r14d
  LONG right; // edi
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // r10d
  int v25; // edi
  int v26; // r14d
  __int64 v27; // r12
  signed int ClearBits; // eax
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rbx
  SURFOBJ *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  LONG top; // ebx
  LONG v36; // ecx
  LONG v37; // edx
  LONG v38; // r15d
  LONG v39; // r13d
  LONG left; // edi
  LONG v41; // r14d
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  __int64 v46[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  char v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+84h] [rbp-7Ch]
  struct _SURFOBJ *v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+BCh] [rbp-44h]
  __int128 v59; // [rsp+C4h] [rbp-3Ch]
  int v60; // [rsp+D4h] [rbp-2Ch]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  struct tagRECT v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-10h] BYREF
  LONG v64; // [rsp+F8h] [rbp-8h]
  LONG v65; // [rsp+FCh] [rbp-4h]

  v51 = a1;
  v52 = a8;
  v53 = a4;
  v61 = a3;
  v54 = a2;
  v56 = (__int64)a6;
  v55 = (__int64)a7;
  v63 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = a5[2];
  v12 = a5[1];
  v13 = a5[3];
  v46[0] = __PAIR64__(v12, v10);
  v46[1] = __PAIR64__(v13, v11);
  if ( v10 <= v11 )
  {
    v15 = 0;
  }
  else
  {
    v14 = v10;
    LODWORD(v46[0]) = v11;
    v10 = v11;
    LODWORD(v46[1]) = v14;
    v11 = v14;
    v15 = 1;
  }
  v16 = *a7;
  v47 = v15;
  if ( (v16 & 0x20) != 0 )
  {
    v17 = a6[2] - *a6;
    v18 = a6[3] - a6[1];
    if ( v11 - v10 > v17 )
    {
      if ( v15 )
        LODWORD(v46[0]) = v11 - v17;
      else
        LODWORD(v46[1]) = v17 + v10;
    }
    if ( (int)(v13 - v12) > v18 )
    {
      if ( v15 )
        HIDWORD(v46[0]) = v13 - v18;
      else
        HIDWORD(v46[1]) = v12 + v18;
    }
  }
  v62 = *(struct tagRECT *)v46;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(&v62);
  bottom = v62.bottom;
  right = v62.right;
  IsRectEmptyInl(&v62);
  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v62) && (v22 & v21) != 0 )
  {
    v25 = right - v24;
    v48 = 0LL;
    v26 = bottom - v23;
    v49 = 0;
    v50 = 0;
    v27 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v29 = ClearBits;
    if ( ClearBits == -1 || (v27 = apsoNineGrid[ClearBits]) == 0 )
    {
      v58 = 0LL;
      v59 = 0uLL;
      v60 = 0;
      v30 = *(_QWORD **)(v63 + 120);
      v57 = 0;
      if ( v30 )
      {
        v57 = *(_DWORD *)(v63 + 96);
        v58 = 0x4000000100LL;
        HIDWORD(v59) = 0;
        *(_QWORD *)((char *)&v59 + 4) = *v30;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v48, (struct _DEVBITMAPINFO *)&v57, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v31 = v48;
          if ( (_DWORD)v29 != -1 )
          {
            v32 = EngLockSurface(*(HSURF *)(v48 + 32));
            v33 = v48;
            v49 |= 1u;
            LOBYTE(v34) = 5;
            apsoNineGrid[v29] = v32;
            HmgSetOwner(*(_QWORD *)(v33 + 32), 0LL, v34);
            *(_DWORD *)(v48 + 92) = 0;
          }
          if ( v31 )
            v27 = v31 + 24;
          else
            v27 = 0LL;
        }
      }
    }
    if ( (_DWORD)v29 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v27 )
    {
      if ( v25 > 256 || v26 > 64 )
      {
        top = v62.top;
        v36 = v62.bottom;
        if ( v62.top < v62.bottom )
        {
          v37 = v62.right;
          do
          {
            v38 = top + 64;
            v39 = top + 64;
            if ( top + 64 > v36 || v38 < top )
              v39 = v36;
            left = v62.left;
            if ( v62.left < v37 )
            {
              do
              {
                v41 = left + 256;
                v42 = left + 256;
                if ( left + 256 > v37 || v41 < left )
                  v42 = v37;
                v64 = v42;
                v63 = __PAIR64__(top, left);
                v65 = v39;
                RenderNineGrid(v51, (__int64)&v63, v53, (__int64)v46, v56, v55, v52, v47);
                v37 = v62.right;
                v43 = left;
                left += 256;
              }
              while ( v41 >= v43 && v41 < v62.right );
              v36 = v62.bottom;
            }
            v44 = top;
            top += 64;
          }
          while ( v38 >= v44 && v38 < v36 );
        }
      }
      else
      {
        RenderNineGrid(v51, (__int64)&v62, v53, (__int64)v46, v56, v55, v52, v15);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v29 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v48);
  }
  return 1LL;
}
