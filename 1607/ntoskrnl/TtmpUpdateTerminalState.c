/*
 * XREFs of TtmpUpdateTerminalState @ 0x140678460
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140677C10 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmpTsmIterate @ 0x140678388 (TtmpTsmIterate.c)
 *     TtmiLogTerminalStateMachine @ 0x14067CA10 (TtmiLogTerminalStateMachine.c)
 */

char __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, _BYTE *a3, char *a4)
{
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // r8d
  unsigned int v13; // edx
  BOOL v14; // ecx
  int v15; // ecx
  int v16; // eax
  char v17; // al
  int v18; // ecx
  int v20; // [rsp+20h] [rbp-60h] BYREF
  char v21; // [rsp+24h] [rbp-5Ch]
  int v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-48h]
  int v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  char v30; // [rsp+68h] [rbp-18h]
  bool v31; // [rsp+69h] [rbp-17h]
  int v32; // [rsp+6Ch] [rbp-14h]
  int v33; // [rsp+70h] [rbp-10h]

  v25 = *(_DWORD *)(a2 + 36);
  v26 = *(_QWORD *)(a2 + 72);
  v7 = *(_DWORD *)(a1 + 20) == 0;
  v27 = MEMORY[0xFFFFF78000000008];
  v28 = *(_QWORD *)(a2 + 56);
  v29 = *(_QWORD *)(a2 + 64);
  if ( !v7 || (v8 = *(_DWORD *)(a2 + 32), v30 = 0, (v8 & 8) != 0) )
    v30 = 1;
  v9 = *(_DWORD *)(a2 + 32);
  v31 = (v9 & 0x60) != 0;
  *(_DWORD *)(a2 + 32) = v9 & 0xFFFFFF9F;
  v10 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 0;
  v32 = v10;
  v11 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a2 + 52) = 0;
  v33 = v11;
  TtmpTsmIterate((__int64)&v25, (__int64)&v20);
  TtmiLogTerminalStateMachine(*(unsigned int *)(a2 + 28), &v25, &v20);
  v7 = v21 == 0;
  v12 = v20;
  *(_QWORD *)(a2 + 72) = v23;
  *(_DWORD *)(a2 + 36) = v12;
  if ( v7 || (v13 = *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40) = v22, v14 = v12 != 1, ((v13 >> 4) & 1) == v14) )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 1;
    *(_DWORD *)(a2 + 32) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(16 * v14)) & 0x10;
  }
  v15 = *(_DWORD *)(a2 + 268);
  v16 = 0;
  if ( (*(_DWORD *)(a2 + 32) & 8) == 0 )
    v16 = v12;
  if ( v15 == v16 )
  {
    v17 = 0;
  }
  else
  {
    if ( v15 && v16 )
      *(_DWORD *)(a2 + 272) = *(_DWORD *)(a2 + 40);
    else
      *(_DWORD *)(a2 + 272) = 22;
    *(_DWORD *)(a2 + 268) = v16;
    v17 = 1;
  }
  v18 = *(_DWORD *)(a2 + 268);
  *a4 = v17;
  if ( v18 )
  {
    if ( v18 == 1 )
      *(_DWORD *)(a2 + 44) = 2;
    else
      *(_DWORD *)(a2 + 44) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 1;
  }
  return TtmpResetEvaluationTimer((char *)a2, v24);
}
