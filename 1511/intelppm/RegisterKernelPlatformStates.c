/*
 * XREFs of RegisterKernelPlatformStates @ 0x1C002043C
 * Callers:
 *     RegisterIdleComplete @ 0x1C0015AE4 (RegisterIdleComplete.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0001FD4 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001A874 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C001BB3C (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x1C002142C (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // r13d
  int ProcessorNumberFromIndex; // ebx
  unsigned int v4; // r12d
  char *PoolWithTag; // rax
  char *v6; // rdi
  SIZE_T v7; // rbx
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  char *v10; // r15
  int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdx
  bool IsAnyHypervisorPresent; // al
  void *v16; // rcx
  PVOID *v17; // r14

  v1 = (unsigned int)dword_1C000E1D8;
  v2 = dword_1C000DD04;
  if ( dword_1C000E1D8 )
  {
    v4 = (48 * dword_1C000E1D8 + 59) & 0xFFFFFFFC;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + 8 * dword_1C000DD04 * dword_1C000E1D8, 0x72637250u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4 + 8 * v2 * (_DWORD)v1);
      v7 = (unsigned int)(16 * v2 + 40);
      v8 = ExAllocatePoolWithTag(PagedPool, v7, 0x72637250u);
      if ( v8 )
      {
        v9 = 0;
        if ( (_DWORD)v1 )
        {
          v10 = v6 + 64;
          while ( 1 )
          {
            memset(v8, 0, v7);
            *v8 = v9;
            v8[8] = v2;
            ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD))qword_1C000DF80)(
                                         *(_QWORD *)(a1 + 1048),
                                         v8,
                                         0LL);
            if ( ProcessorNumberFromIndex < 0 )
              break;
            ProcessorNumberFromIndex = ValidatePlatformIdleState((__int64)v8);
            if ( ProcessorNumberFromIndex < 0 )
              break;
            PepQueryName(a1, v9, 27LL, v10 + 16);
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
            v4 += 8 * v2;
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
            v7 = (unsigned int)(16 * v2 + 40);
            ++v9;
            v10 += 48;
            if ( v9 >= (unsigned int)v1 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          *(_DWORD *)v6 = 42;
          *((_DWORD *)v6 + 1) = dword_1C000E1D8;
          *((_DWORD *)v6 + 2) = dword_1C000E1D8;
          *((_QWORD *)v6 + 5) = PepQueryPlatformStateResidency;
          IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
          *((_QWORD *)v6 + 3) = PepIdlePreExecute;
          v16 = PepIdleTest;
          if ( IsAnyHypervisorPresent )
            v16 = PepIdleVmTest;
          *((_QWORD *)v6 + 2) = v16;
          *((_QWORD *)v6 + 4) = PepIdleComplete;
          ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_1C000DF10)(v6);
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
        if ( (_DWORD)v1 )
        {
          v17 = (PVOID *)(v6 + 88);
          do
          {
            if ( *v17 )
              ExFreePoolWithTag(*v17, 0x72637250u);
            v17 += 6;
            --v1;
          }
          while ( v1 );
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
