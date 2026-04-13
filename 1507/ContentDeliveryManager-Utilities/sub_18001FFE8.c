/*
 * XREFs of sub_18001FFE8 @ 0x18001FFE8
 * Callers:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 * Callees:
 *     sub_180020088 @ 0x180020088 (sub_180020088.c)
 */

__int64 __fastcall sub_18001FFE8(HANDLE ProcessHandle, _QWORD *a2)
{
  signed int LastError; // eax
  signed int v4; // ebx
  char *v5; // rcx
  HANDLE TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (HANDLE)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    goto LABEL_6;
  }
  LastError = 0;
LABEL_6:
  v4 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v4 = LastError;
  if ( v4 >= 0 )
    v4 = sub_180020088(TokenHandle);
  v5 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  return (unsigned int)v4;
}
