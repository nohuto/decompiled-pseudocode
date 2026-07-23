/*
 * XREFs of Template_pqzzzzzzz @ 0x1401CE654
 * Callers:
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqzzzzzzz(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rax
  int v6; // r9d
  const wchar_t *v7; // r10
  const wchar_t *v8; // rax
  __int64 v9; // rax
  int v10; // r9d
  const wchar_t *v11; // rax
  __int64 v12; // rax
  int v13; // r9d
  const wchar_t *v14; // rax
  __int64 v15; // rax
  int v16; // r9d
  const wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  const wchar_t *v20; // rax
  __int64 v21; // rax
  int v22; // r9d
  const wchar_t *v23; // rax
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-89h] BYREF
  va_list v27; // [rsp+48h] [rbp-79h]
  __int64 v28; // [rsp+50h] [rbp-71h]
  const wchar_t *v29; // [rsp+58h] [rbp-69h]
  int v30; // [rsp+60h] [rbp-61h]
  int v31; // [rsp+64h] [rbp-5Dh]
  const wchar_t *v32; // [rsp+68h] [rbp-59h]
  int v33; // [rsp+70h] [rbp-51h]
  int v34; // [rsp+74h] [rbp-4Dh]
  const wchar_t *v35; // [rsp+78h] [rbp-49h]
  int v36; // [rsp+80h] [rbp-41h]
  int v37; // [rsp+84h] [rbp-3Dh]
  const wchar_t *v38; // [rsp+88h] [rbp-39h]
  int v39; // [rsp+90h] [rbp-31h]
  int v40; // [rsp+94h] [rbp-2Dh]
  const wchar_t *v41; // [rsp+98h] [rbp-29h]
  int v42; // [rsp+A0h] [rbp-21h]
  int v43; // [rsp+A4h] [rbp-1Dh]
  const wchar_t *v44; // [rsp+A8h] [rbp-19h]
  int v45; // [rsp+B0h] [rbp-11h]
  int v46; // [rsp+B4h] [rbp-Dh]
  const wchar_t *v47; // [rsp+B8h] [rbp-9h]
  int v48; // [rsp+C0h] [rbp-1h]
  int v49; // [rsp+C4h] [rbp+3h]
  __int64 v50; // [rsp+100h] [rbp+3Fh] BYREF
  va_list va; // [rsp+100h] [rbp+3Fh]
  __int64 v52; // [rsp+108h] [rbp+47h] BYREF
  va_list va1; // [rsp+108h] [rbp+47h]
  const wchar_t *v54; // [rsp+110h] [rbp+4Fh]
  const wchar_t *v55; // [rsp+118h] [rbp+57h]
  const wchar_t *v56; // [rsp+120h] [rbp+5Fh]
  const wchar_t *v57; // [rsp+128h] [rbp+67h]
  const wchar_t *v58; // [rsp+130h] [rbp+6Fh]
  const wchar_t *v59; // [rsp+138h] [rbp+77h]
  const wchar_t *v60; // [rsp+140h] [rbp+7Fh]
  va_list va2; // [rsp+148h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v50 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v52 = va_arg(va2, _QWORD);
  v54 = va_arg(va2, const wchar_t *);
  v55 = va_arg(va2, const wchar_t *);
  v56 = va_arg(va2, const wchar_t *);
  v57 = va_arg(va2, const wchar_t *);
  v58 = va_arg(va2, const wchar_t *);
  v59 = va_arg(va2, const wchar_t *);
  v60 = va_arg(va2, const wchar_t *);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v3 = -1LL;
  va_copy(v27, va1);
  v28 = 4LL;
  v4 = 10;
  if ( v54 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v54[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v30 = v6;
  v7 = L"NULL";
  v31 = 0;
  v8 = L"NULL";
  if ( v54 )
    v8 = v54;
  v29 = v8;
  if ( v55 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v55[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v33 = v10;
  v11 = L"NULL";
  v34 = 0;
  if ( v55 )
    v11 = v55;
  v32 = v11;
  if ( v56 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v56[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v36 = v13;
  v14 = L"NULL";
  v37 = 0;
  if ( v56 )
    v14 = v56;
  v35 = v14;
  if ( v57 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v57[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v39 = v16;
  v17 = L"NULL";
  v40 = 0;
  if ( v57 )
    v17 = v57;
  v38 = v17;
  if ( v58 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v58[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v42 = v19;
  v20 = L"NULL";
  v43 = 0;
  if ( v58 )
    v20 = v58;
  v41 = v20;
  if ( v59 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v59[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v45 = v22;
  v23 = L"NULL";
  v46 = 0;
  if ( v59 )
    v23 = v59;
  v44 = v23;
  v24 = v60 == 0LL;
  if ( v60 )
  {
    do
      ++v3;
    while ( v60[v3] );
    v4 = 2 * v3 + 2;
    v24 = v60 == 0LL;
  }
  if ( !v24 )
    v7 = v60;
  v48 = v4;
  v47 = v7;
  v49 = 0;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DevQuery_QueryStart, a3, 9u, &UserData);
}
