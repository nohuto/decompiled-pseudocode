/*
 * XREFs of PpmParkRegisterParking @ 0x140143D88
 * Callers:
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkApplyPolicy @ 0x1401443E0 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpmParkParkingAvailable @ 0x14056A91C (PpmParkParkingAvailable.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A9F0 (PpmIdleInitializeConcurrency.c)
 */

__int64 PpmParkRegisterParking()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  char *v2; // rsi
  PVOID v3; // r14
  char *v4; // rbx
  unsigned __int16 v5; // cx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rsi
  char *PoolWithTag; // rax
  char *v10; // rdi
  char v11; // bl
  unsigned __int64 v12; // r15
  __int64 Prcb; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  bool v16; // cf
  unsigned int v17; // r12d
  int v18; // r15d
  int v19; // ecx
  unsigned __int16 Group; // r13
  unsigned __int8 v21; // r15
  void *v22; // r14
  unsigned __int8 *v23; // rcx
  unsigned int v24; // r15d
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int16 v27; // cx
  __int64 v28; // rdx
  unsigned __int8 v29; // cl
  unsigned int v30; // eax
  unsigned __int8 v31; // r8
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  char *v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rax
  PVOID v37; // rax
  void *v38; // r8
  unsigned __int8 *v39; // r9
  __int64 v40; // r10
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r8
  KIRQL v45; // al
  PVOID *v47; // rbx
  unsigned int v48; // [rsp+28h] [rbp-E0h]
  unsigned int v49; // [rsp+28h] [rbp-E0h]
  USHORT Count[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v51; // [rsp+30h] [rbp-D8h]
  int v52; // [rsp+34h] [rbp-D4h]
  char *v53; // [rsp+38h] [rbp-D0h]
  unsigned __int16 *v54; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-B0h] BYREF
  void *v58; // [rsp+68h] [rbp-A0h]
  int v59; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v60[43]; // [rsp+7Ch] [rbp-8Ch] BYREF

  if ( PpmParkNodes )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    v1 = (unsigned int)PpmParkNumNodes;
    v2 = (char *)PpmParkNodes;
    v3 = PpmParkHistograms;
    PpmParkNumNodes = 0;
    PpmParkNodes = 0LL;
    PpmParkHistograms = 0LL;
    KeReleaseSpinLock(&PpmParkStateLock, v0);
    if ( (_DWORD)v1 )
    {
      v4 = v2 + 8;
      do
      {
        if ( *((_QWORD *)v4 + 5) )
        {
          if ( (v4[106] & 8) != 0 )
          {
            v59 = 1310721;
            memset(v60, 0, 0xA4uLL);
            v5 = *((_WORD *)v4 - 2);
            v6 = *(_QWORD *)v4;
            if ( v5 )
              LOWORD(v59) = v5 + 1;
            *(_QWORD *)&v60[2 * v5 + 1] |= v6;
            PopExecuteOnTargetProcessors((__int64)&v59, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
          }
          ExFreePoolWithTag(*((PVOID *)v4 + 5), 0x704D5050u);
        }
        v4 += 120;
        --v1;
      }
      while ( v1 );
    }
    ExFreePoolWithTag(v2, 0x704D5050u);
    ExFreePoolWithTag(v3, 0x704D5050u);
  }
  v7 = 0;
  v8 = 0LL;
  v48 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v7, 0LL, Count);
      if ( Count[0] )
        v8 = (unsigned int)(v8 + 1);
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v48 = v8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(120 * v8), 0x704D5050u);
  v53 = PoolWithTag;
  v10 = PoolWithTag;
  v58 = 0LL;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(120 * v8));
    PpmParkGranularity = 1;
    v11 = PpmParkUseCoreGranularity != 0;
    PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
    PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
    if ( PpmParkUseCoreGranularity )
    {
      LODWORD(v12) = 0;
      v55 = qword_1402F8878[0];
      LOWORD(v56) = 0;
      v54 = (unsigned __int16 *)PpmCheckRegistered;
      while ( 1 )
      {
        if ( (unsigned int)KeEnumerateNextProcessor(Count, &v54) )
        {
          v10 = v53;
          v8 = v48;
          if ( v11 )
            PpmParkGranularity = v12;
          break;
        }
        Prcb = KeGetPrcb(*(ULONG *)Count);
        if ( (_DWORD)v12 )
        {
          v14 = *(_QWORD *)(Prcb + 24920) - ((*(_QWORD *)(Prcb + 24920) >> 1) & 0x5555555555555555LL);
          if ( (_DWORD)v12 == (unsigned int)((0x101010101010101LL
                                            * (((v14 & 0x3333333333333333LL)
                                              + ((v14 >> 2) & 0x3333333333333333LL)
                                              + (((v14 & 0x3333333333333333LL) + ((v14 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            goto LABEL_23;
          v11 = 0;
          PpmParkCoreMask = 0;
        }
        else
        {
          v15 = *(_QWORD *)(Prcb + 24920) - ((*(_QWORD *)(Prcb + 24920) >> 1) & 0x5555555555555555LL);
          v12 = (0x101010101010101LL
               * (((v15 & 0x3333333333333333LL)
                 + ((v15 >> 2) & 0x3333333333333333LL)
                 + (((v15 & 0x3333333333333333LL) + ((v15 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
LABEL_23:
          v11 = PpmParkCoreMask;
        }
      }
    }
    v16 = KeNumberNodes != 0;
    v17 = 0;
    v49 = 0;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v52 = v19;
      if ( !v16 )
        break;
      KeQueryNodeActiveAffinity(v19, &Affinity, 0LL);
      Group = Affinity.Group;
      if ( Affinity.Group >= LOWORD(PpmCheckRegistered[0]) )
        v32 = 0LL;
      else
        v32 = *(_QWORD *)&PpmCheckRegistered[2 * Affinity.Group + 2];
      v33 = v32 & Affinity.Mask;
      Affinity.Mask &= v32;
      if ( Affinity.Mask )
      {
        LODWORD(v53) = v18 + 1;
        v34 = &v10[120 * v18];
        v21 = 0;
        *((_WORD *)v34 + 2) = Affinity.Group;
        *((_QWORD *)v34 + 1) = v33;
        do
        {
          v51 = v21;
          if ( v21 )
            v51 = PpmHeteroPolicy != 0 ? v21 : 0;
          v54 = 0LL;
          LOWORD(v56) = Group;
          v35 = v51;
          v55 = v33;
          while ( !(unsigned int)KeEnumerateNextProcessor(Count, &v54) )
          {
            v36 = KeGetPrcb(*(ULONG *)Count);
            if ( *(_BYTE *)(v36 + 23858) == v21 )
            {
              ++v34[v35 + 96];
              *(_QWORD *)&v34[8 * v35 + 16] |= *(_QWORD *)(v36 + 1608);
            }
          }
          Group = Affinity.Group;
          ++v21;
        }
        while ( v21 < 2u );
        v22 = v58;
        v23 = (unsigned __int8 *)(v34 + 96);
        if ( !v34[96] )
        {
          *v23 = v34[97];
          *((_QWORD *)v34 + 2) = *((_QWORD *)v34 + 3);
          v34[97] = 0;
          *((_QWORD *)v34 + 3) = 0LL;
        }
        if ( !v34[97] )
          v34[114] |= 4u;
        v24 = 0;
        v25 = 2LL;
        do
        {
          v26 = *v23;
          v23[10] = v26;
          v24 += v26;
          v23[15] = v26;
          ++v23;
          --v25;
        }
        while ( v25 );
        v59 = 1310721;
        v17 = v49 + v24 + 3 + 2 * v24;
        v49 = v17;
        memset(v60, 0, 0xA4uLL);
        v27 = *((_WORD *)v34 + 2);
        v28 = *((_QWORD *)v34 + 1);
        if ( v27 )
          LOWORD(v59) = v27 + 1;
        *(_QWORD *)&v60[2 * v27 + 1] |= v28;
        if ( (int)PpmIdleInitializeConcurrency(&v59, v34 + 48) < 0 )
          goto LABEL_58;
        v29 = PpmParkGranularity;
        v34[6] = v24;
        v34[103] = v24;
        v34[105] = v24;
        v30 = v24;
        v18 = (int)v53;
        v31 = v30 / (PpmParkMultiparkGranularity != 0);
        if ( v31 < v29 )
          v31 = v29;
        v34[113] = v31;
      }
      else
      {
        v17 = v49;
      }
      v19 = v52 + 1;
      v16 = v52 + 1 < (unsigned int)(unsigned __int16)KeNumberNodes;
    }
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v17, 0x704D5050u);
    v22 = v37;
    if ( v37 )
    {
      memset(v37, 0, 8LL * v17);
      v38 = v22;
      if ( (_DWORD)v8 )
      {
        v39 = (unsigned __int8 *)(v10 + 6);
        v40 = (unsigned int)v8;
        do
        {
          v41 = *v39;
          *(_QWORD *)(v39 + 50) = v38;
          v39 += 120;
          v42 = 8LL * (v41 + 1);
          v43 = (__int64)v38 + v42;
          *(_QWORD *)(v39 - 62) = v43;
          v44 = v42 + v43;
          *(_QWORD *)(v39 - 54) = v44;
          v38 = (void *)(v42 + v44);
          --v40;
        }
        while ( v40 );
      }
      v45 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
      PpmParkNumNodes = v8;
      PpmParkNodes = v10;
      PpmParkHistograms = v22;
      KeReleaseSpinLock(&PpmParkStateLock, v45);
      v10 = 0LL;
      v22 = 0LL;
    }
LABEL_58:
    if ( v10 )
    {
      if ( (_DWORD)v8 )
      {
        v47 = (PVOID *)(v10 + 48);
        do
        {
          if ( *v47 )
            ExFreePoolWithTag(*v47, 0x704D5050u);
          v47 += 15;
          --v8;
        }
        while ( v8 );
      }
      ExFreePoolWithTag(v10, 0x704D5050u);
    }
    if ( v22 )
      ExFreePoolWithTag(v22, 0x704D5050u);
  }
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
