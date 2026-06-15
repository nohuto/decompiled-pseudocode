/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x1800371D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800948B0 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_S_guid_D @ 0x1800987F4 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(CMonitorManager *this, char *a2, struct _tagpropertykey *a3)
{
  struct _tagpropertykey *v3; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  ATL::CAtlException *v10; // rbx
  __int64 *v11; // rdx
  PropertyChangedContext *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  PropertyChangedContext *v16; // rdi
  PropertyChangedContext *v17; // rbx
  signed int v18; // esi
  __int64 v19; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  __int64 v22; // [rsp+0h] [rbp-88h] BYREF
  PropertyChangedContext *v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+38h] [rbp-50h]
  PropertyChangedContext *v25; // [rsp+40h] [rbp-48h]
  ATL::CAtlException *v26[2]; // [rsp+48h] [rbp-40h] BYREF
  struct _tagpropertykey *v27; // [rsp+58h] [rbp-30h]

  v26[1] = (ATL::CAtlException *)-2LL;
  v3 = a3;
  v27 = a3;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S_guid_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)a2,
      (__int64)a3,
      a3->pid);
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + v6);
    if ( v3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&v3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&v3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)v3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
        break;
    }
    v6 += 16LL;
    if ( v6 >= 0x50 )
      return 0LL;
  }
  v12 = (PropertyChangedContext *)operator new(0x30uLL);
  v16 = v12;
  v23 = v12;
  if ( v12 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v12);
    *((_QWORD *)v16 + 4) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v16 + 5) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v25 = v16;
  v17 = v16;
  v23 = v16;
  if ( !v16 )
  {
    v18 = -2147024882;
    v19 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_33:
    if ( (struct _GUID *)v19 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v19 + 28) & 0x800000) != 0
      && *(_BYTE *)(v19 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v19 + 16), 0x22u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v18);
    }
    goto LABEL_37;
  }
  v18 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((int **)v16, a2, v14, v15);
  }
  catch ( ATL::CAtlException *v26 )
  {
    v11 = &v22;
    v10 = v26[0];
    if ( *(_DWORD *)v26[0] == -1073741571 )
      _resetstkoflw();
    v24 = *(_DWORD *)v10;
    v18 = v24;
    if ( v24 < 0 )
    {
      PropertyChangedContext::`scalar deleting destructor'(v25, (unsigned int)v11);
      v17 = v23;
LABEL_31:
      v19 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_32;
    }
    v17 = v23;
    v16 = v25;
    v3 = v27;
  }
  *(GUID *)((char *)v16 + 8) = v3->fmtid;
  *((_DWORD *)v16 + 6) = v3->pid;
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandlePropertyValueChanged, v16, 0LL);
  *((_QWORD *)v16 + 5) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v17 = 0LL;
    goto LABEL_31;
  }
  LastError = GetLastError();
  v18 = LastError;
  if ( LastError > 0 )
    v18 = (unsigned __int16)LastError | 0x80070000;
  v19 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x21u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      v18);
    goto LABEL_31;
  }
LABEL_32:
  if ( v18 < 0 )
    goto LABEL_33;
LABEL_37:
  if ( v17 )
    PropertyChangedContext::`scalar deleting destructor'(v17, v13);
  return (unsigned int)v18;
}
