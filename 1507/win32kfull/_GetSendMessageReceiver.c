/*
 * XREFs of _GetSendMessageReceiver @ 0x1C01ECCA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 */

__int64 __fastcall GetSendMessageReceiver(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 result; // rax

  v1 = PtiFromThreadId(a1);
  v2 = v1;
  if ( !v1 || (v3 = *(_QWORD *)(gptiCurrent + 416LL), *(_QWORD *)(v1 + 416) != v3) )
  {
    v11 = 87;
    goto LABEL_22;
  }
  v4 = *(_QWORD *)(v1 + 384);
  v5 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( gbEnforceUIPI )
  {
    v6 = *(_QWORD *)(v4 + 832);
    v7 = *(_QWORD *)(v5 + 832);
    if ( (unsigned int)v7 > (unsigned int)v6
      || (_DWORD)v7 == (_DWORD)v6
      && ((v9 = HIDWORD(v7), v10 = HIDWORD(v6), (_DWORD)v9 == (_DWORD)v10) || (_DWORD)v9 == -1 || (_DWORD)v10 == -1) )
    {
      v8 = 1;
      goto LABEL_14;
    }
  }
  else if ( *(_DWORD *)(v5 + 740) == *(_DWORD *)(v4 + 740) && *(_DWORD *)(v5 + 744) == *(_DWORD *)(v4 + 744) )
  {
    goto LABEL_17;
  }
  v8 = 0;
LABEL_14:
  if ( v8 )
  {
LABEL_17:
    v12 = *(_QWORD *)(v2 + 464);
    if ( !v12 )
      return 0LL;
    result = *(_QWORD *)(v12 + 112);
    if ( !result )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(result + 16) + 416LL) == v3 )
      return result;
    goto LABEL_16;
  }
  EtwTraceUIPIMsgError(v5, v4, 0LL, 0LL, 0LL);
LABEL_16:
  v11 = 5;
LABEL_22:
  UserSetLastError(v11);
  return 0LL;
}
