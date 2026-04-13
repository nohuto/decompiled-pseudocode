/*
 * XREFs of sub_180011520 @ 0x180011520
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 *     sub_1800101E4 @ 0x1800101E4 (sub_1800101E4.c)
 *     sub_18001040C @ 0x18001040C (sub_18001040C.c)
 *     sub_180010494 @ 0x180010494 (sub_180010494.c)
 *     sub_18001066C @ 0x18001066C (sub_18001066C.c)
 *     sub_180010860 @ 0x180010860 (sub_180010860.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180011520(__int64 a1, HSTRING a2, unsigned int a3, bool *a4)
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
  void *v20; // rsi
  int v21; // edx
  __int64 v22; // rsi
  WCHAR *StringRawBuffer; // rax
  unsigned int v24; // eax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 (__fastcall ***v27)(_QWORD, void *, __int64 *); // rsi
  __int64 v28; // rsi
  char v30; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v31[7]; // [rsp+29h] [rbp-48h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-41h] BYREF
  INT32 result[2]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-31h] BYREF
  __int64 v35; // [rsp+48h] [rbp-29h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-19h] BYREF
  LPVOID pv[4]; // [rsp+68h] [rbp-9h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+5Fh]

  v37[1] = -2LL;
  *a4 = 0;
  v35 = 0LL;
  v7 = sub_1800101E4(&v35);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_1800025D0(retaddr, 664, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v7);
    goto LABEL_41;
  }
  v32 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v35 + 64LL))(
         v35,
         &v32);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 667;
LABEL_7:
    sub_1800025D0(retaddr, v10, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v9);
    goto LABEL_39;
  }
  v9 = sub_180010860(v32, (__int64)L"LastCreativeId", v31);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 670;
    goto LABEL_7;
  }
  if ( v31[0] )
  {
    string1 = 0LL;
    WindowsDeleteString(0LL);
    string1 = 0LL;
    sub_18001066C(v32, v11, &string1);
    result[0] = 0;
    v12 = WindowsCompareStringOrdinal(string1, a2, result);
    if ( v12 < 0 )
    {
      sub_18000263C(v12);
    }
    else
    {
      if ( !result[0] )
      {
        *(_QWORD *)result = 0LL;
        v13 = v35;
        v14 = (_QWORD *)sub_180018488((HSTRING *)pv);
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, INT32 *))(*(_QWORD *)v13 + 80LL))(
                v13,
                *v14,
                0LL,
                result);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 679;
LABEL_17:
          sub_1800025D0(
            retaddr,
            v16,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            v15);
LABEL_28:
          v22 = *(_QWORD *)result;
          if ( *(_QWORD *)result )
          {
            *(_QWORD *)result = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          WindowsDeleteString(string1);
          goto LABEL_39;
        }
        v17 = *(_QWORD *)result;
        v18 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v18)[2])(v18);
        }
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v17 + 64LL))(
                v17,
                &v32);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 680;
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
          v21 = 684;
          goto LABEL_26;
        }
        v19 = sub_180010860(v32, (__int64)pv[0], &v30);
        v8 = v19;
        if ( v19 < 0 )
        {
          v21 = 685;
          goto LABEL_26;
        }
        if ( v30 && !a3 )
        {
          v19 = sub_180010494(v32, (__int64)v20, v37);
          v8 = v19;
          if ( v19 < 0 )
          {
            v21 = 689;
LABEL_26:
            sub_1800025D0(
              retaddr,
              v21,
              (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              v19);
            if ( v20 )
              CoTaskMemFree(v20);
            goto LABEL_28;
          }
          StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
          v24 = sub_18000DDA8(StringRawBuffer);
          v25 = v37[0] + 10000000LL * v24;
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          *a4 = *(_QWORD *)&SystemTimeAsFileTime >= v25;
        }
        if ( v20 )
          CoTaskMemFree(v20);
        v26 = *(_QWORD *)result;
        if ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      WindowsDeleteString(string1);
    }
  }
  v8 = 0;
LABEL_39:
  v27 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v27)[2])(v27);
  }
LABEL_41:
  v28 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return v8;
}
