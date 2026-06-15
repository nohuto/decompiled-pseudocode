/*
 * XREFs of ??0CAudioSrv@@QEAA@XZ @ 0x18003C450
 * Callers:
 *     ServiceStart @ 0x18003DAF0 (ServiceStart.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::CAudioSrv(CAudioSrv *this)
{
  CAudioSrv *result; // rax

  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 8) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 104));
  *((_QWORD *)this + 18) = 0LL;
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 10;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
