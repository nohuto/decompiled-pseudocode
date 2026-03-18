/*
 * XREFs of ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0001144
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 */

DEVLOCKBLTOBJ *__fastcall DEVLOCKBLTOBJ::DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v6; // r9d

  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 22) = 0;
  DCOBJ::DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  DCOBJ::DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 168));
  DEVLOCKBLTOBJ::bLock(this, a2, a3, v6);
  return this;
}
