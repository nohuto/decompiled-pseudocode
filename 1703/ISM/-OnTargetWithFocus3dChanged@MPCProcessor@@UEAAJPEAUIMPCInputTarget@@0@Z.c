/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180047BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044AF0 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044C8C (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z @ 0x180046E7C (-MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCProcessor::OnTargetWithFocus3dChanged(
        MPCProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx
  char v8; // bl
  bool v9; // zf
  char v10; // al
  char v11; // al
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int128 *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  struct IMPCInputTarget *v30; // rax
  int v31; // eax
  __int64 v32; // r8
  _DWORD *v33; // rcx
  ISMTracing *v34; // rcx
  __int64 *v35; // rax
  __int64 *i; // rax
  __int64 *v37; // rdi
  __int64 *v38; // rbx
  __int128 *v39; // rax
  __int64 v40; // rdx
  __int128 *v41; // rcx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  int v55; // eax
  __int64 v56; // r8
  _DWORD *v57; // rcx
  ISMTracing *v58; // rcx
  __int64 *v59; // rax
  __int64 *j; // rax
  int v62; // [rsp+20h] [rbp-E0h]
  _QWORD v63[162]; // [rsp+30h] [rbp-D0h] BYREF
  int v64; // [rsp+544h] [rbp+444h]
  wil::details::in1diag3 *retaddr; // [rsp+7D8h] [rbp+6D8h]

  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCProcessor_OnTargetWithFocusChanged_(v7, 1, a2, a3);
  }
  if ( !a2 || (v8 = 1, (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2)) )
    v8 = 0;
  if ( !a3
    || (v9 = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3) == 0, v10 = 1, !v9) )
  {
    v10 = 0;
  }
  if ( !v8 || (v9 = v10 == 0, v11 = 1, v9) )
    v11 = 0;
  *((_BYTE *)this + 209) = v11;
  v12 = (__int64 *)*((_QWORD *)this + 21);
  v13 = (__int64 *)*v12;
  while ( v13 != v12 )
  {
    v14 = (__int128 *)(v13 + 5);
    v15 = 14LL;
    v16 = (__int128 *)v63;
    do
    {
      v17 = *v14;
      v18 = v14[1];
      v14 += 8;
      *v16 = v17;
      v19 = *(v14 - 6);
      v16[1] = v18;
      v20 = *(v14 - 5);
      v16[2] = v19;
      v21 = *(v14 - 4);
      v16[3] = v20;
      v22 = *(v14 - 3);
      v16[4] = v21;
      v23 = *(v14 - 2);
      v16[5] = v22;
      v24 = *(v14 - 1);
      v16[6] = v23;
      v16 += 8;
      *(v16 - 1) = v24;
      --v15;
    }
    while ( v15 );
    v25 = v14[1];
    *v16 = *v14;
    v26 = v14[2];
    v16[1] = v25;
    v27 = v14[3];
    v16[2] = v26;
    v28 = v14[4];
    v16[3] = v27;
    v29 = v14[5];
    v16[4] = v28;
    v16[5] = v29;
    if ( a2 )
    {
      v30 = (struct IMPCInputTarget *)*((_QWORD *)this + 18);
      if ( v30 && a2 == v30 && v64 == *((_DWORD *)this + 51) )
      {
        *((_BYTE *)this + 208) = 1;
      }
      else
      {
        LOBYTE(v62) = 0;
        v31 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 4LL, HIDWORD(v63[0]), v63, v62);
        if ( v31 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x135,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v31);
          __debugbreak();
        }
        LOBYTE(v32) = *((_BYTE *)this + 209);
        (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a2 + 48LL))(a2, v63, v32);
        v33 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v33 && *v33 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCProcessor_FocusHandLost_(v34, a2, (struct InputInfo *)v63);
        }
      }
    }
    if ( !*((_BYTE *)v13 + 25) )
    {
      v35 = (__int64 *)v13[2];
      if ( *((_BYTE *)v35 + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v13 = i;
        v13 = i;
      }
      else
      {
        do
        {
          v13 = v35;
          v35 = (__int64 *)*v35;
        }
        while ( !*((_BYTE *)v35 + 25) );
      }
    }
  }
  v37 = (__int64 *)*((_QWORD *)this + 21);
  v38 = (__int64 *)*v37;
  while ( v38 != v37 )
  {
    v39 = (__int128 *)(v38 + 5);
    v40 = 14LL;
    v41 = (__int128 *)v63;
    do
    {
      v42 = *v39;
      v43 = v39[1];
      v39 += 8;
      *v41 = v42;
      v44 = *(v39 - 6);
      v41[1] = v43;
      v45 = *(v39 - 5);
      v41[2] = v44;
      v46 = *(v39 - 4);
      v41[3] = v45;
      v47 = *(v39 - 3);
      v41[4] = v46;
      v48 = *(v39 - 2);
      v41[5] = v47;
      v49 = *(v39 - 1);
      v41[6] = v48;
      v41 += 8;
      *(v41 - 1) = v49;
      --v40;
    }
    while ( v40 );
    v50 = v39[1];
    *v41 = *v39;
    v51 = v39[2];
    v41[1] = v50;
    v52 = v39[3];
    v41[2] = v51;
    v53 = v39[4];
    v41[3] = v52;
    v54 = v39[5];
    v41[4] = v53;
    v41[5] = v54;
    if ( a3 )
    {
      if ( *((_BYTE *)this + 208) && a3 == *((struct IMPCInputTarget **)this + 18) && v64 == *((_DWORD *)this + 51) )
        *((_BYTE *)this + 208) = 0;
      LOBYTE(v62) = 0;
      v55 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 5LL, HIDWORD(v63[0]), v63, v62);
      if ( v55 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x14A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
          (const char *)(unsigned int)v55);
        JUMPOUT(0x180047FB7LL);
      }
      LOBYTE(v56) = *((_BYTE *)this + 209);
      (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a3 + 48LL))(a3, v63, v56);
      v57 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v57 && *v57 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCProcessor_FocusHandDetected_(v58, a3, (struct InputInfo *)v63);
      }
    }
    if ( !*((_BYTE *)v38 + 25) )
    {
      v59 = (__int64 *)v38[2];
      if ( *((_BYTE *)v59 + 25) )
      {
        for ( j = (__int64 *)v38[1]; !*((_BYTE *)j + 25) && v38 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v38 = j;
        v38 = j;
      }
      else
      {
        do
        {
          v38 = v59;
          v59 = (__int64 *)*v59;
        }
        while ( !*((_BYTE *)v59 + 25) );
      }
    }
  }
  return 0LL;
}
