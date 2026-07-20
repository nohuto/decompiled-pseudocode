/*
 * XREFs of SmscpExecuteInitialCommand @ 0x140001D10
 * Callers:
 *     SmscMain @ 0x140001A14 (SmscMain.c)
 * Callees:
 *     SmExecPgmEx @ 0x140001DB8 (SmExecPgmEx.c)
 *     SmpExecuteCommand @ 0x140001FB4 (SmpExecuteCommand.c)
 *     memset_0 @ 0x14000CC60 (memset_0.c)
 */

__int64 __fastcall SmscpExecuteInitialCommand(int a1, _DWORD *a2, int a3)
{
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed __int32 v11[8]; // [rsp+0h] [rbp-A8h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v12; // [rsp+30h] [rbp-78h] BYREF

  v12.Size = 0;
  memset_0(&v12.ProcessHandle, 0, 0x60uLL);
  v7 = 2080;
  if ( (*a2 & 8) != 0 )
  {
    v7 = 10272;
    if ( (*a2 & 6) == 2 )
      v7 = 14368;
  }
  result = SmpExecuteCommand(a3, a1, v6, v7, &v12);
  if ( (int)result < 0 )
  {
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v11, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1063;
    *((_DWORD *)SmscpSharedWindow + 1) = result;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
  }
  else
  {
    *(_DWORD *)SmscpSharedWindow = 2;
    result = SmExecPgmEx(v9, &v12);
    v10 = result;
    if ( (int)result < 0 )
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v11, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 1088;
      *((_DWORD *)SmscpSharedWindow + 1) = result;
      *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
      NtTerminateProcess(v12.ProcessHandle, result);
      return v10;
    }
  }
  return result;
}
