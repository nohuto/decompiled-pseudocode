/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180002674 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180002700 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180002AD0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x18001B4EC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     ?UpdateHostedApplicationState@CApplicationManager@@QEAAJPEBGKHPEAPEAVCApplication@@PEAH@Z @ 0x18001C660 (-UpdateHostedApplicationState@CApplicationManager@@QEAAJPEBGKHPEAPEAVCApplication@@PEAH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180007234 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180031898 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
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
  const WCHAR *v8; // r13
  int v10; // esi
  int v11; // r14d
  CRefCountedObject *v12; // rdi
  _QWORD *v13; // r12
  char *v14; // rax
  signed __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  WCHAR *v18; // rax
  int v19; // ecx
  int v20; // edx
  __int64 v21; // r15
  struct ATL::CAtlPlex *v22; // r8
  int v23; // edx
  _QWORD *v24; // rcx
  int i; // edx
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int *v29; // r15
  struct CApplication **v30; // r12
  __int64 result; // rax
  UINT32 *v32; // rbx
  CRefCountedObject *v33; // [rsp+30h] [rbp-2F8h] BYREF
  UINT32 v34[2]; // [rsp+38h] [rbp-2F0h] BYREF
  int *v35; // [rsp+40h] [rbp-2E8h]
  struct CApplication **v36; // [rsp+48h] [rbp-2E0h]
  int v37; // [rsp+50h] [rbp-2D8h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-2D4h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+58h] [rbp-2D0h] BYREF
  UINT32 v40; // [rsp+5Ch] [rbp-2CCh] BYREF
  int *v41; // [rsp+60h] [rbp-2C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-2C0h] BYREF
  char v43; // [rsp+70h] [rbp-2B8h]
  const unsigned __int16 *v44; // [rsp+78h] [rbp-2B0h]
  struct CApplication **v45; // [rsp+80h] [rbp-2A8h]
  ATL::CAtlException *v46[3]; // [rsp+88h] [rbp-2A0h] BYREF
  WCHAR v47[2]; // [rsp+A0h] [rbp-288h] BYREF
  _BYTE v48[140]; // [rsp+A4h] [rbp-284h] BYREF
  WCHAR packageFamilyName[2]; // [rsp+130h] [rbp-1F8h] BYREF
  _BYTE v50[140]; // [rsp+134h] [rbp-1F4h] BYREF
  WCHAR packageRelativeApplicationId[2]; // [rsp+1C0h] [rbp-168h] BYREF
  _BYTE v52[140]; // [rsp+1C4h] [rbp-164h] BYREF
  WCHAR v53[2]; // [rsp+250h] [rbp-D8h] BYREF
  _BYTE v54[140]; // [rsp+254h] [rbp-D4h] BYREF

  v46[1] = (ATL::CAtlException *)-2LL;
  v36 = a4;
  v8 = a2;
  v44 = a2;
  v45 = a4;
  v35 = a6;
  v41 = a6;
  v10 = -2147023728;
  v11 = 0;
  v12 = 0LL;
  v33 = 0LL;
  v37 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v43 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *(_DWORD *)packageFamilyName = 0;
  memset_0(v50, 0, 0x7EuLL);
  *(_DWORD *)packageRelativeApplicationId = 0;
  memset_0(v52, 0, 0x80uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a4 = 0LL;
  ParseApplicationUserModelId(
    v8,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v13 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v13 )
  {
    v12 = (CRefCountedObject *)v13[2];
    v13 = (_QWORD *)*v13;
    v33 = v12;
    *(_DWORD *)v47 = 0;
    memset_0(v48, 0, 0x7EuLL);
    *(_DWORD *)v53 = 0;
    memset_0(v54, 0, 0x80uLL);
    v34[0] = 65;
    v40 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v12 + 2), v34, v47, &v40, v53);
    v14 = (char *)*((_QWORD *)v12 + 2);
    v15 = (char *)v8 - v14;
    do
    {
      v16 = *(unsigned __int16 *)&v14[v15];
      v17 = *(unsigned __int16 *)v14 - v16;
      if ( v17 )
        break;
      v14 += 2;
    }
    while ( v16 );
    if ( !v17 && *((_DWORD *)v12 + 29) == a3 )
    {
      v10 = 0;
      goto LABEL_46;
    }
    v18 = v47;
    do
    {
      v19 = *(WCHAR *)((char *)v18 + (char *)packageFamilyName - (char *)v47);
      v20 = *v18 - v19;
      if ( v20 )
        break;
      ++v18;
    }
    while ( v19 );
    if ( !v20 && *((_DWORD *)v12 + 29) == a3 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          33LL,
          &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
          v8);
      }
      v10 = 0;
LABEL_46:
      v29 = v35;
      v30 = v36;
LABEL_47:
      *v30 = v12;
      goto LABEL_48;
    }
  }
  if ( !a5 )
    goto LABEL_46;
  v10 = CApplication::CreateInstance(v8, a3, &v33);
  if ( v10 < 0 )
  {
    v29 = v35;
    goto LABEL_43;
  }
  v10 = 0;
  try
  {
    v21 = *((_QWORD *)this + 8);
    if ( !*((_QWORD *)this + 12) )
    {
      v22 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
      if ( !v22 )
        ATL::AtlThrowImpl(-2147024882);
      v23 = *((_DWORD *)this + 26);
      v24 = (_QWORD *)((char *)v22 + 16 * (v23 - 1) + 8 * (unsigned int)(v23 - 1) + 8);
      for ( i = v23 - 1; i >= 0; --i )
      {
        *v24 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v24;
        v24 -= 3;
      }
    }
    v26 = (__int64 *)*((_QWORD *)this + 12);
    *(_QWORD *)v34 = v26;
    v27 = *v26;
    v12 = v33;
    if ( v26 )
      v26[2] = (__int64)v33;
    *((_QWORD *)this + 12) = v27;
    v26[1] = 0LL;
    *v26 = v21;
    ++*((_QWORD *)this + 10);
    v28 = *((_QWORD *)this + 8);
    if ( v28 )
      *(_QWORD *)(v28 + 8) = v26;
    else
      *((_QWORD *)this + 9) = v26;
    *((_QWORD *)this + 8) = v26;
  }
  catch ( ATL::CAtlException *v46 )
  {
    v32 = (UINT32 *)v46[0];
    if ( *(_DWORD *)v46[0] == -1073741571 )
      _resetstkoflw();
    v34[0] = *v32;
    v10 = v34[0];
    v29 = v41;
    if ( (v34[0] & 0x80000000) == 0 )
    {
      v12 = v33;
      v8 = v44;
      v30 = v45;
      goto LABEL_37;
    }
    v11 = v37;
LABEL_43:
    if ( v33 )
      CRefCountedObject::Release(v33);
LABEL_48:
    if ( v29 )
      *v29 = v11;
    if ( v10 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        35LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)v10);
    }
    if ( v43 )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v10;
  }
  v29 = v35;
  v30 = v36;
LABEL_37:
  v11 = 1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      34LL,
      &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      v8);
  }
  goto LABEL_47;
}
