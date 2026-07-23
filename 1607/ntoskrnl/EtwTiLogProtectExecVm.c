/*
 * XREFs of EtwTiLogProtectExecVm @ 0x1406A5AE4
 * Callers:
 *     NtProtectVirtualMemory @ 0x140432A50 (NtProtectVirtualMemory.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140171F18 (EtwpTiFillThreadIdentity.c)
 */

BOOLEAN EtwTiLogProtectExecVm(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  _KPROCESS *Process; // rsi
  _KPROCESS *v6; // r15
  const EVENT_DESCRIPTOR *v7; // r14
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  REGHANDLE v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+228h] [rbp+120h] BYREF
  va_list va; // [rsp+228h] [rbp+120h]
  __int64 v23; // [rsp+230h] [rbp+128h] BYREF
  va_list va1; // [rsp+230h] [rbp+128h]
  __int64 v25; // [rsp+238h] [rbp+130h] BYREF
  va_list va2; // [rsp+238h] [rbp+130h]
  va_list va3; // [rsp+240h] [rbp+138h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF0uLL);
  if ( result )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = KeGetCurrentThread()->Process;
    v7 = (const EVENT_DESCRIPTOR *)*(&off_14025C128 + (Process == (_KPROCESS *)a1) + (a2 == 0 ? 2 : 0));
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v7);
    if ( result )
    {
      v8 = EtwpTiFillProcessIdentity((__int64)UserData, (__int64)Process, &v17);
      v9 = EtwpTiFillThreadIdentity((__int64)&UserData[v8], (__int64)KeGetCurrentThread()) + v8;
      v10 = EtwpTiFillProcessIdentity((__int64)&UserData[v9], a1, &v18) + v9;
      v11 = EtwpTiFillProcessIdentity((__int64)&UserData[v10], (__int64)v6, &v19) + v10;
      v12 = v11;
      *(&UserData[0].Reserved + 1 * v12) = 0;
      UserData[v12].Ptr = (ULONGLONG)va;
      UserData[v12].Size = 8;
      v13 = v11 + 1;
      *(&UserData[0].Reserved + 1 * v13) = 0;
      UserData[v13].Ptr = (ULONGLONG)va1;
      UserData[v13].Size = 8;
      v14 = v11 + 2;
      v11 += 3;
      v14 *= 2LL;
      *(&UserData[0].Reserved + 2 * v14) = 0;
      *(&UserData[0].Ptr + v14) = (ULONGLONG)va2;
      *(&UserData[0].Size + 2 * v14) = 4;
      v15 = v11;
      *(&UserData[0].Reserved + 1 * v15) = 0;
      UserData[v15].Ptr = (ULONGLONG)va3;
      v16 = EtwThreatIntProvRegHandle;
      UserData[v15].Size = 4;
      return EtwWrite(v16, v7, 0LL, v11 + 1, UserData);
    }
  }
  return result;
}
