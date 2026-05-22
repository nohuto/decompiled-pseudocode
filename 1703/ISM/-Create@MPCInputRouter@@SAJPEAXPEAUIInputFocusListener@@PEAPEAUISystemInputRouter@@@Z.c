/*
 * XREFs of ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180007B04 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007B64 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180083ED0 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180085570 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  const WCHAR *v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  MPCInputRouter *v9; // rax
  __int64 v10; // rcx
  MPCInputRouter *v11; // rbx
  MPCInputRouter *v12; // rsi
  int v13; // edi
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rax
  RTL_SRWLOCK *v17; // rax
  __int128 pvData; // [rsp+50h] [rbp-69h] BYREF
  DWORD pcbData[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+68h] [rbp-51h]
  void **v22; // [rsp+70h] [rbp-49h] BYREF
  __int128 v23; // [rsp+78h] [rbp-41h]
  char v24; // [rsp+88h] [rbp-31h]
  MPCInputRouter *v25; // [rsp+90h] [rbp-29h]
  void ***v26; // [rsp+A8h] [rbp-11h]
  LPCWSTR lpValue[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+7h]
  unsigned __int64 v29; // [rsp+C8h] [rbp+Fh]

  v21 = -2LL;
  v28 = 0LL;
  v29 = 7LL;
  LOWORD(lpValue[0]) = 0;
  std::wstring::assign((void **)lpValue, (void **)L"WaitForDebugger");
  pcbData[0] = 4;
  LODWORD(pvData) = 0;
  v6 = (const WCHAR *)lpValue;
  if ( v29 >= 8 )
    v6 = lpValue[0];
  v8 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Ism3D",
          v6,
          0x10u,
          0LL,
          &pvData,
          pcbData) )
    v8 = pvData;
  if ( v29 >= 8 )
    std::_Deallocate((char *)lpValue[0], v29 + 1, 2uLL);
  if ( v8 )
  {
    while ( !IsDebuggerPresent() )
      Sleep(0x64u);
    __debugbreak();
  }
  if ( !a1 || !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 106, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
LABEL_39:
    __fastfail(7u);
  }
  v9 = (MPCInputRouter *)malloc(0x420uLL);
  v11 = v9;
  if ( v9 )
    memset(v9, 0, 0x420uLL);
  *(_QWORD *)pcbData = v11;
  if ( v11 )
    v12 = MPCInputRouter::MPCInputRouter(v11, a1, a2);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    LOBYTE(v13) = 14;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_23;
    v14 = 116;
    goto LABEL_22;
  }
  v15 = DWMInputRouter::Initialize(v12);
  v13 = v15;
  if ( v15 >= 0 )
  {
    *(_QWORD *)pcbData = &v22;
    *(_QWORD *)&pvData = MPCInputRouter::On3DCompositorRunningChanged;
    DWORD2(pvData) = 0;
    v22 = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
    v23 = pvData;
    v24 = v28;
    v25 = v12;
    v26 = &v22;
    MPC3DStateHelper::GetInstance();
    MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v16, (__int64)&v22, (_DWORD *)v12 + 262);
    MPC3DStateHelper::GetInstance();
    if ( MPC3DStateHelper::Is3DCompositorRunning(v17) )
      MPCInputRouter::On3DCompositorRunningChanged(v12, 1);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 64, v15);
  }
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_23:
      if ( IsDebuggerPresent() )
        __debugbreak();
      goto LABEL_39;
    }
    v14 = 119;
LABEL_22:
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, v14, v13);
    goto LABEL_23;
  }
  *a3 = v12;
  return (unsigned int)v13;
}
