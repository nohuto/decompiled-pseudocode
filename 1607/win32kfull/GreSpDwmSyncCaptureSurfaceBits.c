/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC
 * Callers:
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B39E8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, int a2, HDC a3, float a4, int a5, int a6, int a7, int a8)
{
  unsigned int updated; // ebx
  __int64 v11; // rcx
  HSURF v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-98h]
  int v19; // [rsp+74h] [rbp-94h]
  DC *v20[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v21[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v22[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v23[80]; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v24; // [rsp+118h] [rbp+10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a3);
  updated = 0;
  if ( v20[0] )
  {
    *(_QWORD *)&v24.left = *(_QWORD *)DC::eptlOrigin(v20[0]);
    v24.bottom = v24.top + a8;
    v24.right = v24.left + a7;
    ERECTL::vOrder((ERECTL *)&v24);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v16, ghsemDynamicModeChange);
    v15 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v20, 0);
    if ( (v22[24] & 1) != 0 && (v11 = *((_QWORD *)v20[0] + 64)) != 0 )
    {
      v12 = *(HSURF *)(v11 + 32);
      v18 = *(_DWORD *)(v11 + 56);
      v13 = *(_DWORD *)(v11 + 60);
      v17 = 0LL;
      v19 = v13;
      ERECTL::operator*=(&v24, &v17);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
      DCOBJ::~DCOBJ((DCOBJ *)v23);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
      if ( !IsRectEmptyInl(&v24) && !KeAreApcsDisabled() )
        updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v20, v12, a4, a5, a6, (struct ERECTL *)&v24, 0LL);
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
      DCOBJ::~DCOBJ((DCOBJ *)v23);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v21);
  return updated;
}
