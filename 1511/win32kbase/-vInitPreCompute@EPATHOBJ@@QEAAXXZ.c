/*
 * XREFs of ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C00891D4
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560 (--0PATHMEMOBJ@@QEAA@XZ.c)
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
