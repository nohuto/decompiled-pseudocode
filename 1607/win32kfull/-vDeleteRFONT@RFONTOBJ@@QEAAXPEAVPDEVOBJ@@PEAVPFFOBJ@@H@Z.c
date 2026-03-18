/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840
 * Callers:
 *     bUnloadEudcFont @ 0x1C0021F90 (bUnloadEudcFont.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C01351A0 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     vKillRFONTList @ 0x1C025B08C (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C028A190 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C029A7C0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C029B460 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029B680 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0026C2C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00293CC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00294A0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00294B8 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AF0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C002A6B8 (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002D748 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0049E60 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0049EA0 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  SIZE sizLogResPpi; // rax
  BOOL v10; // esi
  SIZE v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  PVOID pvProducer; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  char v22[8]; // [rsp+20h] [rbp-10h] BYREF
  __int64 *pvConsumer; // [rsp+28h] [rbp-8h] BYREF
  struct RFONT *v24; // [rsp+60h] [rbp+30h] BYREF
  SIZE v25; // [rsp+68h] [rbp+38h] BYREF
  ULONG_PTR iTTUniq; // [rsp+70h] [rbp+40h] BYREF

  v6 = *this;
  pvConsumer = (__int64 *)(*this)[1].pvConsumer;
  iTTUniq = v6[1].iTTUniq;
  if ( *(_QWORD *)(iTTUniq + 3056) && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&iTTUniq, v6);
  sizLogResPpi = (*this)[1].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v25 = (*this)[1].sizLogResPpi;
    v10 = (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 56LL) & 1) != 0 && *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 32LL);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v24,
      *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 56LL) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v22, (struct PDEVOBJ *)&v25);
    if ( v10 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v25 + 64LL));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v25 + 64LL), 11LL);
    }
    v11 = v25;
    if ( *(_QWORD *)(*(_QWORD *)&v25 + 3056LL) && a4 )
    {
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v25, *this);
      v11 = v25;
    }
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v11 + 64LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v25 + 64LL));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v22);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v24);
  }
  v25 = (SIZE)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( a2 )
  {
    v24 = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove((__int64)this, &v24, 1);
    PDEVOBJ::prfntInactive(a2, v24);
    v19 = PDEVOBJ::cInactive(a2);
    v20 = *(_QWORD *)a2;
    v21 = v19 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v20 + 3536) + 1568LL) = v21;
    else
      *(_DWORD *)(v20 + 1568) = v21;
  }
  if ( a3 )
  {
    v24 = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove((__int64)this, &v24, 0);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = v24;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  PFEOBJ::vFreepfdg(&pvConsumer);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this, v12, v13);
  pvProducer = (*this)[10].pvProducer;
  if ( pvProducer )
    Win32FreePool(pvProducer, v14, v15);
  if ( (*this)[13].iFile )
    ((void (*)(void))GreDeleteSemaphore)();
  GreDeleteSemaphore((*this)[8].iTTUniq);
  Win32FreePool(*this, v17, v18);
  *this = 0LL;
}
