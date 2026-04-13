/*
 * XREFs of sub_180020654 @ 0x180020654
 * Callers:
 *     sub_18000EEB0 @ 0x18000EEB0 (sub_18000EEB0.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     sub_180020D68 @ 0x180020D68 (sub_180020D68.c)
 *     sub_180020E24 @ 0x180020E24 (sub_180020E24.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180020654(_QWORD *a1, HSTRING a2)
{
  int ActivationFactory; // eax
  unsigned int v4; // edi
  __int64 (__fastcall ***v5)(_QWORD, void *, _QWORD *); // rsi
  HSTRING *v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // r9d
  int v10; // edx
  const WCHAR *StringRawBuffer; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  PCWSTR v17; // rax
  __int64 i; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // r9d
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  PCWSTR v27; // rbx
  PCWSTR v28; // rax
  __int64 v29; // rdi
  _WORD *v30; // rax
  int v31; // edx
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 (__fastcall ***v35)(_QWORD, void *, _QWORD *); // rsi
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 (__fastcall ***v38)(_QWORD, void *, _QWORD *); // rsi
  char v40[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v41; // [rsp+38h] [rbp-51h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp-49h] BYREF
  HSTRING v43; // [rsp+48h] [rbp-41h] BYREF
  __int64 v44; // [rsp+50h] [rbp-39h] BYREF
  __int64 v45; // [rsp+58h] [rbp-31h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp-29h] BYREF
  HSTRING v47; // [rsp+68h] [rbp-21h] BYREF
  __int64 v48; // [rsp+70h] [rbp-19h] BYREF
  __int64 v49; // [rsp+78h] [rbp-11h] BYREF
  HSTRING v50; // [rsp+80h] [rbp-9h] BYREF
  HSTRING v51; // [rsp+88h] [rbp-1h] BYREF
  HSTRING v52; // [rsp+90h] [rbp+7h] BYREF
  HSTRING string; // [rsp+98h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+17h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]

  v43 = a2;
  v42 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &unk_18002C0F0, &v42);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    sub_1800025D0(
      retaddr,
      39,
      (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      ActivationFactory);
    goto LABEL_88;
  }
  v5 = v42;
  v44 = 0LL;
  v6 = sub_180018488(&string, (const WCHAR **)&v43);
  v7 = (*v5)[6](v5, *v6, &v44);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v51 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 136LL))(v44, &v51);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = v8;
      v10 = 45;
LABEL_11:
      sub_1800025D0(
        retaddr,
        v10,
        (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        v9);
LABEL_84:
      if ( v51 )
        WindowsDeleteString(v51);
      goto LABEL_86;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v51, 0LL);
    v12 = -1LL;
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"creative-ms", -1, 1) != 2 )
    {
      v4 = -2147024809;
      v10 = 46;
      v9 = -2147024809;
      goto LABEL_11;
    }
    v52 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 104LL))(v44, &v52);
    v4 = v13;
    if ( v13 < 0 )
    {
      sub_1800025D0(
        retaddr,
        50,
        (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        v13);
LABEL_82:
      if ( v52 )
        WindowsDeleteString(v52);
      goto LABEL_84;
    }
    v49 = 0LL;
    v14 = (**v42)(v42, &unk_18002BE58, &v49);
    v4 = v14;
    if ( v14 < 0 )
    {
      sub_1800025D0(
        retaddr,
        54,
        (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        v14);
LABEL_80:
      v36 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      goto LABEL_82;
    }
    v50 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v49 + 48LL))(v49, v52, &v50);
    v4 = v15;
    if ( v15 >= 0 )
    {
      v17 = WindowsGetStringRawBuffer(v50, 0LL);
      v15 = sub_180020E24(a1, v17);
      v4 = v15;
      if ( v15 >= 0 )
      {
        if ( a1[1] == -1LL )
        {
          if ( *a1 )
          {
            do
              ++v12;
            while ( *(_WORD *)(*a1 + 2 * v12) );
          }
          else
          {
            v12 = 0LL;
          }
          a1[1] = v12;
        }
        for ( i = a1[1]; i; --i )
        {
          if ( !wcschr(Str, *(_WORD *)(*a1 + 2 * i - 2)) )
            break;
        }
        if ( i != a1[1] )
        {
          *(_WORD *)(*a1 + 2 * i) = 0;
          a1[1] = i;
        }
        v46 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v44 + 120LL))(
                v44,
                &v46);
        v4 = v19;
        if ( v19 >= 0 )
        {
          v48 = 0LL;
          v20 = (**v46)(v46, &unk_180031B58, &v48);
          v4 = v20;
          if ( v20 >= 0 )
          {
            v45 = 0LL;
            v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 48LL))(v48, &v45);
            v4 = v21;
            if ( v21 >= 0 )
            {
              v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 56LL))(v45, v40);
              v4 = v24;
              if ( v24 >= 0 )
              {
                while ( v40[0] )
                {
                  v41 = 0LL;
                  v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, &v41);
                  v4 = v25;
                  if ( v25 < 0 )
                  {
                    sub_1800025D0(
                      retaddr,
                      73,
                      (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      v25);
                    goto LABEL_66;
                  }
                  v43 = 0LL;
                  v47 = 0LL;
                  v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 48LL))(v41, &v43);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 77;
LABEL_61:
                    sub_1800025D0(
                      retaddr,
                      v31,
                      (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      v26);
                    if ( v47 )
                      WindowsDeleteString(v47);
                    if ( v43 )
                      WindowsDeleteString(v43);
LABEL_66:
                    v32 = v41;
                    if ( v41 )
                    {
                      v41 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                    }
                    goto LABEL_72;
                  }
                  v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 56LL))(v41, &v47);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 78;
                    goto LABEL_61;
                  }
                  v27 = WindowsGetStringRawBuffer(v47, 0LL);
                  v28 = WindowsGetStringRawBuffer(v43, 0LL);
                  v26 = sub_180020D68(a1, v28, v27);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 79;
                    goto LABEL_61;
                  }
                  v26 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 64LL))(v45, v40);
                  v4 = v26;
                  if ( v26 < 0 )
                  {
                    v31 = 81;
                    goto LABEL_61;
                  }
                  if ( v47 )
                    WindowsDeleteString(v47);
                  if ( v43 )
                    WindowsDeleteString(v43);
                  v29 = v41;
                  if ( v41 )
                  {
                    v41 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                  }
                }
                if ( *a1 && *(_WORD *)*a1 )
                {
                  v30 = (_WORD *)a1[3];
                  if ( v30 && *v30 )
                  {
                    v4 = 0;
                    goto LABEL_72;
                  }
                  v23 = 86;
                }
                else
                {
                  v23 = 85;
                }
                v4 = -2147024809;
                v22 = -2147024809;
              }
              else
              {
                v22 = v24;
                v23 = 69;
              }
            }
            else
            {
              v22 = v21;
              v23 = 67;
            }
            sub_1800025D0(
              retaddr,
              v23,
              (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              v22);
LABEL_72:
            v33 = v45;
            if ( v45 )
            {
              v45 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
          }
          else
          {
            sub_1800025D0(
              retaddr,
              64,
              (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              v20);
          }
          v34 = v48;
          if ( v48 )
          {
            v48 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
        else
        {
          sub_1800025D0(
            retaddr,
            62,
            (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
            v19);
        }
        v35 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v35)[2])(v35);
        }
        goto LABEL_78;
      }
      v16 = 57;
    }
    else
    {
      v16 = 56;
    }
    sub_1800025D0(
      retaddr,
      v16,
      (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      v15);
LABEL_78:
    if ( v50 )
      WindowsDeleteString(v50);
    goto LABEL_80;
  }
  sub_1800025D0(
    retaddr,
    42,
    (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    v7);
LABEL_86:
  v37 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_88:
  v38 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v38)[2])(v38);
  }
  return v4;
}
