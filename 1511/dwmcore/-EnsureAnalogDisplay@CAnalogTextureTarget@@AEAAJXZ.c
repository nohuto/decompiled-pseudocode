/*
 * XREFs of ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4
 * Callers:
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18013C0F8 (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18001D708 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B2854 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800FBFE8 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayMonitor@CAnalogCompositorClient@@QEAAJPEAPEAUHMONITOR__@@@Z @ 0x18013C214 (-GetDisplayMonitor@CAnalogCompositorClient@@QEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::EnsureAnalogDisplay(struct CVisualTree **this)
{
  int CurrentDisplaySet; // eax
  CAnalogCompositorClient *v3; // rcx
  unsigned int v4; // ebx
  int DisplayMonitor; // eax
  int DisplayIdFromMonitor; // eax
  int Display; // eax
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  CDisplaySet *v10; // [rsp+60h] [rbp+18h] BYREF
  HMONITOR v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)this, &v10);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    DisplayMonitor = CAnalogCompositorClient::GetDisplayMonitor(v3, &v11);
    v4 = DisplayMonitor;
    if ( DisplayMonitor >= 0 )
    {
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v10, v11, (struct DisplayId *)&v9);
      v4 = DisplayIdFromMonitor;
      if ( DisplayIdFromMonitor >= 0 )
      {
        Display = CDisplaySet::GetDisplay((__int64)v10, v9, this + 10);
        v4 = Display;
        if ( Display >= 0 )
        {
          if ( this[7] )
          {
            CReadWriteLock::EnterWrite((RTL_SRWLOCK *)this[2] + 71);
            v4 = CMonitorTreeAssociation::AddMonitorTree(
                   *((CMonitorTreeAssociation **)this[2] + 3),
                   *(HMONITOR *)(*((_QWORD *)this[10] + 17) + 24LL),
                   this[7]);
            CReadWriteLock::Leave((struct CVisualTree *)((char *)this[2] + 568));
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Display, 0x29Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x29Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayMonitor, 0x299u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x297u);
  }
  if ( v10 )
    CDisplaySet::Release(v10);
  return v4;
}
