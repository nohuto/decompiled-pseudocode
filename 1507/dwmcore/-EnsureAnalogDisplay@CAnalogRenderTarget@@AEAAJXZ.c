/*
 * XREFs of ?EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ @ 0x1801262F8
 * Callers:
 *     ?EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ @ 0x180126408 (-EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x180126FA0 (-RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18000F9E0 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18006091C (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800DEBBC (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::EnsureAnalogDisplay(struct CVisualTree **this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int DisplayIdFromMonitor; // eax
  int Display; // eax
  struct CVisualTree *v7; // r8
  int v8; // eax
  int v10; // [rsp+58h] [rbp+10h] BYREF
  CDisplaySet *v11; // [rsp+60h] [rbp+18h] BYREF
  HMONITOR v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)this, &v11);
  v3 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)qword_180195FD0 + 96LL))(qword_180195FD0, &v12);
    v3 = v4;
    if ( v4 >= 0 )
    {
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v11, v12, (struct DisplayId *)&v10);
      v3 = DisplayIdFromMonitor;
      if ( DisplayIdFromMonitor >= 0 )
      {
        Display = CDisplaySet::GetDisplay((__int64)v11, v10, this + 12);
        v3 = Display;
        if ( Display >= 0 )
        {
          v7 = this[7];
          if ( v7 )
          {
            v8 = CMonitorTreeAssociation::AddMonitorTree(
                   *((CMonitorTreeAssociation **)this[2] + 3),
                   *(HMONITOR *)(*((_QWORD *)this[12] + 19) + 32LL),
                   v7);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x400u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Display, 0x3F8u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x3F6u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3F4u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x3F2u);
  }
  if ( v11 )
    CDisplaySet::Release(v11);
  return v3;
}
