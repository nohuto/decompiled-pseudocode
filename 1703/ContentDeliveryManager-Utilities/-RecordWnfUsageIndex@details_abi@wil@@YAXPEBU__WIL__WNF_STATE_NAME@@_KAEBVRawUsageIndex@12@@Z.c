/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180008EB0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000934C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180001D84 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002E34 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180007150 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800071E8 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180008140 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180008348 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x180070240 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        const void *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const void *v4; // rdi
  const struct __WIL__WNF_STATE_NAME *v5; // rsi
  const struct __WIL__WNF_STATE_NAME *v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int16 v8; // r9
  __int16 v9; // cx
  __int64 v10; // rax
  wil::details *v11; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  int v16; // ebx
  __int64 (__fastcall ***v17)(); // rdx
  char v18; // bl
  __int64 (__fastcall ***v19)(); // rdx
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v21; // r9
  void *v22; // r14
  HANDLE ProcessHeap; // rax
  void *v24; // rbx
  HANDLE v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-E0h]
  void *v27; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  _WORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 v38; // [rsp+96h] [rbp-6Ah]
  char v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  void *v41; // [rsp+A8h] [rbp-58h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  LPVOID lpMem; // [rsp+C0h] [rbp-40h]
  __int16 v44; // [rsp+C8h] [rbp-38h]
  char v45; // [rsp+CAh] [rbp-36h]
  __int16 v46; // [rsp+D0h] [rbp-30h] BYREF
  char v47; // [rsp+D2h] [rbp-2Eh]
  unsigned int v48; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 v49; // [rsp+D8h] [rbp-28h]
  __int128 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v53[3]; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+118h] [rbp+18h] BYREF
  __int128 v55; // [rsp+120h] [rbp+20h]
  _WORD *v56; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *v57; // [rsp+180h] [rbp+80h]
  char v58[4096]; // [rsp+190h] [rbp+90h] BYREF

  v53[1] = -2LL;
  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = *((_WORD *)v4 + 3);
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = *((_WORD *)v4 + 1);
    v36[0] = *(_WORD *)v4;
    v36[1] = v9;
    v37 = (char)a2;
    v38 = v8;
    v39 = (char)a3;
    if ( v8 )
    {
      v10 = v8;
      if ( (_BYTE)a3 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v40 = v10;
    }
    else
    {
      v40 = 0LL;
    }
    v41 = 0LL;
    v42 = 0LL;
    lpMem = 0LL;
    v44 = 0;
    v45 = 0;
    v28 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v29, v58, &v28);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v36, v58, v12, (const char *)0x1000);
    if ( HIBYTE(v44) )
      break;
    v33 = 0LL;
    *(_QWORD *)&v31 = &v33;
    *((_QWORD *)&v31 + 1) = &v34;
    *(_QWORD *)&v32 = v36;
    v54 = off_180079240;
    v55 = v31;
    v56 = v36;
    v57 = (wil::details::in1diag3 *)&v54;
    v53[2] = &v54;
    v30 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    LOWORD(v31) = *((_WORD *)v4 + 1);
    BYTE2(v31) = v13;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v46 = *((_WORD *)v4 + 3);
    v47 = v14;
    v48 = 0;
    v49 = 0;
    v50 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v31,
              &v30,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v16 = 0;
      if ( DWORD1(v31) )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v46,
                  &v30,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v28 = v48;
          v51 = v49;
          v52 = *((_QWORD *)&v50 + 1);
          v53[0] = WORD4(v31);
          v35 = *((_QWORD *)&v32 + 1);
          if ( !v57 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v26 = &v51;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v57 + 16LL))(
                  v57,
                  &v35,
                  v53,
                  &v52) )
          {
            if ( v57 )
            {
              v17 = &v54;
              LOBYTE(v17) = v57 != (wil::details::in1diag3 *)&v54;
              (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v57 + 24LL))(
                v57,
                v17);
            }
            v18 = 0;
            goto LABEL_27;
          }
          if ( (unsigned int)++v16 >= DWORD1(v31) )
            goto LABEL_14;
        }
      }
    }
    if ( v57 )
    {
      v19 = &v54;
      LOBYTE(v19) = v57 != (wil::details::in1diag3 *)&v54;
      (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v57 + 24LL))(v57, v19);
    }
    v18 = 1;
LABEL_27:
    if ( !(_BYTE)v44 )
      goto LABEL_32;
    updated = wil_details_NtUpdateWnfStateData(v5, v41, (int)v42 - (int)v41, v15, v26, v29, 1u);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v41, v42 - (_DWORD)v41, v21, v27, 0, 0);
LABEL_32:
      v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
      v34 = v33;
      goto LABEL_33;
    }
    ++v7;
    v18 = 0;
LABEL_33:
    v22 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v18 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v24 = lpMem;
  if ( lpMem )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
}
