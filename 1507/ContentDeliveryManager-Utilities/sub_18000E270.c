/*
 * XREFs of sub_18000E270 @ 0x18000E270
 * Callers:
 *     sub_18000EEB0 @ 0x18000EEB0 (sub_18000EEB0.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180004490 @ 0x180004490 (sub_180004490.c)
 *     sub_180006F00 @ 0x180006F00 (sub_180006F00.c)
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 *     sub_1800080BC @ 0x1800080BC (sub_1800080BC.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18000E630 @ 0x18000E630 (sub_18000E630.c)
 *     sub_18000EDF0 @ 0x18000EDF0 (sub_18000EDF0.c)
 *     sub_1800184F8 @ 0x1800184F8 (sub_1800184F8.c)
 *     sub_180020504 @ 0x180020504 (sub_180020504.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18000E270(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        HSTRING a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v10; // r13
  HRESULT v11; // eax
  int v12; // esi
  HSTRING v13; // r12
  HRESULT v14; // eax
  HSTRING v15; // r15
  HRESULT v16; // eax
  HSTRING v17; // r14
  HRESULT v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  int v21; // r9d
  int v22; // edx
  _QWORD *v23; // rax
  volatile signed __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  HSTRING v27; // r14
  volatile signed __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h]
  HSTRING v37; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+78h] [rbp-90h]
  _DWORD v39[4]; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v40; // [rsp+90h] [rbp-78h] BYREF
  char v41; // [rsp+98h] [rbp-70h]
  HSTRING v42; // [rsp+A0h] [rbp-68h] BYREF
  char v43; // [rsp+A8h] [rbp-60h]
  _QWORD v44[2]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v45[152]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+160h] [rbp+58h]
  int v48; // [rsp+170h] [rbp+68h] BYREF
  HSTRING newString; // [rsp+178h] [rbp+70h] BYREF

  v48 = a2;
  v44[1] = -2LL;
  v10 = 0LL;
  v43 = 0;
  v11 = WindowsDuplicateString(a3, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    sub_1800025D0(retaddr, 215, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v11);
    goto LABEL_45;
  }
  v10 = newString;
  v42 = newString;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v41 = 0;
  v14 = WindowsDuplicateString(a4, &newString);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v13 = newString;
    v40 = newString;
    WindowsDeleteString(0LL);
    v15 = 0LL;
    v35 = 0LL;
    LOBYTE(v36) = 0;
    if ( string )
    {
      v16 = WindowsDuplicateString(string, &newString);
      v12 = v16;
      if ( v16 < 0 )
      {
        sub_1800025D0(
          retaddr,
          222,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          v16);
LABEL_39:
        if ( v15 )
          WindowsDeleteString(v15);
        goto LABEL_42;
      }
      v15 = newString;
      v35 = newString;
      WindowsDeleteString(0LL);
    }
    v17 = 0LL;
    v37 = 0LL;
    LOBYTE(v38) = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &newString);
      v12 = v18;
      if ( v18 < 0 )
      {
        sub_1800025D0(
          retaddr,
          228,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          v18);
LABEL_37:
        if ( v17 )
          WindowsDeleteString(v17);
        goto LABEL_39;
      }
      v17 = newString;
      v37 = newString;
      WindowsDeleteString(0LL);
    }
    v19 = 0LL;
    v34 = 0LL;
    v20 = sub_180020504(2LL, &newString);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = v20;
      v22 = 192;
LABEL_13:
      sub_1800025D0(
        retaddr,
        v22,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        v21);
LABEL_22:
      if ( v12 >= 0 )
      {
        v27 = a7;
        newString = a7;
        if ( a7 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a7 + 8LL))(a7);
        v28 = (volatile signed __int64 *)(a1 - 40);
        v44[0] = a1 - 40;
        if ( a1 != 40 )
          sub_180007200(a1 - 40);
        v29 = sub_18000E630(
                (unsigned int)v45,
                (_DWORD)v28,
                (unsigned int)v44,
                (unsigned int)&v48,
                (__int64)&v42,
                (__int64)&v40,
                (__int64)&v35,
                (__int64)&v37,
                (__int64)&newString,
                (__int64)&v34);
        v39[0] = 3;
        v39[1] = 130;
        v39[2] = 0;
        v12 = sub_1800184F8(v39, a9, v30, v29);
        sub_18000EDF0(v45);
        if ( v12 < 0 )
          sub_1800025D0(
            retaddr,
            270,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            v12);
        if ( a1 != 40 )
          sub_180007270(v28, v31, v32);
        if ( v27 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16LL))(v27);
        v17 = v37;
        v15 = v35;
        v13 = v40;
        v10 = v42;
      }
      else
      {
        sub_1800025D0(
          retaddr,
          232,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          v12);
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      goto LABEL_37;
    }
    if ( (_BYTE)newString )
    {
      v34 = 0LL;
      v23 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_180031BC0);
      if ( !v23 )
      {
        v12 = -2147024882;
LABEL_20:
        v21 = v12;
        v22 = 195;
        goto LABEL_13;
      }
      v24 = sub_1800080BC(v23);
      v12 = sub_180006F00((__int64)v24, &dword_18002BE68, &v34);
      if ( v24 )
        sub_180004490(v24, v25, v26);
      v19 = v34;
      if ( v12 < 0 )
        goto LABEL_20;
    }
    v12 = 0;
    goto LABEL_22;
  }
  sub_1800025D0(retaddr, 217, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v14);
LABEL_42:
  if ( v13 )
    WindowsDeleteString(v13);
LABEL_45:
  if ( v10 )
    WindowsDeleteString(v10);
  return (unsigned int)v12;
}
