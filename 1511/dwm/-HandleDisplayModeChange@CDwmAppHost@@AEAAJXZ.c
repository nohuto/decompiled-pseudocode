/*
 * XREFs of ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012B0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001300 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qqq @ 0x140004A30 (Template_qqq.c)
 */

__int64 __fastcall CDwmAppHost::HandleDisplayModeChange(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  void *v2; // r8
  __int64 result; // rax
  unsigned int v4; // ebx
  HDC DC; // rbx
  int DeviceCaps; // edi
  unsigned int SystemMetrics; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx

  HIBYTE(word_14000A890) = 1;
  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_UdwmHandle, &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v8 = GetSystemMetrics(0);
      Template_qqq(v10, v9, v8, SystemMetrics, DeviceCaps);
    }
  }
  result = CDwmAppHost::LpcNotifySettingsChange(v1, 0x21u, v2);
  v4 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x1FAu);
    result = v4;
  }
  HIBYTE(word_14000A890) = 0;
  return result;
}
