/*
 * XREFs of ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055B0
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180005648 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055F8 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800818B0 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CContactManager::CancelStationaryAnimation(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 *v7; // rdi
  CContactManager *v8; // rcx

  result = CContactManager::FindStationaryAnimation(a1, a2, 1LL);
  v4 = result;
  if ( (int)result >= 0 )
  {
    _mm_lfence();
    v5 = v3 + 120;
    v6 = *(_QWORD *)(v3 + 120);
    v7 = *(unsigned __int64 **)(v6 + 24LL * (unsigned int)result + 16);
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*v7 + 184))(*(_QWORD *)(v6 + 24LL * (unsigned int)result + 16));
      CContactManager::RemoveFromTouchNode(v8, v7[34], (struct CVisual *)v7);
      CBaseObject::Release((CBaseObject *)v7);
    }
    return DynArray<CStationaryAnimation,0>::RemoveAt(v5, v4);
  }
  return result;
}
