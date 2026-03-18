/*
 * XREFs of xxxInitProcessInfo @ 0x1C0046224
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 * Callees:
 *     IsCheckAllowForegroundSupported_0 @ 0x1C0002048 (IsCheckAllowForegroundSupported_0.c)
 *     CheckAllowForeground_0 @ 0x1C0002050 (CheckAllowForeground_0.c)
 *     GetProcessLuid @ 0x1C00212D0 (GetProcessLuid.c)
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 *     IsImmersiveAppRestricted @ 0x1C0046480 (IsImmersiveAppRestricted.c)
 *     SetAppStarting @ 0x1C00464A0 (SetAppStarting.c)
 *     xxxSetProcessInitState @ 0x1C0046510 (xxxSetProcessInitState.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C00465F4 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00466F4 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct tagPROCESSINFO *a1, PACCESS_TOKEN Token, unsigned int a3, int a4, int a5)
{
  __int64 result; // rax
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r8d
  void *v16; // r9
  int v17; // [rsp+20h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v20; // [rsp+60h] [rbp+20h] BYREF

  LODWORD(v20) = 0;
  TokenInformation = 0LL;
  P = 0LL;
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
    v11 = v10;
    if ( gbEnforceUIPI )
    {
      if ( v10 < 0 )
        return 3221225473LL;
      v12 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) )
      {
        if ( (_DWORD)TokenInformation != 4096 )
          return 3221225473LL;
      }
      *((_DWORD *)a1 + 208) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 209) = v12;
    }
    if ( v10 >= 0 )
      v11 = SeQueryInformationToken(Token, TokenUIAccess, &v20);
    MarkImmersiveProcess(a1, Token, a3);
    *((_DWORD *)a1 + 194) ^= (*((_DWORD *)a1 + 194) ^ (a5 << 7)) & 0x80;
    if ( v11 < 0 )
      return (unsigned int)v11;
    v11 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v11 < 0 )
    {
      return (unsigned int)v11;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v17) >= 0 )
        *((_DWORD *)a1 + 210) = v17;
      else
        *((_DWORD *)a1 + 210) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v20 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 194) |= 2u;
      }
      if ( PsGetProcessWow64Process(*(_QWORD *)a1) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v13 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 107) = -1LL;
      *((_QWORD *)a1 + 108) = -1LL;
      xxxSetProcessInitState(v13, 128LL);
      SetAppStarting(a1);
      *((_QWORD *)a1 + 44) = gppiList;
      gppiList = (__int64)a1;
      if ( !(unsigned int)IsImmersiveAppRestricted(a1)
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported_0() >= 0 )
      {
        if ( (unsigned int)CheckAllowForeground_0() )
          *((_DWORD *)a1 + 3) |= 0x100u;
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 740));
      v14 = gcSysExpunge;
      *((_DWORD *)a1 + 180) = 0;
      *((_DWORD *)a1 + 94) = v14;
      CitProcessCallout(a1, 1, v15, v16);
      *((_DWORD *)a1 + 194) &= 0xFFF1FFFF;
      return 0LL;
    }
  }
  return result;
}
