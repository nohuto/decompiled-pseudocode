/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029B618
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C014F794 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002F3F8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F958 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0110104 (--1PFFREFOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  __int64 v8; // r10
  unsigned int v9; // r13d
  int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  struct LFONT *v15; // [rsp+60h] [rbp-19h] BYREF
  struct _POINTL v16; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v18; // [rsp+80h] [rbp+7h] BYREF
  int v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+E0h] [rbp+67h] BYREF
  struct PFE *v21; // [rsp+E8h] [rbp+6Fh]

  v20 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, a2, 0x204u);
  v8 = *(_QWORD *)this;
  v9 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v10 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v16 = *(struct _POINTL *)(*(_QWORD *)this + 672LL);
  v21 = *(struct PFE **)(v8 + 112);
  if ( v8 )
    RFONTOBJ::vReleaseCache(this);
  v15 = (struct LFONT *)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v11 = *(_QWORD *)this;
  v12 = 1;
  v19 = 0;
  v18 = *(_QWORD *)(v11 + 120);
  ++*(_DWORD *)(v18 + 68);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       (struct PFT **)this,
                       a3,
                       v10,
                       v9,
                       (struct PDEVOBJ *)&v20,
                       (struct EXFORMOBJ *)v17,
                       v21,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
  }
  else
  {
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v15,
      *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL),
      (struct PDEVOBJ *)&v20);
    if ( v15
      && (unsigned int)RFONTOBJ::bRealizeFont(
                         (struct _FD_XFORM **)this,
                         (struct _FD_XFORM **)a2,
                         (struct PDEVOBJ *)&v20,
                         (struct tagENUMLOGFONTEXDVW *)((char *)v15 + 276),
                         v21,
                         a3,
                         &v16,
                         v10,
                         v9,
                         0.0,
                         0,
                         a4) )
    {
      v13 = *(_QWORD *)this;
      v19 = 1;
      GreAcquireSemaphore(*(_QWORD *)(v13 + 528));
    }
    else
    {
      *(_QWORD *)this = 0LL;
      v12 = 0;
    }
    LFONTOBJ::~LFONTOBJ(&v15);
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v18);
  return v12;
}
