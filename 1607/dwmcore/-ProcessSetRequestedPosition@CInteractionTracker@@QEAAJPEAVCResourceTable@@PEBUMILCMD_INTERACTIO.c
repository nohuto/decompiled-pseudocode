/*
 * XREFs of ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18010B168
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18014AE58 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *a3)
{
  float v4; // xmm0_4
  float v6; // xmm0_4
  int v7; // ecx
  float v9; // [rsp+20h] [rbp-28h] BYREF
  float v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+28h] [rbp-20h]

  v4 = *((float *)a3 + 2);
  if ( v4 <= *((float *)this + 38) )
    v9 = fmaxf(v4, *((float *)this + 35));
  else
    v9 = *((float *)this + 38);
  v6 = *((float *)a3 + 3);
  if ( v6 <= *((float *)this + 39) )
    v10 = fmaxf(v6, *((float *)this + 36));
  else
    v10 = *((float *)this + 39);
  v11 = 0;
  if ( CInteractionTracker::SetRequestedPosition(this, (const struct D2DVector3 *)&v9, 0) )
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
  return 0LL;
}
