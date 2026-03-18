/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C027AE60
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPath @ 0x1C02A5020 (NtGdiGetPath.c)
 * Callees:
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C0013B44 (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C025B05C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  THREAD_GUARDED_EPATHOBJ::THREAD_GUARDED_EPATHOBJ(this);
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) && XEPATHOBJ_vDestructWrap )
  {
    PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 30) = 1;
  }
  EPATHOBJ::vLock(this, a2);
  return this;
}
