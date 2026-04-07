/*
 * XREFs of ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000AE24
 * Callers:
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001980 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180039064 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B040 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTransitionVisualController::RemoveTLWClone(
        CTransitionVisualController *this,
        const struct CTopLevelWindow *a2,
        char a3,
        char a4)
{
  int v5; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  struct CVisual *v11; // rdx
  __int64 v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 12) - 1;
    if ( v5 >= 0 )
    {
      v8 = (__int64 *)((char *)this + 24);
      v9 = 24LL * v5;
      do
      {
        v10 = *v8;
        if ( *(const struct CTopLevelWindow **)(v9 + *v8) == a2 )
        {
          v11 = *(struct CVisual **)(v9 + v10 + 8);
          v12 = *((_QWORD *)v11 + 3);
          if ( v12 && (*(_BYTE *)(v9 + v10 + 16) || a3) )
            VisualCollection::Remove((VisualCollection *)(v12 + 32), v11);
          if ( a4 )
          {
            v13 = *(CBaseObject **)(v9 + v10);
            if ( v13 )
              CBaseObject::Release(v13);
            v14 = *(CBaseObject **)(v9 + v10 + 8);
            if ( v14 )
              CBaseObject::Release(v14);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v8, (unsigned int)v5);
          }
        }
        v9 -= 24LL;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
}
