/*
 * XREFs of ??_GCTransportControlRouterWorkItem@@UEAAPEAXI@Z @ 0x18001E950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CTransportControlRouterWorkItem *__fastcall CTransportControlRouterWorkItem::`scalar deleting destructor'(
        CTransportControlRouterWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
