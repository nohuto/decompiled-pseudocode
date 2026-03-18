/*
 * XREFs of xxEngNineGrid @ 0x1400DF114
 * Callers:
 *     EngNineGrid @ 0x1400DF040 (EngNineGrid.c)
 * Callees:
 *     RenderNineGrid @ 0x1400DF6B8 (RenderNineGrid.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxEngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed int *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned int v9; // r11d
  struct _SURFOBJ *v10; // r8
  signed int v11; // ecx
  signed int v12; // edx
  int v13; // r10d
  unsigned int v14; // r9d
  char v15; // bl
  int v16; // edi
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rdx
  bool v20; // cc
  char v21; // al
  char v22; // al
  int v23; // esi
  int v24; // edi
  __int64 v25; // r12
  __int64 v26; // r14
  struct W32_PUSH_LOCK *v27; // rbx
  signed int ClearBits; // eax
  __int64 v29; // r15
  int v31; // edi
  int v32; // ecx
  int v33; // r13d
  signed int v34; // esi
  int v35; // r14d
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // r8d
  int v40; // edx
  unsigned int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r14
  SURFOBJ *v49; // rax
  __int64 v50; // r8
  unsigned __int8 v51; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  char v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+7Ch] [rbp-84h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  PRTL_BITMAP BitMapHeader; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h] BYREF
  int v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ch] [rbp+Ch]

  v9 = a5[1];
  v61 = a3;
  v10 = a1;
  v57 = a8;
  v11 = *a5;
  v56 = a2;
  v12 = a5[2];
  v13 = v12;
  v60 = a4;
  v14 = a5[3];
  v59 = (__int64)a6;
  v58 = (__int64)a7;
  v66[0] = __PAIR64__(v9, v11);
  v66[1] = __PAIR64__(v14, v12);
  if ( v11 > v12 )
  {
    v13 = v11;
    LODWORD(v66[1]) = v11;
    v11 = v12;
    LODWORD(v66[0]) = v12;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  v51 = v15;
  if ( (*a7 & 0x20) != 0 )
  {
    v39 = a6[2] - *a6;
    v40 = a6[3] - a6[1];
    if ( v13 - v11 > v39 )
    {
      if ( v15 )
      {
        v11 = v13 - v39;
        LODWORD(v66[0]) = v13 - v39;
      }
      else
      {
        LODWORD(v66[1]) = v39 + v11;
      }
    }
    v10 = a1;
    if ( (int)(v14 - v9) > v40 )
    {
      if ( v15 )
        HIDWORD(v66[0]) = v14 - v40;
      else
        HIDWORD(v66[1]) = v9 + v40;
    }
  }
  *(_OWORD *)v65 = *(_OWORD *)v66;
  if ( a3 && *(_BYTE *)(a3 + 20) )
  {
    v41 = *(_DWORD *)(a3 + 4);
    v20 = (int)v41 <= v11;
    v18 = HIDWORD(v65[0]);
    v17 = v65[1];
    v19 = LODWORD(v65[0]);
    if ( !v20 )
      v19 = v41;
    v42 = *(_DWORD *)(a3 + 8);
    LODWORD(v65[0]) = v19;
    if ( v42 > SHIDWORD(v65[0]) )
      v18 = (unsigned int)v42;
    v43 = *(_DWORD *)(a3 + 12);
    HIDWORD(v65[0]) = v18;
    if ( v43 < SLODWORD(v65[1]) )
      v17 = v43;
    v44 = *(_DWORD *)(a3 + 16);
    v16 = HIDWORD(v65[1]);
    LODWORD(v65[1]) = v17;
    if ( v44 < SHIDWORD(v65[1]) )
      v16 = v44;
    HIDWORD(v65[1]) = v16;
    if ( v17 < (int)v19 )
    {
      v19 = (unsigned int)v17;
      LODWORD(v65[0]) = v17;
    }
    else
    {
      if ( v16 < (int)v18 )
        v18 = (unsigned int)v16;
      HIDWORD(v65[0]) = v18;
    }
  }
  else
  {
    v16 = HIDWORD(v65[1]);
    v17 = v65[1];
    v18 = HIDWORD(v65[0]);
    v19 = LODWORD(v65[0]);
  }
  if ( (int)v19 < 0
    || (int)v18 < 0
    || v17 > v10->sizlBitmap.cx
    || (v20 = v16 <= v10->sizlBitmap.cy, LOBYTE(v10) = 1, !v20) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (int)v19 >= v17 || (v21 = 1, (int)v18 >= v16) )
    v21 = 0;
  v22 = (unsigned __int8)v10 & v21;
  if ( (_DWORD)v18 != v16 && (_DWORD)v19 != v17 && v22 )
  {
    v23 = v17 - v19;
    v53 = 0LL;
    v24 = v16 - v18;
    v54 = 0;
    v55 = 0;
    v25 = 0LL;
    v26 = *(_QWORD *)(W32GetSessionState(v18, v19, v10) + 96);
    v67 = v26;
    v27 = (struct W32_PUSH_LOCK *)(v26 + 688);
    if ( v26 != -688 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v26 + 688));
    BitMapHeader = (PRTL_BITMAP)(v26 + 664);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v26 + 664), 1u, 0);
    v29 = ClearBits;
    if ( ClearBits != -1 )
    {
      v25 = *(_QWORD *)(v26 + 8LL * ClearBits + 152);
      if ( v25 )
        goto LABEL_19;
    }
    v63 = 0LL;
    v45 = v56 + 104;
    if ( !v56 )
      v45 = 128LL;
    v64 = 0LL;
    v46 = *(_QWORD **)v45;
    if ( v46 )
    {
      v47 = v56 + 72;
      DWORD1(v63) = 256;
      if ( !v56 )
        v47 = 96LL;
      DWORD2(v63) = 64;
      DWORD2(v64) = 0;
      LODWORD(v63) = *(_DWORD *)v47;
      *(_QWORD *)&v64 = *v46;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v53, (struct _DEVBITMAPINFO *)&v63, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
      {
        v48 = v53;
        if ( (_DWORD)v29 != -1 )
        {
          v49 = EngLockSurface(*(HSURF *)(v53 + 32));
          LOBYTE(v50) = 5;
          *(_QWORD *)(v67 + 8 * v29 + 152) = v49;
          v54 |= 1u;
          HmgSetOwner(*(_QWORD *)(v53 + 32), 0LL, v50);
          *(_DWORD *)(v53 + 92) = 0;
        }
        v25 = (v48 + 24) & -(__int64)(v48 != 0);
      }
    }
    if ( (_DWORD)v29 != -1 )
LABEL_19:
      RtlSetBits(BitMapHeader, v29, 1u);
    if ( v27 )
      GreReleasePushLockExclusive(v27);
    if ( v25 )
    {
      if ( v23 > 256 || v24 > 64 )
      {
        v31 = HIDWORD(v65[0]);
        v32 = v65[1];
        do
        {
          if ( v31 >= SHIDWORD(v65[1]) )
            break;
          v33 = v31 + 64;
          if ( v31 + 64 > SHIDWORD(v65[1]) || v33 < v31 )
            v33 = HIDWORD(v65[1]);
          v34 = v65[0];
          do
          {
            if ( v34 >= v32 )
              break;
            v35 = v34 + 256;
            v36 = v34 + 256;
            if ( v34 + 256 > v32 || v35 < v34 )
              v36 = v32;
            v68 = v36;
            v67 = __PAIR64__(v31, v34);
            v69 = v33;
            RenderNineGrid(a1, (__int64)&v67, v60, (__int64)v66, v59, v58, v57, v51);
            v32 = v65[1];
            v37 = v34;
            v34 += 256;
          }
          while ( v35 >= v37 );
          v38 = v31;
          v31 += 64;
        }
        while ( v31 >= v38 );
      }
      else
      {
        RenderNineGrid(a1, (__int64)v65, v60, (__int64)v66, v59, v58, v57, v51);
      }
    }
    if ( v27 )
      GreAcquirePushLockExclusive(v27);
    if ( (_DWORD)v29 != -1 )
      RtlClearBits(BitMapHeader, v29, 1u);
    if ( v27 )
      GreReleasePushLockExclusive(v27);
    SURFMEM::~SURFMEM((SURFMEM *)&v53);
  }
  return 1LL;
}
