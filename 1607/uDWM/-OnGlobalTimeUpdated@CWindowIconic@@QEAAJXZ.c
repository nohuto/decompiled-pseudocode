/*
 * XREFs of ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18006FF48
 * Callers:
 *     ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x18004EFD0 (-OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180038A24 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowIconic::OnGlobalTimeUpdated(CWindowIconic *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx

  v2 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
  if ( *((_DWORD *)this + 14) - 1 < v2 )
    v2 = *((_DWORD *)this + 14) - 1;
  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v2) != *(_QWORD *)(*((_QWORD *)this + 12) + 264LL) )
  {
    CWindowIconic::LoadCentralImage(this);
    CVisual::RenderRecursive(*((CVisual **)this + 13));
  }
  v3 = *((_QWORD *)this + 8);
  if ( *(_BYTE *)(v3 + 72) )
  {
    *(_WORD *)(v3 + 72) = 256;
    *(_QWORD *)(v3 + 24) = 0x3FE147AE147AE148LL;
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(v3 + 32);
    CDesktopManager::s_fTimelineDirty = 1;
  }
  return 0LL;
}
