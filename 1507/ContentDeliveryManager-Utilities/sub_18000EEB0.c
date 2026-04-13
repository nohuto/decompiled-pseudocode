/*
 * XREFs of sub_18000EEB0 @ 0x18000EEB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     sub_180026074 @ 0x180026074 (sub_180026074.c)
 *     sub_180026450 @ 0x180026450 (sub_180026450.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18000EEB0(__int64 a1, int a2, HSTRING a3, HSTRING a4, __int64 a5, __int64 a6)
{
  PCWSTR StringRawBuffer; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // edx
  __int64 v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rax
  HSTRING v17; // rsi
  HSTRING v18; // rdi
  HSTRING v19; // rbx
  HSTRING *v20; // rax
  HSTRING string; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v23; // [rsp+88h] [rbp-78h] BYREF
  HSTRING v24; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING v25; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v26[36]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+268h] [rbp+168h]

  sub_180026450(v26, 24LL, 12LL, unknown_libname_1, sub_180004240);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = sub_180020654(v26, StringRawBuffer);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v26[6];
    v15 = &unk_180031B70;
    while ( *v15 != a2 )
    {
      v15 += 2;
      if ( v15 == (_DWORD *)&unk_180031BC0 )
        goto LABEL_9;
    }
    if ( v15[1] != -1 )
    {
      v16 = v26[3 * v15[1]];
      goto LABEL_10;
    }
LABEL_9:
    v16 = 0LL;
LABEL_10:
    if ( v16 )
      v17 = *(HSTRING *)sub_180018488(&string);
    else
      v17 = 0LL;
    if ( v14 )
      v18 = *(HSTRING *)sub_180018488(&v25);
    else
      v18 = 0LL;
    v19 = *(HSTRING *)sub_180018488(&v23);
    v20 = (HSTRING *)sub_180018488(&v24);
    v11 = sub_18000E270(a1, a2, *v20, v19, v18, v17, a4, a5, a6);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v12 = 0;
      goto LABEL_20;
    }
    v13 = 291;
  }
  else
  {
    v13 = 280;
  }
  sub_1800025D0(retaddr, v13, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v11);
LABEL_20:
  sub_180026074(v26, 24LL, 12LL, sub_180004240);
  return v12;
}
