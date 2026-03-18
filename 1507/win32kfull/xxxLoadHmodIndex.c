/*
 * XREFs of xxxLoadHmodIndex @ 0x1C005735C
 * Callers:
 *     xxxLoadUserApiHook @ 0x1C0061D40 (xxxLoadUserApiHook.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ClientLoadLibrary @ 0x1C0058508 (ClientLoadLibrary.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ClientFreeLibrary @ 0x1C00EBD6C (ClientFreeLibrary.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r8
  const WCHAR *v6; // rdx
  int AtomNameFromAtomTable; // ebx
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v12[264]; // [rsp+260h] [rbp+160h] BYREF

  v1 = 1;
  v2 = a1;
  if ( a1 < 0 || a1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL);
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
    v6 = &gszFunctionUserApiHook;
LABEL_12:
    RtlInitUnicodeString(&v8, v6);
    goto LABEL_6;
  }
  if ( (_DWORD)v2 == gihmodUserApiHookWOW )
  {
    v6 = &gszFunctionUserApiHookWOW;
    goto LABEL_12;
  }
  RtlInitUnicodeString(&v8, 0LL);
  v1 = 0;
LABEL_6:
  v3 = ClientLoadLibrary(&DestinationString, &v8);
  if ( v3 )
  {
    if ( v1
      && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                     UserLibmgmtAtomTableHandle,
                                     *((unsigned __int16 *)&aatomSysLoaded + v2),
                                     v12,
                                     260LL),
           RtlInitUnicodeString(&String1, v12),
           !AtomNameFromAtomTable)
       || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
    {
      ClientFreeLibrary(v3);
      return 0LL;
    }
    else
    {
      v4 = *(_QWORD *)(gptiCurrent + 384LL);
      if ( ((1 << v2) & *(_DWORD *)(v4 + 380)) != 0 )
      {
        ClientFreeLibrary(*(_QWORD *)(v4 + 8 * v2 + 384));
      }
      else
      {
        ++*((_DWORD *)&acatomSysUse + v2);
        *(_QWORD *)(v4 + 8 * v2 + 384) = v3;
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 380LL) |= 1 << v2;
      }
    }
  }
  return v3;
}
