/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18007CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_Sdd @ 0x18005FB38 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x18007B150 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  DefaultChangedContext *v8; // rax
  DefaultChangedContext *v9; // rdi
  DefaultChangedContext *v10; // rbx
  signed int v11; // esi
  CAudioSession *v12; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v16; // rbx
  ATL::CAtlException *v17; // [rsp+48h] [rbp-20h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
      a4,
      a2,
      a3);
  }
  if ( a2 || a3 )
    return 0LL;
  v8 = (DefaultChangedContext *)operator new(0x18uLL);
  v9 = v8;
  if ( v8 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v8);
    *((_QWORD *)v9 + 1) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v9 + 2) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = WPP_GLOBAL_Control;
LABEL_28:
    if ( v12 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x800000) != 0
      && *((_BYTE *)v12 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v12 + 2), 0x1Au, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v11);
    }
    goto LABEL_32;
  }
  v11 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v9, (char *)a4);
  }
  catch ( ATL::CAtlException *v17 )
  {
    v16 = (signed int *)v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      o__resetstkoflw_0();
    v11 = *v16;
    if ( *v16 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v9);
      v10 = v9;
LABEL_26:
      v12 = WPP_GLOBAL_Control;
      goto LABEL_27;
    }
    v10 = v9;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v9, 0LL);
  *((_QWORD *)v9 + 2) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v10 = 0LL;
    goto LABEL_26;
  }
  LastError = GetLastError();
  v11 = LastError;
  if ( LastError > 0 )
    v11 = (unsigned __int16)LastError | 0x80070000;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v11);
    goto LABEL_26;
  }
LABEL_27:
  if ( v11 < 0 )
    goto LABEL_28;
LABEL_32:
  if ( v10 )
    DefaultChangedContext::`scalar deleting destructor'(v10);
  return (unsigned int)v11;
}
