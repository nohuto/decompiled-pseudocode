/*
 * XREFs of ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18010AF70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector3@@@Z @ 0x180149E90 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector3@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18014AE58 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyScaleImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *a3)
{
  int v5; // xmm1_4
  float v6; // xmm1_4
  int v7; // ecx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 616) = 1;
  v5 = *((_DWORD *)a3 + 4);
  v9[0] = *((_DWORD *)a3 + 3);
  v9[1] = v5;
  v6 = *((float *)a3 + 2);
  v9[2] = 0;
  if ( CInteractionTracker::ApplyScaleImpulse(this, v6, (const struct D2DVector3 *)v9) )
  {
    v7 = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)this + 54) > v7 )
      v7 = *((_DWORD *)this + 54);
    *((_DWORD *)this + 54) = v7;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 5));
  }
  *((_BYTE *)this + 616) = 0;
  return 0LL;
}
