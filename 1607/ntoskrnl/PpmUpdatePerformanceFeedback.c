/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1400D9860
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14000D000 (PpmContinueActiveTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400D7430 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x14012F920 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     PpmHvGetRuntimesForProcessor @ 0x14020D550 (PpmHvGetRuntimesForProcessor.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  bool v6; // zf
  __int64 v9; // rbp
  char v10; // di
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  char v13; // r9
  __int64 v14; // rcx
  int v15; // r10d
  unsigned int i; // eax
  bool v17; // r14
  __int64 v18; // r15
  _QWORD *v19; // rdi
  unsigned int j; // esi
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // r9d
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  __int64 *v33; // rbx
  __int64 v35; // r10
  __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-60h] BYREF
  __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 RuntimesForProcessor; // [rsp+40h] [rbp-48h]
  int v41; // [rsp+80h] [rbp-8h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v43; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a1 + 24024) == 3;
  RuntimesForProcessor = 0LL;
  v36 = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  if ( v6 )
  {
    v10 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24592) + 8LL * DWORD2(xmmword_140356000)) >> 1;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v39 = v11;
  v12 = (volatile signed __int32 *)(a1 + 23880);
  if ( a2
    || *(_QWORD *)(a1 + 23936)
    || *(_QWORD *)(a1 + 23960)
    && (*(_DWORD *)(a1 + 23304) != *(_DWORD *)(a1 + 23976) || *(_DWORD *)(a1 + 23300) != *(_DWORD *)(a1 + 23980))
    || a3 && v11 != *(_QWORD *)(a1 + 23984) )
  {
    v13 = 0;
    v14 = a1 + 23904;
    v15 = 2;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v14 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 32LL) )
        {
          if ( a3 )
            return 0;
          v13 = 1;
        }
        if ( v15 == 2 )
          v15 = i;
      }
      v14 += 8LL;
    }
    if ( v13 || a2 || !a4 )
    {
      _disable();
      v17 = (v41 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 23880);
      }
      else if ( _interlockedbittestandset64(v12, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 23880));
      }
      v18 = _InterlockedExchange64((volatile __int64 *)(a1 + 23936), 0LL);
      if ( v10 )
      {
        RuntimesForProcessor = PpmHvGetRuntimesForProcessor(a1, &v43, &v36);
        v18 = RuntimesForProcessor - v43 - *(_QWORD *)(a1 + 23992);
        *(_QWORD *)(a1 + 23992) = RuntimesForProcessor - v43;
      }
      *(_QWORD *)(a1 + 23928) += v18;
      v19 = (_QWORD *)(a1 + 23944);
      for ( j = 0; j < 2; ++j )
      {
        v21 = *(v19 - 5);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 40);
          if ( *(_BYTE *)(v21 + 33) )
          {
            (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, __int64 *))v21)(v22, a2, &v37, &v38);
            v23 = *(_QWORD *)(v21 + 16);
            if ( v37 != v23 )
            {
              v24 = *(_QWORD *)(v21 + 8);
              v25 = v37 - v23;
              v27 = (v38 - v24) * *(unsigned __int8 *)(v21 + 34);
              v37 = v25;
              v38 -= v24;
              v26 = v38;
              *(_DWORD *)(v21 + 24) = v27 / v25;
              *(_QWORD *)(v21 + 16) = v23 + v25;
              *(_QWORD *)(v21 + 8) = v24 + v26;
            }
            v28 = *(_DWORD *)(v21 + 24);
            v44 = v28;
          }
          else
          {
            (*(void (__fastcall **)(__int64, unsigned int *))v21)(v22, &v44);
            v28 = v44;
          }
          v29 = v18 * v28;
          *v19 += v29;
          if ( j == *(unsigned __int8 *)(a1 + 24016) )
            *(_QWORD *)(a1 + 23960) += v29;
        }
        ++v19;
      }
      if ( *(_BYTE *)(a1 + 24016) == 2 )
        *(_QWORD *)(a1 + 23960) += 100 * v18;
      v30 = *(_DWORD *)(a1 + 23980);
      v31 = *(_DWORD *)(a1 + 23300) - v30;
      v32 = v31 + *(_DWORD *)(a1 + 23304) - *(_DWORD *)(a1 + 23976);
      if ( v32 )
      {
        v35 = *(_QWORD *)(a1 + 23960);
        *(_DWORD *)(a1 + 23976) = *(_DWORD *)(a1 + 23304);
        *(_DWORD *)(a1 + 23980) = v30 + v31;
        *(_QWORD *)(a1 + 23960) = 0LL;
        if ( v31 )
        {
          if ( v32 != 1 )
            v31 /= v32;
          v44 = v31;
          *(_QWORD *)(a1 + 23968) += v35 * v31;
        }
      }
      *(_QWORD *)(a1 + 23984) = v39;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 23880, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      if ( v17 )
        _enable();
      v9 = RuntimesForProcessor;
    }
  }
  v33 = a5;
  if ( a5 )
  {
    if ( !v9 )
      v9 = PpmHvGetRuntimesForProcessor(a1, &v43, &v36);
    v33[1] = v43;
    v33[2] = v36;
    *v33 = v9;
  }
  return 1;
}
