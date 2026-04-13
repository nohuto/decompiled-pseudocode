/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007CE4
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800082F8 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180001D20 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002D20 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800071D4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800073E8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800597E0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // r15
  unsigned __int64 v6; // rdi
  char v7; // r8
  unsigned __int16 v8; // r9
  char v9; // dl
  __int16 v10; // cx
  __int64 v11; // rax
  FARPROC ProcAddress; // rax
  HMODULE Library; // rax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  char v16; // cl
  char v17; // cl
  int v18; // ebx
  void ***v19; // rdx
  char v20; // r12
  void ***v21; // rdx
  int v22; // r13d
  __int64 v23; // r14
  unsigned int v24; // edi
  __int64 v25; // rbx
  FARPROC v26; // rax
  HMODULE v27; // rax
  unsigned int v28; // edi
  int v29; // eax
  __int64 v30; // r13
  unsigned int v31; // r14d
  __int64 v32; // rbx
  FARPROC v33; // rax
  HMODULE v34; // rax
  void *v35; // rbx
  HANDLE ProcessHeap; // rax
  void *v37; // rbx
  HANDLE v38; // rax
  unsigned __int8 *v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  _WORD v47[2]; // [rsp+90h] [rbp-70h] BYREF
  char v48; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 v49; // [rsp+96h] [rbp-6Ah]
  char v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int128 v53; // [rsp+B0h] [rbp-50h]
  LPVOID lpMem; // [rsp+C0h] [rbp-40h]
  __int16 v55; // [rsp+C8h] [rbp-38h]
  char v56; // [rsp+CAh] [rbp-36h]
  __int16 v57; // [rsp+D0h] [rbp-30h] BYREF
  char v58; // [rsp+D2h] [rbp-2Eh]
  int v59; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 v60; // [rsp+D8h] [rbp-28h]
  __int128 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v64; // [rsp+100h] [rbp+0h] BYREF
  __int64 v65; // [rsp+108h] [rbp+8h] BYREF
  wil::details_abi *v66; // [rsp+110h] [rbp+10h]
  void **v67; // [rsp+118h] [rbp+18h] BYREF
  __int128 v68; // [rsp+120h] [rbp+20h]
  _WORD *v69; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *v70; // [rsp+178h] [rbp+78h]
  __int64 v71; // [rsp+180h] [rbp+80h]
  void ***v72; // [rsp+188h] [rbp+88h]
  char v73[4096]; // [rsp+190h] [rbp+90h] BYREF

  v71 = -2LL;
  v5 = this;
  v66 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v6 = 0LL;
  v41 = 0LL;
  v46 = 0LL;
  while ( 1 )
  {
    v7 = *(_BYTE *)(a3 + 8);
    v8 = *(_WORD *)(a3 + 6);
    v9 = *(_BYTE *)(a3 + 4);
    v10 = *(_WORD *)(a3 + 2);
    v47[0] = *(_WORD *)a3;
    v47[1] = v10;
    v48 = v9;
    v49 = v8;
    v50 = v7;
    if ( v8 )
    {
      v11 = v8;
      if ( v7 == 1 )
      {
        v11 = v8 + 2LL;
      }
      else if ( v7 == 2 )
      {
        v11 = v8 + 4LL;
      }
      v51 = v11;
    }
    else
    {
      v51 = 0LL;
    }
    v52 = 0LL;
    v53 = 0LL;
    lpMem = 0LL;
    v55 = 0;
    v56 = 0;
    LODWORD(v39) = 4096;
    ProcAddress = (FARPROC)`Wil_NtQueryWnfStateData'::`2'::s_pfnNtQueryWnfStateData;
    if ( `Wil_NtQueryWnfStateData'::`2'::s_pfnNtQueryWnfStateData )
      goto LABEL_14;
    Library = `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
    if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
    {
      Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
      `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = Library;
    }
    ProcAddress = GetProcAddress(Library, "NtQueryWnfStateData");
    `Wil_NtQueryWnfStateData'::`2'::s_pfnNtQueryWnfStateData = (__int64)ProcAddress;
    if ( ProcAddress )
LABEL_14:
      v14 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, int *, char *, unsigned __int8 **))ProcAddress)(
              v5,
              0LL,
              0LL,
              &v40,
              v73,
              &v39);
    else
      v14 = -1073741511;
    wil::details::NtStatusToHr((wil::details *)v14);
    if ( v14 )
    {
      v15 = 0;
      LODWORD(v39) = 0;
      v40 = 0;
    }
    else
    {
      v15 = (unsigned int)v39;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v47, v73, v15, (const char *)0x1000);
    if ( HIBYTE(v55) )
      break;
    v45 = 0LL;
    *(_QWORD *)&v43 = &v45;
    *((_QWORD *)&v43 + 1) = &v46;
    *(_QWORD *)&v44 = v47;
    v67 = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_2f784ef15c303f2c8d3bec493a729414_,0>,wistd::details::function_allocator<wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>>,bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`vftable';
    v68 = v43;
    v69 = v47;
    v70 = (wil::details::in1diag3 *)&v67;
    v72 = &v67;
    v39 = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 10LL);
    v16 = *(_BYTE *)(a3 + 4);
    LOWORD(v43) = *(_WORD *)(a3 + 2);
    BYTE2(v43) = v16;
    DWORD1(v43) = 0;
    WORD4(v43) = 0;
    v44 = 0LL;
    v17 = *(_BYTE *)(a3 + 8);
    v57 = *(_WORD *)(a3 + 6);
    v58 = v17;
    v59 = 0;
    v60 = 0;
    v61 = 0LL;
LABEL_20:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v43,
              &v39,
              *(unsigned __int8 **)(a3 + 32)) )
    {
      v18 = 0;
      if ( DWORD1(v43) )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v57,
                  &v39,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v42 = v59;
          v62 = v60;
          v63 = *((_QWORD *)&v61 + 1);
          v64 = WORD4(v43);
          v65 = *((_QWORD *)&v44 + 1);
          if ( !v70 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v70 + 16LL))(
                  v70,
                  &v65,
                  &v64,
                  &v63,
                  &v62,
                  &v42) )
          {
            if ( v70 )
            {
              v19 = &v67;
              LOBYTE(v19) = v70 != (wil::details::in1diag3 *)&v67;
              (*(void (__fastcall **)(wil::details::in1diag3 *, void ***))(*(_QWORD *)v70 + 24LL))(v70, v19);
              v70 = 0LL;
            }
            v20 = 0;
            goto LABEL_33;
          }
          if ( (unsigned int)++v18 >= DWORD1(v43) )
            goto LABEL_20;
        }
      }
    }
    if ( v70 )
    {
      v21 = &v67;
      LOBYTE(v21) = v70 != (wil::details::in1diag3 *)&v67;
      (*(void (__fastcall **)(wil::details::in1diag3 *, void ***))(*(_QWORD *)v70 + 24LL))(v70, v21);
      v70 = 0LL;
    }
    v20 = 1;
LABEL_33:
    v22 = v40;
    if ( !(_BYTE)v55 )
      goto LABEL_50;
    v23 = v52;
    v24 = v53 - v52;
    v25 = *(_QWORD *)v5;
    v26 = (FARPROC)`Wil_RtlTestAndPublishWnfStateData'::`2'::s_pfnRtlTestAndPublishWnfStateData;
    if ( `Wil_RtlTestAndPublishWnfStateData'::`2'::s_pfnRtlTestAndPublishWnfStateData )
      goto LABEL_39;
    v27 = `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
    if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
    {
      v27 = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
      `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = v27;
    }
    v26 = GetProcAddress(v27, "RtlTestAndPublishWnfStateData");
    `Wil_RtlTestAndPublishWnfStateData'::`2'::s_pfnRtlTestAndPublishWnfStateData = (__int64)v26;
    if ( v26 )
LABEL_39:
      v28 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, int))v26)(v25, 0LL, v23, v24, 0LL, v22);
    else
      v28 = -1073741511;
    v29 = wil::details::NtStatusToHr((wil::details *)v28);
    if ( v28 != -1073741823 )
    {
      if ( v29 >= 0 )
      {
        v6 = v41;
      }
      else
      {
        v30 = v52;
        v31 = v53 - v52;
        v32 = *(_QWORD *)v5;
        v33 = (FARPROC)`Wil_RtlPublishWnfStateData'::`2'::s_pfnRtlPublishWnfStateData;
        if ( `Wil_RtlPublishWnfStateData'::`2'::s_pfnRtlPublishWnfStateData )
          goto LABEL_46;
        v34 = `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
        if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
        {
          v34 = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
          `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = v34;
        }
        v33 = GetProcAddress(v34, "RtlPublishWnfStateData");
        `Wil_RtlPublishWnfStateData'::`2'::s_pfnRtlPublishWnfStateData = (__int64)v33;
        if ( v33 )
LABEL_46:
          ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD))v33)(v32, 0LL, v30, v31, 0LL);
        wil::details::NtStatusToHr((wil::details *)v28);
        v6 = v41;
      }
LABEL_50:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v46 = v45;
      goto LABEL_51;
    }
    v6 = ++v41;
    v20 = 0;
LABEL_51:
    v35 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v35);
    }
    if ( v20 || v5 >= v66 || v6 >= 0x32 )
      return;
  }
  v37 = lpMem;
  if ( lpMem )
  {
    v38 = GetProcessHeap();
    HeapFree(v38, 0, v37);
  }
}
