/*
 * XREFs of ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x18007D1FC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007CAE0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18007C84C (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveVisualByIndex(CProjectionBorderManager *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  CBaseObject *v5; // rcx

  if ( a2 != -1 && (signed int)a2 < *((_DWORD *)this + 106) )
  {
    v3 = 56LL * a2;
    v4 = (__int64 *)((char *)this + 400);
    if ( *(_QWORD *)(v3 + *((_QWORD *)this + 50)) )
    {
      _mm_lfence();
      if ( *(_QWORD *)(*(_QWORD *)(*v4 + 56LL * a2) + 24LL) )
      {
        _mm_lfence();
        VisualCollection::Remove(
          (VisualCollection *)(*(_QWORD *)(*(_QWORD *)(v3 + *v4) + 24LL) + 32LL),
          *(struct CVisual **)(v3 + *v4));
      }
      v5 = *(CBaseObject **)(v3 + *v4);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *(_QWORD *)(v3 + *v4) = 0LL;
      }
    }
    DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt(v4, a2);
  }
}
