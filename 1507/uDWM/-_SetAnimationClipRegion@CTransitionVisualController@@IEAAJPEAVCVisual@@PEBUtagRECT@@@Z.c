/*
 * XREFs of ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000F078
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000D858 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180010A98 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionVisualController::_SetAnimationClipRegion(
        CTransitionVisualController *this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  int v4; // ebx
  int v5; // edi
  __int64 v6; // rax
  CBaseObject *v7; // rbx
  CBaseObject *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v9 = 0LL;
  v5 = ResourceHelper::CreateRectangleGeometry(a3, &v9);
  if ( v5 >= 0 )
  {
    v6 = *((_QWORD *)a2 + 2);
    v10 = 46LL;
    v11 = 0;
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 24);
    HIDWORD(v10) = v4;
    v7 = v9;
    v11 = *((_DWORD *)v9 + 6);
    v5 = MilResource_SendCommand(&v10, 0xCu, *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
    CBaseObject::Release(v7);
  }
  return (unsigned int)v5;
}
