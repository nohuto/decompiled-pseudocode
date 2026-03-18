/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x18004F798 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18004FAD4 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180050ED0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180051D40 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A4D80 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // ebx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v6; // rbp
  CVisual *Visual; // rax
  int v8; // eax
  struct CResource *v9; // rdx
  int v10; // eax
  int v12; // eax

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CInteraction::SetVisual(v6, 0LL);
      CResource::UnRegisterNotifierInternal(this, (struct CInteraction *)((char *)v6 + 8));
      CVisual::SetInteractionInternal(this, 0LL);
    }
    if ( a2 )
    {
      Visual = CInteraction::GetVisual(a2);
      if ( Visual )
      {
        v12 = CVisual::SetInteraction(Visual, 0LL);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB3Cu);
          return v4;
        }
      }
      v8 = CInteraction::SetVisual(a2, this);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB40u);
        return v4;
      }
      v9 = (struct CInteraction *)((char *)a2 + 8);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = CResource::RegisterNotifier(this, v9);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB46u);
    }
    else
    {
      CVisual::SetInteractionInternal(this, a2);
      if ( a2 )
        CVisual::NotifyMidManipulationUpdate((__int64)this, 0, (__int64)this);
      CVisual::OnInputSinkChange(this);
    }
  }
  return v4;
}
