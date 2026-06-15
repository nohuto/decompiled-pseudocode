/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18007E1C8
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18007D140 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x18007D490 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18007D500 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18007AA2C (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@PEAV312@1@Z @ 0x18007CBF0 (-NewNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEle.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(PVOID pv, int a2, char *a3)
{
  PVOID v5; // rdi
  CMonitorManager::DeviceStateChangedContext *v6; // rax
  CMonitorManager::DeviceStateChangedContext *v7; // rbx
  unsigned int v8; // ebx
  struct _TP_WORK *ThreadpoolWork; // r14
  signed int LastError; // eax
  __int64 *v11; // rax
  __int64 **v12; // rcx
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // rbx
  CMonitorManager::DeviceStateChangedContext *v16; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v17[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v18; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v19; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION v20; // [rsp+48h] [rbp-30h] BYREF
  char v21; // [rsp+50h] [rbp-28h]
  int v23; // [rsp+98h] [rbp+20h]
  int v24; // [rsp+98h] [rbp+20h]

  v17[1] = (CMonitorManager::DeviceStateChangedContext *)-2LL;
  v5 = pv;
  v6 = (CMonitorManager::DeviceStateChangedContext *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v6);
    *((_DWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v16 = v7;
  v17[0] = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_26;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a3);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v14 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      o__resetstkoflw_0();
    v23 = *(_DWORD *)v14;
    v8 = *(_DWORD *)v14;
    if ( v23 < 0 )
    {
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v16);
      goto LABEL_26;
    }
    v5 = pv;
    v7 = v16;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  *((_QWORD *)v7 + 2) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        v8);
    }
    goto LABEL_26;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)v5 + 4);
  v8 = 0;
  try
  {
    v11 = ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::NewNode(
            (__int64)v5 + 200,
            (__int64 *)v17,
            *((_QWORD *)v5 + 26));
    v12 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v12 )
      *v12 = v11;
    else
      *((_QWORD *)v5 + 25) = v11;
    *((_QWORD *)v5 + 26) = v11;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      o__resetstkoflw_0();
    v24 = *(_DWORD *)v15;
    v8 = *(_DWORD *)v15;
    if ( v24 < 0 )
      goto LABEL_24;
    v5 = pv;
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_24:
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
LABEL_26:
  if ( v17[0] )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v17[0]);
  return v8;
}
