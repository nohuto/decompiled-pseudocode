/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C00F6BF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 241) = -1;
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
  *((_DWORD *)this + 176) = 0;
  *((_WORD *)this + 354) = 0;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_BYTE *)this + 848) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_BYTE *)this + 988) = 0;
  *((_DWORD *)this + 250) = -1;
  *((_DWORD *)this + 251) = -1;
  *((_BYTE *)this + 1008) = 0;
  memset((char *)this + 628, 0, 0x28uLL);
  *((_QWORD *)this + 89) = 0LL;
  memset((char *)this + 864, 0, 0x64uLL);
  *((_QWORD *)this + 124) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  memset((char *)this + 720, 0, 0x28uLL);
  memset((char *)this + 760, 0, 0x28uLL);
  *((_DWORD *)this + 171) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 107);
  KeInitializeEvent((PRKEVENT)((char *)this + 808), NotificationEvent, 0);
  return this;
}
