/*
 * XREFs of KiSelectCandidateProcessor @ 0x1401CC3D8
 * Callers:
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401C97F0 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbp
  char v10; // cl
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 1600);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
  v9 = *(_QWORD *)(v3 + 80) & v6;
  if ( (a3 & v9) != 0 )
    v9 &= a3;
  if ( v9 )
  {
    v10 = *(_BYTE *)(v4 + 1617);
    _BitScanForward64(&v11, __ROR8__(v9, v10));
    v12 = ((_BYTE)v11 + v10) & 0x3F;
    v7 = v12 + (*(unsigned __int8 *)(v4 + 1616) << 6);
    v15 = v12;
    v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v7]];
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14, v7, v8);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
  return v4;
}
