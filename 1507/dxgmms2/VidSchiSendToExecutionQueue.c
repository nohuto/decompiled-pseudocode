/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0001A80
 * Callers:
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0001EB4 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiCaptureProcessName @ 0x1C0002004 (VidSchiCaptureProcessName.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0008D50 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ?VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z @ 0x1C0012830 (-VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z.c)
 *     Template_piiqq @ 0x1C0013D70 (Template_piiqq.c)
 *     VidSchiFillSubmitCommandData @ 0x1C0017258 (VidSchiFillSubmitCommandData.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C001DC94 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C0078930 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2, char a3)
{
  signed __int64 v3; // r13
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  volatile signed __int64 *v28; // rdi
  char v29; // di
  KIRQL v30; // r13
  int v31; // eax
  int v32; // esi
  __int64 v33; // rdx
  unsigned int i; // edi
  LARGE_INTEGER *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  bool v40; // zf
  __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // r8d
  int v45; // eax
  char v46; // cl
  int v47; // eax
  char v48; // dl
  __int64 v49; // rdi
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r8
  _QWORD *v56; // rax
  KIRQL v57; // [rsp+40h] [rbp-79h]
  _BYTE v60[5]; // [rsp+43h] [rbp-76h] BYREF
  LARGE_INTEGER *v61; // [rsp+48h] [rbp-71h]
  __int64 v62; // [rsp+50h] [rbp-69h]
  __int64 v63; // [rsp+58h] [rbp-61h]
  int v64; // [rsp+60h] [rbp-59h]
  int v65; // [rsp+64h] [rbp-55h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-51h] BYREF
  __int128 v67; // [rsp+80h] [rbp-39h] BYREF
  __int128 v68; // [rsp+90h] [rbp-29h]
  __int128 v69; // [rsp+A0h] [rbp-19h]
  __int128 v70; // [rsp+B0h] [rbp-9h]
  __int128 v71; // [rsp+C0h] [rbp+7h]
  __int128 v72; // [rsp+D0h] [rbp+17h]

  v3 = *(_QWORD *)(a1 + 48);
  LODWORD(v61) = 0;
  v5 = *(_QWORD *)(v3 + 96);
  v6 = *(_QWORD *)(v3 + 104);
  v7 = *(unsigned int *)(v5 + 416);
  v8 = *(_QWORD *)(v5 + 24);
  VidSchiCaptureProcessName(v6, 56 * v7 + v5 + 432);
  v9 = 56 * (v7 + 8);
  *(_OWORD *)(v9 + v5) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(v9 + v5 + 16) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v9 + v5 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 416) = ((_BYTE)v7 + 1) & 0xF;
  v10 = *(_DWORD *)(a1 + 92);
  if ( (v10 & 4) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v33 + 72) & 0x8000) != 0 && ((*(_DWORD *)(v6 + 48) & 2) != 0 || *(int *)(v33 + 376) >= 4) )
    {
      *(_DWORD *)(a1 + 92) = v10 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 924));
      VidSchIsVSyncEnabled(v8, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL));
    }
  }
  v57 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1872), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2852));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 900));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2848));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 764)) == 1 )
  {
    if ( v6 == *(_QWORD *)(v8 + 176) )
      VidSchiUpdateContextStatus(v3, 1LL, 4733LL);
    *(_DWORD *)(v3 + 176) |= 2u;
    v11 = *(unsigned int *)(v3 + 396);
    if ( ++*(_DWORD *)(v5 + 4 * v11 + 1624) == 1 )
      *(_DWORD *)(v5 + 1620) |= 1 << *(_DWORD *)(v3 + 396);
    v12 = 1;
  }
  else
  {
    v12 = (int)v61;
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( !v13 )
    {
LABEL_14:
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        VidSchiFillSubmitCommandDataVirtual(a1, &v67);
      else
        VidSchiFillSubmitCommandData(a1, &v67);
      _InterlockedExchange64((volatile __int64 *)(v5 + 120), *(_QWORD *)(a1 + 104));
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v17[3] = a1;
      v17[4] = *(_QWORD *)(a1 + 104);
      v17[5] = *(_QWORD *)(a1 + 56);
      v17[6] = *(int *)(a1 + 88);
      v18 = *(_QWORD *)(a1 + 56);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 96);
      else
        v19 = 0LL;
      v17[7] = v19;
      WdLogEvent5_WdEvent(v17);
      goto LABEL_19;
    }
    VidSchiProfilePerformanceTick(6, v8, 0, 1, 0LL, v13, 0LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
    if ( (*(_DWORD *)(a1 + 92) & 0x10) == 0
      || (v39 = *(_QWORD *)(a1 + 56),
          v40 = *(_DWORD *)(v39 + 376) == 4,
          v41 = v8 + 8LL * *(unsigned int *)(v39 + 144),
          v42 = *(_QWORD *)(v41 + 2640),
          v63 = v42,
          !v40)
      || (*(_BYTE *)(v8 + 2508) & 1) != 0
      || *(_DWORD *)(v8 + 2480) )
    {
LABEL_11:
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(_QWORD *)(v14 + 80);
      v16 = *(_QWORD *)(v15 + 152);
      if ( v16 && *(_QWORD *)(v14 + 96) <= v16 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v51[3] = 281LL;
        v51[4] = 1792LL;
        v51[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL);
        v51[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL) + 152LL);
        v51[7] = 0LL;
        WdLogEvent5_WdCriticalError(v51);
        JUMPOUT(0x1C0009BDBLL);
      }
      *(_QWORD *)(v15 + 144) = *(_QWORD *)(v14 + 96);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
      goto LABEL_14;
    }
    ++*(_DWORD *)(v8 + 912);
    ++*(_DWORD *)(v6 + 1004);
    ++*(_DWORD *)(v3 + 768);
    ++*(_DWORD *)(v8 + 916);
    ++*(_DWORD *)(v42 + 2324);
    ++*(_DWORD *)(v42 + 2320);
    v43 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v43 + 259) & 1) != 0 )
      v44 = (unsigned __int8)*(_DWORD *)(v43 + 616) | *(unsigned __int8 *)(v43 + 617);
    else
      v44 = (1 << *(_DWORD *)(v8 + 124)) - 1;
    v40 = !_BitScanForward((unsigned int *)&v45, v44);
    v65 = v45;
    v46 = -1;
    if ( !v40 )
      v46 = v45;
    for ( ; v44; v46 = v48 )
    {
      ++*(_DWORD *)(280LL * v46 + *(_QWORD *)(v41 + 2640) + 156);
      v44 &= ~(1 << v46);
      v40 = !_BitScanForward((unsigned int *)&v47, v44);
      v64 = v47;
      v48 = -1;
      if ( !v40 )
        v48 = v47;
    }
    v62 = *(_QWORD *)(v42 + 16);
    LODWORD(v61) = *(_DWORD *)(v62 + 32);
    v49 = v62 + 1144LL * (unsigned int)v61;
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v49 + 56));
    *(_QWORD *)(v49 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL);
    *(_DWORD *)(v49 + 1096) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 96LL);
    *(_DWORD *)(v49 + 1100) = 1;
    *(_DWORD *)(v49 + 1104) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 368LL);
    *(_QWORD *)(v49 + 576) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 380LL) != 1 )
    {
      switch ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 380LL) )
      {
        case 2:
          *(_DWORD *)(v49 + 1108) = 1;
          goto LABEL_67;
        case 3:
          *(_DWORD *)(v49 + 1108) = 2;
          goto LABEL_67;
        case 4:
          *(_DWORD *)(v49 + 1108) = 3;
LABEL_67:
          memmove(
            *(void **)(v49 + 1192),
            (const void *)(*(_QWORD *)(a1 + 56) + 616LL),
            *(unsigned int *)(*(_QWORD *)(a1 + 56) + 628LL));
          *(_DWORD *)(v49 + 1116) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 392LL);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidSchiFindAllocationByDriverEngine(
                                                                                      (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v49 + 56),
                                                                                      *(unsigned __int16 *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(v3 + 88) + 368) + 6LL),
                                                                                      0)
                                                                        + 12)
                                                                      + 16LL)
                                                          + 8LL));
          v50 = v62;
          *(_DWORD *)(v49 + 1124) = 1;
          *(_DWORD *)(v49 + 1120) = 1;
          *(_DWORD *)(v50 + 32) = ((_BYTE)v61 + 1) & 0x3F;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 920));
          _InterlockedIncrement((volatile signed __int32 *)(v63 + 2328));
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 2u;
          goto LABEL_11;
      }
    }
    *(_DWORD *)(v49 + 1108) = 0;
    goto LABEL_67;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2860));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2864));
  for ( i = *(_DWORD *)(v5 + 1480); i != *(_DWORD *)(v5 + 1472); i = ((_BYTE)i + 1) & 0xF )
  {
    v35 = *(LARGE_INTEGER **)(v5 + 8LL * i + 1488);
    v61 = v35;
    if ( (v35[22].LowPart & 8) == 0 )
    {
      VidSchiUpdateContextStatus(v35, 2LL, 4793LL);
      if ( i == *(_DWORD *)(v5 + 1480) && !v61[63].QuadPart )
        v61[63] = KeQueryPerformanceCounter(0LL);
    }
  }
  *(_QWORD *)(v5 + 320) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(v5 + 280));
  v36 = *(unsigned __int16 *)(v5 + 4);
  v37 = ++*(_QWORD *)(*(_QWORD *)(v8 + 8 * v36 + 368) + 96LL);
  v38 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = v37;
  v20 = *(_QWORD *)(v38 + 96);
  v21 = *(_QWORD *)(v20 + 24);
  v67 = (unsigned int)v37;
  DWORD1(v67) = *(unsigned __int16 *)(*(_QWORD *)(v21 + 8LL * *(unsigned __int16 *)(v20 + 4) + 368) + 8LL);
  DWORD2(v67) = *(unsigned __int16 *)(*(_QWORD *)(v21 + 8LL * *(unsigned __int16 *)(v20 + 4) + 368) + 6LL);
  v22 = (unsigned int)_InterlockedExchange((volatile __int32 *)(v5 + 128), v37);
LABEL_19:
  v23 = *(unsigned int *)(v5 + 1472);
  v24 = v5 + 8 * v23;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 1488), v3, 0LL) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v24, v20, v21, v22);
    *(_QWORD *)(v52 + 24) = v8;
    *(_QWORD *)(v52 + 32) = a1;
    WdLogEvent5_WdAssertion(v52);
  }
  _InterlockedExchange((volatile __int32 *)(v5 + 1472), ((_BYTE)v23 + 1) & 0xF);
  if ( v12 )
  {
    v25 = *(_QWORD *)(v3 + 96);
    v60[0] = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v25 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v3,
      *(unsigned int *)(*(_QWORD *)(v25 + 24) + 32LL),
      v60);
  }
  else if ( bTracingEnabled )
  {
    v22 = *(_QWORD *)(v3 + 56);
    if ( !v22 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      LODWORD(v22) = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_piiqq(v24, v20, v21, v22, *(_QWORD *)(v3 + 464), *(_QWORD *)(v3 + 456), *(_DWORD *)(v3 + 448), 3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 448), 1, 0);
  VidSchiProfilePerformanceTick(7, v8, v5, v22, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v26 = *(unsigned int *)(v5 + 1328);
  v27 = v26;
  v28 = (volatile signed __int64 *)(v5 + 1344 + 8 * v26);
  if ( _InterlockedCompareExchange64(v28, a1, 0LL) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v53[3] = 281LL;
    v53[4] = 2048LL;
    v53[5] = v27;
    v53[6] = v28;
    v53[7] = a1;
    WdLogEvent5_WdCriticalError(v53);
    JUMPOUT(0x1C0009C9ELL);
  }
  _InterlockedExchange((volatile __int32 *)(v5 + 1328), ((_BYTE)v26 + 1) & 0xF);
  if ( a2 )
  {
    KeLowerIrql(v57);
  }
  else if ( (*(_BYTE *)(v8 + 2508) & 1) != 0
         || *(_DWORD *)(v8 + 2480)
         || (*(_BYTE *)(v6 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0))
         && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v57);
    if ( (*(_BYTE *)(v8 + 2508) & 1) != 0 || *(_DWORD *)(v8 + 2480) )
      v54 = 0LL;
    else
      LOBYTE(v54) = 1;
    VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 120), v54);
  }
  else
  {
    *(_DWORD *)(a1 + 92) |= 0x20u;
    v29 = 1;
    if ( *(_DWORD *)(a1 + 88) == 3 )
    {
      v30 = v57;
      if ( *(_BYTE *)(v8 + 49) )
      {
        KeLowerIrql(v57);
        v29 = 0;
      }
      *(_DWORD *)(v5 + 144) = v67;
      *(_OWORD *)(v5 + 2976) = v67;
      v31 = DxgCoreInterface[21](*(_QWORD *)(v8 + 8), &v67);
    }
    else
    {
      *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 104);
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      {
        v30 = v57;
        KeLowerIrql(v57);
        v29 = 0;
        v31 = DxgCoreInterface[40](*(_QWORD *)(v8 + 8), &v67);
        *(_OWORD *)(v5 + 2880) = v67;
        *(_OWORD *)(v5 + 2896) = v68;
        *(_OWORD *)(v5 + 2912) = v69;
        *(_OWORD *)(v5 + 2928) = v70;
      }
      else
      {
        v31 = DxgCoreInterface[20](*(_QWORD *)(v8 + 8), &v67);
        v30 = v57;
        *(_OWORD *)(v5 + 2880) = v67;
        *(_OWORD *)(v5 + 2896) = v68;
        *(_OWORD *)(v5 + 2912) = v69;
        *(_OWORD *)(v5 + 2928) = v70;
        *(_OWORD *)(v5 + 2944) = v71;
        *(_OWORD *)(v5 + 2960) = v72;
      }
    }
    v32 = v31;
    if ( v31 )
    {
      if ( !a3 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v56[5] = v32;
        v56[6] = &v67;
        v56[3] = 281LL;
        v56[4] = 2LL;
        v56[7] = a1;
        WdLogEvent5_WdCriticalError(v56);
        JUMPOUT(0x1C0009DFELL);
      }
      VidSchiMarkDeviceAsError(v6, 19LL);
      LOBYTE(v55) = 1;
      VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 120), v55);
    }
    ++*(_QWORD *)(v8 + 328);
    if ( v29 )
      KeLowerIrql(v30);
  }
}
