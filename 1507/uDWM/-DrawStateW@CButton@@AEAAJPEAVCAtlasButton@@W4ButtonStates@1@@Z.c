/*
 * XREFs of ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180019E28
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001A070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028D08 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CButton::DrawStateW(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r13d
  __int64 v4; // r14
  __int64 v5; // r12
  volatile signed __int32 *v6; // r15
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbx
  void (__fastcall *v13)(CVisual *__hidden, unsigned int); // rsi
  __int64 v14; // rsi
  __int64 v15; // rbx
  void (__fastcall *v16)(CVisual *__hidden, unsigned int); // rsi
  CBaseObject *v17; // rcx
  char v18; // al
  int v20; // eax

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a3 != 4 && *(_DWORD *)(a1 + 352) >= 4u )
  {
    v9 = *(_BYTE *)(a1 + 304);
    v10 = a3;
    if ( (v9 & 0x10) != 0 )
      v10 = 1LL;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 8 * v10);
    if ( *(_DWORD *)(a1 + 384) >= 4u )
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8 * v10);
  }
  if ( a3 - 1 <= 1 && *(_QWORD *)(a1 + 392) && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) )
  {
    v20 = CVisual::MoveToFront((CVisual *)a1, 0);
    v3 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x1EBu);
      return v3;
    }
    v6 = *(volatile signed __int32 **)(a1 + 392);
  }
  v11 = *(_QWORD *)(a2 + 72);
  if ( v11 != v4 )
  {
    if ( v11 && !_InterlockedDecrement((volatile signed __int32 *)(v11 + 8)) )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    *(_QWORD *)(a2 + 72) = v4;
    if ( v4 )
      _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
    *(_DWORD *)(a2 + 96) |= 1u;
    v12 = *(_QWORD *)(a2 + 80);
    if ( v12 )
    {
      v13 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v12 + 24LL);
      if ( v13 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(*(CVisual **)(a2 + 80), 0x2000u);
      else
        v13(*(CVisual **)(a2 + 80), 0x2000u);
    }
  }
  v14 = *(_QWORD *)(a2 + 144);
  if ( v14 != v5
    || *(_DWORD *)(a2 + 152) != 1
    || (int)((double)*(int *)(a1 + 432) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 166)) != *(_DWORD *)(a2 + 156) )
  {
    *(_DWORD *)(a2 + 152) = 1;
    if ( v14 && !_InterlockedDecrement((volatile signed __int32 *)(v14 + 8)) )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    *(_QWORD *)(a2 + 144) = v5;
    if ( v5 )
      _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    *(_DWORD *)(a2 + 96) |= 1u;
    v15 = *(_QWORD *)(a2 + 80);
    if ( v15 )
    {
      v16 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v15 + 24LL);
      if ( v16 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(*(CVisual **)(a2 + 80), 0x2000u);
      else
        v16(*(CVisual **)(a2 + 80), 0x2000u);
    }
  }
  v17 = *(CBaseObject **)(a2 + 136);
  if ( v17 != (CBaseObject *)v6 )
  {
    if ( v17 )
      CBaseObject::Release(v17);
    *(_QWORD *)(a2 + 136) = v6;
    if ( v6 )
      _InterlockedAdd(v6 + 2, 1u);
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)a2, 1u, 0x2000u);
  }
  v18 = (*(_BYTE *)(a1 + 304) & 0x20) != 0;
  if ( *(_BYTE *)(a2 + 160) != v18 )
  {
    *(_BYTE *)(a2 + 160) = v18;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 80) + 24LL))(*(_QWORD *)(a2 + 80), 0x2000LL);
  }
  return v3;
}
