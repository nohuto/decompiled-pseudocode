/*
 * XREFs of PpmParkRegisterParking @ 0x1405B0118
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     PpmParkApplyPolicy @ 0x140167A20 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B0720 (PpmIdleInitializeConcurrency.c)
 *     PpmParkParkingAvailable @ 0x1405B0CC0 (PpmParkParkingAvailable.c)
 */

__int64 PpmParkRegisterParking()
{
  char *v0; // rcx
  unsigned int v1; // edx
  unsigned int i; // edi
  char *v3; // rbx
  unsigned __int16 v4; // cx
  __int64 v5; // rdx
  int v6; // esi
  unsigned int j; // ebx
  unsigned __int8 *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 *v12; // r9
  unsigned __int8 *v13; // rdi
  char v14; // dl
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int16 k; // r10
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r13d
  int v23; // r12d
  unsigned int m; // r15d
  unsigned __int16 Group; // r9
  __int64 v26; // rcx
  unsigned __int64 Mask; // r8
  unsigned __int8 v28; // r10
  int v29; // r13d
  unsigned __int8 *v30; // rbx
  __int64 v31; // r11
  int v32; // esi
  unsigned int v33; // ecx
  unsigned int v34; // esi
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int8 *v38; // rcx
  void *v39; // r14
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int16 v42; // cx
  __int64 v43; // rdx
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // r8
  PVOID v46; // rax
  __int64 v47; // r10
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v52; // rax
  unsigned int v53; // ebx
  void *v54; // rcx
  USHORT Count[4]; // [rsp+28h] [rbp-A9h] BYREF
  PVOID v56; // [rsp+30h] [rbp-A1h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-99h] BYREF
  __int64 v58; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v59[21]; // [rsp+50h] [rbp-81h] BYREF

  v0 = (char *)PpmParkNodes;
  if ( PpmParkNodes )
  {
    v1 = PpmParkNumNodes;
    for ( i = 0; i < v1; ++i )
    {
      v3 = &v0[120 * i];
      if ( *((_QWORD *)v3 + 6) )
      {
        if ( (v3[114] & 8) != 0 )
        {
          v58 = 1310721LL;
          memset(v59, 0, 0xA0uLL);
          v4 = *((_WORD *)v3 + 2);
          v5 = *((_QWORD *)v3 + 1);
          if ( v4 )
            LOWORD(v58) = v4 + 1;
          v59[v4] |= v5;
          PopExecuteOnTargetProcessors((__int64)&v58, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        ExFreePoolWithTag(*((PVOID *)v3 + 6), 0x704D5050u);
        v0 = (char *)PpmParkNodes;
        v1 = PpmParkNumNodes;
      }
    }
    ExFreePoolWithTag(v0, 0x704D5050u);
    ExFreePoolWithTag(PpmParkHistograms, 0x704D5050u);
    PpmParkNodes = 0LL;
    PpmParkHistograms = 0LL;
    PpmParkNumNodes = 0;
  }
  v6 = 0;
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    KeQueryNodeActiveAffinity(j, 0LL, Count);
    if ( Count[0] )
      ++v6;
  }
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(120 * v6), 0x704D5050u);
  v56 = 0LL;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_64;
  PpmParkNumNodes = v6;
  memset(PoolWithTag, 0, (unsigned int)(120 * v6));
  PpmParkGranularity = 1;
  v14 = PpmParkUseCoreGranularity != 0;
  PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
  PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
  if ( !PpmParkUseCoreGranularity )
    goto LABEL_27;
  v15 = qword_140320998[0];
  LODWORD(v16) = 0;
  for ( k = 0; ; v15 = qword_140320998[k] )
  {
    while ( v15 )
    {
      _BitScanForward64(&v18, v15);
      v15 &= ~(1LL << v18);
      v19 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * k + (unsigned __int8)v18];
      if ( (unsigned int)v19 >= (unsigned int)KeNumberProcessors_0 )
      {
        v20 = 0LL;
      }
      else
      {
        _mm_lfence();
        v20 = KiProcessorBlock[v19];
      }
      if ( (_DWORD)v16 )
      {
        v21 = *(_QWORD *)(v20 + 24792) - ((*(_QWORD *)(v20 + 24792) >> 1) & 0x5555555555555555LL);
        if ( (_DWORD)v16 == (unsigned int)((0x101010101010101LL
                                          * (((v21 & 0x3333333333333333LL)
                                            + ((v21 >> 2) & 0x3333333333333333LL)
                                            + (((v21 & 0x3333333333333333LL) + ((v21 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
          goto LABEL_23;
        v14 = 0;
        PpmParkCoreMask = 0;
      }
      else
      {
        v52 = *(_QWORD *)(v20 + 24792) - ((*(_QWORD *)(v20 + 24792) >> 1) & 0x5555555555555555LL);
        v16 = (0x101010101010101LL
             * (((v52 & 0x3333333333333333LL)
               + ((v52 >> 2) & 0x3333333333333333LL)
               + (((v52 & 0x3333333333333333LL) + ((v52 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
LABEL_23:
        v14 = PpmParkCoreMask;
      }
    }
    if ( ++k >= (unsigned int)LOWORD(PpmCheckRegistered[0]) )
      break;
  }
  if ( v14 )
    PpmParkGranularity = v16;
LABEL_27:
  v22 = 0;
  *(_DWORD *)&Count[2] = 0;
  v23 = 0;
  for ( m = 0; m < (unsigned __int16)KeNumberNodes; ++m )
  {
    KeQueryNodeActiveAffinity(m, &Affinity, 0LL);
    Group = Affinity.Group;
    if ( Affinity.Group >= LOWORD(PpmCheckRegistered[0]) )
      v26 = 0LL;
    else
      v26 = qword_140320998[Affinity.Group];
    Mask = v26 & Affinity.Mask;
    Affinity.Mask &= v26;
    if ( Affinity.Mask )
    {
      v28 = 0;
      v29 = Affinity.Group;
      v30 = &v13[120 * v23++];
      *((_WORD *)v30 + 2) = Affinity.Group;
      *((_QWORD *)v30 + 1) = Mask;
      while ( 2 )
      {
        v31 = v28;
        if ( v28 )
          v31 = PpmHeteroPolicy != 0 ? v28 : 0;
        v32 = v29;
LABEL_35:
        v33 = v32 + 1;
        v34 = 0;
        while ( 1 )
        {
          if ( Mask )
          {
            _BitScanForward64(&v35, Mask);
            v32 = Group;
            Mask &= ~(1LL << v35);
            v36 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * Group + (unsigned __int8)v35];
            if ( (unsigned int)v36 >= (unsigned int)KeNumberProcessors_0 )
            {
              v37 = 0LL;
            }
            else
            {
              _mm_lfence();
              v37 = KiProcessorBlock[v36];
            }
            if ( *(_BYTE *)(v37 + 23858) == v28 )
            {
              ++v30[v31 + 96];
              *(_QWORD *)&v30[8 * v31 + 16] |= *(_QWORD *)(v37 + 1608);
            }
            goto LABEL_35;
          }
          if ( ++Group >= v33 )
            break;
          Mask = *(_QWORD *)(8LL * Group + 8);
        }
        if ( ++v28 < 2u )
        {
          Group = Affinity.Group;
          Mask = Affinity.Mask;
          continue;
        }
        break;
      }
      v38 = v30 + 96;
      v39 = 0LL;
      if ( !v30[96] )
      {
        *v38 = v30[97];
        *((_QWORD *)v30 + 2) = *((_QWORD *)v30 + 3);
        v30[97] = 0;
        *((_QWORD *)v30 + 3) = 0LL;
      }
      if ( !v30[97] )
        v30[114] |= 4u;
      v40 = 2LL;
      do
      {
        v41 = *v38;
        v38[10] = v41;
        v34 += v41;
        v38[15] = v41;
        ++v38;
        --v40;
      }
      while ( v40 );
      v58 = 1310721LL;
      v22 = *(_DWORD *)&Count[2] + v34 + 3 + 2 * v34;
      *(_DWORD *)&Count[2] = v22;
      memset(v59, 0, 0xA0uLL);
      v42 = *((_WORD *)v30 + 2);
      v43 = *((_QWORD *)v30 + 1);
      if ( v42 )
        LOWORD(v58) = v42 + 1;
      v59[v42] |= v43;
      if ( (int)PpmIdleInitializeConcurrency(&v58, v30 + 48) < 0 )
        goto LABEL_73;
      v44 = PpmParkGranularity;
      v30[6] = v34;
      v30[103] = v34;
      v30[105] = v34;
      v45 = v34 / (PpmParkMultiparkGranularity != 0);
      if ( v45 < v44 )
        v45 = v44;
      v30[113] = v45;
    }
  }
  v46 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v22, 0x704D5050u);
  v56 = v46;
  v39 = v46;
  if ( v46 )
  {
    memset(v46, 0, 8LL * v22);
    v11 = (unsigned int)PpmParkNumNodes;
    v9 = (__int64)v39;
    if ( PpmParkNumNodes )
    {
      v12 = v13 + 6;
      v47 = (unsigned int)PpmParkNumNodes;
      do
      {
        v48 = *v12;
        *(_QWORD *)(v12 + 50) = v9;
        v12 += 120;
        v10 = 8LL * (v48 + 1);
        v49 = v10 + v9;
        *(_QWORD *)(v12 - 62) = v49;
        v50 = v10 + v49;
        *(_QWORD *)(v12 - 54) = v50;
        v9 = v10 + v50;
        --v47;
      }
      while ( v47 );
    }
    PpmParkNodes = v13;
    v13 = 0LL;
    PpmParkHistograms = v39;
    v39 = 0LL;
    v56 = 0LL;
  }
  else
  {
LABEL_73:
    v11 = (unsigned int)PpmParkNumNodes;
  }
  if ( v13 )
  {
    v53 = 0;
    if ( (_DWORD)v11 )
    {
      do
      {
        v54 = *(void **)&v13[120 * v53 + 48];
        if ( v54 )
        {
          ExFreePoolWithTag(v54, 0x704D5050u);
          LODWORD(v11) = PpmParkNumNodes;
        }
        ++v53;
      }
      while ( v53 < (unsigned int)v11 );
      v39 = v56;
    }
    ExFreePoolWithTag(v13, 0x704D5050u);
    PpmParkNumNodes = 0;
  }
  if ( v39 )
    ExFreePoolWithTag(v39, 0x704D5050u);
LABEL_64:
  PpmParkApplyPolicy(v10, v9, v11, v12);
  return PpmParkParkingAvailable();
}
