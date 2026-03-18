/*
 * XREFs of bDeletePalette @ 0x1C005C930
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiThreadCallout @ 0x1C005C7B0 (GdiThreadCallout.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0027064 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00BF18C (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00BF1E4 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z @ 0x1C00BF694 (-vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v8);
  XEPALOBJ2::vAltCheckLock((XEPALOBJ2 *)v8, a1);
  v6 = 0;
  if ( HmgLockResultBase<DRVOBJ>::operator bool(v8) )
    v6 = XEPALOBJ::bDeletePalette((XEPALOBJ *)v8, a2, a3);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v8);
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v6;
}
