/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047320
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044C50 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004630C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046CA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180046FC0 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180048B20 (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2)
{
  struct CVisual *v2; // rsi
  int v3; // eax
  struct tagPOINT v4; // rbx
  int v5; // eax
  CContactManager *v6; // rcx
  CVisual *v7; // rdi
  int v8; // eax
  struct CVisual *v9; // rdx
  CContactManager *v10; // rcx
  struct CVisual *v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-20h] BYREF
  CBaseObject *v13; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+40h] BYREF
  struct tagPOINT v15; // [rsp+A0h] [rbp+48h] BYREF
  CVisual *v16; // [rsp+A8h] [rbp+50h] BYREF

  v14 = a2;
  v13 = this;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v14);
  v15 = 0LL;
  v16 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v12.left = 0;
  v12.top = 0;
  v11 = 0LL;
  v12.right = 50;
  v12.bottom = 50;
  v3 = CVisual::Create(
         *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
         (struct CVisual **)&v15);
  v4 = v15;
  if ( v3 >= 0 )
  {
    v5 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v16);
    v7 = v16;
    if ( v5 >= 0 && CContactManager::AddToTouchNode(v6, v14, *(struct CVisual **)&v4) >= 0 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)&v4 + 32LL), v7, 0LL, 0, 1);
      v15.x = -32000;
      v15.y = -32000;
      CVisual::SetOffset((struct tagPOINT *)v7, &v15);
      if ( (int)CreateTouchVisual<CDirectTouchVisual>(
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v14,
                  &v13) >= 0 )
      {
        VisualCollection::InsertRelative((CVisual *)((char *)v7 + 32), v13, 0LL, 0, 1);
        CDirectTouchVisual::StartHold((__int64)v13, &v15, &v12);
        v8 = CTransitionWindowSnapshot::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               &v12,
               v7,
               &v11);
        v2 = v11;
        if ( v8 >= 0 )
        {
          v9 = v11;
          *((_OWORD *)v11 + 20) = _xmm;
          VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)&v4 + 32LL), v9, 0LL, 0, 1);
          CVisual::RenderRecursive(*(CVisual **)&v4);
          MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
        }
        VisualCollection::Remove((CVisual *)((char *)v7 + 32), v13);
      }
      VisualCollection::Remove((VisualCollection *)(*(_QWORD *)&v4 + 32LL), v7);
      CContactManager::RemoveFromTouchNode(v10, v14, *(struct CVisual **)&v4);
      if ( v13 )
        CBaseObject::Release(v13);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v4 )
    CBaseObject::Release(*(CBaseObject **)&v4);
}
