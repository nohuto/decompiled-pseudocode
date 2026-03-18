/*
 * XREFs of WinSqmSetString @ 0x1C00AE52C
 * Callers:
 *     ldevLoadDriver @ 0x1C005EA30 (ldevLoadDriver.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0066FA4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0066FF0 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C007B6C4 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

NTSTATUS __fastcall WinSqmSetString(__int64 a1, __int64 a2, const wchar_t *a3)
{
  ULONGLONG v4; // rdi
  NTSTATUS result; // eax
  unsigned int v6; // ecx
  signed __int64 v7; // rbx
  _WORD *v8; // rax
  __int16 v9; // dx
  __int64 v10; // rax
  int v11; // [rsp+28h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+38h] [rbp-79h] BYREF
  _WORD v13[64]; // [rsp+78h] [rbp-39h] BYREF

  v11 = 8969;
  memset(UserData, 0, sizeof(UserData));
  memset(v13, 0, sizeof(v13));
  v4 = (ULONGLONG)&unk_1C00E6FD8;
  if ( (unsigned int)IsExtendedWinSqmHandle(0LL) )
    v4 = 24LL;
  result = WinSqmEventEnabled(&SQM_SET_STRING, (void *)v4);
  if ( result )
  {
    if ( !a3 || !*a3 )
      a3 = L"(null)";
    v6 = 64;
    v7 = (char *)a3 - (char *)v13;
    v8 = v13;
    do
    {
      v9 = *(_WORD *)((char *)v8 + v7);
      if ( !v9 )
        break;
      *v8 = v9;
      --v6;
      ++v8;
    }
    while ( v6 > 1 );
    *v8 = 0;
    UserData[0].Ptr = v4;
    UserData[1].Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData[0].Size = 16LL;
    UserData[2].Ptr = (ULONGLONG)&unk_1C0106558;
    UserData[3].Ptr = (ULONGLONG)v13;
    v10 = -1LL;
    *(_QWORD *)&UserData[1].Size = 4LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    do
      ++v10;
    while ( v13[v10] );
    *(_QWORD *)&UserData[3].Size = (unsigned int)(2 * v10 + 2);
    return WinSqmEventWrite(&SQM_SET_STRING, 4u, UserData);
  }
  return result;
}
