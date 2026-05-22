/*
 * XREFs of ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480
 * Callers:
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180047270 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044AF0 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 *     ?Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z @ 0x180047198 (-Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x18004789C (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18004EC8C (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCProcessor::hydroOnInputReport(struct IInputDisplay **this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  struct IInputTarget *v5; // rdi
  struct IInputTarget *v6; // rcx
  struct IInputDisplay *v7; // rbx
  MPCHolographicInputManager *Instance; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  struct IInputDisplay *v16; // rcx
  struct IInputDisplay *v17; // rdx
  struct IInputDisplay *v18; // rax
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  _DWORD *v25; // rcx
  ISMTracing *v26; // rcx
  struct IInputTarget *v27; // rcx
  int v29; // [rsp+28h] [rbp-E0h]
  bool v30[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IInputTarget *v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32[3]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v33[236]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+810h] [rbp+708h]

  v32[1] = -2LL;
  v32[0] = (__int64)a2;
  v31 = 0LL;
  ISMTracing::LogMPCInputReport<InputInfo * &>(v32);
  v30[0] = 0;
  MPCProcessor::CacheHandInput((MPCProcessor *)this, a2, v30);
  if ( v30[0] )
  {
    v4 = 0;
  }
  else
  {
    MPCTracer::Process((MPCTracer *)(this + 24), a2);
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)(this + 2))
      && (this[22] || *((_DWORD *)a2 + 176) == 7) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)this);
    }
    v5 = this[18];
    v32[2] = (__int64)v5;
    if ( v5 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 8LL))(v5);
    *(_DWORD *)a2 = 512;
    v6 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = this[5];
    Instance = MPCHolographicInputManager::GetInstance();
    v9 = MPCHolographicInputManager::Process3DInput(
           Instance,
           v7,
           a2,
           (struct IMPCInputProviderBase *)((unsigned __int64)(this + 2) & -(__int64)(this != 0LL)),
           &v31);
    v4 = v9;
    if ( v9 >= 0 )
    {
      if ( v31 && *((_DWORD *)a2 + 176) != 8 )
      {
        v32[0] = 0LL;
        v10 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v31)(
                v31,
                &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
                v32);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xAD,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
        v11 = v32[0];
        v12 = *(_QWORD *)v32[0];
        LOBYTE(v13) = !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)(this + 2));
        v14 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64))(v12 + 48))(v11, a2, v13);
        if ( v14 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xB1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v14);
        v15 = v32[0];
        if ( v32[0] )
        {
          v32[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      if ( v5 && !this[18] )
      {
        if ( *((_BYTE *)this + 208) )
        {
          v16 = this[21];
          v17 = (struct IInputDisplay *)*((_QWORD *)v16 + 1);
          v18 = v16;
          while ( !*((_BYTE *)v17 + 25) )
          {
            if ( *((_DWORD *)v17 + 8) >= *((_DWORD *)this + 51) )
            {
              v18 = v17;
              v17 = *(struct IInputDisplay **)v17;
            }
            else
            {
              v17 = (struct IInputDisplay *)*((_QWORD *)v17 + 2);
            }
          }
          if ( v18 == v16 || *((_DWORD *)this + 51) < *((_DWORD *)v18 + 8) )
            v18 = this[21];
          if ( v18 != v16 )
          {
            v19 = (_OWORD *)((char *)v18 + 40);
            v20 = v33;
            v21 = 14LL;
            do
            {
              *v20 = *v19;
              v20[1] = v19[1];
              v20[2] = v19[2];
              v20[3] = v19[3];
              v20[4] = v19[4];
              v20[5] = v19[5];
              v20[6] = v19[6];
              v20 += 8;
              *(v20 - 1) = v19[7];
              v19 += 8;
              --v21;
            }
            while ( v21 );
            *v20 = *v19;
            v20[1] = v19[1];
            v20[2] = v19[2];
            v20[3] = v19[3];
            v20[4] = v19[4];
            v20[5] = v19[5];
            LOBYTE(v29) = 0;
            v22 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 4LL, HIDWORD(v33[0]), v33, v29);
            if ( v22 < 0 )
            {
              wil::details::in1diag3::_FailFast_Hr(
                retaddr,
                (void *)0xC3,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
                (const char *)(unsigned int)v22);
              __debugbreak();
            }
            LOBYTE(v23) = *((_BYTE *)this + 209);
            v24 = (*(__int64 (__fastcall **)(struct IInputTarget *, _QWORD *, __int64))(*(_QWORD *)v5 + 48LL))(
                    v5,
                    v33,
                    v23);
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xC4,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
                (const char *)(unsigned int)v24);
            v25 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v25 && *v25 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCProcessor_FocusHandLost_(v26, v5, (struct InputInfo *)v33);
            }
          }
        }
        *((_BYTE *)this + 208) = 0;
      }
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
        (const char *)(unsigned int)v9);
    }
    if ( v5 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v27 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v4;
}
