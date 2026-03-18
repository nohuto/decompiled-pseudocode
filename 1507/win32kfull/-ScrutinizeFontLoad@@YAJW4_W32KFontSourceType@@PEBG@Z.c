/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025D1CC
 * Callers:
 *     ?ScrutinizeMemoryFontLoad@@YAJXZ @ 0x1C025D300 (-ScrutinizeMemoryFontLoad@@YAJXZ.c)
 *     ?ScrutinizeRemoteFontLoad@@YAJXZ @ 0x1C025D30C (-ScrutinizeRemoteFontLoad@@YAJXZ.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ScrutinizeFileFontLoad @ 0x1C025E158 (ScrutinizeFileFontLoad.c)
 * Callees:
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00EA820 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C025CEB4 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D4A8C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const unsigned __int16 *a2)
{
  struct UmfdTls *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS v9; // ebx
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r8
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
        v10 = &qword_1C015E270;
        if ( a2 )
          v10 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, (__int64)v10, 1u);
        v9 = -1073741790;
      }
      else if ( (v13 & 2) != 0 )
      {
        v11 = &qword_1C015E270;
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
