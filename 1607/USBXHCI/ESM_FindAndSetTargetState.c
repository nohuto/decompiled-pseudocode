/*
 * XREFs of ESM_FindAndSetTargetState @ 0x1C0039E68
 * Callers:
 *     ESM_RunStateMachine @ 0x1C003A2B8 (ESM_RunStateMachine.c)
 * Callees:
 *     ESM_LogUnhandledEvent @ 0x1C003A1D0 (ESM_LogUnhandledEvent.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C003A59C (WPP_RECORDER_SF_qLLL.c)
 */

char __fastcall ESM_FindAndSetTargetState(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r15
  int v4; // r12d
  __int64 v6; // r13
  unsigned int v7; // r14d
  char v8; // bp
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  int i; // eax
  int v13; // edi
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+98h] [rbp+10h]

  v17 = a2;
  LODWORD(v3) = *(_DWORD *)(a1 + 880);
  v4 = *(_DWORD *)(a1 + 976);
  v6 = *(_QWORD *)(a1 + 968);
  v7 = v3;
  *a3 = 0;
  v8 = 1;
  while ( 2 )
  {
    v9 = 1002;
    v10 = 0LL;
    v11 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - v4));
    for ( i = *(_DWORD *)(v11 + 32); i != 1000; i = *(_DWORD *)(v11 + 8 * v10 + 32) )
    {
      if ( (_DWORD)a2 == i )
      {
        v9 = *(_DWORD *)(v11 + 8 * v10 + 36);
        if ( v9 != 1002 )
          goto LABEL_10;
        break;
      }
      v10 = (unsigned int)(v10 + 1);
    }
    if ( v7 )
    {
      --v7;
      continue;
    }
    break;
  }
LABEL_10:
  if ( v9 == 1000 )
    return 0;
  if ( v9 == 1002 )
  {
    ESM_LogUnhandledEvent(a1, a2, v10, 1000LL);
    return 0;
  }
  if ( v7 != (_DWORD)v3 && (unsigned int)v3 > v7 )
  {
    do
    {
      v3 = (unsigned int)(v3 - 1);
      v13 = *(_DWORD *)(a1 + 4 * v3 + 852);
      if ( *(_DWORD *)(a1 + 976) == 2000 )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          v10,
          1000,
          v16,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
          232,
          *(_DWORD *)(a1 + 4 * v3 + 852));
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v13;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    }
    while ( (unsigned int)v3 > v7 );
    LODWORD(a2) = v17;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - v4)) + 16LL) & 0x20) != 0 )
    *a3 = 1;
  *(_DWORD *)(a1 + 4LL * v7 + 852) = v9;
  v14 = *(_DWORD *)(a1 + 976) == 2000;
  *(_DWORD *)(a1 + 880) = v7;
  if ( v14 )
    WPP_RECORDER_SF_qLLL(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      v7,
      1000,
      v16,
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      a2,
      v9);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v9;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v7;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = v17;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  return v8;
}
