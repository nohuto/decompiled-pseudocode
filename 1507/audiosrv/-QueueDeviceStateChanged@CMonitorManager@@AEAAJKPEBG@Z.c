/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800979EC
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x180096A10 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x180096DE0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x180096E50 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180093FDC (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@PEAV312@1@Z @ 0x1800964A8 (-NewNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEle.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(PVOID pv, int a2, char *a3)
{
  PVOID v5; // rsi
  CMonitorManager::DeviceStateChangedContext *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  CMonitorManager::DeviceStateChangedContext *v9; // rbx
  unsigned int v10; // edi
  struct _TP_WORK *ThreadpoolWork; // r14
  signed int LastError; // eax
  __int64 *v13; // rax
  __int64 **v14; // rcx
  unsigned int *v16; // rbx
  unsigned int *v17; // rbx
  CMonitorManager::DeviceStateChangedContext *v18; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v19[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v20; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v21; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION v22; // [rsp+48h] [rbp-30h] BYREF
  char v23; // [rsp+50h] [rbp-28h]

  v19[1] = (CMonitorManager::DeviceStateChangedContext *)-2LL;
  v5 = pv;
  v6 = (CMonitorManager::DeviceStateChangedContext *)operator new(0x18uLL);
  v9 = v6;
  if ( v6 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v6);
    *((_DWORD *)v9 + 2) = a2;
    *((_QWORD *)v9 + 2) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v18 = v9;
  v19[0] = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    goto LABEL_26;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((int **)v9, a3, v7, v8);
  }
  catch ( ATL::CAtlException *v20 )
  {
    v16 = (unsigned int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _resetstkoflw();
    v10 = *v16;
    if ( (*v16 & 0x80000000) != 0 )
    {
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v18);
      goto LABEL_26;
    }
    v5 = pv;
    v9 = v18;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  *((_QWORD *)v9 + 2) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x14u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        v10);
    }
    goto LABEL_26;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v22, (struct _RTL_CRITICAL_SECTION *)v5 + 4);
  v10 = 0;
  try
  {
    v13 = ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::NewNode(
            (__int64)v5 + 200,
            (__int64 *)v19,
            *((_QWORD *)v5 + 26));
    v14 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v14 )
      *v14 = v13;
    else
      *((_QWORD *)v5 + 25) = v13;
    *((_QWORD *)v5 + 26) = v13;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v17 = (unsigned int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _resetstkoflw();
    v10 = *v17;
    if ( (*v17 & 0x80000000) != 0 )
      goto LABEL_24;
    v5 = pv;
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_24:
  if ( v23 )
    ATL::CCritSecLock::Unlock(&v22);
LABEL_26:
  if ( v19[0] )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v19[0]);
  return v10;
}
