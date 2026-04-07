/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800243B0
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x18000AF50 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180021124 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800333E8 (-RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033B04 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003828C (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18007E6F0 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  unsigned int v2; // edi
  struct CVisual **v6; // rsi
  __int64 v7; // rax
  struct CVisual *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  struct CVisual *v11; // rdi
  int updated; // eax
  int v13; // eax
  int inserted; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 93) + 152LL) & 0xFFFFFFFB) != 0 )
  {
    v6 = (struct CVisual **)((char *)this + 288);
    if ( *((_QWORD *)this + 36) )
      goto LABEL_5;
    v13 = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CAccent **)this + 36);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xBE5u);
      return v2;
    }
    *((_BYTE *)*v6 + 584) = (*(_DWORD *)(*((_QWORD *)this + 93) + 104LL) & 0x400000) != 0;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 35) + 32LL), *v6, 0LL, 1, 1);
    v2 = inserted;
    if ( inserted >= 0 )
    {
LABEL_5:
      v7 = *((_QWORD *)this + 93);
      v8 = *v6;
      v9 = *(_QWORD *)(v7 + 120);
      *((_QWORD *)v8 + 44) = *(_QWORD *)(v7 + 40);
      *((_QWORD *)v8 + 45) = v9;
      v10 = *((_QWORD *)this + 93);
      if ( !*(_DWORD *)(v10 + 160) && (*(_BYTE *)(v10 + 156) & 2) == 0 && *(_DWORD *)(v10 + 152) == 2 )
        *(_DWORD *)(*((_QWORD *)this + 93) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      if ( *(_DWORD *)(*((_QWORD *)this + 93) + 152LL) == 3 )
      {
        CWindowList::RegisterBlurBehind(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
          *((struct CWindowData **)this + 93));
      }
      else
      {
        v17 = *((_QWORD *)this + 93);
        DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 544LL, &v17);
      }
      v11 = *v6;
      if ( a2 != *((_BYTE *)*v6 + 350) )
      {
        CVisual::SetDirtyFlags(*v6, 0x10000);
        *((_BYTE *)v11 + 350) = a2;
      }
      updated = CAccent::UpdateAccentPolicy(
                  *v6,
                  (const struct tagRECT *)(*((_QWORD *)this + 93) + 48LL),
                  (const struct ACCENT_POLICY *)(*((_QWORD *)this + 93) + 152LL),
                  *(struct CResource **)(*((_QWORD *)this + 93) + 352LL));
      v2 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xBFFu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xBE7u);
    }
  }
  else if ( *((_QWORD *)this + 36) )
  {
    v17 = *((_QWORD *)this + 93);
    DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 544LL, &v17);
    v15 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 35) + 32LL), *((struct CVisual **)this + 36));
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC06u);
    }
    else
    {
      v16 = (CBaseObject *)*((_QWORD *)this + 36);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *((_QWORD *)this + 36) = 0LL;
      }
    }
  }
  return v2;
}
