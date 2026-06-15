/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180094E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18007148C (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800920E0 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_S_guid_D @ 0x1800962B4 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(
        CMonitorManager *this,
        unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  struct _tagpropertykey *v3; // r14
  unsigned __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  PropertyChangedContext *v13; // rbx
  signed int v14; // esi
  TraceLoggingHProvider v15; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v18; // rbx
  ATL::CAtlException *v19[2]; // [rsp+48h] [rbp-40h] BYREF
  struct _tagpropertykey *v20; // [rsp+58h] [rbp-30h]

  v19[1] = (ATL::CAtlException *)-2LL;
  v3 = a3;
  v20 = a3;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  v6 = 0LL;
  while ( 1 )
  {
    result = operator==((__int64)v3, *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + v6));
    if ( (_DWORD)result )
      break;
    v6 = v8 + 16;
    if ( v6 >= 0x50 )
      return result;
  }
  v9 = operator new(0x30uLL);
  v12 = v9;
  if ( v9 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v9);
    v12[4] = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    v12[5] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (PropertyChangedContext *)v12;
  if ( !v12 )
  {
    v14 = -2147024882;
    v15 = WPP_GLOBAL_Control;
LABEL_30:
    if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v15 + 7) & 0x800000) != 0
      && *((_BYTE *)v15 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v15 + 2), 0x22u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v14);
    }
    goto LABEL_34;
  }
  v14 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v12, a2, v10, v11);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v18 = (signed int *)v19[0];
    if ( *(_DWORD *)v19[0] == -1073741571 )
      _resetstkoflw();
    v14 = *v18;
    if ( *v18 < 0 )
    {
      PropertyChangedContext::`scalar deleting destructor'((PropertyChangedContext *)v12);
      v13 = (PropertyChangedContext *)v12;
LABEL_28:
      v15 = WPP_GLOBAL_Control;
      goto LABEL_29;
    }
    v13 = (PropertyChangedContext *)v12;
    v3 = v20;
  }
  *(GUID *)(v12 + 1) = v3->fmtid;
  *((_DWORD *)v12 + 6) = v3->pid;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandlePropertyValueChanged, v12, 0LL);
  v12[5] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v13 = 0LL;
    goto LABEL_28;
  }
  LastError = GetLastError();
  v14 = LastError;
  if ( LastError > 0 )
    v14 = (unsigned __int16)LastError | 0x80070000;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v14);
    goto LABEL_28;
  }
LABEL_29:
  if ( v14 < 0 )
    goto LABEL_30;
LABEL_34:
  if ( v13 )
    PropertyChangedContext::`scalar deleting destructor'(v13);
  return (unsigned int)v14;
}
