/*
 * XREFs of ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C015355C
 * Callers:
 *     ??0EPATHOBJ@@QEAA@XZ @ 0x1C00161C4 (--0EPATHOBJ@@QEAA@XZ.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C01534D8 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHOBJ::vInitPreCompute(EPATHOBJ *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
}
