/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800267F0
 * Callers:
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180005F90 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180006764 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  int v1; // ebx
  struct CVisual **v2; // rsi
  __int64 v5; // rbp
  int v6; // eax
  int inserted; // eax
  CVisual *v8; // rcx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  struct _MARGINS v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (struct CVisual **)((char *)this + 496);
  if ( !*((_QWORD *)this + 62) )
  {
    v5 = *((_QWORD *)this + 93);
    if ( *(_DWORD *)(v5 + 128) )
    {
      v6 = CClientArea::Create(
             *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
             *(_DWORD *)(v5 + 128),
             (struct CClientArea **)this + 62);
      v1 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Cu);
      else
        *((_QWORD *)*v2 + 33) = v5;
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x662u);
      }
      else
      {
        inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 69) + 32LL), *v2, 0LL, 1, 1);
        v1 = inserted;
        if ( inserted < 0 )
        {
          v9 = 1636;
          goto LABEL_14;
        }
        v8 = *v2;
        v10 = 0LL;
        CVisual::SetInsetFromParent(v8, &v10);
        if ( (*((_BYTE *)this + 264) & 4) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v1 = inserted;
          if ( inserted < 0 )
          {
            v9 = 1643;
LABEL_14:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v9);
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
