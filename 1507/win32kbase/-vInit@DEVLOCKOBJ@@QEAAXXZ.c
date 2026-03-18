/*
 * XREFs of ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0027018
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00277F0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C00278B4 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vInit(DEVLOCKOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
}
