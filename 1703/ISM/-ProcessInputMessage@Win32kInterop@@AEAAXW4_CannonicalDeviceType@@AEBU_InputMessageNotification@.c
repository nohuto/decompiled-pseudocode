/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18000BC44
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003BD50 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Win32kInterop::ProcessInputMessage(__int64 a1, int a2, __int64 a3)
{
  struct Win32kInterop *v4; // r15
  __int16 v5; // si
  _DWORD *v6; // rax
  int v7; // eax
  int v8; // eax
  __int16 v9; // r14
  __int16 v10; // cx
  int v11; // eax
  int v12; // eax
  struct KeyboardModifierState *v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  __int16 v17; // ax
  int v18; // edx
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct KeyboardModifierState *v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v28[16]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v29[118]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[236]; // [rsp+800h] [rbp+700h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F98h] [rbp+E98h]

  if ( a2 )
    return;
  v26[1] = -2LL;
  v4 = Win32kInterop::s_pInterop;
  memset(v29, 0, sizeof(v29));
  DWORD2(v29[2]) = 1888;
  v5 = 2;
  LODWORD(v29[0]) = 2;
  v6 = (_DWORD *)*((_QWORD *)Win32kInterop::s_pInterop + 10);
  if ( !v6 )
    v6 = (_DWORD *)(a3 + 232);
  DWORD1(v29[0]) = *v6;
  DWORD2(v29[0]) = *(_DWORD *)(a3 + 216);
  *(_QWORD *)&v29[1] = *(_QWORD *)(a3 + 224);
  *(_QWORD *)&v29[2] = *(_QWORD *)(a3 + 168);
  LODWORD(v29[3]) = 1;
  v29[35] = *(_OWORD *)(a3 + 104);
  v29[36] = *(_OWORD *)(a3 + 120);
  v29[37] = *(_OWORD *)(a3 + 136);
  v29[38] = *(_OWORD *)(a3 + 152);
  *((_QWORD *)&v29[34] + 1) = *(_QWORD *)(a3 + 24);
  LODWORD(v29[39]) = *(_DWORD *)(a3 + 12) & 1;
  v26[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)Win32kInterop::s_pInterop + 5) + 72LL))(
         *((_QWORD *)Win32kInterop::s_pInterop + 5),
         v26);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x288,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v25 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v26[0] + 40LL))(v26[0], &v25);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x28B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v29[41] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, struct KeyboardModifierState **))(*(_QWORD *)v25 + 40LL))(
                         v25,
                         v27);
  v9 = 64;
  if ( *(_QWORD *)(a3 + 200) )
  {
    v10 = *(_WORD *)(a3 + 200);
    v11 = HIDWORD(v29[33]);
    if ( (v10 & 1) != 0 )
    {
      v11 = HIDWORD(v29[33]) | 0x10;
      HIDWORD(v29[33]) |= 0x10u;
    }
    if ( (v10 & 2) != 0 )
    {
      v11 |= 0x20u;
      HIDWORD(v29[33]) = v11;
    }
    if ( (v10 & 0x10) != 0 )
    {
      v11 |= 0x40u;
      HIDWORD(v29[33]) = v11;
    }
    if ( (v10 & 0x20) != 0 )
    {
      v11 |= 0x80u;
      HIDWORD(v29[33]) = v11;
    }
    if ( (v10 & 0x40) != 0 )
      HIDWORD(v29[33]) = v11 | 0x100;
  }
  v27[0] = 0LL;
  v12 = KeyboardModifierState::Create(v27);
  v13 = v27[0];
  if ( v12 >= 0 )
  {
    v14 = *((_DWORD *)v27[0] + 21);
    LODWORD(v29[34]) = v14;
    if ( *(_DWORD *)(a3 + 240) )
      LODWORD(v29[34]) = v14 | 1;
  }
  DWORD1(v29[3]) = 1;
  LODWORD(v29[4]) = *(__int16 *)(a3 + 208);
  DWORD1(v29[4]) = *(__int16 *)(a3 + 210);
  *((_QWORD *)&v29[4] + 1) = *(_QWORD *)&v29[4];
  v15 = 1;
  if ( HIDWORD(v29[33]) )
    v15 = 3;
  DWORD2(v29[3]) = v15;
  v16 = *(_DWORD *)(a3 + 192);
  if ( (unsigned int)(v16 - 512) <= 0xE )
  {
    v17 = word_1800AD9B0[v16 - 512];
    WORD2(v29[44]) = v17;
    if ( (v17 & 0xC0) != 0 && *(_WORD *)(a3 + 202) == 2 )
      WORD2(v29[44]) = 4 * v17;
  }
  if ( ((v16 - 522) & 0xFFFFFFFB) == 0 )
    WORD3(v29[44]) = *(_WORD *)(a3 + 202);
  v18 = v16 - 513;
  if ( !v18 )
    goto LABEL_36;
  v19 = v18 - 1;
  if ( !v19 )
  {
    v9 = 65;
LABEL_36:
    v5 = 1;
    goto LABEL_37;
  }
  v20 = v19 - 2;
  if ( !v20 )
  {
LABEL_37:
    memset(v30, 0, sizeof(v30));
    LODWORD(v30[5]) = 1888;
    *(_QWORD *)((char *)v30 + 4) = *(_QWORD *)((char *)v29 + 4);
    LODWORD(v30[0]) = 4;
    v30[2] = *(_QWORD *)&v29[1];
    WORD1(v30[88]) = v5;
    WORD2(v30[88]) = v9;
    v28[0] = 0;
    v28[1] = 4;
    memset(&v28[2], 0, 0x30uLL);
    v24 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, __int64 *))(**((_QWORD **)v4 + 5) + 56LL))(
           *((_QWORD *)v4 + 5),
           0LL,
           v28,
           0LL,
           &v24) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)v4 + 5) + 64LL))(*((_QWORD *)v4 + 5), v30, v24);
    v21 = v24;
    v24 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_41;
  }
  if ( v20 == 1 )
  {
    v9 = 65;
    goto LABEL_37;
  }
LABEL_41:
  (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(**((_QWORD **)v4 + 5) + 96LL))(*((_QWORD *)v4 + 5), a3, v29);
  if ( v13 )
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v13 + 16LL))(v13);
  v22 = v25;
  v25 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = v26[0];
  v26[0] = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
}
