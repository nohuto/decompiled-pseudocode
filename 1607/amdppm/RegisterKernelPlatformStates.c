/*
 * XREFs of RegisterKernelPlatformStates @ 0x1C0017A78
 * Callers:
 *     RegisterIdleComplete @ 0x1C00179D4 (RegisterIdleComplete.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0006278 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00149D4 (ProcLibTracePlatformIdleStates.c)
 *     PepQueryName @ 0x1C001570C (PepQueryName.c)
 *     ValidatePlatformIdleState @ 0x1C001C0D4 (ValidatePlatformIdleState.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned int v4; // r12d
  char *PoolWithTag; // rax
  char *v6; // rdi
  SIZE_T v7; // rbx
  _DWORD *v8; // r15
  unsigned int v9; // r13d
  char *v10; // rbp
  int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdx
  bool IsAnyHypervisorPresent; // al
  void *v16; // rcx
  PVOID *v17; // rsi
  __int64 v18; // rbp

  v1 = dword_1C00093A4;
  if ( byte_1C0009AD4 && dword_1C0009AD0 > (unsigned int)dword_1C00093A4 )
    v1 = dword_1C0009AD0;
  v2 = (unsigned int)dword_1C00098D0;
  if ( dword_1C00098D0 )
  {
    v4 = (48 * dword_1C00098D0 + 59) & 0xFFFFFFFC;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + 8 * v1 * dword_1C00098D0, 0x72637250u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4 + 8 * v1 * (_DWORD)v2);
      v7 = (unsigned int)(16 * v1 + 40);
      v8 = ExAllocatePoolWithTag(PagedPool, v7, 0x72637250u);
      if ( v8 )
      {
        v9 = 0;
        if ( (_DWORD)v2 )
        {
          v10 = v6 + 64;
          while ( 1 )
          {
            memset(v8, 0, v7);
            *v8 = v9;
            v8[8] = v1;
            ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD))qword_1C0009640)(
                                         *(_QWORD *)(a1 + 1064),
                                         v8,
                                         0LL);
            if ( ProcessorNumberFromIndex < 0 )
              break;
            ProcessorNumberFromIndex = ValidatePlatformIdleState(v8);
            if ( ProcessorNumberFromIndex < 0 )
              break;
            PepQueryName(a1, v9, 0x1Bu, (__int64)(v10 + 16));
            *(_DWORD *)v10 = v8[5];
            *((_DWORD *)v10 + 1) = v8[6];
            *(v10 - 3) = *((_BYTE *)v8 + 16);
            if ( *((_QWORD *)v8 + 1) )
            {
              *(v10 - 4) = 1;
              ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                           *(_DWORD *)(*((_QWORD *)v8 + 1) + 56LL),
                                           (PPROCESSOR_NUMBER)v10 - 2);
              if ( ProcessorNumberFromIndex < 0 )
                break;
            }
            v11 = v8[7];
            v12 = 0LL;
            v13 = v4;
            v4 += 8 * v1;
            *((_DWORD *)v10 + 2) = v11;
            *((_QWORD *)v10 + 4) = &v6[v13];
            if ( v11 )
            {
              do
              {
                v14 = *((_QWORD *)v10 + 4);
                *(_DWORD *)(v14 + 8 * v12) = *(_DWORD *)(*(_QWORD *)&v8[4 * (unsigned int)v12 + 10] + 56LL);
                *(_BYTE *)(v14 + 8 * v12 + 4) = v8[4 * (unsigned int)v12 + 12];
                *(_BYTE *)(v14 + 8 * v12 + 6) = BYTE2(v8[4 * (unsigned int)v12 + 12]);
                *(_BYTE *)(v14 + 8 * v12 + 5) = BYTE1(v8[4 * (unsigned int)v12 + 12]);
                v12 = (unsigned int)(v12 + 1);
              }
              while ( (unsigned int)v12 < *((_DWORD *)v10 + 2) );
            }
            v7 = (unsigned int)(16 * v1 + 40);
            ++v9;
            v10 += 48;
            if ( v9 >= (unsigned int)v2 )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          *(_DWORD *)v6 = 44;
          *((_DWORD *)v6 + 1) = dword_1C00098D0;
          *((_DWORD *)v6 + 2) = dword_1C00098D0;
          *((_QWORD *)v6 + 5) = PepQueryPlatformStateResidency;
          IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
          *((_QWORD *)v6 + 3) = PepIdlePreExecute;
          v16 = PepIdleTest;
          if ( IsAnyHypervisorPresent )
            v16 = PepIdleVmTest;
          *((_QWORD *)v6 + 2) = v16;
          *((_QWORD *)v6 + 4) = PepIdleComplete;
          ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_1C00095D0)(v6);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            Src = v6;
            v6 = 0LL;
            ProcLibTracePlatformIdleStates(0);
            ProcessorNumberFromIndex = 0;
          }
        }
        ExFreePoolWithTag(v8, 0x72637250u);
      }
      else
      {
        ProcessorNumberFromIndex = -1073741670;
      }
      if ( v6 )
      {
        if ( (_DWORD)v2 )
        {
          v17 = (PVOID *)(v6 + 88);
          v18 = v2;
          do
          {
            if ( *v17 )
              ExFreePoolWithTag(*v17, 0x72637250u);
            v17 += 6;
            --v18;
          }
          while ( v18 );
        }
        ExFreePoolWithTag(v6, 0x72637250u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
