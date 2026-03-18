/*
 * XREFs of ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C00D835C
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C00D808C (DxgkFinishPnPTransition.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransition(DXGSESSIONMGR *this)
{
  struct _KEVENT *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( (*((_DWORD *)this + 34))-- == 1 )
  {
    v3 = (struct _KEVENT *)*((_QWORD *)this + 16);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
