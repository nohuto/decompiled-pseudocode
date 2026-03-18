/*
 * XREFs of ValidateGestureCaller @ 0x1C020402C
 * Callers:
 *     NtUserInjectGesture @ 0x1C021CDA0 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 416);
  if ( v3 == grpdeskRitInput && v3 == *(_QWORD *)(a2 + 24) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 832LL);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 384LL) + 832LL);
    if ( !gbEnforceUIPI )
      return 1LL;
    if ( (unsigned int)v5 > (unsigned int)v6 )
      return 1LL;
    if ( (_DWORD)v5 == (_DWORD)v6 )
    {
      v7 = HIDWORD(v5);
      v8 = HIDWORD(v6);
      if ( (_DWORD)v7 == (_DWORD)v8 || (_DWORD)v7 == -1 || (_DWORD)v8 == -1 )
        return 1LL;
    }
    UserSetLastError(5);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 384), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 384LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
