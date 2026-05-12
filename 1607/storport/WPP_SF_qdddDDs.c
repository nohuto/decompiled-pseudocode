/*
 * XREFs of WPP_SF_qdddDDs @ 0x1C002B38C
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0012A78 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qdddDDs(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  const char *v5; // rax
  __int64 v7; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v9; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  __int64 v11; // [rsp+D8h] [rbp+30h] BYREF
  va_list va2; // [rsp+D8h] [rbp+30h]
  __int64 v13; // [rsp+E0h] [rbp+38h] BYREF
  va_list va3; // [rsp+E0h] [rbp+38h]
  __int64 v15; // [rsp+E8h] [rbp+40h] BYREF
  va_list va4; // [rsp+E8h] [rbp+40h]
  __int64 v17; // [rsp+F0h] [rbp+48h] BYREF
  va_list va5; // [rsp+F0h] [rbp+48h]
  const char *v19; // [rsp+F8h] [rbp+50h]
  va_list va6; // [rsp+100h] [rbp+58h] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v11 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v13 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v15 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v17 = va_arg(va6, _QWORD);
  v19 = va_arg(va6, const char *);
  if ( v19 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v19[v3] );
    v4 = v3 + 1;
  }
  else
  {
    v4 = 5LL;
  }
  v5 = "NULL";
  if ( v19 )
    v5 = v19;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0f528954af03336098861edcd0252264_Traceguids,
           13LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           4LL,
           (__int64 *)va4,
           4LL,
           (__int64 *)va5,
           4LL,
           v5,
           v4,
           0LL);
}
