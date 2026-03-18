/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B964
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     IsXDCOBJ_vCleanupColorTransformSupported_0 @ 0x1C00010B0 (IsXDCOBJ_vCleanupColorTransformSupported_0.c)
 *     XDCOBJ_vCleanupColorTransformWrap_0 @ 0x1C00010B8 (XDCOBJ_vCleanupColorTransformWrap_0.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported_0 @ 0x1C00010C0 (IsPFTOBJ_bUnloadWorkhorseSupported_0.c)
 *     PFTOBJ_bUnloadWorkhorseWrap_0 @ 0x1C00010C8 (PFTOBJ_bUnloadWorkhorseWrap_0.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C000D370 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00393C0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C003DF50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0069DA4 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this)
{
  __int64 v2; // rdi
  DC *v3; // rcx
  __int64 v5; // rsi
  char v6; // [rsp+50h] [rbp+18h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v6, *((struct RFONT **)*this + 272));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1584));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1728));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1872));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 2016));
  DC::hpath(*this, 0LL);
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported_0() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap_0();
  v2 = *((_QWORD *)*this + 311);
  while ( v2 )
  {
    v5 = v2;
    v2 = *(_QWORD *)(v2 + 8);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
    --*(_DWORD *)(*(_QWORD *)v5 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap_0();
    Win32FreePool();
  }
  v3 = (DC *)*((_QWORD *)*this + 39);
  if ( v3 && v3 != (DC *)((char *)*this + 276) )
  {
    Win32FreePool();
    *((_QWORD *)*this + 39) = 0LL;
  }
  HmgFree(*(_QWORD *)*this);
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  return 1LL;
}
