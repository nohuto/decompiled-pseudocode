/*
 * XREFs of ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x18001EB50
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow::UpdateDCompVisuals(CTopLevelWindow *this)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 93);
  if ( v1 && *(_DWORD *)(v1 + 464) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 440) + 8 * v3);
      if ( *(_BYTE *)(v4 + 34) )
        CVisual::RenderRecursive(*(CVisual **)(v4 + 96));
      v1 = *((_QWORD *)this + 93);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v1 + 464) );
  }
}
