/*
 * XREFs of PopPluginQueryComponentPerfSetName @ 0x140204518
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x14066CFD8 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfSetName(__int64 a1, int a2, int a3, unsigned __int16 *a4, __int64 a5)
{
  ULONG_PTR v6; // rdi
  unsigned __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  unsigned __int16 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 72);
  v7 = *a4;
  v10 = a2;
  v11 = a3;
  v12 = v7;
  v13 = a5;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v6 + 96))(30LL, &v9) )
    PopFxBugCheck(0x605uLL, 0x1EuLL, v6, 0LL);
  result = v12;
  *a4 = v12;
  return result;
}
