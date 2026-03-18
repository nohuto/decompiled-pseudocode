/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18010B3DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18014AE58 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z @ 0x18014BB58 (-SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  float v4; // xmm1_4
  float v6; // xmm0_4
  int v7; // ecx

  v4 = *((float *)this + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 4);
  v6 = *((float *)a3 + 2);
  if ( v6 <= v4 )
    v4 = fmaxf(v6, *((float *)this + 45));
  if ( CInteractionTracker::SetRequestedScale(this, v4, 0) )
  {
    v7 = *((_DWORD *)a3 + 6);
    if ( *((_DWORD *)this + 54) > v7 )
      v7 = *((_DWORD *)this + 54);
    *((_DWORD *)this + 54) = v7;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 6));
  }
  return 0LL;
}
