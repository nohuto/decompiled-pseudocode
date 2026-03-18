/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C00D08D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 239) = -1;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_WORD *)this + 350) = 0;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_BYTE *)this + 840) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_DWORD *)this + 244) = 0;
  *((_BYTE *)this + 980) = 0;
  *((_WORD *)this + 496) = 0;
  *(_QWORD *)((char *)this + 628) = 0LL;
  *(_QWORD *)((char *)this + 636) = 0LL;
  *(_QWORD *)((char *)this + 644) = 0LL;
  *(_QWORD *)((char *)this + 652) = 0LL;
  *(_QWORD *)((char *)this + 660) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  memset((char *)this + 856, 0, 0x2CuLL);
  memset((char *)this + 900, 0, 0x38uLL);
  *((_QWORD *)this + 123) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_DWORD *)this + 171) = 0;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 106);
  KeInitializeEvent((PRKEVENT)((char *)this + 800), NotificationEvent, 0);
  return this;
}
