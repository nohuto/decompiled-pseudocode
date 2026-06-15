/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180097FA4
 * Callers:
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x180096680 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     Template_qzz @ 0x180098720 (Template_qzz.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180099364 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18009BF40 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18009C9C0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // esi
  struct IMMDevice *v3; // rbx
  unsigned int v4; // r9d
  int v5; // eax
  int v6; // edx
  unsigned int Data1; // ecx
  unsigned int v8; // r8d
  bool *v10; // [rsp+20h] [rbp-20h]
  bool v11; // [rsp+70h] [rbp+30h] BYREF
  struct IMMDevice *v12; // [rsp+78h] [rbp+38h] BYREF
  struct IMMDevice *v13; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 56LL) == 3 || *((_BYTE *)this + 12) )
    return (unsigned int)v2;
  v13 = 0LL;
  v12 = 0LL;
  SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x37u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      *((const wchar_t **)this + 9),
      *((_WORD **)this + 10));
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 7) + 64LL)
                                                                      + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 7) + 64LL),
         *((_QWORD *)this + 9),
         &v13);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 7) + 64LL)
                                                                        + 40LL))(
           *(_QWORD *)(*((_QWORD *)this + 7) + 64LL),
           *((_QWORD *)this + 10),
           &v12);
    if ( v2 >= 0 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x38u,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          this);
      }
      v5 = CMonitor::Initialize(*((CMonitor **)this + 8), v13, v12, v4, &v11);
      v2 = v5;
      if ( v5 < 0 )
      {
        Data1 = WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          LODWORD(v10) = v5;
          WPP_SF_qD(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x3Au,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            this,
            v10);
        }
        v8 = ++*((_DWORD *)this + 6);
        if ( v8 > *(_DWORD *)(*((_QWORD *)this + 7) + 328LL) )
        {
          *((_BYTE *)this + 12) = 1;
          if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
            Template_qzz(Data1, v6, v8, *((_QWORD *)this + 9), *((_QWORD *)this + 10));
        }
        CMonitor::Terminate(*((CMonitor **)this + 8), 1, 0LL);
        v2 = 0;
      }
      else
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x39u,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            this);
        }
        *(_QWORD *)(*((_QWORD *)this + 7) + 304LL) = 0LL;
        *((_DWORD *)this + 6) = 0;
        CMonitor::Start(*((CMonitor **)this + 8));
      }
    }
    v3 = v12;
    if ( !v12 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v3 = v12;
  if ( v12 )
LABEL_30:
    ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->Release)(v3);
LABEL_31:
  if ( v13 )
    ((void (__fastcall *)(struct IMMDevice *))v13->lpVtbl->Release)(v13);
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Bu,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
