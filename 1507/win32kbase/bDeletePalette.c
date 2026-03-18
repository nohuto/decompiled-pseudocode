/*
 * XREFs of bDeletePalette @ 0x1C005A8C0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GdiThreadCallout @ 0x1C005A6A0 (GdiThreadCallout.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00B1298 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00B12F0 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z @ 0x1C00B1920 (-vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v10);
  XEPALOBJ2::vAltCheckLock((XEPALOBJ2 *)v10, a1);
  v6 = 0;
  if ( HmgLockResultBase<DRVOBJ>::operator bool(v10) )
    v6 = XEPALOBJ::bDeletePalette((XEPALOBJ *)v10, a2, a3);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v10);
  SEMOBJ::vUnlock((SEMOBJ *)&v11, v7, v8);
  return v6;
}
