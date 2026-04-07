/*
 * XREFs of ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001B990
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001BB64 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002B678 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::DrawStateW(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  volatile signed __int32 *v4; // rsi
  volatile signed __int32 *v5; // r14
  volatile signed __int32 *v6; // rbp
  bool v9; // zf
  __int64 v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CVisual *v13; // rcx
  void (__fastcall *v14)(CVisual *__hidden, unsigned int); // rax
  CBaseObject *v15; // rcx
  char v16; // al
  CVisual *v18; // rcx
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  int v20; // eax
  __int64 v21; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a3 != 4 && *(_DWORD *)(a1 + 352) >= 4u )
  {
    v9 = (*(_BYTE *)(a1 + 304) & 0x10) == 0;
    v10 = a3;
    if ( !v9 )
      v10 = 1LL;
    v4 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 328) + 8 * v10);
    if ( *(_DWORD *)(a1 + 384) >= 4u )
      v5 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 360) + 8 * v10);
  }
  if ( a3 - 1 <= 1 && *(_QWORD *)(a1 + 392) && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) )
  {
    v20 = CVisual::MoveToFront((CVisual *)a1, 0);
    v3 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x18Fu);
      return v3;
    }
    v6 = *(volatile signed __int32 **)(a1 + 392);
  }
  v11 = *(CBaseObject **)(a2 + 72);
  if ( v11 != (CBaseObject *)v4 )
  {
    if ( v11 )
      CBaseObject::Release(v11);
    *(_QWORD *)(a2 + 72) = v4;
    if ( v4 )
      _InterlockedAdd(v4 + 2, 1u);
    *(_DWORD *)(a2 + 96) |= 1u;
    v18 = *(CVisual **)(a2 + 80);
    if ( v18 )
    {
      v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v18 + 24LL);
      if ( v19 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v18, 0x2000u);
      else
        v19(v18, 0x2000u);
    }
  }
  v12 = *(CBaseObject **)(a2 + 144);
  if ( v12 != (CBaseObject *)v5
    || *(_DWORD *)(a2 + 152) != 1
    || (int)((double)*(int *)(a1 + 432) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 164)) != *(_DWORD *)(a2 + 156) )
  {
    *(_DWORD *)(a2 + 152) = 1;
    if ( v12 )
      CBaseObject::Release(v12);
    *(_QWORD *)(a2 + 144) = v5;
    if ( v5 )
      _InterlockedAdd(v5 + 2, 1u);
    *(_DWORD *)(a2 + 96) |= 1u;
    v13 = *(CVisual **)(a2 + 80);
    if ( v13 )
    {
      v14 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v13 + 24LL);
      if ( v14 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v13, 0x2000u);
      else
        v14(v13, 0x2000u);
    }
  }
  v15 = *(CBaseObject **)(a2 + 136);
  if ( v15 != (CBaseObject *)v6 )
  {
    if ( v15 )
      CBaseObject::Release(v15);
    *(_QWORD *)(a2 + 136) = v6;
    if ( v6 )
      _InterlockedAdd(v6 + 2, 1u);
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)a2, 1u, 0x2000u);
  }
  v16 = (*(_BYTE *)(a1 + 304) & 0x20) != 0;
  if ( *(_BYTE *)(a2 + 160) != v16 )
  {
    v21 = *(_QWORD *)(a2 + 80);
    *(_BYTE *)(a2 + 160) = v16;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 0x2000LL);
  }
  return v3;
}
