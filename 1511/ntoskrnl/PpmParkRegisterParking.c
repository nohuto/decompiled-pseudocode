/*
 * XREFs of PpmParkRegisterParking @ 0x140138DFC
 * Callers:
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     PpmParkApplyPolicy @ 0x1401394A8 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpmIdleInitializeConcurrency @ 0x140537030 (PpmIdleInitializeConcurrency.c)
 *     PpmParkParkingAvailable @ 0x140537528 (PpmParkParkingAvailable.c)
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
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  unsigned __int8 v22; // cl
  unsigned int v23; // eax
  unsigned __int8 v24; // r8
  unsigned __int16 Group; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  char *v28; // rbx
  unsigned __int8 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rax
  void *v32; // r14
  unsigned __int8 *v33; // rcx
  unsigned int v34; // r15d
  __int64 v35; // rdx
  int v36; // eax
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
  USHORT Count[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v49; // [rsp+30h] [rbp-D8h]
  unsigned int v50; // [rsp+38h] [rbp-D0h]
  int v51; // [rsp+3Ch] [rbp-CCh]
  unsigned __int16 *v52; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+48h] [rbp-C0h]
  __int64 v54; // [rsp+50h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-B0h] BYREF
  void *v56; // [rsp+68h] [rbp-A0h]
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v58[21]; // [rsp+80h] [rbp-88h] BYREF

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
            v57 = 1310721LL;
            memset(v58, 0, 0xA0uLL);
            v5 = *((_WORD *)v4 - 2);
            v6 = *(_QWORD *)v4;
            if ( v5 )
              LOWORD(v57) = v5 + 1;
            v58[v5] |= v6;
            PopExecuteOnTargetProcessors((__int64)&v57, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
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
  *(_DWORD *)Count = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v7, 0LL, &Count[2]);
      if ( Count[2] )
        v8 = (unsigned int)(v8 + 1);
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    *(_DWORD *)Count = v8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(120 * v8), 0x704D5050u);
  v49 = PoolWithTag;
  v10 = PoolWithTag;
  v56 = 0LL;
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
      v53 = qword_1402D17F8[0];
      LOWORD(v54) = 0;
      v52 = (unsigned __int16 *)PpmCheckRegistered;
      while ( 1 )
      {
        if ( (unsigned int)KeEnumerateNextProcessor(&Count[2], &v52) )
        {
          v10 = v49;
          v8 = *(unsigned int *)Count;
          if ( v11 )
            PpmParkGranularity = v12;
          break;
        }
        Prcb = KeGetPrcb(*(ULONG *)&Count[2]);
        if ( (_DWORD)v12 )
        {
          v14 = *(_QWORD *)(Prcb + 24792) - ((*(_QWORD *)(Prcb + 24792) >> 1) & 0x5555555555555555LL);
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
          v15 = *(_QWORD *)(Prcb + 24792) - ((*(_QWORD *)(Prcb + 24792) >> 1) & 0x5555555555555555LL);
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
    *(_DWORD *)Count = 0;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v51 = v19;
      if ( !v16 )
        break;
      KeQueryNodeActiveAffinity(v19, &Affinity, 0LL);
      Group = Affinity.Group;
      if ( Affinity.Group >= LOWORD(PpmCheckRegistered[0]) )
        v26 = 0LL;
      else
        v26 = *(_QWORD *)&PpmCheckRegistered[2 * Affinity.Group + 2];
      v27 = v26 & Affinity.Mask;
      Affinity.Mask &= v26;
      if ( Affinity.Mask )
      {
        LODWORD(v49) = v18 + 1;
        v28 = &v10[120 * v18];
        v29 = 0;
        *((_WORD *)v28 + 2) = Affinity.Group;
        *((_QWORD *)v28 + 1) = v27;
        do
        {
          v50 = v29;
          if ( v29 )
            v50 = PpmHeteroPolicy != 0 ? v29 : 0;
          v52 = 0LL;
          LOWORD(v54) = Group;
          v30 = v50;
          v53 = v27;
          while ( !(unsigned int)KeEnumerateNextProcessor(&Count[2], &v52) )
          {
            v31 = KeGetPrcb(*(ULONG *)&Count[2]);
            if ( *(_BYTE *)(v31 + 23858) == v29 )
            {
              ++v28[v30 + 96];
              *(_QWORD *)&v28[8 * v30 + 16] |= *(_QWORD *)(v31 + 1608);
            }
          }
          Group = Affinity.Group;
          ++v29;
        }
        while ( v29 < 2u );
        v32 = v56;
        v33 = (unsigned __int8 *)(v28 + 96);
        if ( !v28[96] )
        {
          *v33 = v28[97];
          *((_QWORD *)v28 + 2) = *((_QWORD *)v28 + 3);
          v28[97] = 0;
          *((_QWORD *)v28 + 3) = 0LL;
        }
        if ( !v28[97] )
          v28[114] |= 4u;
        v34 = 0;
        v35 = 2LL;
        do
        {
          v36 = *v33;
          v33[10] = v36;
          v34 += v36;
          v33[15] = v36;
          ++v33;
          --v35;
        }
        while ( v35 );
        v57 = 1310721LL;
        v17 = *(_DWORD *)Count + v34 + 3 + 2 * v34;
        *(_DWORD *)Count = v17;
        memset(v58, 0, 0xA0uLL);
        v20 = *((_WORD *)v28 + 2);
        v21 = *((_QWORD *)v28 + 1);
        if ( v20 )
          LOWORD(v57) = v20 + 1;
        v58[v20] |= v21;
        if ( (int)PpmIdleInitializeConcurrency(&v57, v28 + 48) < 0 )
          goto LABEL_59;
        v22 = PpmParkGranularity;
        v28[6] = v34;
        v28[103] = v34;
        v28[105] = v34;
        v23 = v34;
        v18 = (int)v49;
        v24 = v23 / (PpmParkMultiparkGranularity != 0);
        if ( v24 < v22 )
          v24 = v22;
        v28[113] = v24;
      }
      else
      {
        v17 = *(_DWORD *)Count;
      }
      v19 = v51 + 1;
      v16 = v51 + 1 < (unsigned int)(unsigned __int16)KeNumberNodes;
    }
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v17, 0x704D5050u);
    v32 = v37;
    if ( v37 )
    {
      memset(v37, 0, 8LL * v17);
      v38 = v32;
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
      PpmParkHistograms = v32;
      KeReleaseSpinLock(&PpmParkStateLock, v45);
      v10 = 0LL;
      v32 = 0LL;
    }
LABEL_59:
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
    if ( v32 )
      ExFreePoolWithTag(v32, 0x704D5050u);
  }
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
