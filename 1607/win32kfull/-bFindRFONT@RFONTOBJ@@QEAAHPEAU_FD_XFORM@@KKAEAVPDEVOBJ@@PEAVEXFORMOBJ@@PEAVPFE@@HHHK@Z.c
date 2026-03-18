/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C002B5C4
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00091E4 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029AB08 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00293B4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AD0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002D748 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002D7D8 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct PDEVOBJ *a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  PDEVOBJ *v15; // rsi
  __int64 v16; // rcx
  struct PFT *v17; // rcx
  int v18; // r13d
  unsigned int v19; // ebx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  struct PFT *v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r8
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v46; // [rsp+50h] [rbp+8h] BYREF

  v46 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v15 = a5;
  v16 = *(_QWORD *)a5;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 56LL) & 0x800000) != 0 )
    v17 = *(struct PFT **)(*(_QWORD *)(v16 + 3536) + 1552LL);
  else
    v17 = *(struct PFT **)(v16 + 1552);
  v18 = a9;
  v19 = 0;
  while ( 1 )
  {
    *(_QWORD *)this = v17;
    if ( !v17 )
      break;
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, v17);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
    v20 = *(_QWORD *)this;
    if ( *(struct PFE **)(*(_QWORD *)this + 112LL) == a7 && a11 == (*(_DWORD *)(v20 + 68) & 6) )
    {
      v21 = *(_DWORD *)(v20 + 12);
      if ( ((a3 ^ v21) & 0xE000) == 0 )
      {
        v22 = (a3 ^ v21) & 0x50010000;
        if ( !v22 )
          goto LABEL_94;
        if ( (a3 & 0x10000) != 0 && (v21 & 0x20000) != 0 )
          v22 = (a3 ^ v21) & 0x50000000;
        if ( (a3 & 0x10000000) != 0 && (v21 & 0x10000000) == 0 && (v21 & 0x2000000) != 0 )
          v22 = 0;
        if ( !v22 )
        {
LABEL_94:
          if ( *(_DWORD *)(v20 + 40) == a4
            && *(_QWORD *)&a2->eXX == *(_QWORD *)(v20 + 128)
            && *(_QWORD *)&a2->eYX == *(_QWORD *)(v20 + 136)
            && a8 == *(_DWORD *)(v20 + 680)
            && (!a6 || EXFORMOBJ::bEqualExceptTranslations(a6, (struct MATRIX *)(v20 + 164))) )
          {
            v23 = *(_QWORD *)this;
            if ( *(_DWORD *)(*(_QWORD *)this + 200LL) == v18 && (a10 || !*(_DWORD *)(v23 + 652)) )
            {
              v19 = 1;
              ++*(_DWORD *)(v23 + 492);
              a5 = PDEVOBJ::prfntActive(v15);
              if ( a5 != *(struct PDEVOBJ **)this )
              {
                RFONTOBJ::vRemove(this, &a5, 1LL);
                RFONTOBJ::vInsert(this, &a5, 1LL);
                PDEVOBJ::prfntActive(v15, a5);
              }
              goto LABEL_91;
            }
          }
        }
      }
    }
    v17 = *(struct PFT **)(*(_QWORD *)this + 504LL);
  }
  v24 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    v25 = *(struct PFT **)(*(_QWORD *)(v24 + 3536) + 1560LL);
  else
    v25 = *(struct PFT **)(v24 + 1560);
  while ( 1 )
  {
    *(_QWORD *)this = v25;
    if ( !v25 )
    {
      *(_QWORD *)this = 0LL;
      goto LABEL_91;
    }
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, v25);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
    v26 = *(_QWORD *)this;
    if ( *(struct PFE **)(*(_QWORD *)this + 112LL) == a7 && a11 == (*(_DWORD *)(v26 + 68) & 6) )
    {
      v27 = *(_DWORD *)(v26 + 12);
      if ( ((a3 ^ v27) & 0xE000) == 0 )
      {
        v28 = (a3 ^ v27) & 0x50010000;
        if ( !v28 )
          goto LABEL_95;
        if ( (a3 & 0x10000) != 0 && (v27 & 0x20000) != 0 )
          v28 = (a3 ^ v27) & 0x50000000;
        if ( (a3 & 0x10000000) != 0 && (v27 & 0x10000000) == 0 && (v27 & 0x2000000) != 0 )
          v28 = 0;
        if ( !v28 )
        {
LABEL_95:
          if ( *(_DWORD *)(v26 + 40) == a4
            && *(_QWORD *)&a2->eXX == *(_QWORD *)(v26 + 128)
            && *(_QWORD *)&a2->eYX == *(_QWORD *)(v26 + 136)
            && a8 == *(_DWORD *)(v26 + 680)
            && (!a6 || EXFORMOBJ::bEqualExceptTranslations(a6, (struct MATRIX *)(v26 + 164)))
            && *(_DWORD *)(*(_QWORD *)this + 200LL) == v18
            && (a10 || !*(_DWORD *)(*(_QWORD *)this + 652LL)) )
          {
            break;
          }
        }
      }
    }
    v25 = *(struct PFT **)(*(_QWORD *)this + 504LL);
  }
  v29 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    v30 = *(_QWORD *)(*(_QWORD *)(v29 + 3536) + 1560LL);
  else
    v30 = *(_QWORD *)(v29 + 1560);
  v31 = *(_QWORD *)this;
  v32 = *(_QWORD *)(*(_QWORD *)this + 496LL);
  v33 = v32 + 496;
  if ( !v32 )
    v33 = 0LL;
  v34 = *(_QWORD *)(v31 + 504);
  v35 = (_QWORD *)(v34 + 496);
  if ( !v34 )
    v35 = 0LL;
  if ( v32 )
  {
    *(_QWORD *)(v33 + 8) = v34;
    if ( v35 )
      *v35 = *(_QWORD *)(v31 + 496);
  }
  else
  {
    v30 = *(_QWORD *)(v31 + 504);
    if ( v35 )
      *v35 = 0LL;
  }
  v36 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    *(_QWORD *)(*(_QWORD *)(v36 + 3536) + 1560LL) = v30;
  else
    *(_QWORD *)(v36 + 1560) = v30;
  v37 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    v38 = *(_DWORD *)(*(_QWORD *)(v37 + 3536) + 1568LL);
  else
    v38 = *(_DWORD *)(v37 + 1568);
  v39 = v38 - 1;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(v37 + 3536) + 1568LL) = v39;
  else
    *(_DWORD *)(v37 + 1568) = v39;
  v40 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    v41 = *(_QWORD *)(*(_QWORD *)(v40 + 3536) + 1552LL);
  else
    v41 = *(_QWORD *)(v40 + 1552);
  v42 = (_QWORD *)(v41 + 496);
  v43 = (_QWORD *)(*(_QWORD *)this + 496LL);
  if ( !v41 )
    v42 = 0LL;
  if ( *(_QWORD *)this != -496LL )
  {
    *v43 = 0LL;
    v43[1] = v41;
    if ( v42 )
      *v42 = *(_QWORD *)this;
    v41 = *(_QWORD *)this;
  }
  v44 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
    *(_QWORD *)(*(_QWORD *)(v44 + 3536) + 1552LL) = v41;
  else
    *(_QWORD *)(v44 + 1552) = v41;
  v19 = 1;
  *(_DWORD *)(*(_QWORD *)this + 492LL) = 1;
LABEL_91:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v46);
  return v19;
}
