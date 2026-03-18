/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00343C4
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C0069890 (EngFreeUserMem.c)
 */

void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 56) & 0x400000) != 0 )
  {
    EngFreeUserMem(*(PVOID *)(v2 + 2440));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2448LL));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2456LL));
  }
}
