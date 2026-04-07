/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180006CE0
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001AAF0 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(CTopLevelWindow *this)
{
  struct CVisual *v1; // rdx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx

  v1 = (struct CVisual *)*((_QWORD *)this + 62);
  if ( v1 )
  {
    v3 = *((_QWORD *)v1 + 3);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v1);
    v4 = (CBaseObject *)*((_QWORD *)this + 62);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)this + 62) = 0LL;
    }
  }
}
