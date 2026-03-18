/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B7210
 * Callers:
 *     <none>
 * Callees:
 *     vSpEnableMultiMon_0 @ 0x1C0001388 (vSpEnableMultiMon_0.c)
 *     EngAllocMem @ 0x1C00123A0 (EngAllocMem.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037D08 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0037EA0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngFreeMem @ 0x1C0059DF0 (EngFreeMem.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00B7AF0 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C00B7B20 (bIntersect.c)
 */

struct HDEV__ *__fastcall MulEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9)
{
  HDEV v9; // rsi
  unsigned int v10; // edi
  struct _GDIINFO *v11; // r15
  int v12; // ebx
  struct HDEV__ *v14; // r14
  char *v15; // r12
  unsigned int v16; // r9d
  _QWORD *v17; // r8
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rbx
  _OWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  struct _GDIINFO *v24; // rax
  __int128 v25; // xmm1
  __int64 v26; // r8
  __int128 v27; // xmm1
  struct tagDEVINFO *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  int v31; // eax
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // r15
  _QWORD *v37; // rbx
  int v38; // ecx
  int v39; // r9d
  int v40; // ecx
  bool v41; // cc
  int v42; // ecx
  int v43; // ecx
  struct _GDIINFO *v44; // rcx
  unsigned int v45; // ebx
  struct tagDEVINFO *v46; // rdx
  _DWORD *v47; // r12
  int v48; // eax
  __int64 v49; // rbx
  bool v50; // zf
  signed __int32 v51; // ett
  signed __int32 v52; // ett
  int v53; // ecx
  HDEV v54; // rbx
  _DWORD *v55; // rcx
  BOOL v56; // eax
  _DWORD *v57; // rdx
  _DWORD *v58; // r8
  int v59; // eax
  signed __int32 v60; // ett
  unsigned int v61; // ebx
  _QWORD *v62; // r12
  unsigned int v63; // r15d
  void *v64; // r14
  __int64 v65; // rdx
  signed __int32 v66; // ett
  _DWORD *v67; // r9
  signed __int32 v68; // ett
  signed __int32 v69; // ett
  __int64 v70; // rcx
  __int64 v71; // r8
  signed __int32 v72; // ett
  signed __int32 v73; // ett
  signed __int32 v75; // ett
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // [rsp+28h] [rbp-A9h] BYREF
  int v79; // [rsp+30h] [rbp-A1h]
  int v80; // [rsp+34h] [rbp-9Dh]
  _DWORD *v81; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v82; // [rsp+40h] [rbp-91h]
  HDEV v83; // [rsp+48h] [rbp-89h] BYREF
  PVOID pv; // [rsp+50h] [rbp-81h]
  char *v85; // [rsp+58h] [rbp-79h]
  struct _GDIINFO *v86; // [rsp+60h] [rbp-71h]
  char *v87; // [rsp+68h] [rbp-69h]
  _QWORD v88[10]; // [rsp+78h] [rbp-59h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = a6;
  v12 = -1;
  v86 = a6;
  v82 = a8;
  v83 = a9;
  v80 = -1;
  v81 = 0LL;
  LODWORD(v78) = 0;
  if ( !a9 )
    return 0LL;
  v85 = (char *)v88;
  v87 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v14 = (struct HDEV__ *)v87;
  if ( !v87 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_90:
    EngFreeMem(v14);
    return 0LL;
  }
  v15 = v87 + 112;
  *((_DWORD *)v87 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  v16 = 0;
  *((_QWORD *)v14 + 4) = a9;
  *((_DWORD *)v14 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 20) = 0x80000000;
  *((_DWORD *)v14 + 21) = 0x80000000;
  v79 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = v88;
    v18 = -1;
    while ( 1 )
    {
      v19 = 16LL * v16;
      v20 = *(_QWORD *)&a1->dmDeviceName[v19 + 16];
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 2600) + 160LL) & 4) != 0 )
      {
        v21 = (_OWORD *)(v20 + 2160);
        v22 = *(_DWORD *)(v20 + 2196) & 0x100;
        v81 = *(_DWORD **)&a1->dmDeviceName[v19 + 16];
        LODWORD(v78) = v22;
        v23 = 2LL;
        v24 = v11;
        do
        {
          *(_OWORD *)&v24->ulVersion = *v21;
          *(_OWORD *)&v24->ulHorzRes = v21[1];
          *(_OWORD *)&v24->ulNumColors = v21[2];
          *(_OWORD *)&v24->flTextCaps = v21[3];
          *(_OWORD *)&v24->ulAspectX = v21[4];
          *(_OWORD *)&v24->yStyleStep = v21[5];
          *(_OWORD *)&v24->szlPhysSize.cx = v21[6];
          v24 = (struct _GDIINFO *)((char *)v24 + 128);
          v25 = v21[7];
          v21 += 8;
          *(_OWORD *)&v24[-1].flShadeBlend = v25;
          --v23;
        }
        while ( v23 );
        v26 = 2LL;
        *(_OWORD *)&v24->ulVersion = *v21;
        *(_OWORD *)&v24->ulHorzRes = v21[1];
        *(_OWORD *)&v24->ulNumColors = v21[2];
        v27 = v21[3];
        v28 = v82;
        *(_OWORD *)&v24->flTextCaps = v27;
        v29 = (_OWORD *)(v20 + 1848);
        do
        {
          *(_OWORD *)v28 = *v29;
          *((_OWORD *)v28 + 1) = v29[1];
          *((_OWORD *)v28 + 2) = v29[2];
          *((_OWORD *)v28 + 3) = v29[3];
          *((_OWORD *)v28 + 4) = v29[4];
          *((_OWORD *)v28 + 5) = v29[5];
          *((_OWORD *)v28 + 6) = v29[6];
          v28 = (struct tagDEVINFO *)((char *)v28 + 128);
          v30 = v29[7];
          v29 += 8;
          *((_OWORD *)v28 - 1) = v30;
          --v26;
        }
        while ( v26 );
        v17 = v85;
        *(_OWORD *)v28 = *v29;
        *((_OWORD *)v28 + 1) = v29[1];
        *((_OWORD *)v28 + 2) = v29[2];
        *((_QWORD *)v28 + 6) = *((_QWORD *)v29 + 6);
      }
      v18 &= *(_DWORD *)(v20 + 1848);
      v31 = *(_DWORD *)(v20 + 2152) & v80;
      *v17 = v15;
      v17[1] = v15;
      *((_DWORD *)v15 + 4) = v16;
      v32 = *(_OWORD *)&a1->dmDeviceName[v19 + 24];
      v80 = v31;
      *(_OWORD *)(v15 + 28) = v32;
      v33 = *(_QWORD *)&a1->dmDeviceName[v19 + 16];
      *((_QWORD *)v15 + 6) = v33;
      *((_QWORD *)v15 + 7) = v33;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56));
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v20 + 2608);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v20 + 2612);
      v34 = *(_QWORD *)(v20 + 2576);
      if ( v34 )
        v35 = v34 + 24;
      else
        v35 = 0LL;
      v36 = (char *)v88[0];
      *((_QWORD *)v15 + 8) = v35;
      v37 = v36;
      *((_DWORD *)v15 + 5) = 1;
      if ( v36 != v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v37 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1848LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v37 = (_QWORD *)*v37;
        }
        while ( v37 != (_QWORD *)v15 );
        v14 = (struct HDEV__ *)v87;
      }
      v38 = *((_DWORD *)v15 + 7);
      v17 = v15;
      v39 = v79;
      if ( *((_DWORD *)v14 + 18) < v38 )
        v38 = *((_DWORD *)v14 + 18);
      *((_DWORD *)v14 + 18) = v38;
      v40 = *((_DWORD *)v15 + 8);
      v41 = *((_DWORD *)v14 + 19) < v40;
      v85 = v15;
      if ( v41 )
        v40 = *((_DWORD *)v14 + 19);
      *((_DWORD *)v14 + 19) = v40;
      v42 = *((_DWORD *)v15 + 9);
      if ( *((_DWORD *)v14 + 20) > v42 )
        v42 = *((_DWORD *)v14 + 20);
      *((_DWORD *)v14 + 20) = v42;
      v43 = *((_DWORD *)v15 + 10);
      if ( *((_DWORD *)v14 + 21) > v43 )
        v43 = *((_DWORD *)v14 + 21);
      v16 = v39 + 1;
      v15 += 80;
      *((_DWORD *)v14 + 21) = v43;
      v79 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v11 = v86;
    }
    v79 = v18;
    v12 = v18;
    v9 = v83;
  }
  else
  {
    v36 = (char *)v88[0];
  }
  v44 = v86;
  v45 = v12 & 0xFFFEE7FF;
  v46 = v82;
  v86->ulHorzSize = -v86->ulHorzSize;
  v44->ulVertSize = -v44->ulVertSize;
  if ( (_DWORD)v78 )
    v45 |= 0x80020u;
  v47 = v81;
  *((_DWORD *)v46 + 76) = v80;
  v48 = *((_DWORD *)v46 + 71);
  *(_DWORD *)v46 = v45;
  *((_DWORD *)v14 + 16) = v48;
  *(_QWORD *)v14 = v36;
  *((_QWORD *)v14 + 1) = v36;
  *((_QWORD *)v14 + 5) = v47;
  while ( v36 )
  {
    v49 = *((_QWORD *)v36 + 6);
    v50 = v36 == *(char **)v14;
    _m_prefetchw((const void *)(v49 + 56));
    if ( v50 )
    {
      do
        v51 = *(_DWORD *)(v49 + 56);
      while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 56), v51 | 0x10000000, v51) );
      *(_QWORD *)(v49 + 48) = 0LL;
    }
    else
    {
      do
        v52 = *(_DWORD *)(v49 + 56);
      while ( v52 != _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 56), v52 & 0xEFFFFFFF, v52) );
      *(_QWORD *)(v49 + 48) = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
    }
    if ( (_DWORD *)v49 == v47 )
    {
      *((_DWORD *)v36 + 6) = 0;
    }
    else
    {
      v53 = *(_DWORD *)(v49 + 2132) - *((_DWORD *)v14 + 16);
      *((_DWORD *)v36 + 6) = v53;
      if ( !v53 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v83, *((HPALETTE *)v46 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v81, *(HPALETTE *)(v49 + 2144));
        v54 = v83;
        v55 = v81;
        if ( !v83 )
        {
          if ( v81 )
          {
            HmgDecrementShareReferenceCount(v81);
LABEL_87:
            if ( v54 )
              HmgDecrementShareReferenceCount(v54);
          }
          EngFreeMem(pv);
          goto LABEL_90;
        }
        if ( !v81 )
          goto LABEL_87;
        v56 = ((*((_BYTE *)v81 + 24) ^ *((_BYTE *)v83 + 24)) & 0x1F) != 0;
        *((_DWORD *)v36 + 6) = v56;
        if ( !v56 && ((_BYTE)v54[6] & 0x1F) == 2 )
        {
          v57 = (_DWORD *)*((_QWORD *)v55 + 16);
          v58 = (_DWORD *)*((_QWORD *)v54 + 16);
          if ( *v58 != *v57 || v58[1] != v57[1] || (v59 = 0, v58[2] != v57[2]) )
            v59 = 1;
          *((_DWORD *)v36 + 6) = v59;
        }
        HmgDecrementShareReferenceCount(v55);
        HmgDecrementShareReferenceCount(v54);
        v46 = v82;
      }
      if ( *((_DWORD *)v36 + 6) )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v36 = *(char **)v36;
  }
  v9[652] = v14[18];
  v9[653] = v14[19];
  *((_DWORD *)v9 + 436) = *((_DWORD *)v14 + 20) - *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 437) = *((_DWORD *)v14 + 21) - *((_DWORD *)v14 + 19);
  _m_prefetchw(v9 + 14);
  do
    v60 = *((_DWORD *)v9 + 14);
  while ( v60 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v60 | 0x20000, v60) );
  v61 = 0;
  v62 = pv;
  v63 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v64 = 0LL;
    do
    {
      v65 = 16 * (v63 + 1LL);
      v78 = *(_QWORD *)&a1->dmDeviceName[v65];
      if ( (*(_DWORD *)(v78 + 1848) & 0x8000000) != 0 )
      {
        _m_prefetchw(v9 + 14);
        do
          v66 = *((_DWORD *)v9 + 14);
        while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v66 | 0x1000000, v66) );
        v67 = (_DWORD *)(v78 + 2152);
        if ( (*(_DWORD *)(v78 + 2152) & 0x1000) != 0 )
        {
          _m_prefetchw(v9 + 14);
          do
            v68 = *((_DWORD *)v9 + 14);
          while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v68 | 0x2000000, v68) );
          *((_DWORD *)v9 + 538) |= 0x1000u;
        }
        if ( (*v67 & 0x8000) != 0 )
        {
          _m_prefetchw(v9 + 14);
          do
            v69 = *((_DWORD *)v9 + 14);
          while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v69 | 0x20000000, v69) );
        }
        v70 = v61++;
        v62[v70] = *(_QWORD *)&a1->dmDeviceName[v65];
      }
      if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v78) && *(_DWORD *)(v71 + 2636) != 5 )
      {
        _m_prefetchw(v9 + 14);
        do
          v72 = *((_DWORD *)v9 + 14);
        while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v72 | 0x8000000, v72) );
        v71 = v78;
      }
      if ( ((_DWORD)v9[14] & 0x4000000) == 0 && ((*(_DWORD *)(v71 + 2152) & 0x8000) == 0 || !*(_QWORD *)(v71 + 2800)) )
      {
        if ( !v64 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v78) == v64 )
        {
          v64 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v78);
        }
        else
        {
          _m_prefetchw(v9 + 14);
          do
            v73 = *((_DWORD *)v9 + 14);
          while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v73 | 0x4000000, v73) );
        }
      }
      if ( ((_DWORD)v9[14] & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v78) )
      {
        _m_prefetchw(v9 + 14);
        do
          v75 = *((_DWORD *)v9 + 14);
        while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 14, v75 | 0x40000000, v75) );
      }
      ++v63;
    }
    while ( v63 < *(_DWORD *)&a1->dmDeviceName[10] );
    v14 = (struct HDEV__ *)v87;
    if ( *(_DWORD *)&a1->dmDeviceName[10] )
    {
      do
      {
        v76 = *(_QWORD *)&a1->dmDeviceName[16 * v10 + 16];
        if ( (*(_DWORD *)(v76 + 1848) & 0x8000000) == 0 )
        {
          v77 = v61++;
          v62[v77] = v76;
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)&a1->dmDeviceName[10] );
    }
  }
  vSpEnableMultiMon_0();
  return v14;
}
