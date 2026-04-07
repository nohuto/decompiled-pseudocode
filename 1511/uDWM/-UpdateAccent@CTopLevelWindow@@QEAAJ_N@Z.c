/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027130
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180003924 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800240F0 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180033528 (-RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18003CE80 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EFD8 (-Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18007DB04 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  unsigned int v2; // esi
  struct CVisual **v5; // rbx
  int v6; // eax
  int inserted; // eax
  __int64 v8; // rax
  struct CVisual *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  struct CVisual *v12; // rsi
  int updated; // eax
  int v14; // eax
  __int64 v15; // r14
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 93) + 152LL) & 0xFFFFFFFB) != 0 )
  {
    v5 = (struct CVisual **)((char *)this + 288);
    if ( !*((_QWORD *)this + 36) )
    {
      v6 = CAccent::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (struct CAccent **)this + 36);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xDFAu);
        return v2;
      }
      *((_BYTE *)*v5 + 584) = (*(_DWORD *)(*((_QWORD *)this + 93) + 104LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 35) + 32LL), *v5, 0LL, 1, 1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xDFCu);
        return v2;
      }
    }
    v8 = *((_QWORD *)this + 93);
    v9 = *v5;
    v10 = *(_QWORD *)(v8 + 120);
    *((_QWORD *)v9 + 44) = *(_QWORD *)(v8 + 40);
    *((_QWORD *)v9 + 45) = v10;
    v11 = *((_QWORD *)this + 93);
    if ( !*(_DWORD *)(v11 + 160) && (*(_BYTE *)(v11 + 156) & 2) == 0 && *(_DWORD *)(v11 + 152) == 2 )
      *(_DWORD *)(*((_QWORD *)this + 93) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
    if ( *(_DWORD *)(*((_QWORD *)this + 93) + 152LL) == 3 )
    {
      CWindowList::RegisterBlurBehind(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
        *((struct CWindowData **)this + 93));
    }
    else
    {
      v17 = *((_QWORD *)this + 93);
      DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 544LL, &v17);
    }
    v12 = *v5;
    if ( a2 != *((_BYTE *)*v5 + 350) )
    {
      CVisual::SetDirtyFlags(*v5, 0x10000);
      *((_BYTE *)v12 + 350) = a2;
    }
    updated = CAccent::UpdateAccentPolicy(
                *v5,
                (const struct tagRECT *)(*((_QWORD *)this + 93) + 48LL),
                (__m128i *)(*((_QWORD *)this + 93) + 152LL),
                *(struct CResource **)(*((_QWORD *)this + 93) + 352LL));
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xE15u);
  }
  else if ( *((_QWORD *)this + 36) )
  {
    v18 = *((_QWORD *)this + 93);
    DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 544LL, &v18);
    v14 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 35) + 32LL), *((struct CVisual **)this + 36));
    v2 = v14;
    if ( v14 >= 0 )
    {
      v15 = *((_QWORD *)this + 36);
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
        *((_QWORD *)this + 36) = 0LL;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xE1Cu);
    }
  }
  return v2;
}
