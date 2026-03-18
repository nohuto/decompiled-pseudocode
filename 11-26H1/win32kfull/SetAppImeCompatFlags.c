/*
 * XREFs of SetAppImeCompatFlags @ 0x1402CE334
 * Callers:
 *     SetAppCompatFlags @ 0x140269460 (SetAppCompatFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetAppImeCompatFlags(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  PCUNICODE_STRING *v12; // rsi
  __int64 i; // rdi
  int j; // ebx
  __int64 UserSessionState; // rax
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR SourceString[80]; // [rsp+70h] [rbp-90h] BYREF

  Value = 0;
  v2 = 0;
  DefaultLocaleId = 0;
  v19[1] = 0LL;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v6 + 12) & 0x80u) != 0 ? 44 : 30, *(_QWORD *)(a2 + 8), 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( ((DefaultLocaleId & 0x3FF) == 0x12 || (DefaultLocaleId & 0x3FF) == 0x11) && *(_WORD *)(a1 + 664) <= 0x30Au )
  {
    v8 = *(_QWORD *)(a1 + 456);
    *(_DWORD *)(v8 + 760) = Value;
  }
  else
  {
    v8 = Value & 0xC00000;
    *(_DWORD *)(*(_QWORD *)(a1 + 456) + 760LL) = v8;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7) + 68416) )
    return 0LL;
  v19[0] = a2;
  v12 = (PCUNICODE_STRING *)v19;
  for ( i = 0LL; i < 1; ++i )
  {
    if ( v2 )
      break;
    for ( j = 0; j < *(_DWORD *)(W32GetUserSessionState(v10, v9) + 68424); ++j )
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      if ( !RtlCompareUnicodeString(*v12, (PCUNICODE_STRING)(*(_QWORD *)(UserSessionState + 68416) + 16LL * j), 1u) )
      {
        v2 = 1;
        break;
      }
    }
    ++v12;
  }
  return v2;
}
