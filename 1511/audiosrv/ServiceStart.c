/*
 * XREFs of ServiceStart @ 0x18003DAF0
 * Callers:
 *     AudioSrvStartupThread @ 0x18003DC90 (AudioSrvStartupThread.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x18003BE10 (-ServiceStart@CAudioSrv@@UEAAXXZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x18003C450 (--0CAudioSrv@@QEAA@XZ.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18003CBA4 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ReportStatusToSCMgr @ 0x18003DC08 (ReportStatusToSCMgr.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, _QWORD *a3, __int64 a4)
{
  TraceLoggingHProvider v6; // rcx
  CAudioSrv *v7; // rax
  DWORD v8; // edx
  const unsigned __int16 **v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  void (__fastcall *v13)(CAudioSrv *); // rsi
  TraceLoggingHProvider v14; // rcx

  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_908455377377748732ca9cb03e87474b_Traceguids, *a3);
    v6 = WPP_GLOBAL_Control;
  }
  if ( !a2 )
  {
    if ( v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v6 + 28) & 0x10) != 0
      && *((_BYTE *)v6 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v6 + 2), 0x1Cu, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
    }
    ReportStatusToSCMgr(1LL, 2147500037LL, 0LL, a4);
  }
  v7 = (CAudioSrv *)operator new(0xC8uLL);
  if ( v7 )
    v7 = CAudioSrv::CAudioSrv(v7);
  g_AudioService = v7;
  if ( v7 )
  {
    v10 = MyServiceInitialization(a1, v8, v9);
    v12 = v10;
    if ( v10 )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control )
        return v12;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_17:
        if ( v14 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)v14 + 28) & 0x10) != 0
          && *((_BYTE *)v14 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v14 + 2), 0x1Fu, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
        }
        return v12;
      }
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
        v10);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
      }
      ReportStatusToSCMgr(4LL, 0LL, 0LL, v11);
      v13 = *(void (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 96LL);
      if ( v13 == CAudioSrv::ServiceStart )
        CAudioSrv::ServiceStart(g_AudioService);
      else
        v13(g_AudioService);
    }
    v14 = WPP_GLOBAL_Control;
    goto LABEL_17;
  }
  return 14LL;
}
