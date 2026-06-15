/*
 * XREFs of ??_GCTransportControlRouterWorkItem@@UEAAPEAXI@Z @ 0x18002D150
 * Callers:
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x1800A6CD8 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 */

CTransportControlRouterWorkItem *__fastcall CTransportControlRouterWorkItem::`scalar deleting destructor'(
        CTransportControlRouterWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
