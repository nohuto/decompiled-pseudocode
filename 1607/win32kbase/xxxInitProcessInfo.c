/*
 * XREFs of xxxInitProcessInfo @ 0x1C00124D8
 * Callers:
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 * Callees:
 *     IsCheckAllowForegroundSupported_0 @ 0x1C0002348 (IsCheckAllowForegroundSupported_0.c)
 *     CheckAllowForeground_0 @ 0x1C0002350 (CheckAllowForeground_0.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00120BC (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C00121D4 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     xxxSetProcessInitState @ 0x1C00122D0 (xxxSetProcessInitState.c)
 *     SetAppStarting @ 0x1C00123C0 (SetAppStarting.c)
 *     GetProcessLuid @ 0x1C0012450 (GetProcessLuid.c)
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00B3C1C (-GetSpriteFillColor@@YAKXZ.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct tagPROCESSINFO *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  __int64 result; // rax
  NTSTATUS v10; // edi
  int v11; // ecx
  unsigned int SpriteFillColor; // eax
  __int64 v13; // rcx
  void *v14; // rcx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v19; // [rsp+60h] [rbp+20h] BYREF

  LODWORD(v19) = 0;
  P = 0LL;
  TokenInformation = 0LL;
  if ( (*((_DWORD *)a1 + 3) & 0x8000) != 0 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = CheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x8000u;
    HIDWORD(TokenInformation) = a4;
    v10 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    *((_QWORD *)a1 + 123) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    if ( gbEnforceUIPI )
    {
      if ( v10 < 0 )
        return 3221225473LL;
      v11 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) )
      {
        if ( (_DWORD)TokenInformation != 4096 )
          return 3221225473LL;
      }
      *((_DWORD *)a1 + 206) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 207) = v11;
    }
    if ( v10 >= 0 )
      v10 = SeQueryInformationToken(Token, TokenUIAccess, &v19);
    MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 192) ^= (*((_DWORD *)a1 + 192) ^ (a5 << 7)) & 0x80;
    if ( v10 < 0 )
      return (unsigned int)v10;
    v10 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v10 < 0 )
    {
      return (unsigned int)v10;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v16) >= 0 )
        *((_DWORD *)a1 + 208) = v16;
      else
        *((_DWORD *)a1 + 208) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v19 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 192) |= 2u;
      }
      SpriteFillColor = GetSpriteFillColor();
      v13 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 252) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v13) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v14 = *(void **)a1;
      *((_QWORD *)a1 + 106) = -1LL;
      *((_QWORD *)a1 + 107) = -1LL;
      xxxSetProcessInitState(v14, 128);
      SetAppStarting((__int64)a1);
      *((_QWORD *)a1 + 43) = gppiList;
      gppiList = (__int64)a1;
      if ( (*((_DWORD *)a1 + 192) & 0x30) != 0x10
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported_0() >= 0 )
      {
        if ( (unsigned int)CheckAllowForeground_0() )
          *((_DWORD *)a1 + 3) |= 0x100u;
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 732));
      v15 = gcSysExpunge;
      *((_DWORD *)a1 + 178) = 0;
      *((_DWORD *)a1 + 92) = v15;
      CitProcessCallout(a1);
      *((_DWORD *)a1 + 192) &= 0xFF9C7FFF;
      result = 0LL;
      *((_DWORD *)a1 + 70) = 16;
    }
  }
  return result;
}
