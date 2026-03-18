/*
 * XREFs of sub_1C00DEC64 @ 0x1C00DEC64
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1C00DEC64(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !*(_DWORD *)a1 )
    {
      v3 = *(_QWORD *)(a1 + 8) - 1LL;
      if ( (v3 & 0xFFFFFFFFFFFFFFFDuLL) == 0 && *(_DWORD *)(a1 + 16) == 1 )
      {
        LODWORD(v3) = Microsoft_Windows_DxgKrnlEnableBits;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
          LODWORD(v3) = Template_q(
                          a1,
                          &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel,
                          a3,
                          *(_DWORD *)(a1 + 20));
      }
    }
  }
  return v3;
}
