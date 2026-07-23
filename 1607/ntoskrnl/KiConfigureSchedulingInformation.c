/*
 * XREFs of KiConfigureSchedulingInformation @ 0x1403D3734
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r15
  unsigned int v11; // edi
  USHORT v12; // cx
  __int64 v13; // rsi
  int v14; // r14d
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // al
  unsigned __int64 v25; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 *v27; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 Mask; // [rsp+38h] [rbp-20h]
  unsigned __int16 Group; // [rsp+40h] [rbp-18h]
  int Count; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+58h]
  __int64 CurrentIrql; // [rsp+B8h] [rbp+60h]

  v2 = *(_DWORD *)(a1 + 24508);
  if ( v2 )
    v5 = *(_QWORD *)(a1 + 8LL * (v2 - 1) + 24944);
  else
    v5 = *(_QWORD *)(a1 + 1608);
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 1617);
  v7 = 0LL;
  *(_QWORD *)(a1 + 24936) = v5;
  if ( v2 )
  {
    while ( (~*(_QWORD *)(a1 + 24920) & *(_QWORD *)(a1 + 8 * v7 + 24944)) == 0LL )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v2 )
        goto LABEL_8;
    }
    v8 = *(_QWORD *)(a1 + 8 * v7 + 24944);
    _BitScanForward64((unsigned __int64 *)&v6, v8);
    *(_QWORD *)(a1 + 24928) = v8;
  }
LABEL_8:
  v9 = *(_QWORD *)(a1 + 1600);
  v32 = v9;
  *(_DWORD *)(a1 + 24916) = v6;
  if ( a2 || *(_DWORD *)(a1 + 36) != *(_DWORD *)(v9 + 164) )
    return KiConfigureCpuSetSchedulingInformation(a1);
  v11 = KiMaximumSharedReadyQueueSize;
  if ( !KiMaximumSharedReadyQueueSize )
    v11 = 1;
  if ( (v11 & 0x100) != 0 )
    v11 &= ~0x100u;
  if ( v11 > 0x40 )
    v11 = 64;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = *(_WORD *)(v9 + 146);
  *(_QWORD *)(v9 + 152) = 0LL;
  KeQueryNodeActiveAffinity(v12, &Affinity, (PUSHORT)&Count);
  v13 = *(_QWORD *)(a1 + 24904);
  v14 = 0;
  v15 = (v11 + (unsigned __int16)Count - 1) / v11;
  Group = Affinity.Group;
  v27 = 0LL;
  v16 = (unsigned __int16)Count % v15;
  Mask = Affinity.Mask;
  v17 = (unsigned __int16)Count / v15;
  while ( !(unsigned int)KeEnumerateNextProcessor(&Count, &v27) )
  {
    v18 = KiProcessorBlock[Count];
    if ( v14 == *(unsigned __int8 *)(v13 + 595) )
    {
      v13 = *(_QWORD *)(v18 + 24904);
      v14 = 0;
    }
    if ( !v14 )
    {
      *(_BYTE *)(v13 + 595) = v17;
      if ( v16 )
      {
        --v16;
        *(_BYTE *)(v13 + 595) = v17 + 1;
      }
    }
    v19 = *(_QWORD *)(v18 + 1608);
    ++v14;
    *(_QWORD *)(v18 + 24904) = v13;
    *(_QWORD *)(v13 + 600) |= v19;
    *(_QWORD *)(v18 + 56) = *(unsigned __int8 *)(v18 + 1617) - (unsigned int)*(unsigned __int8 *)(v13 + 593) + v13 + 528;
    v20 = *(_QWORD *)(v18 + 16);
    if ( !v20 )
      v20 = *(_QWORD *)(v18 + 8);
    **(_BYTE **)(v18 + 56) = KiQueryEffectivePriorityThread(v20, v18);
  }
  v27 = 0LL;
  v21 = v32;
  Group = Affinity.Group;
  Mask = Affinity.Mask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&Count, &v27) )
  {
    v22 = KiProcessorBlock[Count];
    v23 = *(_QWORD *)(v22 + 24904);
    if ( *(_BYTE *)(v23 + 595) > 1u )
      *(_QWORD *)(v22 + 24896) = *(_QWORD *)(v23 + 600);
    v24 = *(_BYTE *)(v22 + 1617);
    if ( v24 == *(_BYTE *)(v23 + 593) && *(_BYTE *)(v23 + 595) > 1u )
    {
      *(_DWORD *)(v22 + 24912) = 1;
      *(_BYTE *)(v23 + 596) = v24;
      *(_QWORD *)(v21 + 152) |= *(_QWORD *)(v22 + 1608);
      _BitScanReverse64(&v25, *(_QWORD *)(v23 + 600));
      *(_BYTE *)(v23 + 592) = v25 - *(_BYTE *)(v23 + 593) + 1;
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return KiConfigureCpuSetSchedulingInformation(a1);
}
