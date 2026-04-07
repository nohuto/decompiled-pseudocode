/*
 * XREFs of ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCResource@@3PEA_NPEAUMilPoint3F@@@Z @ 0x18000D0C4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180003D7C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2,
        const struct tagRECT *a3,
        char a4,
        struct CResource **a5,
        struct CResource **a6,
        bool *a7,
        struct MilPoint3F *a8)
{
  unsigned int v8; // ebx
  unsigned int v11; // ebp
  unsigned int v12; // r10d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  volatile signed __int32 *v19; // rbx
  struct CResource *BrushNoRef; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  volatile signed __int32 *v23; // rdi
  char v24; // r14
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-28h]
  int v27; // [rsp+28h] [rbp-20h]

  v8 = *((_DWORD *)this + 34);
  v11 = -2147467259;
  v12 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v12);
      v15 = *(_QWORD *)(v14 + 16);
      if ( v15 )
      {
        if ( v15 == *((_QWORD *)a2 + 2)
          && *(_BYTE *)(v14 + 67) == a4
          && ((*(_DWORD *)(v14 + 24) & 0x4000000) != 0) == ((*((_DWORD *)a2 + 6) & 0x4000000) != 0)
          && ((*(_DWORD *)(v14 + 24) & 0x10000000) != 0) == ((*((_DWORD *)a2 + 6) & 0x10000000) != 0) )
        {
          break;
        }
      }
      if ( ++v12 >= v8 )
        return v11;
    }
    v16 = *(_QWORD *)(v14 + 40);
    if ( v16 && !*(_BYTE *)(v16 + 959) && !*(_BYTE *)(v14 + 74) )
    {
      v17 = a3->right - a3->left;
      if ( v17 < 0 )
        v17 = 0;
      if ( v17 == *(_DWORD *)(v16 + 936) )
      {
        v18 = a3->bottom - a3->top;
        if ( v18 < 0 )
          v18 = 0;
        if ( v18 == HIDWORD(*(_QWORD *)(v16 + 936)) )
        {
          v19 = *(volatile signed __int32 **)(v16 + 568);
          if ( v19 )
            _InterlockedIncrement(v19 + 2);
          BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef((CAnimatedTransitionVisual *)v16);
          v23 = (volatile signed __int32 *)BrushNoRef;
          if ( BrushNoRef )
            _InterlockedIncrement((volatile signed __int32 *)BrushNoRef + 2);
          v24 = *(_BYTE *)(v22 + 67);
          v27 = *(_DWORD *)(v21 + 804);
          v25 = *(_QWORD *)(v22 + 32);
          v26 = *(_QWORD *)(v21 + 796);
          if ( v25 )
          {
            *((_QWORD *)a2 + 4) = v25;
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          }
          v11 = 0;
          if ( *a5 )
            CBaseObject::Release(*a5);
          *a5 = (struct CResource *)v23;
          if ( v23 )
            _InterlockedIncrement(v23 + 2);
          if ( *a6 )
            CBaseObject::Release(*a6);
          *a6 = (struct CResource *)v19;
          if ( v19 )
            _InterlockedIncrement(v19 + 2);
          *a7 = v24;
          *(_QWORD *)a8 = v26;
          *((_DWORD *)a8 + 2) = v27;
          if ( v23 )
            CBaseObject::Release((CBaseObject *)v23);
          if ( v19 )
            CBaseObject::Release((CBaseObject *)v19);
        }
      }
    }
  }
  return v11;
}
