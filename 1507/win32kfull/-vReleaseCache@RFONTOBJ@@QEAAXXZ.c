/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002F3F8
 * Callers:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002E718 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029B618 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
}
