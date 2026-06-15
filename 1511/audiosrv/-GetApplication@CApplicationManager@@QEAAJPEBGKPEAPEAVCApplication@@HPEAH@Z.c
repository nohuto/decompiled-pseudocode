/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180003A60 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180003E3C (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180003FA0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x1800044A0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x18001D6CC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E6C0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180031518 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180038FA4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
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
  const WCHAR *v7; // r13
  int *v9; // r12
  int v10; // esi
  int v11; // ebx
  CRefCountedObject *v12; // rdi
  _QWORD *v13; // r14
  struct CApplication **v14; // r15
  __int64 result; // rax
  __int64 v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct ATL::CAtlPlex *v20; // r8
  int v21; // edx
  _QWORD *v22; // rcx
  int i; // edx
  UINT32 *v24; // rbx
  CRefCountedObject *v26; // [rsp+38h] [rbp-2F0h] BYREF
  UINT32 v27[2]; // [rsp+40h] [rbp-2E8h] BYREF
  struct CApplication **v28; // [rsp+48h] [rbp-2E0h]
  UINT32 v29; // [rsp+50h] [rbp-2D8h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-2D4h] BYREF
  int v31; // [rsp+58h] [rbp-2D0h]
  UINT32 packageFamilyNameLength; // [rsp+5Ch] [rbp-2CCh] BYREF
  int *v33; // [rsp+60h] [rbp-2C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-2C0h] BYREF
  char v35; // [rsp+70h] [rbp-2B8h]
  const unsigned __int16 *v36; // [rsp+78h] [rbp-2B0h]
  struct CApplication **v37; // [rsp+80h] [rbp-2A8h]
  ATL::CAtlException *v38[3]; // [rsp+88h] [rbp-2A0h] BYREF
  WCHAR packageFamilyName[2]; // [rsp+A0h] [rbp-288h] BYREF
  _BYTE v40[140]; // [rsp+A4h] [rbp-284h] BYREF
  WCHAR v41[2]; // [rsp+130h] [rbp-1F8h] BYREF
  _BYTE v42[140]; // [rsp+134h] [rbp-1F4h] BYREF
  WCHAR String1[2]; // [rsp+1C0h] [rbp-168h] BYREF
  _BYTE v44[140]; // [rsp+1C4h] [rbp-164h] BYREF
  WCHAR packageRelativeApplicationId[2]; // [rsp+250h] [rbp-D8h] BYREF
  _BYTE v46[140]; // [rsp+254h] [rbp-D4h] BYREF

  v38[1] = (ATL::CAtlException *)-2LL;
  v28 = a4;
  v7 = a2;
  v36 = a2;
  v37 = a4;
  v9 = a6;
  v33 = a6;
  v10 = -2147023728;
  v11 = 0;
  v12 = 0LL;
  v26 = 0LL;
  v31 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v35 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *(_DWORD *)packageFamilyName = 0;
  memset_0(v40, 0, 0x7EuLL);
  *(_DWORD *)packageRelativeApplicationId = 0;
  memset_0(v46, 0, 0x80uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a4 = 0LL;
  ParseApplicationUserModelId(
    v7,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v13 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v13 )
  {
    while ( 1 )
    {
      v12 = (CRefCountedObject *)v13[2];
      v13 = (_QWORD *)*v13;
      v26 = v12;
      *(_DWORD *)String1 = 0;
      memset_0(v44, 0, 0x7EuLL);
      *(_DWORD *)v41 = 0;
      memset_0(v42, 0, 0x80uLL);
      v27[0] = 65;
      v29 = 66;
      ParseApplicationUserModelId(*((PCWSTR *)v12 + 2), v27, String1, &v29, v41);
      if ( !_wcsicmp(*((const wchar_t **)v12 + 2), v7) && *((_DWORD *)v12 + 29) == a3 )
      {
        v10 = 0;
        goto LABEL_5;
      }
      if ( !_wcsicmp(String1, packageFamilyName)
        && !_wcsicmp(v41, L"ppleae38af2e007f4358a809ac99a64a67c1")
        && *((_DWORD *)v12 + 29) == a3 )
      {
        break;
      }
      if ( !v13 )
        goto LABEL_15;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v7);
    }
    v10 = 0;
    goto LABEL_5;
  }
LABEL_15:
  if ( !a5 )
  {
LABEL_5:
    v14 = v28;
LABEL_6:
    *v14 = v12;
    goto LABEL_7;
  }
  v10 = CApplication::CreateInstance(v7, a3, &v26);
  if ( v10 < 0 )
    goto LABEL_50;
  v10 = 0;
  try
  {
    v16 = *((_QWORD *)this + 8);
    if ( !*((_QWORD *)this + 12) )
    {
      v20 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
      if ( !v20 )
        ATL::AtlThrowImpl(-2147024882);
      v21 = *((_DWORD *)this + 26);
      v22 = (_QWORD *)((char *)v20 + 16 * (v21 - 1) + 8 * (unsigned int)(v21 - 1) + 8);
      for ( i = v21 - 1; i >= 0; --i )
      {
        *v22 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v22;
        v22 -= 3;
      }
    }
    v17 = (__int64 *)*((_QWORD *)this + 12);
    *(_QWORD *)v27 = v17;
    v18 = *v17;
    v12 = v26;
    if ( v17 )
      v17[2] = (__int64)v26;
    *((_QWORD *)this + 12) = v18;
    v17[1] = 0LL;
    *v17 = v16;
    ++*((_QWORD *)this + 10);
    v19 = *((_QWORD *)this + 8);
    if ( v19 )
      *(_QWORD *)(v19 + 8) = v17;
    else
      *((_QWORD *)this + 9) = v17;
    *((_QWORD *)this + 8) = v17;
  }
  catch ( ATL::CAtlException *v38 )
  {
    v24 = (UINT32 *)v38[0];
    if ( *(_DWORD *)v38[0] == -1073741571 )
      _resetstkoflw();
    v27[0] = *v24;
    v10 = v27[0];
    v9 = v33;
    if ( (v27[0] & 0x80000000) == 0 )
    {
      v12 = v26;
      v7 = v36;
      v14 = v37;
      goto LABEL_25;
    }
    v11 = v31;
LABEL_50:
    if ( v26 )
      CRefCountedObject::Release(v26);
LABEL_7:
    if ( v9 )
      *v9 = v11;
    if ( v10 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        (unsigned int)v10);
    }
    if ( v35 )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v10;
  }
  v14 = v28;
LABEL_25:
  v11 = 1;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v7);
  }
  goto LABEL_6;
}
