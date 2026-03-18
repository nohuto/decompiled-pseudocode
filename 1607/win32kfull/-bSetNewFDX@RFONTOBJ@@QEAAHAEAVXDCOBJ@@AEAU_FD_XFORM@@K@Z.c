/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029AB08
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0124C98 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C002B5C4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002D6FC (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0129850 (--1PFFREFOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned int v11; // r13d
  int v12; // r14d
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rcx
  struct LFONT *v17; // [rsp+60h] [rbp-19h] BYREF
  struct _POINTL v18; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v20; // [rsp+80h] [rbp+7h] BYREF
  int v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+E0h] [rbp+67h] BYREF
  struct PFE *v23; // [rsp+E8h] [rbp+6Fh]

  v22 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, a2, 0x204u);
  v10 = *(_QWORD *)this;
  v11 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v12 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v18 = *(struct _POINTL *)(*(_QWORD *)this + 672LL);
  v23 = *(struct PFE **)(v10 + 112);
  if ( v10 )
    RFONTOBJ::vReleaseCache(this, v8, v9);
  v17 = (struct LFONT *)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v13 = *(_QWORD *)this;
  v14 = 1;
  v21 = 0;
  v20 = *(_QWORD *)(v13 + 120);
  ++*(_DWORD *)(v20 + 68);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       a3,
                       v12,
                       v11,
                       (struct PDEVOBJ *)&v22,
                       (struct EXFORMOBJ *)v19,
                       v23,
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
      (LFONTOBJ *)&v17,
      *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL),
      (struct PDEVOBJ *)&v22);
    if ( v17
      && (unsigned int)RFONTOBJ::bRealizeFont(
                         (struct _FD_XFORM **)this,
                         a2,
                         (struct PDEVOBJ *)&v22,
                         (struct tagENUMLOGFONTEXDVW *)((char *)v17 + 276),
                         v23,
                         a3,
                         &v18,
                         v12,
                         v11,
                         0,
                         0,
                         a4) )
    {
      v15 = *(_QWORD *)this;
      v21 = 1;
      GreAcquireSemaphore(*(_QWORD *)(v15 + 528));
    }
    else
    {
      *(_QWORD *)this = 0LL;
      v14 = 0;
    }
    LFONTOBJ::~LFONTOBJ(&v17);
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v20);
  return v14;
}
