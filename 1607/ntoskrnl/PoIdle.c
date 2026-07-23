/*
 * XREFs of PoIdle @ 0x1400D7DE0
 * Callers:
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 * Callees:
 *     PpmEventIdleStateChange @ 0x1400A0088 (PpmEventIdleStateChange.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400D9B50 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x1401461FC (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeExecuteVerw @ 0x140171740 (KeExecuteVerw.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeIdleSpecCtrl @ 0x1401D8EC8 (KeIdleSpecCtrl.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140200E70 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 v4; // rdi
  _DWORD *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 v8; // bx
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  int v21; // r12d
  int v22; // edx
  unsigned __int16 v24; // dx
  __int64 v25; // r13
  char v26; // di
  unsigned __int16 v27; // cx
  struct _KPRCB *CurrentPrcb; // r8
  int v29; // r10d
  _KNODE *ParentNode; // r9
  __int64 v31; // rcx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  char v34; // r8
  char v35; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v36[3]; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-BCh] BYREF
  int v38; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v39[2]; // [rsp+54h] [rbp-B4h] BYREF
  _WORD v40[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v44[88]; // [rsp+78h] [rbp-90h] BYREF

  result = dword_140303D4C;
  if ( BYTE5(PpmCurrentProfile[174 * dword_140303D4C + 16]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 23808);
  v5 = *(_DWORD **)(a1 + 23816);
  v42 = 0LL;
  if ( !v4 )
  {
    KeIdleSpecCtrl(a1, 1LL, v39, 0LL);
    v8 = v39[0];
    if ( v39[0] )
    {
      v7 = 72LL;
      v6 = 0LL;
      __writemsr(0x48u, 0LL);
    }
    if ( v39[1] )
      KeExecuteVerw(v7, v6);
    HalProcessorIdle(v7, v6);
    if ( v8 )
      __writemsr(0x48u, v8);
    else
      _mm_lfence();
    result = 65534LL;
    *(_WORD *)(a1 + 11576) &= ~1u;
    return result;
  }
  *(_DWORD *)(v4 + 780) = 0;
  v9 = *(_QWORD *)(a1 + 23808);
  if ( *(_BYTE *)(v9 + 5) )
  {
    v10 = *(_QWORD *)(a1 + 23824);
    v11 = *(_QWORD *)(a1 + 23816);
    *(_QWORD *)(a1 + 23824) = 0LL;
    v12 = *(unsigned int *)(v9 + 16);
    *(_QWORD *)(a1 + 23832) += v10;
    v13 = 992 * v12 + v11 + 40;
    *(_QWORD *)v13 += v10;
    if ( *(_DWORD *)(v9 + 52) == 3 )
    {
      if ( *(int *)(v9 + 48) >= 0 )
      {
        ++*(_DWORD *)(v13 + 16);
        v14 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v15 = 0;
        while ( v10 >= *v14 )
        {
          if ( v10 < v14[3] )
          {
            ++v15;
            break;
          }
          v14 += 6;
          v15 += 2;
          if ( v15 >= 0x1A )
            goto LABEL_20;
        }
        if ( v15 >= 0x1A )
        {
LABEL_20:
          ++*(_DWORD *)(v13 + 20);
          goto LABEL_21;
        }
        v20 = v13 + 32 * (v15 + 5LL);
        *(_QWORD *)v20 += v10;
        ++*(_DWORD *)(v20 + 24);
        if ( v10 < *(_QWORD *)(v20 + 8) )
          *(_QWORD *)(v20 + 8) = v10;
        if ( v10 > *(_QWORD *)(v20 + 16) )
          *(_QWORD *)(v20 + 16) = v10;
LABEL_21:
        if ( v10 < *(_QWORD *)(v13 + 24) )
          *(_QWORD *)(v13 + 24) = v10;
        if ( v10 > *(_QWORD *)(v13 + 32) )
          *(_QWORD *)(v13 + 32) = v10;
      }
      else
      {
        ++*(_DWORD *)(v13 + 12);
      }
    }
    else
    {
      ++*(_DWORD *)(v13 + 8);
    }
  }
  *(_DWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 52) = 3;
  *(_BYTE *)(v9 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  *(_DWORD *)v44 = 1310721;
  memset(&v44[2], 0, 0xA4uLL);
  *(_WORD *)(v4 + 36) = 0;
  if ( *(_BYTE *)v4 )
  {
    if ( PpmIdleVetoBias && (unsigned int)(*(_DWORD *)(v4 + 32) - 3) <= 1 )
      return ((__int64 (*)(void))HalProcessorIdle)();
    PpmIdleSelectStates(
      a1,
      (unsigned int)&v41,
      (unsigned int)&v43,
      (unsigned int)v36,
      (__int64)&v37,
      (__int64)&v38,
      (__int64)&v35);
    v16 = v37;
    v21 = v38;
  }
  else
  {
    result = PpmIdlePrepare(a1, (unsigned int)v36, (unsigned int)&v41, (unsigned int)&v43, (__int64)&v42, (__int64)v44);
    v16 = result;
    v37 = result;
    if ( (_DWORD)result == -2 )
    {
      KeIdleSpecCtrl(a1, 1LL, v40, 0LL);
      v19 = v40[0];
      if ( v40[0] )
      {
        v18 = 72LL;
        v17 = 0LL;
        __writemsr(0x48u, 0LL);
      }
      if ( v40[1] )
        KeExecuteVerw(v18, v17);
      HalProcessorIdle(v18, v17);
      if ( v19 )
        __writemsr(0x48u, v19);
      else
        _mm_lfence();
      result = 65534LL;
      *(_WORD *)(a1 + 11576) &= ~1u;
      return result;
    }
    if ( (_DWORD)result == -1 )
    {
      ++v5[3];
      return result;
    }
    v21 = *(_DWORD *)(v4 + 544);
    v38 = v21;
    if ( v21 != -1 )
    {
      **(_DWORD **)(v4 + 792) = v21;
      *(_DWORD *)(v4 + 780) = 1;
    }
    v35 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1042) == 0;
  }
  v22 = *(_DWORD *)(v4 + 12);
  if ( v16 != v22 )
  {
    *(_DWORD *)(v4 + 20) = v22;
    *(_DWORD *)(v4 + 12) = v16;
    PpmEventIdleStateChange(v16, v22);
  }
  if ( v5[1]++ == -1 )
    PpmResetProcessorIdleAccounting(v5);
  v24 = v44[0];
  v25 = *(_QWORD *)(a1 + 23808);
  v26 = *(_BYTE *)(248LL * v16 + v4 + 1041);
  v27 = 0;
  if ( v44[0] )
  {
    while ( !*(_QWORD *)&v44[4 * v27 + 4] )
    {
      if ( ++v27 >= v44[0] )
        goto LABEL_62;
    }
    *(_WORD *)(v25 + 36) |= 0x400u;
    if ( KiSerializeTimerExpiration && v42 )
      PpmSetPlatformIdleDurationHint();
    v24 = v44[0];
  }
LABEL_62:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(a1 + 33)
    && *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33)
    && !v26 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v29 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( ++v29 != (unsigned __int16)KeNumberNodes )
      {
        v31 = *((unsigned __int16 *)qword_1403269E8
              + v29
              + ParentNode->Affinity.Reserved[0] * (unsigned int)(unsigned __int16)KeNumberNodes);
        if ( *(_QWORD *)(KeNodeBlock[v31] + 64) != *(_QWORD *)(KeNodeBlock[v31] + 136) )
          goto LABEL_75;
      }
      v32 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
      if ( ((*(_QWORD *)&v44[4 * ((unsigned __int64)v32 >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[KiClockTimerOwner] & 0x3F)) & 1) == 0 )
      {
        v33 = v32 >> 6;
        v34 = v32 & 0x3F;
        if ( v44[0] <= (unsigned int)v33 )
          v44[0] = v33 + 1;
        *(_QWORD *)&v44[4 * v33 + 4] |= 1LL << v34;
        *(_WORD *)(v25 + 36) |= 0x800u;
      }
    }
LABEL_75:
    v21 = v38;
    v16 = v37;
    v24 = v44[0];
  }
  if ( v24 )
  {
    while ( !*(_QWORD *)&v44[4 * v3 + 4] )
    {
      if ( ++v3 >= v24 )
        return PpmIdleExecuteTransition(a1, v16, v21, v36[0], v41, v43, v35);
    }
    HalRequestIpi(0LL, v44);
  }
  return PpmIdleExecuteTransition(a1, v16, v21, v36[0], v41, v43, v35);
}
