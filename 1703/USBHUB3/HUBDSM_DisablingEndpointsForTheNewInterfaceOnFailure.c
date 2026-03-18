/*
 * XREFs of HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C001D130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001F250 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax
  int v6; // ecx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 80);
  if ( v2 )
  {
    if ( *(_DWORD *)(v1 + 96) )
    {
      *(_DWORD *)(v1 + 112) = 0;
      v4 = 0;
      *(_DWORD *)(v1 + 144) = 0;
      for ( *(_DWORD *)(v1 + 128) = 0; v4 < *(_DWORD *)(v2 + 24); ++v4 )
      {
        v5 = (unsigned __int64)v4 << 6;
        v6 = *(_DWORD *)(v5 + v2 + 48);
        if ( v6 == 4 )
        {
          *(_DWORD *)(v5 + v2 + 48) = 5;
          *(_QWORD *)(*(_QWORD *)(v1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 128))++) = *(_QWORD *)(v5 + v2 + 40);
        }
        else if ( v6 == 6 )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 144))++) = *(_QWORD *)(v5 + v2 + 40);
        }
      }
      if ( *(_DWORD *)(v1 + 128) )
      {
        HUBUCX_EnableDisableEndpointsUsingUCXIoctl(v1);
        return 1000LL;
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        4u,
        5u,
        0x35u,
        (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids);
    }
  }
  HUBSM_AddEvent(v1 + 488, 4028);
  return 1000LL;
}
