/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18007DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800043E4 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18007B1A4 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_S_guid_D @ 0x18007EF18 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(CMonitorManager *this, char *a2, struct _tagpropertykey *a3)
{
  struct _tagpropertykey *v3; // r14
  unsigned __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  PropertyChangedContext *v11; // rbx
  signed int v12; // esi
  CAudioSession *v13; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v16; // rbx
  ATL::CAtlException *v17; // [rsp+50h] [rbp-38h] BYREF
  struct _tagpropertykey *v18; // [rsp+58h] [rbp-30h]

  v3 = a3;
  v18 = a3;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
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
  v10 = v9;
  if ( v9 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v9);
    v10[4] = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    v10[5] = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (PropertyChangedContext *)v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = WPP_GLOBAL_Control;
LABEL_30:
    if ( v13 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x800000) != 0
      && *((_BYTE *)v13 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v13 + 2), 0x22u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v12);
    }
    goto LABEL_34;
  }
  v12 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v10, a2);
  }
  catch ( ATL::CAtlException *v17 )
  {
    v16 = (signed int *)v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      o__resetstkoflw_0();
    v12 = *v16;
    if ( *v16 < 0 )
    {
      PropertyChangedContext::`scalar deleting destructor'((PropertyChangedContext *)v10);
      v11 = (PropertyChangedContext *)v10;
LABEL_28:
      v13 = WPP_GLOBAL_Control;
      goto LABEL_29;
    }
    v11 = (PropertyChangedContext *)v10;
    v3 = v18;
  }
  *(GUID *)(v10 + 1) = v3->fmtid;
  *((_DWORD *)v10 + 6) = v3->pid;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandlePropertyValueChanged, v10, 0LL);
  v10[5] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
    goto LABEL_28;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v12);
    goto LABEL_28;
  }
LABEL_29:
  if ( v12 < 0 )
    goto LABEL_30;
LABEL_34:
  if ( v11 )
    PropertyChangedContext::`scalar deleting destructor'(v11);
  return (unsigned int)v12;
}
