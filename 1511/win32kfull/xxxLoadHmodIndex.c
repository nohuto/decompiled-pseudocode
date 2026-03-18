/*
 * XREFs of xxxLoadHmodIndex @ 0x1C011ACB4
 * Callers:
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 *     xxxLoadUserApiHook @ 0x1C0070720 (xxxLoadUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ClientFreeLibrary @ 0x1C00F0E5C (ClientFreeLibrary.c)
 *     ClientLoadLibrary @ 0x1C011B6D0 (ClientLoadLibrary.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  const WCHAR *v7; // rdx
  int AtomNameFromAtomTable; // ebx
  __int64 v9; // rdx
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v14[264]; // [rsp+260h] [rbp+160h] BYREF

  v1 = 1;
  v2 = a1;
  if ( a1 < 0 || a1 >= catomSysTableEntries )
  {
    UserSetLastError(87);
    return 0LL;
  }
  UserGetAtomNameFromAtomTable(
    UserLibmgmtAtomTableHandle,
    *((unsigned __int16 *)&aatomSysLoaded + a1),
    SourceString,
    260LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( (_DWORD)v2 == gihmodUserApiHook )
  {
    v7 = gszFunctionUserApiHook;
LABEL_12:
    RtlInitUnicodeString(&v10, v7);
    goto LABEL_6;
  }
  if ( (_DWORD)v2 == gihmodUserApiHookWOW )
  {
    v7 = &gszFunctionUserApiHookWOW;
    goto LABEL_12;
  }
  RtlInitUnicodeString(&v10, 0LL);
  v1 = 0;
LABEL_6:
  v3 = ClientLoadLibrary(&DestinationString, &v10);
  if ( v3 )
  {
    if ( v1
      && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                     UserLibmgmtAtomTableHandle,
                                     *((unsigned __int16 *)&aatomSysLoaded + v2),
                                     v14,
                                     260LL),
           RtlInitUnicodeString(&String1, v14),
           !AtomNameFromAtomTable)
       || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
    {
      ClientFreeLibrary(v3, v9);
      return 0LL;
    }
    else
    {
      v4 = *(_QWORD *)(gptiCurrent + 376LL);
      v5 = (unsigned int)(1 << v2);
      if ( ((unsigned int)v5 & *(_DWORD *)(v4 + 380)) != 0 )
      {
        ClientFreeLibrary(*(_QWORD *)(v4 + 8 * v2 + 384), v5);
      }
      else
      {
        ++*((_DWORD *)&acatomSysUse + v2);
        *(_QWORD *)(v4 + 8 * v2 + 384) = v3;
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 380LL) |= v5;
      }
    }
  }
  return v3;
}
