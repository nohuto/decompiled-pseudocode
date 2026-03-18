/*
 * XREFs of ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C000712C
 * Callers:
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this)
{
  if ( *((_BYTE *)this + 8) )
    DXGSYNCOBJECTLOCK::Release(this);
}
