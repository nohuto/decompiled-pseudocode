/*
 * XREFs of Template_pppxsbb @ 0x1C001C71C
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 */

NTSTATUS Template_pppxsbb(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const char *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  va_list v8; // [rsp+40h] [rbp-59h]
  __int64 v9; // [rsp+48h] [rbp-51h]
  va_list v10; // [rsp+50h] [rbp-49h]
  __int64 v11; // [rsp+58h] [rbp-41h]
  va_list v12; // [rsp+60h] [rbp-39h]
  __int64 v13; // [rsp+68h] [rbp-31h]
  const char *v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+78h] [rbp-21h]
  int v16; // [rsp+7Ch] [rbp-1Dh]
  __int64 v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  __int64 v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  __int64 v21; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v23; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v25; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+5Fh]
  __int64 v27; // [rsp+100h] [rbp+67h] BYREF
  va_list va3; // [rsp+100h] [rbp+67h]
  const char *v29; // [rsp+108h] [rbp+6Fh]
  __int64 v30; // [rsp+110h] [rbp+77h]
  __int64 v31; // [rsp+118h] [rbp+7Fh]
  va_list va4; // [rsp+120h] [rbp+87h] BYREF

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
  v3 = v29;
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
    v4 = -1LL;
    do
      ++v4;
    while ( v29[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5;
  }
  v15 = v5;
  v17 = v30;
  if ( !v29 )
    v3 = "NULL";
  v19 = v31;
  v14 = v3;
  v16 = 0;
  v18 = 16LL;
  v20 = 16LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1, &USBXHCI_ETW_EVENT_CONTROLLER_ERROR, 0LL, 7u, &UserData);
}
