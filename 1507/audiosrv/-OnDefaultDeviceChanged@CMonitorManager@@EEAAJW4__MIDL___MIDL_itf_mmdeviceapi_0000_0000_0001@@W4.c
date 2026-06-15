/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800967D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sdd @ 0x18007C238 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180094844 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  DefaultChangedContext *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  DefaultChangedContext *v11; // rdi
  DefaultChangedContext *v12; // rbx
  signed int v13; // esi
  __int64 v14; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v18; // rbx
  ATL::CAtlException *v19; // [rsp+48h] [rbp-20h] BYREF

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Sdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x18u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      a4);
  }
  if ( a2 || a3 )
    return 0LL;
  v8 = (DefaultChangedContext *)operator new(0x18uLL);
  v11 = v8;
  if ( v8 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v8);
    *((_QWORD *)v11 + 1) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v11 + 2) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v14 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_28:
    if ( (struct _GUID *)v14 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v14 + 28) & 0x800000) != 0
      && *(_BYTE *)(v14 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v14 + 16), 0x1Au, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v13);
    }
    goto LABEL_32;
  }
  v13 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((int **)v11, (char *)a4, v9, v10);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v18 = (signed int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _resetstkoflw();
    v13 = *v18;
    if ( *v18 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v11);
      v12 = v11;
LABEL_26:
      v14 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_27;
    }
    v12 = v11;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v11, 0LL);
  *((_QWORD *)v11 + 2) = ThreadpoolWork;
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
  v14 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x19u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      v13);
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
