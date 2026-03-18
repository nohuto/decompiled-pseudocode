/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x1C002236C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  __int64 v5; // rdi
  const char *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // r8
  __int64 v18; // rbx
  __int64 v20; // r10
  __int64 v21; // r10
  const char *v22; // r13
  __int64 v23; // r9
  __int64 v24; // r9
  const char *v25; // r12
  __int64 v26; // r8
  const char *v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rcx
  const char *v30; // rdx
  int v31; // [rsp+28h] [rbp-A9h]
  __int64 v33; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v35; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v37; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v39; // [rsp+148h] [rbp+77h]
  const char *v40; // [rsp+150h] [rbp+7Fh]
  __int64 v41; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  const char *v43; // [rsp+160h] [rbp+8Fh]
  const char *v44; // [rsp+168h] [rbp+97h]
  __int64 v45; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v33 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v37 = va_arg(va3, _QWORD);
  v39 = va_arg(va3, const char *);
  v40 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v41 = va_arg(va4, _QWORD);
  v43 = va_arg(va4, const char *);
  v44 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v45 = va_arg(va5, _QWORD);
  v5 = (__int64)v44;
  v6 = "NULL";
  v7 = (__int64)v43;
  v8 = a1;
  v9 = (__int64)v40;
  v10 = -1LL;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v44 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v44[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = "NULL";
    if ( v44 )
      v22 = v44;
    if ( v43 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v43[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = "NULL";
    if ( v43 )
      v25 = v43;
    if ( v40 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v40[v26] );
      v11 = v26 + 1;
    }
    v27 = "NULL";
    if ( v40 )
      v27 = v40;
    if ( v39 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( v39[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = "NULL";
    if ( v39 )
      v30 = v39;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v30,
      v29,
      v27,
      v11,
      (__int64 *)va3,
      4LL,
      v25,
      v24,
      v22,
      v21,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v5 = (__int64)v44;
    v8 = a1;
  }
  if ( v5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(v5 + v12) );
  }
  if ( v7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v7 + v13) );
  }
  v14 = "NULL";
  if ( v7 )
    v14 = (const char *)v7;
  if ( v9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v9 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  v17 = "NULL";
  if ( v9 )
    v17 = (const char *)v9;
  if ( v39 )
  {
    do
      ++v10;
    while ( v39[v10] );
    v18 = v10 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( v39 )
    v6 = v39;
  LOWORD(v31) = 16;
  return WppAutoLogTrace(
           v8,
           4LL,
           20LL,
           &WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
           v31,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v6,
           v18,
           v17,
           v16,
           (__int64 *)va3,
           4LL,
           v14);
}
