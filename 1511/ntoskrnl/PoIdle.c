/*
 * XREFs of PoIdle @ 0x140046FE0
 * Callers:
 *     KiIdleLoop @ 0x140157220 (KiIdleLoop.c)
 * Callees:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400488C0 (PpmIdlePrepare.c)
 *     PpmEventIdleStateChange @ 0x1400E3A00 (PpmEventIdleStateChange.c)
 *     PpmIdleSelectStates @ 0x140134970 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x140139DC4 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1401E8634 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 v4; // rsi
  __int64 v5; // r12
  _DWORD *v6; // r13
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // edi
  int v16; // r15d
  int v17; // edx
  __int64 v19; // r13
  unsigned __int16 v20; // dx
  char v21; // si
  unsigned __int16 v22; // cx
  struct _KPRCB *CurrentPrcb; // r8
  int v24; // r11d
  _KNODE *ParentNode; // r9
  unsigned int v26; // r8d
  __int64 v27; // rcx
  char v28; // r8
  __int64 v29; // rcx
  char v30; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v31[3]; // [rsp+49h] [rbp-BFh] BYREF
  int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v38[21]; // [rsp+80h] [rbp-88h] BYREF

  result = dword_1402DE28C;
  if ( BYTE5(PpmCurrentProfile[174 * dword_1402DE28C + 16]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 23808);
  v5 = 0LL;
  v6 = *(_DWORD **)(a1 + 23816);
  v35 = 0LL;
  if ( !v4 )
    return HalProcessorIdle();
  *(_DWORD *)(v4 + 780) = 0;
  v7 = *(_QWORD *)(a1 + 23808);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(a1 + 23824);
    v9 = *(_QWORD *)(a1 + 23816);
    *(_QWORD *)(a1 + 23824) = 0LL;
    v10 = *(unsigned int *)(v7 + 16);
    *(_QWORD *)(a1 + 23832) += v8;
    v11 = 992 * v10 + v9 + 40;
    *(_QWORD *)v11 += v8;
    if ( *(_DWORD *)(v7 + 52) == 3 )
    {
      if ( *(int *)(v7 + 48) < 0 )
      {
        ++*(_DWORD *)(v11 + 12);
      }
      else
      {
        ++*(_DWORD *)(v11 + 16);
        v12 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v13 = 0;
        while ( v8 >= *v12 )
        {
          if ( v8 < v12[3] )
          {
            ++v13;
            break;
          }
          v12 += 6;
          v13 += 2;
          if ( v13 >= 0x1A )
            goto LABEL_60;
        }
        if ( v13 >= 0x1A )
        {
LABEL_60:
          ++*(_DWORD *)(v11 + 20);
          goto LABEL_17;
        }
        v14 = v11 + 32 * (v13 + 5LL);
        *(_QWORD *)v14 += v8;
        ++*(_DWORD *)(v14 + 24);
        if ( v8 < *(_QWORD *)(v14 + 8) )
          *(_QWORD *)(v14 + 8) = v8;
        if ( v8 > *(_QWORD *)(v14 + 16) )
          *(_QWORD *)(v14 + 16) = v8;
LABEL_17:
        if ( v8 < *(_QWORD *)(v11 + 24) )
          *(_QWORD *)(v11 + 24) = v8;
        if ( v8 > *(_QWORD *)(v11 + 32) )
          *(_QWORD *)(v11 + 32) = v8;
      }
    }
    else
    {
      ++*(_DWORD *)(v11 + 8);
    }
  }
  *(_DWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 52) = 3;
  *(_BYTE *)(v7 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  v37 = 1310721LL;
  memset(v38, 0, 0xA0uLL);
  *(_WORD *)(v4 + 36) = 0;
  if ( !*(_BYTE *)v4 )
  {
    result = PpmIdlePrepare(a1, (unsigned int)v31, (unsigned int)&v34, (unsigned int)&v36, (__int64)&v35, (__int64)&v37);
    v15 = result;
    LODWORD(v33) = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++v6[3];
        return result;
      }
      v16 = *(_DWORD *)(v4 + 544);
      v32 = v16;
      if ( v16 != -1 )
      {
        **(_DWORD **)(v4 + 792) = v16;
        *(_DWORD *)(v4 + 780) = 1;
      }
      v5 = v35;
      v30 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1042) == 0;
      goto LABEL_27;
    }
    return HalProcessorIdle();
  }
  if ( PpmIdleVetoBias && (unsigned int)(*(_DWORD *)(v4 + 32) - 3) <= 1 )
    return HalProcessorIdle();
  PpmIdleSelectStates(
    a1,
    (unsigned int)&v34,
    (unsigned int)&v36,
    (unsigned int)v31,
    (__int64)&v33,
    (__int64)&v32,
    (__int64)&v30);
  v15 = v33;
  v16 = v32;
LABEL_27:
  v17 = *(_DWORD *)(v4 + 12);
  if ( v15 != v17 )
  {
    *(_DWORD *)(v4 + 20) = v17;
    *(_DWORD *)(v4 + 12) = v15;
    PpmEventIdleStateChange(v15);
  }
  if ( v6[1]++ == -1 )
    PpmResetProcessorIdleAccounting(v6);
  v19 = *(_QWORD *)(a1 + 23808);
  v20 = 0;
  v21 = *(_BYTE *)(248LL * v15 + v4 + 1041);
  v22 = v37;
  if ( (_WORD)v37 )
  {
    while ( !v38[v20] )
    {
      if ( ++v20 >= (unsigned __int16)v37 )
        goto LABEL_34;
    }
    *(_WORD *)(v19 + 36) |= 0x400u;
    if ( KiSerializeTimerExpiration && v5 )
      PpmSetPlatformIdleDurationHint(v5);
    v22 = v37;
  }
LABEL_34:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(a1 + 33)
    && *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33)
    && !v21 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( ++v24 != (unsigned __int16)KeNumberNodes )
      {
        v29 = *((unsigned __int16 *)qword_1402FE6B8
              + v24
              + ParentNode->Affinity.Reserved[0] * (unsigned int)(unsigned __int16)KeNumberNodes);
        if ( *(_QWORD *)(KeNodeBlock[v29] + 64) != *(_QWORD *)(KeNodeBlock[v29] + 136) )
          goto LABEL_40;
      }
      v26 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
      if ( ((v38[(unsigned __int64)v26 >> 6] >> (KiProcessorIndexToNumberMappingTable[KiClockTimerOwner] & 0x3F)) & 1) == 0 )
      {
        v27 = v26 >> 6;
        v28 = v26 & 0x3F;
        if ( (unsigned __int16)v37 <= (unsigned int)v27 )
          LOWORD(v37) = v27 + 1;
        v38[v27] |= 1LL << v28;
        *(_WORD *)(v19 + 36) |= 0x800u;
      }
    }
LABEL_40:
    v16 = v32;
    v15 = v33;
    v22 = v37;
  }
  if ( v22 )
  {
    while ( !v38[v3] )
    {
      if ( ++v3 >= v22 )
        return PpmIdleExecuteTransition(a1, v15, v16, v31[0], v34, v36, v30);
    }
    HalRequestIpi(0LL, &v37);
  }
  return PpmIdleExecuteTransition(a1, v15, v16, v31[0], v34, v36, v30);
}
