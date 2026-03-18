/*
 * XREFs of PoIdle @ 0x1400A7600
 * Callers:
 *     KiIdleLoop @ 0x140186810 (KiIdleLoop.c)
 * Callees:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400A91A0 (PpmIdlePrepare.c)
 *     PpmEventIdleStateChange @ 0x14011920C (PpmEventIdleStateChange.c)
 *     PpmIdleSelectStates @ 0x140160AB0 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x140168BC0 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeExecuteVerw @ 0x140195700 (KeExecuteVerw.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeIdleSpecCtrl @ 0x140207FE4 (KeIdleSpecCtrl.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // bx
  __int64 v10; // r10
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  int v21; // ecx
  int v22; // edx
  char v24; // dl
  unsigned __int16 v25; // cx
  __int64 v26; // r14
  struct _KPRCB *CurrentPrcb; // r8
  int v28; // r10d
  _KNODE *ParentNode; // r9
  __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  char v33; // r8
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v37[2]; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v39[4]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v43[21]; // [rsp+80h] [rbp-88h] BYREF

  result = dword_14032E84C;
  if ( BYTE5(PpmCurrentProfile[174 * dword_14032E84C + 16]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter4 + 23816);
  v5 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v40 = 0LL;
  if ( !v6 )
  {
    KeIdleSpecCtrl(BugCheckParameter4, 1LL, v37, 0LL);
    v9 = v37[0];
    if ( v37[0] )
    {
      v8 = 72LL;
      v7 = 0LL;
      __writemsr(0x48u, 0LL);
    }
    if ( v37[1] )
      KeExecuteVerw(v8, v7);
    HalProcessorIdle(v8, v7);
    if ( v9 )
      __writemsr(0x48u, v9);
    else
      _mm_lfence();
    result = 65534LL;
    *(_WORD *)(BugCheckParameter4 + 11568) &= ~1u;
    return result;
  }
  *(_DWORD *)(v6 + 780) = 0;
  v10 = *(_QWORD *)(BugCheckParameter4 + 23808);
  if ( *(_BYTE *)(v10 + 5) )
  {
    v11 = *(_QWORD *)(BugCheckParameter4 + 23824);
    *(_QWORD *)(BugCheckParameter4 + 23824) = 0LL;
    v12 = *(unsigned int *)(v10 + 16);
    *(_QWORD *)(BugCheckParameter4 + 23832) += v11;
    v13 = *(_QWORD *)(BugCheckParameter4 + 23816) + 984 * v12;
    *(_QWORD *)(v13 + 40) += v11;
    if ( *(_DWORD *)(v10 + 52) == 3 )
    {
      if ( *(int *)(v10 + 48) >= 0 )
      {
        ++*(_DWORD *)(v13 + 56);
        v14 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v15 = 0;
        while ( v11 >= *v14 )
        {
          if ( v11 < v14[3] )
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
          ++*(_DWORD *)(v13 + 60);
          goto LABEL_21;
        }
        v20 = 32LL * v15;
        *(_QWORD *)(v20 + v13 + 192) += v11;
        ++*(_DWORD *)(v20 + v13 + 216);
        if ( v11 < *(_QWORD *)(v20 + v13 + 200) )
          *(_QWORD *)(v20 + v13 + 200) = v11;
        if ( v11 > *(_QWORD *)(v20 + v13 + 208) )
          *(_QWORD *)(v20 + v13 + 208) = v11;
LABEL_21:
        if ( v11 < *(_QWORD *)(v13 + 64) )
          *(_QWORD *)(v13 + 64) = v11;
        if ( v11 > *(_QWORD *)(v13 + 72) )
          *(_QWORD *)(v13 + 72) = v11;
      }
      else
      {
        ++*(_DWORD *)(v13 + 52);
      }
    }
    else
    {
      ++*(_DWORD *)(v13 + 48);
    }
  }
  *(_DWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 52) = 3;
  *(_BYTE *)(v10 + 5) = 0;
  *(_BYTE *)(v6 + 5) = 1;
  v42 = 1310721LL;
  memset(v43, 0, 0xA0uLL);
  *(_WORD *)(v6 + 36) = 0;
  if ( *(_BYTE *)v6 )
  {
    if ( PpmIdleVetoBias && (unsigned int)(*(_DWORD *)(v6 + 32) - 3) <= 1 )
      return ((__int64 (*)(void))HalProcessorIdle)();
    PpmIdleSelectStates(
      BugCheckParameter4,
      (unsigned int)&v38,
      (unsigned int)&v41,
      (unsigned int)&v34,
      (__int64)&v35,
      (__int64)&v36,
      (__int64)&v34 + 1);
    v16 = v35;
  }
  else
  {
    result = PpmIdlePrepare(
               BugCheckParameter4,
               (unsigned int)&v34,
               (unsigned int)&v38,
               (unsigned int)&v41,
               (__int64)&v40,
               (__int64)&v42);
    v16 = result;
    v35 = result;
    if ( (_DWORD)result == -2 )
    {
      KeIdleSpecCtrl(BugCheckParameter4, 1LL, v39, 0LL);
      v19 = v39[0];
      if ( v39[0] )
      {
        v18 = 72LL;
        v17 = 0LL;
        __writemsr(0x48u, 0LL);
      }
      if ( v39[1] )
        KeExecuteVerw(v18, v17);
      HalProcessorIdle(v18, v17);
      if ( v19 )
        __writemsr(0x48u, v19);
      else
        _mm_lfence();
      result = 65534LL;
      *(_WORD *)(BugCheckParameter4 + 11568) &= ~1u;
      return result;
    }
    if ( (_DWORD)result == -1 )
    {
      ++*(_DWORD *)(v4 + 12);
      return result;
    }
    v21 = *(_DWORD *)(v6 + 544);
    v36 = v21;
    if ( v21 != -1 )
    {
      **(_DWORD **)(v6 + 792) = v21;
      *(_DWORD *)(v6 + 780) = 1;
    }
    v5 = v40;
    BYTE1(v34) = *(_BYTE *)(248LL * (unsigned int)result + v6 + 1042) == 0;
  }
  v22 = *(_DWORD *)(v6 + 12);
  if ( v16 != v22 )
  {
    *(_DWORD *)(v6 + 20) = v22;
    *(_DWORD *)(v6 + 12) = v16;
    PpmEventIdleStateChange(v16);
  }
  if ( (*(_DWORD *)(v4 + 4))++ == -1 )
    PpmResetProcessorIdleAccounting(v4, v38);
  v24 = *(_BYTE *)(248LL * v16 + v6 + 1041);
  v25 = 0;
  v26 = *(_QWORD *)(BugCheckParameter4 + 23808);
  if ( (_WORD)v42 )
  {
    while ( !v43[v25] )
    {
      if ( ++v25 >= (unsigned __int16)v42 )
        goto LABEL_64;
    }
    *(_WORD *)(v26 + 36) |= 0x400u;
    if ( KiSerializeTimerExpiration && v5 && (_DWORD)KeNumberProcessors_0 != 1 )
    {
      if ( v40 > 0xFFFFFFFFFFFFLL )
        v5 = 0xFFFFFFFFFFFFLL;
      _InterlockedExchange64(&PpmPlatformIdleHint, (v5 << 16) | (unsigned __int16)(KeNumberProcessors_0 - 1));
    }
  }
LABEL_64:
  if ( !(_BYTE)KiDynamicTickDisableReason && !PpmIpiLastClockOwnerDisable && !*(_BYTE *)(BugCheckParameter4 + 33) )
  {
    if ( *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33) )
    {
      if ( !v24 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = 0;
        ParentNode = CurrentPrcb->ParentNode;
        if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
        {
          while ( ++v28 != (unsigned __int16)KeNumberNodes )
          {
            v30 = *((unsigned __int16 *)qword_14034EB68
                  + v28
                  + (unsigned __int16)KeNumberNodes * (unsigned int)ParentNode->Affinity.Reserved[0]);
            if ( *(_QWORD *)(KeNodeBlock[v30] + 64) != *(_QWORD *)(KeNodeBlock[v30] + 136) )
              goto LABEL_77;
          }
          v31 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
          if ( ((v43[(unsigned __int64)v31 >> 6] >> (KiProcessorIndexToNumberMappingTable[KiClockTimerOwner] & 0x3F)) & 1) == 0 )
          {
            v32 = v31 >> 6;
            v33 = v31 & 0x3F;
            if ( (unsigned __int16)v42 <= (unsigned int)v32 )
              LOWORD(v42) = v32 + 1;
            v43[v32] |= 1LL << v33;
            *(_WORD *)(v26 + 36) |= 0x800u;
          }
        }
      }
    }
  }
LABEL_77:
  if ( (_WORD)v42 )
  {
    while ( !v43[v3] )
    {
      if ( ++v3 >= (unsigned __int16)v42 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v38, v41, SBYTE1(v34));
    }
    HalRequestIpi(0LL, &v42);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v38, v41, SBYTE1(v34));
}
