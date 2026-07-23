/*
 * XREFs of PopPluginNotifyActive @ 0x14020439C
 * Callers:
 *     PopPluginComponentActive @ 0x1400BFFEC (PopPluginComponentActive.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginNotifyActive(__int64 a1, int a2, char a3)
{
  ULONG_PTR v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+2Ch] [rbp-1Ch]
  __int64 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 72);
  v6 = a2;
  v8 = 0LL;
  v7 = a3;
  v9 = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(v3 + 96))(7LL, &v5);
  if ( (_BYTE)result )
  {
    if ( v9 )
      PopFxBugCheck(0x612uLL, v3, 0LL, 0LL);
  }
  return result;
}
