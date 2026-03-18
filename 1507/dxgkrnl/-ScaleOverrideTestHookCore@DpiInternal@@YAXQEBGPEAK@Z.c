/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C0008804
 * Callers:
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0009DF4 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h]
  wchar_t *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h]
  const wchar_t *v30; // [rsp+88h] [rbp-78h]
  int *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  _BYTE v38[32]; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t pszDest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v40[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(pszDest, 0x16uLL, L"%d", v10);
  v12 = v11;
  if ( v11 < 0
    || (v13 = RtlStringCbPrintfW(
                v40,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                pszDest),
        v12 = v13,
        v13 < 0) )
  {
    v17 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v17 + 24) = v12;
    *(_QWORD *)(v17 + 32) = v10;
    WdLogEvent5_WdAssertion(v17);
  }
  else
  {
    v20 = 0;
    v23 = v40;
    v19 = 0;
    v30 = L"DesktopScaleFactor";
    v21 = 0LL;
    v31 = &v20;
    v33 = &v19;
    v22 = 5;
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 288;
    v32 = 0x4000000;
    v34 = 4;
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    memset(v38, 0, sizeof(v38));
    v14 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v21, 0LL, 0LL);
    v16 = v14;
    if ( v14 >= 0 )
    {
      if ( v20 != v19 )
        *(_DWORD *)a2 = v20;
    }
    else if ( v14 != -1073741772 )
    {
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = v16;
      WdLogEvent5_WdError(v18);
    }
  }
}
