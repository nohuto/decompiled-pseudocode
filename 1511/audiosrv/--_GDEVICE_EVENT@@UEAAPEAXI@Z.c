/*
 * XREFs of ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x18009A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 */

void **__fastcall DEVICE_EVENT::`scalar deleting destructor'(void **this, char a2)
{
  *this = &DEVICE_EVENT::`vftable';
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(this + 2);
  *this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
