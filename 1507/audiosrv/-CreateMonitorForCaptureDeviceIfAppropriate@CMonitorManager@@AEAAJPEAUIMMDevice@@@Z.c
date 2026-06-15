/*
 * XREFs of ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094E10
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x180095418 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180095C78 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180096F30 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180040604 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??0CreateMonitorContext@@QEAA@PEAUIMMDevice@@PEAVCMonitorManager@@@Z @ 0x180094534 (--0CreateMonitorContext@@QEAA@PEAUIMMDevice@@PEAVCMonitorManager@@@Z.c)
 *     ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x1800947C4 (--_GCreateMonitorContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  unsigned int v4; // ebx
  CreateMonitorContext *v5; // rax
  CreateMonitorContext *MonitorContext; // rdi
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF
  CreateMonitorContext *v11; // [rsp+68h] [rbp+20h]

  v4 = 0;
  pv = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Cu,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
  }
  if ( CMonitor::IsCaptureMonitorEnabled(a2, (unsigned __int16 **)&pv, 0LL) )
  {
    v5 = (CreateMonitorContext *)operator new(0x18uLL);
    v11 = v5;
    if ( v5 )
      MonitorContext = CreateMonitorContext::CreateMonitorContext(v5, a2, this);
    else
      MonitorContext = 0LL;
    if ( MonitorContext )
    {
      ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::CreateMonitorIfAppropriateWorker, MonitorContext, 0LL);
      *((_QWORD *)MonitorContext + 2) = ThreadpoolWork;
      if ( ThreadpoolWork )
      {
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        else
          v4 = LastError;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x3Du,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            v4);
        }
        CreateMonitorContext::`scalar deleting destructor'(MonitorContext);
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  CoTaskMemFree(pv);
  return v4;
}
