/*
 * XREFs of PopPluginNotifyIdleState @ 0x1402043F4
 * Callers:
 *     PopPluginComponentIdleState @ 0x140131500 (PopPluginComponentIdleState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1401317F0 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPluginNotifyIdleState(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r10
  char v5; // al
  char v6; // cl
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  char v11; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+31h] [rbp-17h]

  v4 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v4 + 96))(19LL, &v8);
  v6 = v12;
  if ( !v5 )
    return 1;
  return v6;
}
