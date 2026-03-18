/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200
 * Callers:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BCBCC (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025A6C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025A93C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025AD2C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C010E2F4 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0259FB8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D8F0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const unsigned __int16 *a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  struct UmfdTls *v8; // rax
  __int64 v9; // rcx
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r8
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+64h] [rbp+1Ch]
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    v8 = UmfdTls::EnsureTls();
    if ( !v8 )
      return -1073741801;
    v9 = *((_QWORD *)v8 + 3);
    if ( !v9 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v9 + 16);
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
    v7 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v7 >= 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        v10 = &qword_1C015B240;
        if ( a2 )
          v10 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, v10);
        v7 = -1073741790;
      }
      else if ( (v13 & 2) != 0 )
      {
        v11 = &qword_1C015B240;
        if ( a2 )
          v11 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, v11);
      }
    }
    ZwClose(ProcessHandle);
    return v7;
  }
  return result;
}
