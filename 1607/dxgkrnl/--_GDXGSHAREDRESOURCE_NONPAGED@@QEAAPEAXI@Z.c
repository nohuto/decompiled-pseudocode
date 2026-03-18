/*
 * XREFs of ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0021180
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C008F6E4 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C008F868 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001C8F0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DXGSHAREDRESOURCE_NONPAGED *__fastcall DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(
        DXGSHAREDRESOURCE_NONPAGED *this)
{
  CRefCountedBuffer *v2; // rcx

  v2 = (CRefCountedBuffer *)*((_QWORD *)this + 1);
  if ( v2 )
    CRefCountedBuffer::RefCountedBufferRelease(v2);
  operator delete(this);
  return this;
}
