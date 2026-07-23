/*
 * XREFs of PpmInstallNewIdleStates @ 0x140145C68
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x140145C58 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     PpmDeepestHardwareIdleState @ 0x14014618C (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x1401461C4 (PpmResetIdlePolicy.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x140146334 (PpmUpdateProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v6; // rbp
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
  _DWORD *v22; // rdi
  char *v23; // rsi
  _DWORD *v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v29; // rdx
  unsigned int v30; // r8d
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  char *v34; // rcx
  char v35; // [rsp+20h] [rbp-138h]
  size_t Size; // [rsp+28h] [rbp-130h]
  size_t Sizea; // [rsp+28h] [rbp-130h]
  unsigned int v38; // [rsp+34h] [rbp-124h]
  _QWORD *v41; // [rsp+48h] [rbp-110h]
  __int64 v42; // [rsp+50h] [rbp-108h]
  _DWORD v43[44]; // [rsp+60h] [rbp-F8h] BYREF

  v3 = 0;
  v4 = a1 + 23808;
  v42 = a1 + 23808;
  if ( a3 == 1 )
  {
    if ( *(_QWORD *)v4 )
      return v3;
    goto LABEL_3;
  }
  if ( !*(_QWORD *)v4 )
  {
LABEL_3:
    v35 = 0;
    goto LABEL_4;
  }
  v35 = *(_BYTE *)(*(_QWORD *)v4 + 1LL);
  PpmUpdateProcessorIdleAccounting(a1 + 23808);
LABEL_4:
  v6 = *(unsigned int *)(a2 + 108);
  if ( (_DWORD)v6 )
  {
    v7 = 0;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v8 = (_DWORD *)(a2 + 112);
      v9 = (unsigned int)v6;
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
    v12 = (((v38 + 992 * v6 + 47) & 0xFFFFFFF8) + 4 * v6 + 15) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v12 += (*(_DWORD *)PpmIdleVetoList * (_DWORD)v6) << 6;
    Size = v12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x694D5050u);
    v41 = PoolWithTag;
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
      v17 = (char *)v14 + ((((v38 + 992 * (_DWORD)v6 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v6 + 15) & 0xFFFFFFF8);
      Sizea = PpmIdleVetoList;
      v18 = (unsigned int *)(v16 + 4);
      v19 = a2 + 112;
      v20 = (char *)(v14 + 242);
      v21 = 0;
      v22 = (_DWORD *)PpmIdleVetoList;
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
          *((_DWORD *)v20 + 15) = *v22;
          *((_QWORD *)v20 + 8) = v17;
          v17 += 64 * (unsigned __int64)(unsigned int)*v22;
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
      while ( v21 < (unsigned int)v6 );
      v23 = (char *)v41 + v38;
      v41[91] = (char *)v41 + ((v38 + 992 * (_DWORD)v6 + 47) & 0xFFFFFFF8);
      *(_DWORD *)v23 = v6;
      if ( Sizea )
      {
        v32 = v23 + 192;
        v33 = v6;
        v34 = (char *)(v41 + 125);
        do
        {
          *v32 = v34;
          v34 += 248;
          v32 += 124;
          --v33;
        }
        while ( v33 );
      }
      KxAcquireSpinLock(&PpmIdleVetoLock);
      v24 = *(_DWORD **)v42;
      *(_QWORD *)v42 = v41;
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( v35 )
        *((_DWORD *)v41 + 6) = v24[6];
      if ( v24 && (v25 = v24[3], v25 < (unsigned int)v6) )
        *((_DWORD *)v41 + 3) = v25;
      else
        *((_DWORD *)v41 + 3) = 0;
      *((_BYTE *)v41 + 1) = v35;
      v26 = *(_QWORD *)(v42 + 8);
      *(_QWORD *)(v42 + 8) = v23;
      if ( v26 )
      {
        v29 = *(_QWORD *)(v26 + 24);
        v30 = 0;
        for ( *((_QWORD *)v23 + 3) = v29; v30 < *(_DWORD *)v26; *((_QWORD *)v23 + 3) = v29 )
        {
          v31 = v30++;
          v29 += *(_QWORD *)(992 * v31 + v26 + 40);
        }
        v27 = a1;
      }
      else
      {
        v27 = a1;
        *((_QWORD *)v23 + 3) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
      }
      PpmResetIdlePolicy(v42);
      if ( v26 )
        *((_DWORD *)v23 + 2) = *(_DWORD *)(v26 + 8) + 1;
      v43[0] = 1310721;
      memset(&v43[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v43, *(_DWORD *)(v27 + 36));
      PpmDeepestHardwareIdleState(v41);
      off_1402F23B8();
      if ( *((_DWORD *)v41 + 8) != 1 && *(_BYTE *)v41 == 1 )
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
