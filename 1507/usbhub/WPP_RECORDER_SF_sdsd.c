/*
 * XREFs of WPP_RECORDER_SF_sdsd @ 0x1C003D558
 * Callers:
 *     UsbhLogStartFailure @ 0x1C003C34C (UsbhLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sdsd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  const char *v15; // rdx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  const char *v21; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const char *);
  v6 = "NULL";
  v7 = (__int64)v21;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( v21 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v21[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = "NULL";
    if ( v21 )
      v12 = v21;
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = "NULL";
    if ( a6 )
      v15 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids,
      20LL,
      v15,
      v14,
      (__int64 *)va,
      4LL,
      v12,
      v11,
      va1,
      4LL,
      0LL);
  }
  if ( v7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v7 + v16) );
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v18) = 20;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids, v18, v6);
}
