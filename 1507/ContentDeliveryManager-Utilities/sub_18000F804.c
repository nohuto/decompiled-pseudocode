/*
 * XREFs of sub_18000F804 @ 0x18000F804
 * Callers:
 *     sub_18000ED0C @ 0x18000ED0C (sub_18000ED0C.c)
 *     sub_180019350 @ 0x180019350 (sub_180019350.c)
 *     sub_1800193D0 @ 0x1800193D0 (sub_1800193D0.c)
 *     sub_180019450 @ 0x180019450 (sub_180019450.c)
 *     sub_1800194D0 @ 0x1800194D0 (sub_1800194D0.c)
 * Callees:
 *     sub_180002568 @ 0x180002568 (sub_180002568.c)
 *     sub_18000259C @ 0x18000259C (sub_18000259C.c)
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18000BC34 @ 0x18000BC34 (sub_18000BC34.c)
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 *     sub_18000D394 @ 0x18000D394 (sub_18000D394.c)
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_180012108 @ 0x180012108 (sub_180012108.c)
 *     sub_18001271C @ 0x18001271C (sub_18001271C.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_18001370C @ 0x18001370C (sub_18001370C.c)
 *     sub_1800188EC @ 0x1800188EC (sub_1800188EC.c)
 *     sub_180019730 @ 0x180019730 (sub_180019730.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     memset @ 0x18002654C (memset.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18000F804(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // esi
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rdx
  HRESULT v12; // eax
  HSTRING v13; // rsi
  __int64 v14; // rdi
  int ActivationFactory; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edx
  __int64 v19; // rdi
  int v20; // eax
  const wchar_t *v21; // rdi
  int v22; // eax
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  const wchar_t *v40; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v42[3]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-80h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v45[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v46; // [rsp+C8h] [rbp-40h]
  int *v47; // [rsp+D0h] [rbp-38h]
  int *v48; // [rsp+D8h] [rbp-30h]
  int v49; // [rsp+E0h] [rbp-28h] BYREF
  char v50; // [rsp+E4h] [rbp-24h]
  __int64 v51; // [rsp+108h] [rbp+0h]
  int v52; // [rsp+110h] [rbp+8h] BYREF
  const char *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  char v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  _BYTE v57[144]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  __int64 v60; // [rsp+1D8h] [rbp+D0h]
  __int64 v61; // [rsp+1E0h] [rbp+D8h]
  HSTRING_HEADER v62; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v63; // [rsp+200h] [rbp+F8h]
  __int64 retaddr; // [rsp+250h] [rbp+148h]

  v42[1] = -2LL;
  v42[2] = a3;
  v6 = *((_QWORD *)sub_18000BC34() + 1);
  v45[1] = 0LL;
  v45[2] = v45;
  v45[3] = 0LL;
  v46 = 0;
  v47 = &v52;
  v48 = &v49;
  v49 = 0;
  v50 = 0;
  v51 = v6;
  v55 = 0;
  v52 = 0;
  v53 = "SendAppServiceMessageActivity";
  v54 = 0LL;
  v56 = 1LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(v57, 0, sizeof(v57));
  v60 = 0LL;
  v61 = 0LL;
  v45[0] = off_18002E4D8;
  sub_18000CF70((__int64)v45, a2);
  v38 = 0LL;
  v40 = L"Windows.Foundation.Collections.ValueSet";
  v7 = *(_QWORD *)(sub_1800188EC(&v62) + 24);
  *(_QWORD *)&v38 = 0LL;
  v8 = RoActivateInstance(v7, &v41);
  if ( v8 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int128 *))v41)(v41, &qword_18002BE48, &v38);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v63 = 0LL;
  if ( v8 < 0 )
  {
    v9 = v8;
    v10 = 115;
LABEL_5:
    sub_1800025D0(retaddr, v10, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v9);
    goto LABEL_13;
  }
  string = 0LL;
  v12 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    sub_18000263C(v12);
    __debugbreak();
  }
  v13 = string;
  v14 = *((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) )
  {
    *((_QWORD *)&v38 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  ActivationFactory = RoGetActivationFactory(v13, &unk_18002C2F8, (char *)&v38 + 8);
  v8 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    v9 = ActivationFactory;
    v10 = 117;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_13:
  LODWORD(v39) = v8;
  v16 = sub_180012108(&v38, v11, a2);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = 388;
LABEL_15:
    sub_1800025D0(retaddr, v18, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v16);
LABEL_45:
    v31 = *((_QWORD *)&v38 + 1);
    if ( *((_QWORD *)&v38 + 1) )
    {
      *((_QWORD *)&v38 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v38;
    if ( (_QWORD)v38 )
    {
      *(_QWORD *)&v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v45[0] = off_18002E4D8;
    sub_18001370C(v45);
    sub_18000D394((__int64)v45);
    sub_18001271C(a3);
    return (unsigned int)v17;
  }
  v19 = *(_QWORD *)(a3 + 96);
  if ( v19 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v19 + 16LL))(*(_QWORD *)(a3 + 96), &v38);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 393;
      goto LABEL_15;
    }
  }
  v40 = 0LL;
  v20 = sub_18000FF28(a1, &v40);
  v17 = v20;
  if ( v20 < 0 )
  {
    sub_1800025D0(retaddr, 398, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v20);
    if ( v40 )
      (*(void (__fastcall **)(const wchar_t *))(*(_QWORD *)v40 + 16LL))(v40);
    goto LABEL_45;
  }
  v36 = 0LL;
  v21 = v40;
  v22 = (*(__int64 (__fastcall **)(const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v40 + 88LL))(v40, v38, &v36);
  v17 = v22;
  if ( v22 < 0 )
  {
    sub_180002568(retaddr, 108, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v22);
LABEL_41:
    v30 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    goto LABEL_43;
  }
  v37 = 0LL;
  v23 = v36;
  v17 = sub_180019730(v36);
  if ( v17 < 0 || (v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 64LL))(v23, &v37), v17 < 0) )
  {
    sub_180002568(retaddr, 112, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v17);
LABEL_39:
    v29 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    goto LABEL_41;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v37 + 56LL))(v37, v42);
  v17 = v24;
  if ( v24 < 0 )
  {
    sub_1800025D0(retaddr, 114, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v24);
    goto LABEL_39;
  }
  if ( LODWORD(v42[0]) )
  {
    v17 = -2147023269;
    sub_18000259C(
      retaddr,
      116,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      2147944027LL,
      (__int64)"AppServiceResponseStatus: %d",
      LODWORD(v42[0]));
    v25 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    goto LABEL_44;
  }
  v27 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v17 = 0;
LABEL_43:
  if ( v17 < 0 )
  {
LABEL_44:
    sub_1800025D0(retaddr, 399, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v17);
    (*(void (__fastcall **)(const wchar_t *))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_45;
  }
  sub_180012F50(v45);
  (*(void (__fastcall **)(const wchar_t *))(*(_QWORD *)v21 + 16LL))(v21);
  v34 = *((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) )
  {
    *((_QWORD *)&v38 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v38;
  if ( (_QWORD)v38 )
  {
    *(_QWORD *)&v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v45[0] = off_18002E4D8;
  sub_18001370C(v45);
  sub_18000D394((__int64)v45);
  sub_18001271C(a3);
  return 0LL;
}
