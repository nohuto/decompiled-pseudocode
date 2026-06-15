/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800168F8
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x180018500 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800168B8 (WPP_SF_q.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180016BD8 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180016CB4 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180017888 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(__int64 a1, unsigned int a2, int a3, void **a4)
{
  void **v4; // r15
  unsigned int v5; // esi
  unsigned int v6; // r13d
  __int64 v7; // r12
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *i; // rax
  BOOL v11; // esi
  bool v12; // zf
  HANDLE ProcessHeap; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v18; // edi
  const struct _TlgProvider_t *v19; // rcx
  ATL::CAtlException *v21; // rbx
  UINT32 *v22; // rdx
  UINT32 v23[10]; // [rsp+0h] [rbp-128h] BYREF
  int v24; // [rsp+30h] [rbp-F8h] BYREF
  int v25; // [rsp+38h] [rbp-F0h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-D8h] BYREF
  char v29; // [rsp+58h] [rbp-D0h]
  LPCRITICAL_SECTION v30; // [rsp+60h] [rbp-C8h] BYREF
  char v31; // [rsp+68h] [rbp-C0h]
  __int64 v32; // [rsp+70h] [rbp-B8h]
  void **v33; // [rsp+78h] [rbp-B0h]
  __int64 v34; // [rsp+80h] [rbp-A8h]
  ATL::CAtlException *v35; // [rsp+88h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-98h] BYREF
  const char *v37; // [rsp+B0h] [rbp-78h]
  __int64 v38; // [rsp+B8h] [rbp-70h]
  int *v39; // [rsp+C0h] [rbp-68h]
  __int64 v40; // [rsp+C8h] [rbp-60h]
  int *v41; // [rsp+D0h] [rbp-58h]
  __int64 v42; // [rsp+D8h] [rbp-50h]

  v34 = -2LL;
  v4 = a4;
  v5 = a3;
  LODWORD(v26) = a3;
  v6 = a2;
  v7 = a1;
  v32 = a1;
  v27 = a2;
  v25 = a3;
  v33 = a4;
  v24 = -2147418113;
  v30 = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v31 = 0;
  ATL::CCritSecLock::Lock(&v30);
  v8 = *v4;
  if ( *v4 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
    v29 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = (_QWORD *)PickerHostContextManager::s_PickerHostContextList; i; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)i[2] == v8 )
        goto LABEL_7;
    }
    i = 0LL;
LABEL_7:
    v11 = i != 0LL;
    if ( !i
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v8);
    }
    if ( v29 )
      LeaveCriticalSection(lpCriticalSection);
    v12 = !v11;
    v5 = (unsigned int)v26;
    if ( !v12 )
      goto LABEL_25;
  }
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v8 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x30uLL);
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *((_DWORD *)v8 + 10) = 10;
    v26 = v8;
  }
  else
  {
    v8 = 0LL;
    v26 = 0LL;
  }
  if ( v8 )
  {
    v24 = 0;
    try
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v15, &v26);
    }
    catch ( ATL::CAtlException *v35 )
    {
      v22 = v23;
      v21 = v35;
      if ( *(_DWORD *)v35 == -1073741571 )
        _resetstkoflw();
      v24 = *(_DWORD *)v21;
      v8 = v26;
      v7 = v32;
      v6 = v27;
      v5 = v25;
      v4 = v33;
    }
    if ( v24 < 0 )
    {
      CPickerHostContext::`scalar deleting destructor'((CPickerHostContext *)v8, (unsigned int)v22);
      v18 = v24;
      goto LABEL_26;
    }
    *v4 = v8;
LABEL_25:
    v18 = CPickerHostContext::AddHostedAppInteractivityNotification(v8, v7, v6, v5);
    v24 = v18;
LABEL_26:
    if ( v18 >= 0 )
      goto LABEL_33;
    goto LABEL_27;
  }
  v18 = -2147024882;
  v24 = -2147024882;
LABEL_27:
  v19 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v18);
    v18 = v24;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v37 = "__FUNC__";
    v38 = 9LL;
    v25 = 84;
    v39 = &v25;
    v40 = 4LL;
    v41 = &v24;
    v42 = 4LL;
    TlgWrite(v19, &unk_18002D869, v16, v17, v23[8], &pData);
    v18 = v24;
  }
LABEL_33:
  if ( v31 )
    LeaveCriticalSection(v30);
  return (unsigned int)v18;
}
