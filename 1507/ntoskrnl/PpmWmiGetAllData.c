/*
 * XREFs of PpmWmiGetAllData @ 0x1406BB620
 * Callers:
 *     PpmWmiDispatch @ 0x1405B7578 (PpmWmiDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PpmPerfGetCurrentState @ 0x14012D224 (PpmPerfGetCurrentState.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v10; // rdx
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // ecx
  int v21; // r12d
  int v22; // edi
  __int64 v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rcx
  signed __int64 v34; // rcx
  ULONG_PTR v35; // rtt
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  __int64 result; // rax
  __int64 v39; // [rsp+30h] [rbp-38h]
  char v40; // [rsp+70h] [rbp+8h]

  v39 = (__int64)(a1 - 2976);
  v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - *a2;
  if ( !v10 )
    v10 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
  v11 = 0;
  if ( v10 )
  {
    v40 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v40 = 1;
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, v13, (ULONG_PTR)&PpmIdlePolicyLock, v14);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
  }
  v15 = *a2;
  v16 = a1[46];
  v17 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
    v17 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
  if ( v17 || !v16 )
  {
    v18 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v15;
    if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v15 )
      v18 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
    if ( v18 || !*a1 )
    {
      v19 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
      if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
        v19 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
      if ( v19 || !v16 )
      {
        v22 = -1073741808;
        v21 = 0;
        goto LABEL_51;
      }
      v10 = 12LL;
    }
    else
    {
      v10 = (unsigned int)(32 * *(_DWORD *)(*a1 + 28LL) + 56);
    }
  }
  else
  {
    v10 = 80LL;
  }
  v20 = (a6 != 0 ? 79 : 71) & 0xFFFFFFF8;
  v21 = v20 + v10;
  if ( a3 >= v20 + (unsigned int)v10 )
  {
    *(_DWORD *)a4 = v21;
    if ( a6 )
    {
      v23 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v23;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v20;
    }
    *(_DWORD *)(a4 + 60) = v10;
    v24 = (_DWORD *)(a4 + v20);
    memset(v24, 0, (unsigned int)v10);
    v25 = *a2;
    v26 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
    if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
      v26 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
    if ( v26 || !v16 )
    {
      v27 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v25;
      if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v25 )
        v27 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
      if ( v27 || !*a1 )
      {
        v33 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
        if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
          v33 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
        if ( !v33 && v16 )
          PpmPerfGetCurrentState(v39, v24, 0LL, v24 + 2, v24 + 1, 0LL);
      }
      else
      {
        v24[1] = *(_DWORD *)(*a1 + 28LL);
        v24[2] = *(_DWORD *)(*a1 + 12LL);
        v24[3] = *(_DWORD *)(*a1 + 20LL);
        *((_QWORD *)v24 + 2) = *(a1 - 2775);
        v28 = *a1;
        v29 = *(_DWORD *)(*a1 + 28LL);
        if ( v29 )
        {
          v30 = 0LL;
          v31 = v24 + 8;
          v32 = v29;
          do
          {
            v30 += 248LL;
            v10 = *(_DWORD *)(v30 + *a1 + 736) / 0xAu;
            *(v31 - 2) = v10;
            *(v31 - 1) = *(_DWORD *)(v30 + *a1 + 744);
            *v31 = *(_DWORD *)(v28 + 516);
            v31 += 8;
            *((_BYTE *)v31 - 28) = *(_BYTE *)(v28 + 520);
            *((_BYTE *)v31 - 27) = *(_BYTE *)(v28 + 521);
            *((_BYTE *)v31 - 26) = *(_BYTE *)(v30 + *a1 + 792);
            *((_QWORD *)v31 - 3) = *(unsigned int *)(v30 + *a1 + 748);
            *(v31 - 4) = 1;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else
    {
      *v24 = 0;
      v24[1] = *(_DWORD *)(v16 + 292);
      *((_QWORD *)v24 + 1) = 0LL;
      *((_QWORD *)v24 + 2) = 0LL;
      *((_BYTE *)v24 + 28) = 100;
      *((_BYTE *)v24 + 29) = *(_BYTE *)(v16 + 328);
      v10 = (__int64)PpmCurrentProfile;
      v24[8] = HIDWORD(PpmCurrentProfile[174 * dword_14032E84C + 7]);
      *((_QWORD *)v24 + 5) = *(_QWORD *)(v16 + 32);
      v24[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v22 = -1073741789;
      goto LABEL_51;
    }
    *(_DWORD *)(a4 + 48) = v21;
    v21 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v22 = 0;
LABEL_51:
  if ( v40 )
  {
    if ( qword_14032E288 )
      qword_14032E288 = 0LL;
    _m_prefetchw(&PpmIdlePolicyLock);
    v34 = PpmIdlePolicyLock - 16;
    if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v34 = 0LL;
    if ( (PpmIdlePolicyLock & 2) != 0
      || (v35 = PpmIdlePolicyLock,
          v35 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v34, PpmIdlePolicyLock)) )
    {
      ExfReleasePushLock(&PpmIdlePolicyLock, v10);
    }
    KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
    v36 = KeGetCurrentThread();
    v37 = v36->KernelApcDisable + 1;
    v36->KernelApcDisable = v37;
    if ( !v37
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
      && !v36->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  result = (unsigned int)v22;
  if ( v22 >= 0 )
    v11 = v21;
  *a5 = v11;
  return result;
}
