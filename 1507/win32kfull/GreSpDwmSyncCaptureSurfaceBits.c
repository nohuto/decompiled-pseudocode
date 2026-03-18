/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C0263280
 * Callers:
 *     xxxPrintWindow @ 0x1C01E7A14 (xxxPrintWindow.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  DC *v20[6]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v21[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v22[80]; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+118h] [rbp+10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a3);
  updated = 0;
  if ( v20[0] )
  {
    *(_QWORD *)&v23.left = *(_QWORD *)DC::eptlOrigin(v20[0]);
    v23.bottom = v23.top + a8;
    v23.right = v23.left + a7;
    ERECTL::vOrder((ERECTL *)&v23);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v16, ghsemDynamicModeChange);
    v15 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v20, 0);
    if ( (v21[24] & 1) != 0 && (v11 = *((_QWORD *)v20[0] + 64)) != 0 )
    {
      v12 = *(HSURF *)(v11 + 32);
      v18 = *(_DWORD *)(v11 + 56);
      v13 = *(_DWORD *)(v11 + 60);
      v17 = 0LL;
      v19 = v13;
      ERECTL::operator*=(&v23, &v17);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      DCOBJ::~DCOBJ((DCOBJ *)v22);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
      if ( !IsRectEmptyInl(&v23) && !KeAreApcsDisabled() )
        updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v20, v12, a4, a5, a6, (struct ERECTL *)&v23, 0LL);
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      DCOBJ::~DCOBJ((DCOBJ *)v22);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return updated;
}
