/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x140009C5C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x14015242C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rbp
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  int v6; // esi
  __int64 Image; // rax
  struct tagCURSOR *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  struct tagCURSOR *v11; // rbp
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-238h] BYREF

  DestinationString = 0LL;
  for ( i = 0; i < 7; ++i )
  {
    while ( 1 )
    {
      v3 = 552LL * i;
      UserSessionState = W32GetUserSessionState();
      FastGetProfileStringFromIDW(
        a1,
        5LL,
        *(unsigned __int16 *)(UserSessionState + v3 + 32394),
        &pszFormat,
        SourceString,
        260,
        0);
      if ( SourceString[0] )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v6 = 592;
      }
      else
      {
        *(_DWORD *)&DestinationString.Length = 0;
        v6 = 576;
        DestinationString.Buffer = (PWSTR)(unsigned __int16)(i + 100);
      }
      Image = xxxClientLoadImage((char **)&DestinationString, v5, 1u, 0, 0, v6);
      v8 = (struct tagCURSOR *)Image;
      if ( Image && (*(_DWORD *)(Image + 80) & 0x40) == 0 )
      {
        v9 = W32GetUserSessionState();
        zzzSetSystemImage(v8, *(struct tagCURSOR **)(v9 + v3 + 32400));
      }
      if ( i != 5 )
        break;
      v10 = W32GetUserSessionState();
      v11 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(*(_QWORD *)(v10 + 19904) + 6968LL));
      if ( !v11 )
        break;
      DpiForSystem = GetDpiForSystem();
      DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
      v14 = GetDpiForSystem();
      v15 = GetDpiDependentMetric(20LL, v14);
      v17 = xxxClientLoadImage((char **)&DestinationString, v16, 1u, v15, DpiDependentMetric, v6);
      if ( !v17 || (*(_DWORD *)(v17 + 80) & 0x40) != 0 )
        break;
      zzzSetSystemImage((struct tagCURSOR *)v17, v11);
      i = 6;
    }
  }
}
