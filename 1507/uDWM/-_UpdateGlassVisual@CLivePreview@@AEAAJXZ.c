/*
 * XREFs of ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006AAB4
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180069564 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateGlassVisual(CLivePreview *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  CTopLevelWindow *v11; // rcx
  int v12; // eax
  struct CVisual *v13; // r14
  int inserted; // eax
  struct CVisual *v15; // rdx
  CBaseObject *v16; // rcx
  struct CVisual *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 78) - 1;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = 40LL * v5;
    do
    {
      v9 = *((_QWORD *)this + 36);
      v10 = *(_QWORD *)(v9 + v8);
      v11 = *(CTopLevelWindow **)(v10 + 368);
      if ( (*(_BYTE *)(v10 + 554) & 0x40) == 0 )
      {
        if ( *(_BYTE *)(v9 + v8 + 24) || *(_DWORD *)(v10 + 112) != 1 )
        {
          v15 = *(struct CVisual **)(v9 + v8 + 16);
          if ( v15 )
          {
            VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v15 + 3) + 32LL), v15);
            v16 = *(CBaseObject **)(*((_QWORD *)this + 36) + v8 + 16);
            if ( v16 )
            {
              CBaseObject::Release(v16);
              *(_QWORD *)(*((_QWORD *)this + 36) + v8 + 16) = 0LL;
            }
          }
        }
        else if ( !*(_QWORD *)(v9 + v8 + 16) )
        {
          v18 = 0LL;
          v12 = CTopLevelWindow::CloneVisualTreeForLivePreview(v11, 1, 0, a4, &v18);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x61Bu);
            return v4;
          }
          v13 = v18;
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                       v18,
                       0LL,
                       0,
                       1);
          v4 = inserted;
          if ( inserted < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x61Cu);
            return v4;
          }
          *(_QWORD *)(*((_QWORD *)this + 36) + v8 + 16) = v13;
        }
      }
      v8 -= 40LL;
      --v7;
    }
    while ( v7 >= 0 );
  }
  return v4;
}
