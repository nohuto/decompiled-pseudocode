/*
 * XREFs of PopPluginQueryCurrentComponentPerfState @ 0x1402045D4
 * Callers:
 *     PopFxQueryCurrentComponentPerfState @ 0x140203278 (PopFxQueryCurrentComponentPerfState.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQueryCurrentComponentPerfState(__int64 a1, int a2, int *a3)
{
  ULONG_PTR v4; // rdi
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a1 + 72);
  v5 = *a3;
  v8 = a2;
  v9 = v5;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v4 + 96))(34LL, &v7) )
    PopFxBugCheck(0x605uLL, 0x22uLL, v4, 0LL);
  result = v10;
  *((_QWORD *)a3 + 1) = v10;
  return result;
}
