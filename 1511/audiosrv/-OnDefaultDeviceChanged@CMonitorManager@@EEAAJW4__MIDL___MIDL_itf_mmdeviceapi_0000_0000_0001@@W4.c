/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sdd @ 0x180077528 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180092074 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  DefaultChangedContext *v12; // rbx
  signed int v13; // esi
  TraceLoggingHProvider v14; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v18; // rbx
  ATL::CAtlException *v19; // [rsp+48h] [rbp-20h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      a4);
  }
  if ( a2 || a3 )
    return 0LL;
  v8 = (__int64 *)operator new(0x18uLL);
  v11 = v8;
  if ( v8 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v8);
    v11[1] = (__int64)this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    v11[2] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (DefaultChangedContext *)v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v14 = WPP_GLOBAL_Control;
LABEL_28:
    if ( v14 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v14 + 7) & 0x800000) != 0
      && *((_BYTE *)v14 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v14 + 2), 0x1Au, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v13);
    }
    goto LABEL_32;
  }
  v13 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v11, a4, v9, v10);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v18 = (signed int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _resetstkoflw();
    v13 = *v18;
    if ( *v18 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'((DefaultChangedContext *)v11);
      v12 = (DefaultChangedContext *)v11;
LABEL_26:
      v14 = WPP_GLOBAL_Control;
      goto LABEL_27;
    }
    v12 = (DefaultChangedContext *)v11;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v11, 0LL);
  v11[2] = (__int64)ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v12 = 0LL;
    goto LABEL_26;
  }
  LastError = GetLastError();
  v13 = LastError;
  if ( LastError > 0 )
    v13 = (unsigned __int16)LastError | 0x80070000;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v13);
    goto LABEL_26;
  }
LABEL_27:
  if ( v13 < 0 )
    goto LABEL_28;
LABEL_32:
  if ( v12 )
    DefaultChangedContext::`scalar deleting destructor'(v12);
  return (unsigned int)v13;
}
