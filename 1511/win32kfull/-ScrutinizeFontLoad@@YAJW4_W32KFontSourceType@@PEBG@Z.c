/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025CEA8
 * Callers:
 *     ?ScrutinizeDeviceFontLoad@@YAJXZ @ 0x1C025CE9C (-ScrutinizeDeviceFontLoad@@YAJXZ.c)
 *     ?ScrutinizeMemoryFontLoad@@YAJXZ @ 0x1C025CFDC (-ScrutinizeMemoryFontLoad@@YAJXZ.c)
 *     ?ScrutinizeRemoteFontLoad@@YAJXZ @ 0x1C025CFE8 (-ScrutinizeRemoteFontLoad@@YAJXZ.c)
 *     ScrutinizeFileFontLoad @ 0x1C025DCA8 (ScrutinizeFileFontLoad.c)
 * Callees:
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00EFEA0 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C025CBB8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D5E6C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const WCHAR *a2)
{
  struct UmfdTls *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS v9; // ebx
  const WCHAR *v10; // r8
  const WCHAR *v11; // r8
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+64h] [rbp+1Ch]
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  ProcessInformation = 9;
  if ( UmfdIsCurrentProcessUmfdHostNoLock() )
  {
    v4 = UmfdTls::EnsureTls();
    if ( !v4 )
      return -1073741801;
    v6 = *((_QWORD *)v4 + 3);
    if ( !v6 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v6 + 16);
    if ( !CurrentThread )
      return -1073741801;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
  if ( result >= 0 )
  {
    v9 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v9 >= 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        v10 = &word_1C0153C60;
        if ( a2 )
          v10 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, (__int64)v10, 1u);
        v9 = -1073741790;
      }
      else if ( (v13 & 2) != 0 )
      {
        v11 = &word_1C0153C60;
        if ( a2 )
          v11 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, (__int64)v11, 0);
      }
    }
    ZwClose(ProcessHandle);
    return v9;
  }
  return result;
}
