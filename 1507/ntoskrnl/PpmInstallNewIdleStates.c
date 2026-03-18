/*
 * XREFs of PpmInstallNewIdleStates @ 0x1401685F8
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x1401685E8 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     PpmDeepestHardwareIdleState @ 0x140168B40 (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x140168B78 (PpmResetIdlePolicy.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x140168CB8 (PpmUpdateProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  unsigned int v6; // ebp
  int v7; // esi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  _QWORD *PoolWithTag; // rax
  _DWORD *v14; // rdi
  char *v15; // rdx
  char *v16; // rsi
  char *v17; // r13
  unsigned int *v18; // r12
  __int64 v19; // r14
  char *v20; // rsi
  unsigned int v21; // r15d
  unsigned int *v22; // rdi
  char *v23; // rsi
  _DWORD *v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rax
  int v35; // eax
  char v36; // [rsp+20h] [rbp-138h]
  unsigned int v38; // [rsp+30h] [rbp-128h]
  _QWORD *v40; // [rsp+40h] [rbp-118h]
  __int64 v41; // [rsp+48h] [rbp-110h]
  size_t Size; // [rsp+50h] [rbp-108h]
  _QWORD v43[21]; // [rsp+68h] [rbp-F0h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

  v3 = 0;
  v4 = a1 + 23808;
  v41 = a1 + 23808;
  if ( a3 == 1 )
  {
    if ( *(_QWORD *)v4 )
      return v3;
    goto LABEL_3;
  }
  if ( !*(_QWORD *)v4 )
  {
LABEL_3:
    v36 = 0;
    goto LABEL_4;
  }
  v36 = *(_BYTE *)(*(_QWORD *)v4 + 1LL);
  PpmUpdateProcessorIdleAccounting(a1 + 23808);
LABEL_4:
  v6 = *(_DWORD *)(a2 + 108);
  if ( v6 )
  {
    v7 = 0;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v8 = (_DWORD *)(a2 + 112);
      v9 = v6;
      do
      {
        if ( (*v8 & 0x100) == 0 )
          ++v7;
        v8 += 8;
        --v9;
      }
      while ( v9 );
    }
    v10 = (248 * v6 + 803) & 0xFFFFFFFC;
    v11 = (v10 + 8 * *(_DWORD *)(a2 + 104) + 7) & 0xFFFFFFF8;
    v38 = (v11 + 7 + 24 * v7) & 0xFFFFFFF8;
    v12 = (((v38 + 984 * v6 + 47) & 0xFFFFFFF8) + 4 * v6 + 15) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v12 += 24 * *(_DWORD *)PpmIdleVetoList * v6;
    Size = v12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x694D5050u);
    v40 = PoolWithTag;
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Size);
      v14[8] = a3;
      *(_BYTE *)v14 = *(_BYTE *)(a2 + 18);
      *((_BYTE *)v14 + 2) = *(_BYTE *)(a2 + 16);
      v14[12] = 0;
      v14[7] = v6;
      *((_QWORD *)v14 + 49) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v14 + 52) = *(_QWORD *)(a2 + 40);
      *((_QWORD *)v14 + 53) = *(_QWORD *)(a2 + 48);
      *((_QWORD *)v14 + 54) = *(_QWORD *)(a2 + 56);
      *((_QWORD *)v14 + 51) = *(_QWORD *)(a2 + 72);
      *((_QWORD *)v14 + 50) = *(_QWORD *)(a2 + 64);
      *((_QWORD *)v14 + 55) = *(_QWORD *)(a2 + 80);
      *((_QWORD *)v14 + 56) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v14 + 57) = *(_QWORD *)(a2 + 88);
      *((_QWORD *)v14 + 58) = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v14 + 59) = *(_QWORD *)(a2 + 8);
      v14[132] = *(_DWORD *)(a2 + 104);
      v14[194] = 1;
      *((_QWORD *)v14 + 67) = (char *)v14 + v10;
      *((_QWORD *)v14 + 99) = v14 + 196;
      if ( v7 )
      {
        v15 = (char *)v14 + v11;
        v14[186] = v7;
        *((_QWORD *)v14 + 94) = v15;
        v16 = &v15[24 * v7];
      }
      else
      {
        v16 = 0LL;
      }
      *((_QWORD *)v14 + 7) = 1310740LL;
      memset(v14 + 16, 0, 0xA0uLL);
      v17 = (char *)v14 + ((((v38 + 984 * v6 + 47) & 0xFFFFFFF8) + 4 * v6 + 15) & 0xFFFFFFF8);
      v18 = (unsigned int *)(v16 + 4);
      v19 = a2 + 112;
      v20 = (char *)(v14 + 242);
      v21 = 0;
      v22 = (unsigned int *)PpmIdleVetoList;
      do
      {
        *(_OWORD *)v20 = *(_OWORD *)(v19 + 16);
        *((_QWORD *)v20 - 21) = 1310721LL;
        memset(v20 - 160, 0, 0xA0uLL);
        v20[72] = (*(_DWORD *)v19 >> 3) & 0xF;
        v20[74] = *(_BYTE *)v19 & 1;
        v20[75] = (*(_DWORD *)v19 & 4) != 0;
        v20[76] = (*(_DWORD *)v19 & 2) != 0;
        if ( *(int *)v19 < 0 )
        {
          *((_DWORD *)v20 + 7) = 1;
          v20[73] = 1;
        }
        v20[77] = (*(_DWORD *)v19 & 0x80) != 0;
        v20[78] = BYTE1(*(_DWORD *)v19) & 1;
        v20[79] = (*(_DWORD *)v19 & 0x40000000) != 0;
        *((_DWORD *)v20 + 4) = *(_DWORD *)(v19 + 4);
        *((_DWORD *)v20 + 6) = *(_DWORD *)(v19 + 12);
        *((_DWORD *)v20 + 5) = *(_DWORD *)(v19 + 8);
        *((_QWORD *)v20 + 6) = v20 + 40;
        *((_QWORD *)v20 + 5) = v20 + 40;
        if ( v22 )
        {
          v35 = *v22;
          *((_QWORD *)v20 + 8) = v17;
          *((_DWORD *)v20 + 14) = v35;
          v17 += 24 * *v22;
        }
        if ( v18 != (unsigned int *)4 && (*(_DWORD *)v19 & 0x100) == 0 )
        {
          v18 -= 6;
          *((_BYTE *)v18 - 3) = 1;
          *v18 = v21;
        }
        ++v21;
        v20 += 248;
        v19 += 32LL;
      }
      while ( v21 < v6 );
      v23 = (char *)v40 + v38;
      v40[91] = (char *)v40 + ((v38 + 984 * v6 + 47) & 0xFFFFFFF8);
      *(_DWORD *)v23 = v6;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&PpmIdleVetoLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdleVetoLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PpmIdleVetoLock);
      }
      v24 = *(_DWORD **)v41;
      *(_QWORD *)v41 = v40;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
      else
        _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
      if ( v36 )
        *((_DWORD *)v40 + 6) = v24[6];
      if ( v24 && (v25 = v24[3], v25 < v6) )
        *((_DWORD *)v40 + 3) = v25;
      else
        *((_DWORD *)v40 + 3) = 0;
      *((_BYTE *)v40 + 1) = v36;
      v26 = *(_QWORD *)(v41 + 8);
      *(_QWORD *)(v41 + 8) = v23;
      if ( v26 )
      {
        v32 = *(_QWORD *)(v26 + 24);
        v33 = 0;
        for ( *((_QWORD *)v23 + 3) = v32; v33 < *(_DWORD *)v26; *((_QWORD *)v23 + 3) = v32 )
        {
          v34 = v33++;
          v32 += *(_QWORD *)(984 * v34 + v26 + 40);
        }
        v27 = a1;
      }
      else
      {
        v27 = a1;
        *((_QWORD *)v23 + 3) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
      }
      PpmResetIdlePolicy(v41);
      if ( v26 )
        *((_DWORD *)v23 + 2) = *(_DWORD *)(v26 + 8) + 1;
      memset(v43, 0, 0xA0uLL);
      v28 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v27 + 36)] >> 6;
      v29 = (unsigned int)v28;
      v30 = v43[v28];
      _bittestandset64(&v30, KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v27 + 36)] & 0x3F);
      v43[v29] = v30;
      PpmDeepestHardwareIdleState(v40);
      off_140321868();
      if ( *((_DWORD *)v40 + 8) != 1 && *(_BYTE *)v40 == 1 )
        PpmIdleCheckIdleDurationExpiration = 1;
      if ( v24 )
        ExFreePoolWithTag(v24, 0x694D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
