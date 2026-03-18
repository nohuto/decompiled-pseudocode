/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C014CD0C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014C4D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026F850 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

void __fastcall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemSprite) )
  {
    v3 = *(__int64 **)(ThreadWin32Thread + 312);
    *(_QWORD *)this = v3;
    v4 = *(_QWORD *)(ThreadWin32Thread + 320);
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_QWORD *)this + 1) = v4;
    if ( v3 )
    {
      v5 = *v3;
      if ( (*(_DWORD *)(v5 + 36) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(v5 + 512), 0LL, (struct DC *)v5);
        *((_DWORD *)this + 4) = 1;
      }
    }
    v6 = *((_QWORD *)this + 1);
    if ( v6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 36LL) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(*(_QWORD *)v6 + 512LL), 0LL, 0LL);
        *((_DWORD *)this + 5) = 1;
      }
    }
  }
}
