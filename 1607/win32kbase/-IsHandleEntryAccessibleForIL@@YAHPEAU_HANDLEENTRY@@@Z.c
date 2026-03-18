/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0038A6C
 * Callers:
 *     ValidateHandleSecure @ 0x1C00389C0 (ValidateHandleSecure.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0080F58 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1)
{
  __int64 CurrentProcessWin32Process; // r11
  char v3; // cl
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v10; // r10

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v3 = *((_BYTE *)&unk_1C00FEE4C + 16 * *((unsigned __int8 *)a1 + 16));
  if ( (v3 & 2) != 0 )
  {
    v4 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( (v3 & 1) == 0 )
      return 1LL;
    v10 = *((_QWORD *)a1 + 1);
    if ( !v10 )
      return 1LL;
    v4 = *(_QWORD *)(v10 + 376);
  }
  if ( !v4 )
    return 1LL;
  if ( *(PVOID *)v4 == gpepCSRSS )
    return 1LL;
  v5 = *(_QWORD *)(v4 + 824);
  v6 = *(_QWORD *)(CurrentProcessWin32Process + 824);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)v6 > (unsigned int)v5 )
    return 1LL;
  if ( (_DWORD)v6 == (_DWORD)v5 )
  {
    v7 = HIDWORD(v6);
    v8 = HIDWORD(v5);
    if ( (_DWORD)v7 == (_DWORD)v8 || (_DWORD)v7 == -1 || (_DWORD)v8 == -1 )
      return 1LL;
  }
  EtwTraceUIPIHandleValidationError((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v4);
  UserSetLastError(5LL);
  return 0LL;
}
