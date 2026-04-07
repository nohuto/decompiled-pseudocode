/*
 * XREFs of ?Reset@CContactManager@@QEAAJXZ @ 0x18003ABFC
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180030654 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x180085A78 (--1CContactManager@@QEAA@XZ.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18006E724 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18006E7E8 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x180079DB8 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x180087CDC (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800975EC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CContactManager::Reset(CContactManager *this)
{
  char *v3; // rdi
  char *v4; // rdi
  CContactManager *v5; // rcx
  CContactManager *v6; // rcx
  CContactManager *v7; // rcx
  CContactManager *v8; // rcx
  CContactManager *v9; // rcx
  CContactManager *v10; // rcx
  CContactManager *v11; // rcx

  while ( *((_DWORD *)this + 36) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      this,
      *(struct CTouchVisual **)(*((_QWORD *)this + 15) + 16LL));
    DynArray<CStationaryAnimation,0>::RemoveAt((char *)this + 120, 0LL);
  }
  if ( *((_DWORD *)this + 20) )
  {
    v3 = (char *)this + 56;
    do
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*(_QWORD *)v3 + 48LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v5, *(struct CTouchVisual **)(*(_QWORD *)v3 + 56LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v6, *(struct CTouchVisual **)(*(_QWORD *)v3 + 72LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v7, *(struct CTouchVisual **)(*(_QWORD *)v3 + 80LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v8, *(struct CTouchVisual **)(*(_QWORD *)v3 + 88LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v9, *(struct CTouchVisual **)(*(_QWORD *)v3 + 64LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v10, *(struct CTouchVisual **)(*(_QWORD *)v3 + 96LL));
      DynArray<CTouchContact,0>::RemoveAt((char *)this + 56, 0LL);
    }
    while ( *((_DWORD *)this + 20) );
  }
  while ( *((_DWORD *)this + 44) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, **((struct CTouchVisual ***)this + 19));
    DynArray<CTouchVisual *,0>::RemoveAt((char *)this + 152, 0LL);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v4 = (char *)this + 88;
    do
    {
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*(_QWORD *)v4 + 8LL));
      CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v11, *(struct CTouchVisual **)(*(_QWORD *)v4 + 16LL));
      DynArray<CPenContact,0>::RemoveAt((char *)this + 88, 0LL);
    }
    while ( *((_DWORD *)this + 28) );
  }
  while ( *((_DWORD *)this + 68) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      this,
      *(struct CTouchVisual **)(*((_QWORD *)this + 31) + 8LL));
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 248);
  }
  while ( *((_DWORD *)this + 76) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      this,
      *(struct CTouchVisual **)(*((_QWORD *)this + 35) + 8LL));
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280);
  }
  CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *((struct CTouchVisual **)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  return 0LL;
}
