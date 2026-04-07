/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18002588C
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800259A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180040F68 (-Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureNonClientAreaButton(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v5; // rbp
  struct CVisual *v6; // rdx
  __int64 v8; // rsi
  CVisual *v9; // rcx
  bool v10; // r8
  int v11; // eax
  int inserted; // eax
  int v13; // eax
  CBaseObject *v14; // rcx

  v2 = a2;
  v3 = 0;
  v5 = 3LL * a2;
  if ( (dword_1800A4C68[3 * a2] & *(_DWORD *)(a1 + 608)) != 0 )
  {
    v8 = a1 + 8LL * a2;
    if ( !*(_QWORD *)(v8 + 504) )
    {
      v11 = CButton::Create(*(struct IDwmChannel **)(*(_QWORD *)(a1 + 16) + 16LL), (struct CButton **)(v8 + 504));
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x89Au);
        return v3;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*(_QWORD *)(a1 + 296) + 32LL),
                   *(struct CVisual **)(v8 + 504),
                   0LL,
                   0,
                   1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x89Cu);
        return v3;
      }
      *(_DWORD *)(*(_QWORD *)(v8 + 504) + 184LL) = dword_1800A4C68[v5 + 2];
    }
    v9 = *(CVisual **)(v8 + 504);
    v10 = (*(_DWORD *)(a1 + 608) & dword_1800A4C68[v5 + 1]) != 0;
    if ( (*((_BYTE *)v9 + 304) & 1) != v10 )
    {
      *((_BYTE *)v9 + 304) ^= (v10 ^ *((_BYTE *)v9 + 304)) & 1;
      CVisual::SetDirtyFlags(v9, 0x8000);
    }
  }
  else
  {
    v6 = *(struct CVisual **)(a1 + 8LL * a2 + 504);
    if ( v6 )
    {
      v13 = VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(a1 + 296) + 32LL), v6);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8A7u);
      }
      else
      {
        v14 = *(CBaseObject **)(a1 + 8 * v2 + 504);
        if ( v14 )
        {
          CBaseObject::Release(v14);
          *(_QWORD *)(a1 + 8 * v2 + 504) = 0LL;
        }
      }
    }
  }
  return v3;
}
