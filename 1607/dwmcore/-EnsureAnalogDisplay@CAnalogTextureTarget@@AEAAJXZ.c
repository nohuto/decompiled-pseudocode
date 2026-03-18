/*
 * XREFs of ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x180166170
 * Callers:
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18016624C (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x180166B60 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x180110D50 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180110DC4 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::EnsureAnalogDisplay(CAnalogTextureTarget *this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int DisplayIdFromMonitor; // eax
  int Display; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  CDisplaySet *v11; // [rsp+50h] [rbp+18h] BYREF
  HMONITOR v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v3 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x28Cu);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(*(_QWORD *)xmmword_1801F03A0 + 96LL))(xmmword_1801F03A0, &v12);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x28Eu);
    }
    else
    {
      DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v11, v12, (struct DisplayId *)&v10);
      v3 = DisplayIdFromMonitor;
      if ( DisplayIdFromMonitor < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x290u);
      }
      else
      {
        Display = CDisplaySet::GetDisplay((__int64)v11, v10, (_QWORD *)this + 19);
        v3 = Display;
        if ( Display < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Display, 0x292u);
      }
    }
  }
  if ( v11 )
    CDisplaySet::Release(v11, v7, v8);
  return v3;
}
