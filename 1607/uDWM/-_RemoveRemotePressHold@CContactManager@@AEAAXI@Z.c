/*
 * XREFs of ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180087D60
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800975EC (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CContactManager::_RemoveRemotePressHold(CContactManager *this, int a2)
{
  int v3; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // rdi

  v3 = *((_DWORD *)this + 68) - 1;
  if ( v3 >= 0 )
  {
    v4 = (_QWORD *)((char *)this + 248);
    v5 = 16LL * v3;
    do
    {
      if ( *(_DWORD *)(*v4 + v5) == a2 )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(*v4 + v5 + 8));
        DynArray<CIconicBitmapPending,0>::RemoveAt(v4);
      }
      v5 -= 16LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
}
