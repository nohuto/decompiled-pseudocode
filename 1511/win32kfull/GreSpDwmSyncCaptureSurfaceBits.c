/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78
 * Callers:
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSpDwmSyncCaptureSurfaceBits(
        struct _SURFOBJ *a1,
        int a2,
        HDC a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int updated; // ebx
  __int64 v11; // rcx
  HSURF v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+58h] [rbp-99h] BYREF
  __int64 v16; // [rsp+60h] [rbp-91h] BYREF
  DC *v17[2]; // [rsp+68h] [rbp-89h] BYREF
  __int64 v18; // [rsp+78h] [rbp-79h] BYREF
  int v19; // [rsp+80h] [rbp-71h]
  int v20; // [rsp+84h] [rbp-6Dh]
  _BYTE v21[80]; // [rsp+88h] [rbp-69h] BYREF
  struct tagRECT v22; // [rsp+D8h] [rbp-19h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a3);
  updated = 0;
  if ( v17[0] )
  {
    *(_QWORD *)&v22.left = *(_QWORD *)DC::eptlOrigin(v17[0]);
    v22.bottom = v22.top + a8;
    v22.right = v22.left + a7;
    ERECTL::vOrder((ERECTL *)&v22);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v16, ghsemDynamicModeChange);
    v15 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v17, 0);
    if ( (v21[24] & 1) != 0 && (v11 = *((_QWORD *)v17[0] + 64)) != 0 )
    {
      v12 = *(HSURF *)(v11 + 32);
      v19 = *(_DWORD *)(v11 + 56);
      v13 = *(_DWORD *)(v11 + 60);
      v18 = 0LL;
      v20 = v13;
      ERECTL::operator*=(&v22, &v18);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
      if ( !IsRectEmptyInl(&v22) && !KeAreApcsDisabled() )
        updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v17, v12, a4, a5, a6, (struct ERECTL *)&v22, 0LL);
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  return updated;
}
