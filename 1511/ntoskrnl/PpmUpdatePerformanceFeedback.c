/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x140049800
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x1400466A0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14009C174 (PpmContinueActiveTimeAccumulation.c)
 *     PpmContinueTimeAccumulation @ 0x1401242B4 (PpmContinueTimeAccumulation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     PpmHvGetRuntimesForProcessor @ 0x1401F3C84 (PpmHvGetRuntimesForProcessor.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, __int64 a3, char a4, __int64 *a5)
{
  bool v6; // zf
  char v7; // r11
  __int64 v10; // rbp
  char v11; // di
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  char v14; // r9
  __int64 *v15; // rcx
  int v16; // r10d
  unsigned int i; // eax
  __int64 v18; // rdx
  bool v19; // r14
  __int64 v20; // r15
  _QWORD *v21; // rdi
  unsigned int j; // esi
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // r9d
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  __int64 *v35; // rbx
  __int64 v37; // r10
  __int64 v38; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-60h] BYREF
  __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int64 RuntimesForProcessor; // [rsp+40h] [rbp-48h]
  int v43; // [rsp+80h] [rbp-8h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v45; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a1 + 24024) == 3;
  v7 = a3;
  RuntimesForProcessor = 0LL;
  v38 = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  if ( v6 )
  {
    v11 = 1;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24592) + 8LL * DWORD2(xmmword_140332008)) >> 1;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  v41 = v12;
  v13 = (volatile signed __int32 *)(a1 + 23880);
  if ( a2
    || *(_QWORD *)(a1 + 23936)
    || *(_QWORD *)(a1 + 23960)
    && (*(_DWORD *)(a1 + 23304) != *(_DWORD *)(a1 + 23976) || *(_DWORD *)(a1 + 23300) != *(_DWORD *)(a1 + 23980))
    || (_BYTE)a3 && v12 != *(_QWORD *)(a1 + 23984) )
  {
    v14 = 0;
    v15 = (__int64 *)(a1 + 23904);
    v16 = 2;
    for ( i = 0; i < 2; ++i )
    {
      v18 = *v15;
      if ( *v15 )
      {
        a3 = *(unsigned __int8 *)(v18 + 32);
        if ( (_BYTE)a3 )
        {
          if ( v7 )
            return 0;
          v14 = 1;
        }
        if ( v16 == 2 )
          v16 = i;
      }
      ++v15;
    }
    if ( v14 || a2 || !a4 )
    {
      _disable();
      v19 = (v43 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 23880);
      }
      else if ( _interlockedbittestandset64(v13, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 23880), v18, a3);
      }
      v20 = _InterlockedExchange64((volatile __int64 *)(a1 + 23936), 0LL);
      if ( v11 )
      {
        RuntimesForProcessor = PpmHvGetRuntimesForProcessor(a1, &v45, &v38);
        v20 = RuntimesForProcessor - v45 - *(_QWORD *)(a1 + 23992);
        *(_QWORD *)(a1 + 23992) = RuntimesForProcessor - v45;
      }
      *(_QWORD *)(a1 + 23928) += v20;
      v21 = (_QWORD *)(a1 + 23944);
      for ( j = 0; j < 2; ++j )
      {
        v23 = *(v21 - 5);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 40);
          if ( *(_BYTE *)(v23 + 33) )
          {
            (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, __int64 *))v23)(v24, a2, &v39, &v40);
            v25 = *(_QWORD *)(v23 + 16);
            if ( v39 != v25 )
            {
              v26 = *(_QWORD *)(v23 + 8);
              v27 = v39 - v25;
              v29 = (v40 - v26) * *(unsigned __int8 *)(v23 + 34);
              v39 = v27;
              v40 -= v26;
              v28 = v40;
              *(_DWORD *)(v23 + 24) = v29 / v27;
              *(_QWORD *)(v23 + 16) = v25 + v27;
              *(_QWORD *)(v23 + 8) = v26 + v28;
            }
            v30 = *(_DWORD *)(v23 + 24);
            v46 = v30;
          }
          else
          {
            (*(void (__fastcall **)(__int64, unsigned int *))v23)(v24, &v46);
            v30 = v46;
          }
          v31 = v20 * v30;
          *v21 += v31;
          if ( j == *(unsigned __int8 *)(a1 + 24016) )
            *(_QWORD *)(a1 + 23960) += v31;
        }
        ++v21;
      }
      if ( *(_BYTE *)(a1 + 24016) == 2 )
        *(_QWORD *)(a1 + 23960) += 100 * v20;
      v32 = *(_DWORD *)(a1 + 23980);
      v33 = *(_DWORD *)(a1 + 23300) - v32;
      v34 = v33 + *(_DWORD *)(a1 + 23304) - *(_DWORD *)(a1 + 23976);
      if ( v34 )
      {
        v37 = *(_QWORD *)(a1 + 23960);
        *(_DWORD *)(a1 + 23976) = *(_DWORD *)(a1 + 23304);
        *(_DWORD *)(a1 + 23980) = v32 + v33;
        *(_QWORD *)(a1 + 23960) = 0LL;
        if ( v33 )
        {
          if ( v34 != 1 )
            v33 /= v34;
          v46 = v33;
          *(_QWORD *)(a1 + 23968) += v37 * v33;
        }
      }
      *(_QWORD *)(a1 + 23984) = v41;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 23880, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
      if ( v19 )
        _enable();
      v10 = RuntimesForProcessor;
    }
  }
  v35 = a5;
  if ( a5 )
  {
    if ( !v10 )
      v10 = PpmHvGetRuntimesForProcessor(a1, &v45, &v38);
    v35[1] = v45;
    v35[2] = v38;
    *v35 = v10;
  }
  return 1;
}
