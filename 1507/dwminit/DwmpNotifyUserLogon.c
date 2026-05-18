/*
 * XREFs of DwmpNotifyUserLogon @ 0x180002E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180004384 @ 0x180004384 (sub_180004384.c)
 */

__int64 __fastcall DwmpNotifyUserLogon(HANDLE hToken)
{
  unsigned int v1; // ebx
  __int64 v3; // r9
  BOOL v4; // edi
  REGSAM v5; // ebx
  HKEY v6; // rsi
  HANDLE v7; // rax
  signed int LastError; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  HKEY v11; // rbx
  HANDLE CurrentProcess; // rax
  int v13; // eax
  HANDLE v15; // [rsp+40h] [rbp-10h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-8h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp+28h] BYREF
  HKEY v18; // [rsp+80h] [rbp+30h] BYREF
  HKEY v19; // [rsp+88h] [rbp+38h] BYREF

  v1 = 0;
  v18 = 0LL;
  TargetHandle = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  AcquireSRWLockShared(&SRWLock);
  if ( hTargetProcessHandle )
  {
    phkResult = 0LL;
    v4 = 0;
    v5 = 131097;
    if ( hToken )
    {
      v4 = ImpersonateLoggedOnUser(hToken);
      if ( v4 )
        v5 = 131103;
    }
    if ( !RegOpenCurrentUser(v5, &phkResult) )
    {
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\DWM", 0, v5, &v18);
      RegOpenKeyExW(phkResult, L"Software\\Policies\\Microsoft\\Windows\\DWM", 0, 0x20019u, &v19);
      CloseHandle(phkResult);
    }
    if ( v4 )
      RevertToSelf();
    v6 = v18;
    if ( !v18
      || (v18 = 0LL,
          SetLastError(0),
          v7 = GetCurrentProcess(),
          DuplicateHandle(v7, v6, hTargetProcessHandle, &TargetHandle, v5, 0, 1u)) )
    {
      v11 = v19;
      if ( !v19
        || (v19 = 0LL,
            SetLastError(0),
            CurrentProcess = GetCurrentProcess(),
            DuplicateHandle(CurrentProcess, v11, hTargetProcessHandle, &v15, 0x20019u, 0, 1u)) )
      {
        v13 = sub_180004384(!v4, TargetHandle, v15);
        v1 = v13;
        if ( v13 >= 0 )
          goto LABEL_23;
        v9 = 1485LL;
        v10 = (unsigned int)v13;
        goto LABEL_22;
      }
      LastError = GetLastError();
      v9 = 1482LL;
    }
    else
    {
      LastError = GetLastError();
      v9 = 1464LL;
    }
    v1 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v1 = LastError;
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    v10 = v1;
LABEL_22:
    sub_180003A80(v10, v9);
  }
LABEL_23:
  sub_18000149C(7, v1, 0, v3);
  ReleaseSRWLockShared(&SRWLock);
  if ( v18 )
    CloseHandle(v18);
  if ( v19 )
    CloseHandle(v19);
  return v1;
}
