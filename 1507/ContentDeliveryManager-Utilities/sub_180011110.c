/*
 * XREFs of sub_180011110 @ 0x180011110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800101E4 @ 0x1800101E4 (sub_1800101E4.c)
 *     sub_18001040C @ 0x18001040C (sub_18001040C.c)
 *     sub_18001066C @ 0x18001066C (sub_18001066C.c)
 *     sub_180010860 @ 0x180010860 (sub_180010860.c)
 *     sub_180010970 @ 0x180010970 (sub_180010970.c)
 *     sub_180010BA0 @ 0x180010BA0 (sub_180010BA0.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180011110(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // edx
  __int64 v9; // rdx
  bool v10; // bl
  __int64 v11; // rdx
  HRESULT v12; // eax
  int v13; // eax
  int v14; // edx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  HSTRING v17; // rsi
  HSTRING v18; // rdi
  __int64 v19; // rsi
  _QWORD *v20; // rax
  int v21; // eax
  int v22; // edx
  __int64 v23; // rsi
  __int64 (__fastcall ***v24)(_QWORD, void *, __int64 *); // rdi
  int v25; // eax
  void *v26; // rbx
  int v27; // edx
  __int64 (__fastcall ***v28)(_QWORD, void *, __int64 *); // rsi
  __int64 v29; // rsi
  char v31; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v32[7]; // [rsp+21h] [rbp-5Fh] BYREF
  HSTRING string1; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  INT32 result; // [rsp+38h] [rbp-48h] BYREF
  __int64 v36; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v37[1] = -2LL;
  v36 = 0LL;
  v5 = sub_1800101E4(&v36);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_1800025D0(retaddr, 603, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v5);
    goto LABEL_49;
  }
  v34 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v36 + 64LL))(
         v36,
         &v34);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 606;
LABEL_7:
    sub_1800025D0(retaddr, v8, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v7);
    goto LABEL_47;
  }
  v7 = sub_180010860(v34, (__int64)L"LastCreativeId", &v31);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 610;
    goto LABEL_7;
  }
  v10 = 0;
  if ( v31 )
  {
    string1 = 0LL;
    WindowsDeleteString(0LL);
    string1 = 0LL;
    sub_18001066C(v34, v11, &string1);
    result = 0;
    v12 = WindowsCompareStringOrdinal(string1, a2, &result);
    if ( v12 < 0 )
    {
      sub_18000263C(v12);
    }
    else
    {
      v10 = result != 0;
      WindowsDeleteString(string1);
      if ( v31 && !v10 )
        goto LABEL_26;
    }
  }
  sub_180010BA0(v34, v9, (__int64)a2);
  if ( v10 )
  {
    string1 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v36 + 72LL))(v36, &string1);
    v6 = v13;
    if ( v13 < 0 )
    {
      v14 = 629;
LABEL_22:
      sub_1800025D0(
        retaddr,
        v14,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        v13);
      v17 = string1;
      if ( !string1 )
        goto LABEL_47;
      string1 = 0LL;
      goto LABEL_46;
    }
    v13 = (*(__int64 (__fastcall **)(HSTRING, INT32 *))(*(_QWORD *)string1 + 56LL))(string1, &result);
    v6 = v13;
    if ( v13 < 0 )
    {
      v14 = 632;
      goto LABEL_22;
    }
    if ( result )
    {
      v15 = v36;
      v16 = (_QWORD *)sub_180018488((HSTRING *)pv);
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 88LL))(v15, *v16);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 635;
        goto LABEL_22;
      }
    }
    v18 = string1;
    if ( string1 )
    {
      string1 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
LABEL_26:
  v37[0] = 0LL;
  v19 = v36;
  v20 = (_QWORD *)sub_180018488((HSTRING *)pv);
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v19 + 80LL))(v19, *v20, 0LL, v37);
  v6 = v21;
  if ( v21 >= 0 )
  {
    v23 = v37[0];
    v24 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v24)[2])(v24);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v23 + 64LL))(
            v23,
            &v34);
    v6 = v21;
    if ( v21 < 0 )
    {
      v22 = 643;
      goto LABEL_32;
    }
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    v25 = sub_18001040C(a3, pv);
    v6 = v25;
    v26 = pv[0];
    if ( v25 >= 0 )
    {
      v25 = sub_180010860(v34, (__int64)pv[0], v32);
      v6 = v25;
      if ( v25 >= 0 )
      {
        if ( v32[0]
          || (GetSystemTimeAsFileTime((LPFILETIME)&string1),
              v25 = sub_180010970(v34, (__int64)v26, (__int64)string1),
              v6 = v25,
              v25 >= 0) )
        {
          v6 = 0;
LABEL_42:
          if ( v26 )
            CoTaskMemFree(v26);
          goto LABEL_44;
        }
        v27 = 653;
      }
      else
      {
        v27 = 649;
      }
    }
    else
    {
      v27 = 646;
    }
    sub_1800025D0(retaddr, v27, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v25);
    goto LABEL_42;
  }
  v22 = 642;
LABEL_32:
  sub_1800025D0(retaddr, v22, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v21);
LABEL_44:
  v17 = (HSTRING)v37[0];
  if ( !v37[0] )
    goto LABEL_47;
  v37[0] = 0LL;
LABEL_46:
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_47:
  v28 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v28)[2])(v28);
  }
LABEL_49:
  v29 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return v6;
}
