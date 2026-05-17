/*
 * XREFs of LdrpRecordUnloadEvent @ 0x18004386C
 * Callers:
 *     LdrpProcessDetachNode @ 0x180043728 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x180043A84 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // r8
  int v9; // r12d
  int v10; // r13d
  int v11; // ecx
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned int v14; // ecx
  _DWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+2Ch] [rbp-2Ch]
  __int64 v17; // [rsp+60h] [rbp+8h]

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
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v15);
  v6 = v15[0];
  v7 = v15[1];
  v8 = RtlpUnloadEventTraceEx;
  v9 = v15[2];
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 10] = v15[0];
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 12] = v7;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 46] = v9;
  v10 = v16;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 48] = v16;
  if ( v8 )
    goto LABEL_6;
  v14 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
    v14 = 0xFFFF;
  RtlpUnloadEventTraceExNumber = v14;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 104LL * v14);
  RtlpUnloadEventTraceEx = result;
  v8 = result;
  if ( result )
  {
LABEL_6:
    v11 = LdrpUnloadIndexEx;
    v12 = 104LL * (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v17 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    *(_DWORD *)(v12 + v8 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v11 + 1;
    *(_QWORD *)(v12 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v12 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(v12 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (52 * v17 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v12 + RtlpUnloadEventTraceEx + 20) = v6;
    *(_DWORD *)(v12 + RtlpUnloadEventTraceEx + 24) = v7;
    *(_DWORD *)(v12 + RtlpUnloadEventTraceEx + 92) = v9;
    result = RtlpUnloadEventTraceEx;
    *(_DWORD *)(v12 + RtlpUnloadEventTraceEx + 96) = v10;
  }
  return result;
}
