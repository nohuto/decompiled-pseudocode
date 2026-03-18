/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F958
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C010FB9C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029B618 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F4D4 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0030C94 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0030FB4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F830 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0126358 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0126370 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0126524 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01C1324 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        struct PFT **this,
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
  struct RFONT *v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  bool v19; // zf
  struct PFT *v20; // rax
  struct PFT *v21; // rcx
  struct RFONT *v22; // rax
  struct PFT *v23; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *v29; // [rsp+90h] [rbp+30h] BYREF

  v28 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v15 = a5;
  v16 = PDEVOBJ::prfntActive(a5);
  v17 = a11;
  v18 = 0;
  *this = v16;
  if ( v16 )
  {
    while ( 1 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v29, *this);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v29);
      v19 = !RFONTOBJ::bMatchRealization((RFONTOBJ *)this, a2, a3, a4, a6, a7, a8, a9, a10, v17);
      v20 = *this;
      if ( !v19 )
        break;
      v21 = (struct PFT *)*((_QWORD *)v20 + 63);
      *this = v21;
      if ( !v21 )
        goto LABEL_4;
    }
    v18 = 1;
    ++*((_DWORD *)v20 + 123);
    v29 = PDEVOBJ::prfntActive(v15);
    if ( v29 != *this )
    {
      RFONTOBJ::vRemove((__int64)this, &v29, 1);
      RFONTOBJ::vInsert((__int64 *)this, (__int64 *)&v29, 1);
      PDEVOBJ::prfntActive(v15, v29);
    }
  }
  else
  {
LABEL_4:
    v22 = PDEVOBJ::prfntInactive(v15);
    *this = v22;
    if ( v22 )
    {
      while ( 1 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v29, *this);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v29);
        if ( RFONTOBJ::bMatchRealization((RFONTOBJ *)this, a2, a3, a4, a6, a7, a8, a9, a10, v17) )
          break;
        v23 = (struct PFT *)*((_QWORD *)*this + 63);
        *this = v23;
        if ( !v23 )
          goto LABEL_7;
      }
      v18 = 1;
      v29 = PDEVOBJ::prfntInactive(v15);
      RFONTOBJ::vRemove((__int64)this, &v29, 1);
      PDEVOBJ::prfntInactive(v15, v29);
      v25 = PDEVOBJ::cInactive(v15);
      v26 = *(_QWORD *)v15;
      v27 = v25 - 1;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x800000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v26 + 3544) + 1568LL) = v27;
      else
        *(_DWORD *)(v26 + 1568) = v27;
      v29 = PDEVOBJ::prfntActive(v15);
      RFONTOBJ::vInsert((__int64 *)this, (__int64 *)&v29, 1);
      PDEVOBJ::prfntActive(v15, v29);
      *((_DWORD *)*this + 123) = 1;
    }
    else
    {
LABEL_7:
      *this = 0LL;
    }
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v28);
  return v18;
}
