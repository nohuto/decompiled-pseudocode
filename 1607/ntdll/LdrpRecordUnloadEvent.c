/*
 * XREFs of LdrpRecordUnloadEvent @ 0x18000BD30
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000BBF4 (LdrpProcessDetachNode.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF48 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

PVOID __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rdi
  PVOID result; // rax
  unsigned int v10; // ecx
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+24h] [rbp-34h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v1 = LdrpUnloadIndex;
  v3 = LdrpUnloadIndex & 0xF;
  v4 = 52 * v3;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 8] = LdrpUnloadIndex;
  *(_QWORD *)&RtlpUnloadEventTrace[v4] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&RtlpUnloadEventTrace[v4 + 4] = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  LdrpUnloadIndex = v1 + 1;
  if ( v5 > 0x40u )
    v5 = 64;
  memmove(&RtlpUnloadEventTrace[v4 + 14], *(const void **)(a1 + 96), v5);
  if ( v5 < 0x40u )
    RtlpUnloadEventTrace[52 * v3 + 14 + ((unsigned __int64)v5 >> 1)] = 0;
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(PVOID *)(a1 + 48));
  v6 = RtlpUnloadEventTraceEx;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 10] = v11;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 12] = v12;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 46] = v13;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 48] = v14;
  if ( v6 )
    goto LABEL_6;
  v10 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
    v10 = 0xFFFF;
  RtlpUnloadEventTraceExNumber = v10;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 104LL * v10);
  RtlpUnloadEventTraceEx = (__int64)result;
  v6 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v7 = LdrpUnloadIndexEx;
    v8 = 104LL * (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v15 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    *(_DWORD *)(v8 + v6 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v7 + 1;
    *(_QWORD *)(v8 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v8 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(v8 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (52 * v15 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v8 + RtlpUnloadEventTraceEx + 20) = v11;
    *(_DWORD *)(v8 + RtlpUnloadEventTraceEx + 24) = v12;
    *(_DWORD *)(v8 + RtlpUnloadEventTraceEx + 92) = v13;
    result = (PVOID)RtlpUnloadEventTraceEx;
    *(_DWORD *)(v8 + RtlpUnloadEventTraceEx + 96) = v14;
  }
  return result;
}
