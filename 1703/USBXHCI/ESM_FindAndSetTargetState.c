/*
 * XREFs of ESM_FindAndSetTargetState @ 0x1C0036EFC
 * Callers:
 *     ESM_RunStateMachine @ 0x1C003737C (ESM_RunStateMachine.c)
 * Callees:
 *     ESM_LogUnhandledEvent @ 0x1C0037288 (ESM_LogUnhandledEvent.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0037674 (WPP_RECORDER_SF_qLLL.c)
 */

char __fastcall ESM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  int v3; // r9d
  __int64 v4; // r12
  unsigned int v5; // r15d
  int v7; // r13d
  char v9; // bp
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r13
  int v15; // esi
  bool v16; // zf
  int v18; // [rsp+20h] [rbp-78h]
  unsigned int v19; // [rsp+A0h] [rbp+8h]
  int v21; // [rsp+B8h] [rbp+20h]

  v3 = 1002;
  v4 = *(_QWORD *)(a1 + 968);
  v5 = *(_DWORD *)(a1 + 880);
  v19 = v5;
  v7 = *(_DWORD *)(a1 + 976);
  *a3 = 0;
  v9 = 1;
  v21 = v7;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = 1002;
    v12 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v5 + 852) - v7));
    if ( *(_DWORD *)(v12 + 32) != 1000 )
    {
      v13 = *(_DWORD *)(v12 + 32);
      while ( a2 != v13 )
      {
        v10 = (unsigned int)(v10 + 1);
        v13 = *(_DWORD *)(v12 + 8 * v10 + 32);
        if ( v13 == 1000 )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(v12 + 8 * v10 + 36);
      if ( v11 != 1002 )
        break;
    }
LABEL_8:
    if ( !v5 )
      break;
    --v5;
  }
  LODWORD(v14) = v19;
  if ( v11 == 1000 )
    return 0;
  if ( v11 == 1002 )
  {
    ESM_LogUnhandledEvent(a1, a2, 1000LL);
    return 0;
  }
  if ( v5 != v19 )
  {
    while ( (unsigned int)v14 > v5 )
    {
      v14 = (unsigned int)(v14 - 1);
      v15 = *(_DWORD *)(a1 + 4 * v14 + 852);
      if ( *(_DWORD *)(a1 + 976) == 2000 )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          1000,
          v3,
          v18,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
          232,
          *(_DWORD *)(a1 + 4 * v14 + 852));
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v15;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v14;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v5 + 852) - v21)) + 16LL) & 0x20) != 0 )
    *a3 = 1;
  *(_DWORD *)(a1 + 4LL * v5 + 852) = v11;
  v16 = *(_DWORD *)(a1 + 976) == 2000;
  *(_DWORD *)(a1 + 880) = v5;
  if ( v16 )
    WPP_RECORDER_SF_qLLL(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1000,
      v3,
      v18,
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      a2,
      v11);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v11;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v5;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  return v9;
}
