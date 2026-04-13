/*
 * XREFs of sub_18001F6F0 @ 0x18001F6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F6F0(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rax
  void *v5; // rbx
  char v6; // al
  LPVOID v7; // rdi
  DWORD ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  LPVOID v10; // [rsp+38h] [rbp-28h] BYREF
  HANDLE TokenHandle; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  int TokenInformation; // [rsp+88h] [rbp+28h] BYREF

  v13 = -2LL;
  v10 = 0LL;
  if ( CoCreateInstance(&rclsid, 0LL, 1u, &stru_18002F9E0, &v10) >= 0 )
    byte_18003A094 = (*(int (__fastcall **)(LPVOID, __int64, _BYTE *))(*(_QWORD *)v10 + 32LL))(v10, 4LL, v12) >= 0
                  && (v12[0] & 0x20) != 0;
  CurrentProcessId = GetCurrentProcessId();
  v4 = OpenProcess(0x1000u, 0, CurrentProcessId);
  v5 = v4;
  if ( v4 )
  {
    if ( OpenProcessToken(v4, 8u, &TokenHandle) )
    {
      TokenInformation = 0;
      if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
      {
        v6 = byte_18003AC48;
        if ( TokenInformation )
          v6 = 1;
        byte_18003AC48 = v6;
      }
      CloseHandle(TokenHandle);
    }
    CloseHandle(v5);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 1LL;
}
