/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800691AC
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x180068540 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x180068560 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x180068580 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x1800678A0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDuckWorkItem@@PEAV312@1@Z @ 0x180068490 (-NewNode@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAV.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, _WORD *a2, int a3, int a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  int v11; // esi
  __int64 *v12; // rax
  __int64 **v13; // rcx
  __int64 v14; // r14
  TraceLoggingHProvider v15; // rcx
  ATL::CAtlException *v17; // rbx
  __int64 v18[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v19; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+70h] [rbp+18h]

  v18[1] = -2LL;
  v7 = a1;
  if ( a3 == 1 )
  {
    v8 = operator new(0x20uLL);
    v9 = v8;
    v18[0] = (__int64)v8;
    if ( v8 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v8, a2, 1);
      *v9 = &COnDeviceWorkItem::`vftable';
      *((_DWORD *)v9 + 6) = a4;
    }
    else
    {
      v9 = 0LL;
    }
  }
  else
  {
    v10 = operator new(0x18uLL);
    v18[0] = (__int64)v10;
    if ( v10 )
      v9 = COnDeviceWorkItem::COnDeviceWorkItem(v10, a2, a3);
    else
      v9 = 0LL;
  }
  v18[0] = (__int64)v9;
  if ( !v9 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v9[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
LABEL_22:
    v11 = -2147024882;
    goto LABEL_23;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  v11 = 0;
  try
  {
    v12 = ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::NewNode(
            v7 + 144,
            v18,
            *(_QWORD *)(v7 + 152));
    v13 = *(__int64 ***)(v7 + 152);
    if ( v13 )
      *v13 = v12;
    else
      *(_QWORD *)(v7 + 144) = v12;
    *(_QWORD *)(v7 + 152) = v12;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v17 = v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _resetstkoflw();
    v21 = *(_DWORD *)v17;
    v7 = a1;
    v11 = v21;
    v9 = (_QWORD *)v18[0];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  v14 = *(_QWORD *)(v7 + 192);
  if ( v14 )
  {
    (*(void (__fastcall **)(CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 72LL))(ThreadPool, v14);
LABEL_23:
    v15 = WPP_GLOBAL_Control;
    goto LABEL_24;
  }
  (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v11);
    goto LABEL_23;
  }
LABEL_24:
  if ( v11 < 0
    && v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v15 + 28) & 0x40) != 0
    && *((_BYTE *)v15 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v15 + 2), 0x35u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v11);
  }
  return (unsigned int)v11;
}
