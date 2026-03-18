/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C0125E40 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     bUnloadEudcFont @ 0x1C01295F4 (bUnloadEudcFont.c)
 *     vKillRFONTList @ 0x1C025E034 (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C025E0D0 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C029B1F0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C029BD70 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029BE5C (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0016744 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0016784 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C012606C (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C012610C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C01261C0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0126358 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0126370 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0126458 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0126524 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  SIZE sizLogResPpi; // rax
  BOOL v10; // esi
  SIZE v11; // rdx
  PVOID pvProducer; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  char v16[8]; // [rsp+20h] [rbp-10h] BYREF
  PVOID pvConsumer; // [rsp+28h] [rbp-8h] BYREF
  struct RFONT *v18; // [rsp+60h] [rbp+30h] BYREF
  SIZE v19; // [rsp+68h] [rbp+38h] BYREF
  ULONG_PTR iTTUniq; // [rsp+70h] [rbp+40h] BYREF

  v6 = *this;
  pvConsumer = (*this)[1].pvConsumer;
  iTTUniq = v6[1].iTTUniq;
  if ( *(_QWORD *)(iTTUniq + 3064) && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&iTTUniq, v6);
  sizLogResPpi = (*this)[1].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v19 = (*this)[1].sizLogResPpi;
    v10 = (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 56LL) & 1) != 0 && *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 32LL);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v18,
      *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 56LL) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v16, (struct PDEVOBJ *)&v19);
    if ( v10 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v19 + 64LL));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v19 + 64LL), 11LL);
    }
    v11 = v19;
    if ( *(_QWORD *)(*(_QWORD *)&v19 + 3064LL) && a4 )
    {
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v19, *this);
      v11 = v19;
    }
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v11 + 64LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v19 + 64LL));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v16);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v18);
  }
  v19 = (SIZE)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( a2 )
  {
    v18 = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove((__int64)this, &v18, 1);
    PDEVOBJ::prfntInactive(a2, v18);
    v13 = PDEVOBJ::cInactive(a2);
    v14 = *(_QWORD *)a2;
    v15 = v13 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v14 + 3544) + 1568LL) = v15;
    else
      *(_DWORD *)(v14 + 1568) = v15;
  }
  if ( a3 )
  {
    v18 = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove((__int64)this, &v18, 0);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = v18;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  PFEOBJ::vFreepfdg((PFEOBJ *)&pvConsumer);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  pvProducer = (*this)[10].pvProducer;
  if ( pvProducer )
    Win32FreePool(pvProducer);
  if ( (*this)[13].iFile )
    ((void (*)(void))GreDeleteSemaphore)();
  GreDeleteSemaphore((*this)[8].iTTUniq);
  Win32FreePool(*this);
  *this = 0LL;
}
