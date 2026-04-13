/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180021B68
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180002FC8 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180021C08 (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(HANDLE ProcessHandle, _QWORD *a2, void **a3)
{
  void **v5; // r8
  signed int LastError; // eax
  signed int PackageSidFromProcessToken; // ebx
  char *v8; // rcx
  void *TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    goto LABEL_6;
  }
  LastError = 0;
LABEL_6:
  PackageSidFromProcessToken = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    PackageSidFromProcessToken = LastError;
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(TokenHandle, a2, v5);
  v8 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return (unsigned int)PackageSidFromProcessToken;
}
