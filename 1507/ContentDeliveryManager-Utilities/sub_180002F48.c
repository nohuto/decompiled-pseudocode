/*
 * XREFs of sub_180002F48 @ 0x180002F48
 * Callers:
 *     sub_180003BF0 @ 0x180003BF0 (sub_180003BF0.c)
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_1800079F0 @ 0x1800079F0 (sub_1800079F0.c)
 * Callees:
 *     sub_18000259C @ 0x18000259C (sub_18000259C.c)
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18001FEC4 @ 0x18001FEC4 (sub_18001FEC4.c)
 *     sub_18001FFE8 @ 0x18001FFE8 (sub_18001FFE8.c)
 *     sub_180020420 @ 0x180020420 (sub_180020420.c)
 *     sub_180020504 @ 0x180020504 (sub_180020504.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180002F48(void *a1, int a2)
{
  int v2; // eax
  signed int v3; // ebx
  signed int LastError; // eax
  char *v6; // rcx
  const WCHAR **v7; // rbx
  const wchar_t *v8; // rsi
  __int64 v9; // rdx
  const WCHAR *v10; // r8
  const WCHAR *v11; // rcx
  void *v12; // rdi
  LPVOID pv; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  LPVOID v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  HANDLE hObject; // [rsp+A0h] [rbp+30h] BYREF
  int v21; // [rsp+A8h] [rbp+38h] BYREF
  PSID Sid; // [rsp+B0h] [rbp+40h]

  v21 = a2;
  hObject = a1;
  v2 = sub_180020504(0LL, &v21);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( !(_BYTE)v21 )
      return 0LL;
    v14 = -1LL;
    v15 = -1LL;
    pv = 0LL;
    hObject = 0LL;
    v3 = sub_180020420(0LL, 0LL, &hObject);
    if ( v3 >= 0 )
    {
      pv = 0LL;
      v3 = sub_18001FFE8(hObject);
      if ( v3 >= 0 )
      {
        if ( ConvertSidToStringSidW(Sid, (LPWSTR *)&pv) )
        {
          v3 = 0;
        }
        else
        {
          LastError = GetLastError();
          v3 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v3 = LastError;
          if ( v3 >= 0 )
            v3 = -2147467259;
        }
        LocalFree(Sid);
      }
    }
    v6 = (char *)hObject;
    hObject = 0LL;
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v6);
    if ( v3 >= 0 )
    {
      v7 = (const WCHAR **)&off_18002BBE0;
      v8 = (const wchar_t *)&unk_18002B65C;
      do
      {
        LODWORD(v9) = v14;
        if ( v14 == -1 )
        {
          if ( pv )
          {
            v9 = -1LL;
            do
              ++v9;
            while ( *((_WORD *)pv + v9) );
          }
          else
          {
            LODWORD(v9) = 0;
          }
        }
        v10 = (const WCHAR *)&unk_18002B65C;
        if ( *v7 )
          v10 = *v7;
        v11 = (const WCHAR *)&unk_18002B65C;
        if ( pv )
          v11 = (const WCHAR *)pv;
        if ( CompareStringOrdinal(v11, v9, v10, -(*v7 != 0LL), 1) == 2 )
        {
          v3 = 0;
          goto LABEL_37;
        }
        ++v7;
      }
      while ( (__int64)v7 < (__int64)&unk_18002BBE8 );
      v16 = 0LL;
      v17 = -1LL;
      v18 = -1LL;
      sub_18001FEC4(&v16);
      v12 = v16;
      if ( v16 )
        v8 = (const wchar_t *)v16;
      v3 = -2147024891;
      sub_18000259C(
        retaddr,
        108,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\lockscreencategoryconfig.h",
        2147942405LL,
        (__int64)"%ls",
        v8);
      if ( v12 )
      {
        CoTaskMemFree(v12);
        v16 = 0LL;
      }
      v17 = 0LL;
      v18 = 0LL;
    }
    else
    {
      sub_1800025D0(retaddr, 92, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\lockscreencategoryconfig.h", v3);
    }
LABEL_37:
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v14 = 0LL;
    v15 = 0LL;
  }
  else
  {
    sub_1800025D0(retaddr, 88, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\lockscreencategoryconfig.h", v2);
  }
  return (unsigned int)v3;
}
