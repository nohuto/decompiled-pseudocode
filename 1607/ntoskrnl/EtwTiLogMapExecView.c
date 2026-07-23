/*
 * XREFs of EtwTiLogMapExecView @ 0x1406A5940
 * Callers:
 *     NtMapViewOfSection @ 0x140435610 (NtMapViewOfSection.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140171F18 (EtwpTiFillThreadIdentity.c)
 */

BOOLEAN EtwTiLogMapExecView(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  _KPROCESS *Process; // rsi
  const EVENT_DESCRIPTOR *v6; // r14
  int v7; // ebx
  int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  REGHANDLE v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[18]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va; // [rsp+1B0h] [rbp+B0h]
  __int64 v20; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va1; // [rsp+1B8h] [rbp+B8h]
  __int64 v22; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va2; // [rsp+1C0h] [rbp+C0h]
  va_list va3; // [rsp+1C8h] [rbp+C8h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF00uLL);
  if ( result )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = (const EVENT_DESCRIPTOR *)*(&off_14025C0E8 + (Process == (_KPROCESS *)a1) + (a2 == 0 ? 2 : 0));
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v6);
    if ( result )
    {
      v7 = EtwpTiFillProcessIdentity((__int64)UserData, (__int64)Process, &v15);
      v8 = EtwpTiFillThreadIdentity((__int64)&UserData[v7], (__int64)KeGetCurrentThread()) + v7;
      v9 = EtwpTiFillProcessIdentity((__int64)&UserData[v8], a1, &v16) + v8;
      v10 = v9;
      *(&UserData[0].Reserved + 1 * v10) = 0;
      UserData[v10].Ptr = (ULONGLONG)va;
      UserData[v10].Size = 8;
      v11 = v9 + 1;
      *(&UserData[0].Reserved + 1 * v11) = 0;
      UserData[v11].Ptr = (ULONGLONG)va1;
      UserData[v11].Size = 8;
      v12 = v9 + 2;
      v9 += 3;
      v12 *= 2LL;
      *(&UserData[0].Reserved + 2 * v12) = 0;
      *(&UserData[0].Ptr + v12) = (ULONGLONG)va2;
      *(&UserData[0].Size + 2 * v12) = 4;
      v13 = v9;
      *(&UserData[0].Reserved + 1 * v13) = 0;
      UserData[v13].Ptr = (ULONGLONG)va3;
      v14 = EtwThreatIntProvRegHandle;
      UserData[v13].Size = 4;
      return EtwWrite(v14, v6, 0LL, v9 + 1, UserData);
    }
  }
  return result;
}
