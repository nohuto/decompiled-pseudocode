/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x180093980
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x180092340 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x180077B6C (WPP_SF_qqq.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800919C0 (--0CMonitor@@QEAA@XZ.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x18009230C (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180096C4C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(char *pv, struct IMMDevice *a2, struct IMMDevice *a3)
{
  struct IMMDevice *v3; // r12
  struct IMMDevice *v4; // r13
  char *v5; // rsi
  CMonitor *v6; // rax
  CMonitor *v7; // r15
  __int64 v8; // rdi
  int v9; // r15d
  TraceLoggingHProvider v10; // rcx
  struct _SECURITY_ATTRIBUTES *v11; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  unsigned int v13; // r9d
  int v14; // eax
  char v15; // di
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // [rsp+38h] [rbp-40h] BYREF
  char *v19; // [rsp+80h] [rbp+8h] BYREF
  struct IMMDevice *v20; // [rsp+88h] [rbp+10h]
  struct IMMDevice *v21; // [rsp+90h] [rbp+18h]
  CMonitor *v22; // [rsp+98h] [rbp+20h]

  v21 = a3;
  v20 = a2;
  v19 = pv;
  v3 = a3;
  v4 = a2;
  v5 = pv;
  v6 = (CMonitor *)operator new(0x1F8uLL);
  v22 = v6;
  if ( v6 )
    v7 = CMonitor::CMonitor(v6);
  else
    v7 = 0LL;
  v8 = *((_QWORD *)v5 + 8);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)v5 + 8));
  *((_QWORD *)v5 + 8) = v7;
  if ( v7 )
  {
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v3->lpVtbl->Activate)(
           v3,
           &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
           1LL);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v5 + 5) + 24LL))(*((_QWORD *)v5 + 5), v5);
      if ( v9 >= 0 )
      {
        v5[48] = 1;
        try
        {
          ATL::CEvent::Create((ATL::CEvent *)(v5 + 32), v11);
        }
        catch ( ATL::CAtlException *v18 )
        {
          v17 = v18;
          if ( *(_DWORD *)v18 == -1073741571 )
            _resetstkoflw();
          LODWORD(v22) = *(_DWORD *)v17;
          v9 = (int)v22;
          v5 = v19;
          if ( (int)v22 < 0 )
            goto LABEL_37;
          v3 = v21;
          v4 = v20;
        }
        ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v5, 0LL);
        *((_QWORD *)v5 + 2) = ThreadpoolWait;
        if ( ThreadpoolWait )
        {
          SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)v5 + 4), 0LL);
          *(_QWORD *)(*((_QWORD *)v5 + 8) + 264LL) = *((_QWORD *)v5 + 4);
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x51u,
              (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
              v5,
              *((_QWORD *)v5 + 8));
          }
          v14 = CMonitor::Initialize(*((CMonitor **)v5 + 8), v4, v3, v13, (bool *)&v19);
          v9 = v14;
          if ( v14 >= 0 )
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qqq(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x53u,
                (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
                v5,
                v5,
                *((_QWORD *)v5 + 8),
                -2LL);
            }
            *(_QWORD *)(*((_QWORD *)v5 + 7) + 304LL) = 0LL;
            *((_DWORD *)v5 + 6) = 0;
            v10 = WPP_GLOBAL_Control;
          }
          else
          {
            v10 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
            {
              v15 = (char)v19;
            }
            else
            {
              v15 = (char)v19;
              WPP_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x52u,
                (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
                v14);
              v10 = WPP_GLOBAL_Control;
            }
            if ( !v15 )
              return 1;
          }
          if ( v9 >= 0 )
            return (unsigned int)v9;
          goto LABEL_38;
        }
        v9 = -2147024882;
      }
    }
LABEL_37:
    v10 = WPP_GLOBAL_Control;
    goto LABEL_38;
  }
  v9 = -2147024882;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
LABEL_38:
      if ( v10 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v10 + 7) & 0x800000) != 0
        && *((_BYTE *)v10 + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)v10 + 2), 0x54u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v9);
      }
      goto LABEL_42;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x50u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
    goto LABEL_37;
  }
LABEL_42:
  if ( v5[48] )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v5 + 5) + 32LL))(*((_QWORD *)v5 + 5), v5);
    v5[48] = 0;
  }
  return (unsigned int)v9;
}
