/*
 * XREFs of Template_pppxsbb @ 0x1C0020298
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 */

NTSTATUS Template_pppxsbb(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rcx
  int v4; // ecx
  const char *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-59h] BYREF
  va_list v8; // [rsp+40h] [rbp-49h]
  __int64 v9; // [rsp+48h] [rbp-41h]
  va_list v10; // [rsp+50h] [rbp-39h]
  __int64 v11; // [rsp+58h] [rbp-31h]
  va_list v12; // [rsp+60h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-21h]
  const char *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  __int64 v17; // [rsp+80h] [rbp-9h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  __int64 v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  __int64 v21; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+4Fh]
  __int64 v23; // [rsp+E0h] [rbp+57h] BYREF
  va_list va1; // [rsp+E0h] [rbp+57h]
  __int64 v25; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+5Fh]
  __int64 v27; // [rsp+F0h] [rbp+67h] BYREF
  va_list va3; // [rsp+F0h] [rbp+67h]
  const char *v29; // [rsp+F8h] [rbp+6Fh]
  __int64 v30; // [rsp+100h] [rbp+77h]
  __int64 v31; // [rsp+108h] [rbp+7Fh]
  va_list va4; // [rsp+110h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  v29 = va_arg(va4, const char *);
  v30 = va_arg(va4, _QWORD);
  v31 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v8, va1);
  va_copy(v10, va2);
  va_copy(v12, va3);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 8LL;
  v11 = 8LL;
  v13 = 8LL;
  if ( v29 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v29[v3] );
    v4 = v3 + 1;
  }
  else
  {
    v4 = 5;
  }
  v15 = v4;
  v5 = "NULL";
  v16 = 0;
  if ( v29 )
    v5 = v29;
  v18 = 16LL;
  v14 = v5;
  v17 = v30;
  v19 = v31;
  v20 = 16LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1, &USBXHCI_ETW_EVENT_CONTROLLER_ERROR, 0LL, 7u, &UserData);
}
