/*
 * XREFs of ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800857F4
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800863AC (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     sqrtf_0 @ 0x18004FF7E (sqrtf_0.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x180087B00 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CContactManager::CancelStationaryAnimationsInRadius(__int64 a1, int a2, _DWORD *a3, float a4)
{
  int v5; // edi
  __int64 *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 *v10; // r14
  int v11; // eax
  int v12; // ecx
  CContactManager *v13; // rcx

  v5 = *(_DWORD *)(a1 + 144) - 1;
  if ( v5 >= 0 )
  {
    v7 = (__int64 *)(a1 + 120);
    v8 = 24LL * v5;
    do
    {
      v9 = *v7;
      v10 = *(unsigned __int64 **)(*v7 + v8 + 16);
      if ( v10 && *((_DWORD *)v10 + 100) == a2 )
      {
        v11 = a3[1] - *(_DWORD *)(v9 + v8 + 8);
        v12 = *a3 - *(_DWORD *)(v9 + v8 + 4);
        if ( a4 >= sqrtf_0((float)(v12 * v12 + v11 * v11)) )
        {
          (*(void (__fastcall **)(unsigned __int64 *))(*v10 + 184))(v10);
          CContactManager::RemoveFromTouchNode(v13, v10[34], (struct CVisual *)v10);
          CBaseObject::Release((CBaseObject *)v10);
          DynArray<CStationaryAnimation,0>::RemoveAt(v7, (unsigned int)v5);
        }
      }
      v8 -= 24LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
}
