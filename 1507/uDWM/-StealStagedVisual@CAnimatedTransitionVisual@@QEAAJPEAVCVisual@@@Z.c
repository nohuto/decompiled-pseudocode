/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800389C8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CAnimatedTransitionVisual *this, struct CVisual *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  struct tagPOINT v8; // rbx
  LONG y; // r15d
  struct tagPOINT *v10; // rcx
  int inserted; // eax
  struct tagPOINT v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)a2 + 3) + 32LL), a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x383u);
  }
  else
  {
    if ( *((_BYTE *)this + 960) )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 89) + 32LL), a2, 0LL, 0, 1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x389u);
        goto LABEL_10;
      }
    }
    else
    {
      v7 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), a2, 0LL, 0, 1);
      v6 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x38Du);
        goto LABEL_10;
      }
    }
    v8 = *(struct tagPOINT *)(**((_QWORD **)a2 + 6) + 104LL);
    v13 = v8;
    if ( *((_DWORD *)a2 + 18) )
    {
      y = v13.y;
      do
      {
        v10 = *(struct tagPOINT **)(*((_QWORD *)a2 + 6) + 8LL * v2);
        v13 = v10[13];
        v13.x -= v8.x;
        v13.y -= y;
        CVisual::SetOffset(v10, &v13);
        ++v2;
      }
      while ( v2 < *((_DWORD *)a2 + 18) );
    }
    *((_BYTE *)this + 959) = 1;
  }
LABEL_10:
  CBaseObject::Release(a2);
  return v6;
}
