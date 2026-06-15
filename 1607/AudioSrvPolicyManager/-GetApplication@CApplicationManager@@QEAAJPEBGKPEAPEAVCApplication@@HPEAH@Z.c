/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180014A20 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180014ADC (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180014CA8 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015140 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180016020 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x1800163F0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180020BA0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180009EDC (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000A95C (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct CApplication **a4,
        int a5,
        int *a6)
{
  const WCHAR *v8; // r15
  int *v10; // r13
  struct CApplication *v11; // r14
  const GUID *v12; // r8
  const GUID *v13; // r9
  _QWORD *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rcx
  struct CApplication **v17; // rbx
  int v18; // r12d
  struct CApplication *v19; // rcx
  struct CApplication *v20; // rbx
  const struct _TlgProvider_t *v21; // rcx
  unsigned int v22; // ebx
  int *v24; // rbx
  UINT32 packageRelativeApplicationId; // [rsp+20h] [rbp-348h]
  int v26; // [rsp+30h] [rbp-338h] BYREF
  int v27; // [rsp+34h] [rbp-334h] BYREF
  struct CApplication *v28; // [rsp+38h] [rbp-330h] BYREF
  UINT32 v29; // [rsp+40h] [rbp-328h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+44h] [rbp-324h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+48h] [rbp-320h] BYREF
  UINT32 v32; // [rsp+4Ch] [rbp-31Ch] BYREF
  struct CApplication **v33; // [rsp+50h] [rbp-318h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-310h] BYREF
  char v35; // [rsp+60h] [rbp-308h]
  const unsigned __int16 *v36; // [rsp+68h] [rbp-300h]
  struct CApplication **v37; // [rsp+70h] [rbp-2F8h]
  int *v38; // [rsp+78h] [rbp-2F0h]
  __int64 v39; // [rsp+80h] [rbp-2E8h]
  ATL::CAtlException *v40; // [rsp+88h] [rbp-2E0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-2D8h] BYREF
  const char *v42; // [rsp+B0h] [rbp-2B8h]
  int v43; // [rsp+B8h] [rbp-2B0h]
  int v44; // [rsp+BCh] [rbp-2ACh]
  int *v45; // [rsp+C0h] [rbp-2A8h]
  int v46; // [rsp+C8h] [rbp-2A0h]
  int v47; // [rsp+CCh] [rbp-29Ch]
  int *v48; // [rsp+D0h] [rbp-298h]
  int v49; // [rsp+D8h] [rbp-290h]
  int v50; // [rsp+DCh] [rbp-28Ch]
  WCHAR packageFamilyName[72]; // [rsp+E0h] [rbp-288h] BYREF
  WCHAR String1[72]; // [rsp+170h] [rbp-1F8h] BYREF
  WCHAR v53[72]; // [rsp+200h] [rbp-168h] BYREF
  WCHAR v54[72]; // [rsp+290h] [rbp-D8h] BYREF

  v39 = -2LL;
  v33 = a4;
  v8 = a2;
  v36 = a2;
  v37 = a4;
  v10 = a6;
  v38 = a6;
  v26 = -2147023728;
  v11 = 0LL;
  v28 = 0LL;
  v27 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v35 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  memset_0(packageFamilyName, 0, 0x82uLL);
  memset_0(v54, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a4 = 0LL;
  ParseApplicationUserModelId(v8, &packageFamilyNameLength, packageFamilyName, &packageRelativeApplicationIdLength, v54);
  v14 = (_QWORD *)*((_QWORD *)this + 8);
  do
  {
    if ( !v14 )
      goto LABEL_16;
    v11 = (struct CApplication *)v14[2];
    v14 = (_QWORD *)*v14;
    v28 = v11;
    memset_0(String1, 0, 0x82uLL);
    memset_0(v53, 0, 0x84uLL);
    v29 = 65;
    v32 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v11 + 2), &v29, String1, &v32, v53);
    if ( !_wcsicmp(*((const wchar_t **)v11 + 2), v8) && *((_DWORD *)v11 + 29) == a3 )
    {
      v26 = 0;
      goto LABEL_33;
    }
  }
  while ( _wcsicmp(String1, packageFamilyName)
       || _wcsicmp(v53, L"ppleae38af2e007f4358a809ac99a64a67c1")
       && _wcsicmp(v54, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || *((_DWORD *)v11 + 29) != a3 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v8);
  }
  v26 = 0;
LABEL_16:
  if ( v26 == -2147023728 && a5 )
  {
    v26 = CApplication::CreateInstance(v8, a3, &v28);
    if ( v26 < 0 )
    {
      v18 = v27;
    }
    else
    {
      v26 = 0;
      try
      {
        v15 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
                (__int64)this + 64,
                (__int64 *)&v28,
                0LL,
                *((_QWORD *)this + 8));
        v16 = *((_QWORD *)this + 8);
        if ( v16 )
          *(_QWORD *)(v16 + 8) = v15;
        else
          *((_QWORD *)this + 9) = v15;
        *((_QWORD *)this + 8) = v15;
      }
      catch ( ATL::CAtlException *v40 )
      {
        v24 = (int *)v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          _resetstkoflw();
        v26 = *v24;
        v8 = v36;
        v17 = v37;
        v10 = v38;
        goto LABEL_25;
      }
      v17 = v33;
LABEL_25:
      v18 = v27;
      if ( v26 >= 0 )
      {
        v18 = 1;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v8);
        }
        v11 = v28;
        goto LABEL_34;
      }
    }
    v19 = v28;
    goto LABEL_35;
  }
LABEL_33:
  v17 = v33;
  v18 = v27;
LABEL_34:
  *v17 = v11;
  v19 = 0LL;
  v28 = 0LL;
LABEL_35:
  if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 2, 0xFFFFFFFF) == 1 )
  {
    v20 = v28;
    (*(void (__fastcall **)(struct CApplication *))(*(_QWORD *)v28 + 16LL))(v28);
    (*(void (__fastcall **)(struct CApplication *, __int64))(*(_QWORD *)v20 + 8LL))(v20, 1LL);
  }
  if ( v10 )
    *v10 = v18;
  if ( v26 < 0 )
  {
    v21 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v26);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v42 = "__FUNC__";
      v43 = 9;
      v44 = 0;
      v27 = 1478;
      v45 = &v27;
      v46 = 4;
      v47 = 0;
      v48 = &v26;
      v49 = 4;
      v50 = 0;
      TlgWrite(v21, &unk_18002D869, v12, v13, packageRelativeApplicationId, &pData);
    }
  }
  v22 = v26;
  if ( v35 )
    LeaveCriticalSection(lpCriticalSection);
  return v22;
}
