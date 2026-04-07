/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000F320
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000B8FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BE10 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F944 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18000FB00 (-Initialize@CStoryboard@@MEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000FCE4 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     Template_qd @ 0x180097784 (Template_qd.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(unsigned __int64 this, __int64 a2)
{
  int v3; // ecx
  __int128 v4; // xmm0
  __int64 v5; // rax
  struct MIL_CHANNEL__ *v6; // r8
  _BYTE v7[20]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+34h] [rbp-1Ch]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qd(this, a2, *(unsigned int *)(this + 24), *(unsigned int *)(this + 28));
  if ( *(_DWORD *)(this + 28) != -1 )
  {
    v3 = *(_DWORD *)(this + 24);
    if ( (unsigned int)(v3 - 3) <= 1 )
    {
      v4 = *(_OWORD *)(this + 32);
      *(_OWORD *)v7 = v4;
      v5 = v4;
      if ( !(_QWORD)v4 )
        v5 = *(_QWORD *)&v7[8];
      if ( v5 )
      {
        *(_DWORD *)v7 = 13;
        v8 = this | 0xD100000000000000uLL;
        v6 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
        *(_OWORD *)&v7[4] = v4;
        if ( v3 != 3 )
          *(_DWORD *)v7 = 14;
        MilResource_SendCommand(v7, 0x1Cu, v6);
      }
    }
  }
}
