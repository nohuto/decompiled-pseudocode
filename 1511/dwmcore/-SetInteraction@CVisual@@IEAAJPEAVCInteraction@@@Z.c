/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180049B84
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180048530 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180049B84 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048CFC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180049B20 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180049B84 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ??$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z @ 0x1800852BC (--$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A7774 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v2; // ebx
  CInteraction **v3; // rbp
  CVisual *Visual; // rax
  int v7; // eax
  struct CResource *v8; // rdx
  int v9; // eax
  int v11; // eax

  v2 = 0;
  v3 = (CInteraction **)((char *)this + 400);
  if ( a2 != *((struct CInteraction **)this + 50) )
  {
    if ( *v3 )
    {
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CInteraction::SetVisual(*v3, 0LL);
      CResource::UnRegisterNotifier<CInteraction>(this, v3);
    }
    if ( a2 )
    {
      Visual = CInteraction::GetVisual(a2);
      if ( Visual )
      {
        v11 = CVisual::SetInteraction(Visual, 0LL);
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA34u);
          return v2;
        }
      }
      v7 = CInteraction::SetVisual(a2, this);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA38u);
        return v2;
      }
      v8 = (struct CInteraction *)((char *)a2 + 8);
    }
    else
    {
      v8 = 0LL;
    }
    v9 = CResource::RegisterNotifier(this, v8);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA3Eu);
    }
    else
    {
      *v3 = a2;
      if ( a2 )
        CVisual::NotifyMidManipulationUpdate((__int64)this, 0, (__int64)this);
      CVisual::OnInputSinkChange(this);
    }
  }
  return v2;
}
