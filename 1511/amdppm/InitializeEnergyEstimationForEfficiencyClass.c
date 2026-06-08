/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D580
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C001D2DC (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00047C0 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C00047E8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  char *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rdi
  void *v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  char *v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // r8d
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  int *v20; // rcx
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  int v24; // r14d
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28[4]; // [rsp+38h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v2 = (char *)&unk_1C00098B0 + 216 * a1;
  InitializeEnumerationContext((__int64)&qword_1C00093B8, 32, (__int64)v28);
  ResetEnumerationContext(v28);
  result = EnumerateNextDevice((__int64)v28, &v27);
  if ( !(_DWORD)result )
  {
    while ( 1 )
    {
      v4 = v27;
      if ( *(unsigned __int8 *)(v27 + 320) == a1 )
      {
        if ( !qword_1C0009540 )
          goto LABEL_9;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_9;
        memset(PoolWithTag, 0, 0x70uLL);
        v7 = *(unsigned int *)(v4 + 56);
        *(_QWORD *)(v4 + 312) = v6;
        KeProcessorGroupAffinity(&Affinity, v7);
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v8 = ((__int64 (*)(void))qword_1C0009540)();
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        if ( v8 < 0 )
          break;
      }
      result = EnumerateNextDevice((__int64)v28, &v27);
      if ( (_DWORD)result )
        goto LABEL_47;
    }
    ExFreePoolWithTag(v6, 0x72637250u);
    *(_QWORD *)(v4 + 312) = 0LL;
LABEL_9:
    InitializeEnumerationContext((__int64)&qword_1C00093B8, 32, (__int64)v28);
    ResetEnumerationContext(v28);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v28, &v27) )
    {
      v9 = v27;
      if ( *(unsigned __int8 *)(v27 + 320) == a1 )
      {
        v10 = *(void **)(v27 + 312);
        if ( v10 )
        {
          if ( qword_1C0009548 )
          {
            KeProcessorGroupAffinity(&PreviousAffinity, *(unsigned int *)(v27 + 56));
            KeSetSystemGroupAffinityThread(&PreviousAffinity, &Affinity);
            ((void (*)(void))qword_1C0009548)();
            KeRevertToUserGroupAffinityThread(&Affinity);
          }
          ExFreePoolWithTag(v10, 0x72637250u);
          *(_QWORD *)(v9 + 312) = 0LL;
        }
      }
    }
    v11 = 0;
    *((_QWORD *)v2 + 26) = 0LL;
    v12 = 0;
    for ( *((_QWORD *)v2 + 25) = 0LL; v12 < *((_DWORD *)v2 + 1); ++v12 )
    {
      if ( (*(_DWORD *)&v2[12 * v12 + 12] & 1) == 0 )
      {
        if ( v12 != v11 )
        {
          v13 = 3LL * v11;
          *(_QWORD *)&v2[4 * v13 + 8] = *(_QWORD *)&v2[12 * v12 + 8];
          *(_DWORD *)&v2[4 * v13 + 16] = *(_DWORD *)&v2[12 * v12 + 16];
        }
        ++v11;
      }
    }
    result = *((unsigned int *)v2 + 1);
    if ( (_DWORD)result != v11 )
    {
      result = (__int64)memset(&v2[8 * v11 + 8 + 4 * v11], 0, 12LL * ((unsigned int)result - v11));
      *((_DWORD *)v2 + 1) = v11;
    }
    if ( v11 )
    {
      ResetEnumerationContext(v28);
      result = EnumerateNextDevice((__int64)v28, &v27);
      if ( (_DWORD)result )
      {
LABEL_38:
        if ( *((_QWORD *)v2 + 25) )
          return result;
      }
      else
      {
        while ( 1 )
        {
          v14 = v27;
          v15 = *(unsigned __int8 *)(v27 + 320);
          if ( (_DWORD)v15 == a1 )
            break;
LABEL_37:
          result = EnumerateNextDevice((__int64)v28, &v27);
          if ( (_DWORD)result )
            goto LABEL_38;
        }
        v16 = (char *)&unk_1C00098B0 + 216 * v15;
        v17 = *((_DWORD *)v16 + 1);
        if ( v17 && v17 <= 4 )
        {
          v18 = 0;
          p_PreviousAffinity = &PreviousAffinity;
          v20 = (int *)(v16 + 8);
          while ( 1 )
          {
            v21 = *v20;
            LODWORD(p_PreviousAffinity->Mask) = *v20;
            if ( (unsigned int)(v21 - 2) > 0x15 )
              break;
            ++v18;
            v20 += 3;
            p_PreviousAffinity = (struct _GROUP_AFFINITY *)((char *)p_PreviousAffinity + 4);
            if ( v18 >= v17 )
            {
              v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
              v23 = v22;
              if ( !v22 )
                break;
              memset(v22, 0, 0x70uLL);
              *(_QWORD *)(v14 + 312) = v23;
              v24 = ((__int64 (__fastcall *)(_QWORD, struct _GROUP_AFFINITY *, _QWORD, struct _GROUP_AFFINITY *))HalPrivateDispatchTable[72])(
                      *(unsigned int *)(v14 + 56),
                      &PreviousAffinity,
                      v17,
                      &Affinity);
              if ( v24 < 0 )
              {
                ExFreePoolWithTag(v23, 0x72637250u);
                *(_QWORD *)(v14 + 312) = 0LL;
              }
              else
              {
                v23[1] = Affinity.Mask;
                *(_DWORD *)v23 = v17;
              }
              if ( v24 < 0 )
                break;
              goto LABEL_37;
            }
          }
        }
      }
      InitializeEnumerationContext((__int64)&qword_1C00093B8, 32, (__int64)v28);
      ResetEnumerationContext(v28);
      while ( 1 )
      {
        result = EnumerateNextDevice((__int64)v28, &v27);
        if ( (_DWORD)result )
          break;
        v25 = v27;
        if ( *(unsigned __int8 *)(v27 + 320) == a1 )
        {
          v26 = *(_QWORD **)(v27 + 312);
          if ( v26 )
          {
            if ( v26[1] )
            {
              ((void (*)(void))HalPrivateDispatchTable[74])();
              v26[1] = 0LL;
            }
            ExFreePoolWithTag(v26, 0x72637250u);
            *(_QWORD *)(v25 + 312) = 0LL;
          }
        }
      }
      *((_QWORD *)v2 + 26) = 0LL;
      *((_QWORD *)v2 + 25) = 0LL;
    }
  }
LABEL_47:
  if ( !*((_QWORD *)v2 + 25) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *((_QWORD *)v2 + 25) = ComputeProcessorEnergy;
  }
  return result;
}
