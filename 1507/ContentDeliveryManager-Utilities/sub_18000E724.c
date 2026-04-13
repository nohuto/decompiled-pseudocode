/*
 * XREFs of sub_18000E724 @ 0x18000E724
 * Callers:
 *     sub_180019320 @ 0x180019320 (sub_180019320.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180007120 @ 0x180007120 (sub_180007120.c)
 *     sub_180008794 @ 0x180008794 (sub_180008794.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18000BC34 @ 0x18000BC34 (sub_18000BC34.c)
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_18000C34C @ 0x18000C34C (sub_18000C34C.c)
 *     sub_18000C980 @ 0x18000C980 (sub_18000C980.c)
 *     sub_18000D2D8 @ 0x18000D2D8 (sub_18000D2D8.c)
 *     sub_18000D394 @ 0x18000D394 (sub_18000D394.c)
 *     sub_18000D450 @ 0x18000D450 (sub_18000D450.c)
 *     sub_18000ED0C @ 0x18000ED0C (sub_18000ED0C.c)
 *     sub_1800127A8 @ 0x1800127A8 (sub_1800127A8.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_18001370C @ 0x18001370C (sub_18001370C.c)
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     memset @ 0x18002654C (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000E724(__int64 a1)
{
  __int64 v2; // rdx
  WCHAR *StringRawBuffer; // rbx
  WCHAR *v4; // rax
  char v5; // al
  int v6; // esi
  int v7; // edx
  __int64 v8; // rcx
  WCHAR *v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // r12
  __int64 v14; // rdi
  unsigned int v15; // r14d
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  int v19; // ebx
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // edx
  char v25; // di
  volatile signed __int32 *v26; // rbx
  int *v27; // rax
  int v28; // edx
  char v30; // [rsp+28h] [rbp-E0h] BYREF
  char v31; // [rsp+29h] [rbp-DFh] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v34[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v35[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+88h] [rbp-80h]
  int *v37; // [rsp+90h] [rbp-78h]
  int *v38; // [rsp+98h] [rbp-70h]
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  char v40; // [rsp+A4h] [rbp-64h]
  __int64 v41; // [rsp+C8h] [rbp-40h]
  int v42; // [rsp+D0h] [rbp-38h] BYREF
  const char *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  char v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  _BYTE v47[144]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]
  __int64 v50; // [rsp+198h] [rbp+90h]
  volatile signed __int32 *v51; // [rsp+1A0h] [rbp+98h]
  _QWORD v52[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  int v53; // [rsp+1C8h] [rbp+C0h]
  int *v54; // [rsp+1D0h] [rbp+C8h]
  int *v55; // [rsp+1D8h] [rbp+D0h]
  int v56; // [rsp+1E0h] [rbp+D8h] BYREF
  char v57; // [rsp+1E4h] [rbp+DCh]
  __int64 v58; // [rsp+208h] [rbp+100h]
  int v59; // [rsp+210h] [rbp+108h] BYREF
  const char *v60; // [rsp+218h] [rbp+110h]
  __int64 v61; // [rsp+220h] [rbp+118h]
  char v62; // [rsp+228h] [rbp+120h]
  __int64 v63; // [rsp+230h] [rbp+128h]
  _BYTE v64[144]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v65; // [rsp+2C8h] [rbp+1C0h]
  __int64 v66; // [rsp+2D0h] [rbp+1C8h]
  __int64 v67; // [rsp+2D8h] [rbp+1D0h]
  __int64 v68; // [rsp+2E0h] [rbp+1D8h]
  __int64 retaddr; // [rsp+320h] [rbp+218h]

  v34[4] = -2LL;
  v2 = *((_QWORD *)sub_18000BC34() + 1);
  v35[1] = 0LL;
  v35[2] = v35;
  v35[3] = 0LL;
  v36 = 0;
  v37 = &v42;
  v38 = &v39;
  v39 = 0;
  v40 = 0;
  v41 = v2;
  v45 = 0;
  v42 = 0;
  v43 = "CreativeEventActivity";
  v44 = 0LL;
  v46 = 1LL;
  v48 = 0LL;
  v49 = 0LL;
  memset(v47, 0, sizeof(v47));
  v50 = 0LL;
  v51 = 0LL;
  v35[0] = off_18002DF30;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 40), 0LL);
  v4 = (WCHAR *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 24), 0LL);
  sub_18000C34C((__int64)v35, v4, StringRawBuffer, *(_DWORD *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 16) != 1 && *(_DWORD *)(a1 + 16) != 4 )
    goto LABEL_18;
  if ( *WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 56), 0LL) || (v5 = 0, *(_QWORD *)(a1 + 88)) )
    v5 = 1;
  if ( !v5 )
  {
    v6 = -2147024809;
    v7 = 248;
LABEL_40:
    sub_1800025D0(retaddr, v7, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v6);
    goto LABEL_42;
  }
  v8 = *((_QWORD *)sub_18000BC34() + 1);
  v52[1] = 0LL;
  v52[2] = v52;
  v52[3] = 0LL;
  v53 = 0;
  v54 = &v59;
  v55 = &v56;
  v56 = 0;
  v57 = 0;
  v58 = v8;
  v62 = 0;
  v59 = 0;
  v60 = "LaunchUriActivity";
  v61 = 0LL;
  v63 = 1LL;
  v65 = 0LL;
  v66 = 0LL;
  memset(v64, 0, sizeof(v64));
  v67 = 0LL;
  v68 = 0LL;
  v52[0] = off_18002D520;
  v9 = (WCHAR *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 56), 0LL);
  sub_18000C980((__int64)v52, v9);
  v32 = 0LL;
  v10 = sub_180007120(*(_QWORD *)a1, &xmmword_18002BAA8, &v32);
  v6 = v10;
  v11 = v32;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
            *(_QWORD *)(a1 + 88),
            v32,
            *(_QWORD *)(a1 + 56));
    v6 = v10;
    if ( v10 < 0 )
    {
      v12 = 255;
      goto LABEL_12;
    }
    sub_180012F50(v52);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v52[0] = off_18002D520;
    sub_18001370C(v52);
    sub_18000D394((__int64)v52);
LABEL_18:
    v34[0] = a1 + 24;
    v34[1] = a1 + 40;
    v34[2] = a1 + 72;
    v34[3] = a1;
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_QWORD *)(a1 + 96);
    v15 = *(_DWORD *)(a1 + 16);
    v30 = 0;
    if ( v15 > 0xB )
      goto LABEL_28;
    v16 = 2053;
    if ( !_bittest(&v16, v15) || !v14 )
      goto LABEL_28;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v14 + 48LL))(v14, v13, v15, &v31);
    v19 = v17;
    if ( v17 < 0 )
      sub_180008794(retaddr, 159, v18, v17);
    if ( v19 || !v31 )
      goto LABEL_28;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v14 + 64LL))(v14, v13, v15, &v30);
    if ( v20 < 0 )
      sub_180008794(retaddr, 164, v21, v20);
    if ( v30 )
    {
LABEL_28:
      v22 = sub_18000ED0C(v34, v15);
      v6 = v22;
      if ( v22 < 0 )
      {
        sub_1800025D0(
          retaddr,
          170,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          v22);
LABEL_38:
        if ( v6 >= 0 )
        {
          sub_1800127A8(v35);
          v6 = 0;
          goto LABEL_42;
        }
        v7 = 265;
        goto LABEL_40;
      }
      if ( v14 )
      {
        v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 56LL))(v14, v13, v15);
        v6 = v23;
        if ( v23 < 0 )
        {
          v24 = 173;
LABEL_33:
          sub_1800025D0(
            retaddr,
            v24,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            v23);
          goto LABEL_38;
        }
      }
      if ( v30 )
      {
        v23 = sub_18000ED0C(v34, 12LL);
        v6 = v23;
        if ( v23 < 0 )
        {
          v24 = 179;
          goto LABEL_33;
        }
      }
    }
    v6 = 0;
    goto LABEL_38;
  }
  v12 = 254;
LABEL_12:
  sub_1800025D0(retaddr, v12, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v52[0] = off_18002D520;
  sub_18001370C(v52);
  sub_18000D394((__int64)v52);
LABEL_42:
  v35[0] = off_18002DF30;
  v25 = 1;
  if ( !v51 )
    goto LABEL_53;
  sub_180014A2C(v35, &SRWLock);
  if ( !v51 || *v51 != 1 )
  {
    v25 = 0;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51, 0xFFFFFFFF) == 1 )
      {
        v26 = v51;
        if ( v51 )
        {
          sub_18000D450((__int64)(v51 + 2));
          operator delete((void *)v26);
        }
      }
      v51 = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v25 )
  {
LABEL_53:
    v27 = v38;
    if ( *v38 == 1 )
    {
      v28 = -2147024322;
      if ( v38[23] < 0 )
        v28 = v38[23];
      if ( v38[20] < 1 )
        __fastfail(7u);
      if ( v38[21] >= 0 )
        v38[21] = v28;
      --v27[20];
      sub_18000BE40((__int64)v35);
    }
  }
  sub_18000D2D8((__int64)v35);
  return (unsigned int)v6;
}
