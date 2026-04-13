/*
 * XREFs of sub_180010DF0 @ 0x180010DF0
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
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180010DF0(__int64 a1, HSTRING a2, unsigned int a3, _BYTE *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edx
  __int64 v11; // rdx
  HRESULT v12; // eax
  __int64 v13; // rsi
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // edx
  __int64 v17; // rsi
  __int64 (__fastcall ***v18)(_QWORD, void *, __int64 *); // rdi
  int v19; // eax
  void *v20; // rbx
  int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 (__fastcall ***v24)(_QWORD, void *, __int64 *); // rsi
  __int64 v25; // rsi
  char v27; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v28[7]; // [rsp+21h] [rbp-5Fh] BYREF
  __int64 (__fastcall ***v29)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-58h] BYREF
  INT32 result[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string1[2]; // [rsp+40h] [rbp-40h] BYREF
  LPVOID pv[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+38h]

  string1[1] = (HSTRING)-2LL;
  *a4 = 0;
  v31 = 0LL;
  v7 = sub_1800101E4(&v31);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_1800025D0(retaddr, 568, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v7);
    goto LABEL_38;
  }
  v29 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v31 + 64LL))(
         v31,
         &v29);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 571;
LABEL_7:
    sub_1800025D0(retaddr, v10, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v9);
    goto LABEL_36;
  }
  v9 = sub_180010860(v29, (__int64)L"LastCreativeId", &v27);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 574;
    goto LABEL_7;
  }
  if ( v27 )
  {
    string1[0] = 0LL;
    WindowsDeleteString(0LL);
    string1[0] = 0LL;
    sub_18001066C(v29, v11, string1);
    result[0] = 0;
    v12 = WindowsCompareStringOrdinal(string1[0], a2, result);
    if ( v12 < 0 )
    {
      sub_18000263C(v12);
    }
    else
    {
      if ( !result[0] )
      {
        *(_QWORD *)result = 0LL;
        v13 = v31;
        v14 = (_QWORD *)sub_180018488((HSTRING *)pv);
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, INT32 *))(*(_QWORD *)v13 + 80LL))(
                v13,
                *v14,
                0LL,
                result);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 583;
LABEL_17:
          sub_1800025D0(
            retaddr,
            v16,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            v15);
LABEL_24:
          v22 = *(_QWORD *)result;
          if ( *(_QWORD *)result )
          {
            *(_QWORD *)result = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          WindowsDeleteString(string1[0]);
          goto LABEL_36;
        }
        v17 = *(_QWORD *)result;
        v18 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v18)[2])(v18);
        }
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v17 + 64LL))(
                v17,
                &v29);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 584;
          goto LABEL_17;
        }
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        pv[2] = (LPVOID)-1LL;
        v19 = sub_18001040C(a3, pv);
        v8 = v19;
        v20 = pv[0];
        if ( v19 < 0 )
        {
          v21 = 588;
          goto LABEL_22;
        }
        v19 = sub_180010860(v29, (__int64)pv[0], v28);
        v8 = v19;
        if ( v19 < 0 )
        {
          v21 = 589;
LABEL_22:
          sub_1800025D0(
            retaddr,
            v21,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            v19);
          if ( v20 )
            CoTaskMemFree(v20);
          goto LABEL_24;
        }
        if ( v28[0] )
          *a4 = 1;
        if ( v20 )
          CoTaskMemFree(v20);
        v23 = *(_QWORD *)result;
        if ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
      WindowsDeleteString(string1[0]);
    }
  }
  v8 = 0;
LABEL_36:
  v24 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v24)[2])(v24);
  }
LABEL_38:
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v8;
}
