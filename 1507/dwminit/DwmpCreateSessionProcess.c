/*
 * XREFs of DwmpCreateSessionProcess @ 0x180002CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 *     sub_180002C4C @ 0x180002C4C (sub_180002C4C.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmpCreateSessionProcess(int a1)
{
  HANDLE Thread; // rbx
  signed int LastError; // eax
  __int64 v3; // rcx
  HMODULE ModuleHandleA; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  bool v8; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-19h] BYREF
  GUID *v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+6Ch] [rbp+13h]
  unsigned int *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  int *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  bool *v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+98h] [rbp+3Fh]
  int v22; // [rsp+9Ch] [rbp+43h]
  int v23; // [rsp+C0h] [rbp+67h] BYREF

  v23 = a1;
  v9 = 0;
  Thread = 0LL;
  if ( sub_180002C4C() )
  {
    v9 = 1;
  }
  else if ( byte_18000C014 )
  {
    SetLastError(0);
    Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)StartAddress, 0LL, 0, 0LL);
    if ( !Thread )
    {
      LastError = GetLastError();
      v3 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v3 = (unsigned int)LastError;
      if ( (int)v3 >= 0 )
        v3 = 2291662851LL;
      v9 = v3;
      sub_180003A80(v3, 1362LL);
    }
  }
  else
  {
    StartAddress(0LL);
  }
  if ( (unsigned int)dword_18000C020 > 5
    && (qword_18000C030 & 0x400000000000LL) != 0
    && (qword_18000C038 & 0x400000000000LL) == qword_18000C038 )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = &ActivityId;
    v14 = &v9;
    v15 = 4;
    v18 = 4;
    v17 = &v23;
    v12 = 16;
    ModuleHandleA = GetModuleHandleA("wininit.exe");
    v21 = 1;
    v8 = ModuleHandleA != 0LL;
    v20 = &v8;
    v22 = 0;
    sub_1800010DC((__int64)&dword_18000C020, (unsigned __int8 *)dword_1800096C1, v5, v6, 6u, &v10);
  }
  if ( Thread )
    CloseHandle(Thread);
  return v9;
}
