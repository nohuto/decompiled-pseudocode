/*
 * XREFs of ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18010B310
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18014AE58 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B54C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPositionAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *a3)
{
  struct CResource *v4; // rsi
  unsigned int v5; // edx
  struct CResource *Resource; // rax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
    goto LABEL_16;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x68u);
  v4 = Resource;
  if ( !Resource )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1F3u);
    return v9;
  }
  v10 = CResource::RegisterNotifier(this, Resource);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1F6u);
  }
  else
  {
LABEL_16:
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, v4, 0LL) )
    {
      v11 = *((_DWORD *)a3 + 4);
      if ( *((_DWORD *)this + 54) > v11 )
        v11 = *((_DWORD *)this + 54);
      *((_DWORD *)this + 54) = v11;
    }
    else
    {
      CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 4));
    }
    return 0;
  }
  return v9;
}
