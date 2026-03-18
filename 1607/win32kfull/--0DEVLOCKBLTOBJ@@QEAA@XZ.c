/*
 * XREFs of ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00469F0
 * Callers:
 *     GreGradientFill @ 0x1C005FD04 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 */

DEVLOCKBLTOBJ *__fastcall DEVLOCKBLTOBJ::DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  DEVLOCKBLTOBJ *result; // rax

  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 22) = 0;
  DCOBJ::DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  DCOBJ::DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 168));
  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return result;
}
