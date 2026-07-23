/*
 * XREFs of PopPluginRegisterComponentPerfStates @ 0x140204634
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14066D1E8 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPluginRegisterComponentPerfStates(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  char v4; // r9
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    v7 = a2;
    v8 = 0LL;
    v9 = a3;
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(v3 + 96))(32LL, &v6);
  }
  return v4;
}
