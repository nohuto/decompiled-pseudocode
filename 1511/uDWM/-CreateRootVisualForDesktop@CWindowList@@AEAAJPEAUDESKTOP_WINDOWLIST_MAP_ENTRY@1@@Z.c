/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x180046664
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004630C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x180045F14 (-Create@CMagnifierControl@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180046B6C (-Create@CDesktopWindowReplacement@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(
        CWindowList *this,
        struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *a2)
{
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // r14
  struct MIL_CHANNEL__ *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // rsi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int inserted; // eax
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // rcx
  CBaseObject *v17; // [rsp+30h] [rbp-10h] BYREF
  struct CVisual *v18; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v19; // [rsp+80h] [rbp+40h] BYREF
  CVisual *v20; // [rsp+88h] [rbp+48h] BYREF

  v18 = this;
  v20 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v5 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  v19 = 0LL;
  v18 = 0LL;
  v6 = CVisual::Create(v5, &v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x476u);
LABEL_15:
    v8 = (volatile signed __int32 *)v20;
    goto LABEL_16;
  }
  v8 = (volatile signed __int32 *)v20;
  CVisual::SetOpacity(v20, 0.0);
  v9 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v18);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x481u);
LABEL_28:
    v3 = (volatile signed __int32 *)v18;
    goto LABEL_16;
  }
  v10 = CDesktopWindowReplacement::Create(
          *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v17);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x486u);
    goto LABEL_28;
  }
  v3 = (volatile signed __int32 *)v18;
  v11 = CMagnifierControl::Create(
          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
          *((struct CResource **)CDesktopManager::s_pDesktopManagerInstance + 8),
          (struct CVisual *)v8,
          v18,
          &v19);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x48Fu);
    v4 = (volatile signed __int32 *)v19;
  }
  else
  {
    v4 = (volatile signed __int32 *)v19;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v8 + 8), *((struct CVisual **)v19 + 5), 0LL, 0, 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x496u);
    }
    else
    {
      v13 = CVisual::RenderRecursive((CVisual *)v8);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x49Bu);
      }
      else
      {
        v14 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
        v7 = v14;
        if ( v14 >= 0 )
        {
          *((_QWORD *)a2 + 1) = v8;
          if ( v8 )
          {
            _InterlockedIncrement(v8 + 2);
            v4 = (volatile signed __int32 *)v19;
          }
          *((_QWORD *)a2 + 2) = v4;
          _InterlockedIncrement(v4 + 2);
          v3 = (volatile signed __int32 *)v18;
          *((_QWORD *)a2 + 3) = v18;
          if ( v3 )
          {
            _InterlockedIncrement(v3 + 2);
            v3 = (volatile signed __int32 *)v18;
          }
          v15 = v17;
          *((_QWORD *)a2 + 4) = v17;
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
            v3 = (volatile signed __int32 *)v18;
          }
          v4 = (volatile signed __int32 *)v19;
          goto LABEL_15;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x49Du);
      }
    }
  }
LABEL_16:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  if ( v4 )
    CBaseObject::Release((CBaseObject *)v4);
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  if ( v17 )
    CBaseObject::Release(v17);
  return v7;
}
