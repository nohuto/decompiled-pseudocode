/*
 * XREFs of ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCResource@@3PEA_NPEAUMilPoint3F@@@Z @ 0x18000C744
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180005614 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
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
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  volatile signed __int32 *v20; // rbx
  struct CResource *BrushNoRef; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  volatile signed __int32 *v24; // rdi
  char v25; // r14
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-28h]
  int v28; // [rsp+28h] [rbp-20h]

  v8 = *((_DWORD *)this + 34);
  v11 = -2147467259;
  v12 = 0;
  if ( v8 )
  {
    v14 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + 8LL * v12);
      v16 = *(_QWORD *)(v15 + 16);
      if ( (unsigned __int64)(v16 + 1) > 1
        && v16 == *((_QWORD *)a2 + 2)
        && *(_BYTE *)(v15 + 67) == a4
        && ((*(_DWORD *)(v15 + 24) & 0x4000000) != 0) == ((*((_DWORD *)a2 + 6) & 0x4000000) != 0)
        && ((*(_DWORD *)(v15 + 24) & 0x10000000) != 0) == ((*((_DWORD *)a2 + 6) & 0x10000000) != 0) )
      {
        break;
      }
      if ( ++v12 >= v8 )
        return v11;
    }
    v17 = *(_QWORD *)(v15 + 40);
    if ( v17 && !*(_BYTE *)(v17 + 959) && !*(_BYTE *)(v15 + 74) )
    {
      v18 = a3->right - a3->left;
      if ( v18 < 0 )
        v18 = 0;
      if ( v18 == *(_DWORD *)(v17 + 936) )
      {
        v19 = a3->bottom - a3->top;
        if ( v19 < 0 )
          v19 = 0;
        if ( v19 == HIDWORD(*(_QWORD *)(v17 + 936)) )
        {
          v20 = *(volatile signed __int32 **)(v17 + 568);
          if ( v20 )
            _InterlockedIncrement(v20 + 2);
          BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef((CAnimatedTransitionVisual *)v17);
          v24 = (volatile signed __int32 *)BrushNoRef;
          if ( BrushNoRef )
            _InterlockedIncrement((volatile signed __int32 *)BrushNoRef + 2);
          v25 = *(_BYTE *)(v23 + 67);
          v28 = *(_DWORD *)(v22 + 804);
          v26 = *(_QWORD *)(v23 + 32);
          v27 = *(_QWORD *)(v22 + 796);
          if ( v26 )
          {
            *((_QWORD *)a2 + 4) = v26;
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          }
          v11 = 0;
          if ( *a5 )
            CBaseObject::Release(*a5);
          *a5 = (struct CResource *)v24;
          if ( v24 )
            _InterlockedIncrement(v24 + 2);
          if ( *a6 )
            CBaseObject::Release(*a6);
          *a6 = (struct CResource *)v20;
          if ( v20 )
            _InterlockedIncrement(v20 + 2);
          *a7 = v25;
          *(_QWORD *)a8 = v27;
          *((_DWORD *)a8 + 2) = v28;
          if ( v24 )
            CBaseObject::Release((CBaseObject *)v24);
          if ( v20 )
            CBaseObject::Release((CBaseObject *)v20);
        }
      }
    }
  }
  return v11;
}
