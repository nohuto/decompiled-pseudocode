/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0031AB0
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C003A3B0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0075050 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00750D0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0075F70 (GreLockVisRgnSharedOrExclusive.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C2740 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // r8
  int v2; // ecx
  __int64 v3; // rax

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
