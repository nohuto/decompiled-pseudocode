/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0037EA0
 * Callers:
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037900 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00379B0 (GreLockVisRgnSharedOrExclusive.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0037AA0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037B20 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B7210 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  return (v2 & 1) != 0
      && (v2 & 0x1000000) == 0
      && (*(_DWORD *)(v1 + 2636) == 5
       || (v2 & 0x20000) != 0
       || (v3 = *(_QWORD *)(v1 + 2600)) != 0 && (*(_DWORD *)(v3 + 160) & 0x800000) != 0)
      && (*(_DWORD *)(v1 + 2152) & 0x400) == 0
      && (v2 & 0x48000000) == 0
      && (*(_DWORD *)(v1 + 1848) & 0x8000000) == 0
      && (*(_DWORD *)(*(_QWORD *)(v1 + 40) + 56LL) & 0x1000000) == 0;
}
