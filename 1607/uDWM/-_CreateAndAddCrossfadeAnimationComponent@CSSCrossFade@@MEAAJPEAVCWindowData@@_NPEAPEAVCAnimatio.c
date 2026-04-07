/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000516C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        __int64 a3,
        struct CAnimationComponent **a4)
{
  char v7; // di
  int v8; // eax

  if ( (_BYTE)a3 )
  {
    *((_DWORD *)a2 + 146) |= 0x200000u;
  }
  else if ( ((*((_DWORD *)a2 + 146) & 0x10000000) == 0
          || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0)
         && (*((_DWORD *)a2 + 146) & 0x20000000) == 0 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  v8 = (*(__int64 (__fastcall **)(CSSCrossFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 146));
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v8, 0LL, 0LL, -1, v7, a4);
}
