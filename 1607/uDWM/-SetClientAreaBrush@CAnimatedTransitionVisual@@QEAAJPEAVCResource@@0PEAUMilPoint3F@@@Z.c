/*
 * XREFs of ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x1800147BC
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18000DF6C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetClientAreaBrush(
        CAnimatedTransitionVisual *this,
        struct CResource *a2,
        struct CResource *a3,
        struct MilPoint3F *a4)
{
  CBaseObject *v6; // rcx
  CBaseObject *v9; // rcx
  int v10; // eax

  v6 = (CBaseObject *)*((_QWORD *)this + 74);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 74) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v9 = (CBaseObject *)*((_QWORD *)this + 71);
  if ( v9 )
    CBaseObject::Release(v9);
  *((_QWORD *)this + 71) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v10 = *((_DWORD *)a4 + 2);
  *(_QWORD *)((char *)this + 796) = *(_QWORD *)a4;
  *((_DWORD *)this + 201) = v10;
  return 0LL;
}
