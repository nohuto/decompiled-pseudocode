/*
 * XREFs of VfGetScatterGatherList @ 0x14073BF14
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14073A278 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x14073A4BC (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x14073D854 (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x14073EBE8 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x14073F458 (ViSwap.c)
 */

__int64 VfGetScatterGatherList(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // r13
  __int64 RealDmaOperation; // rax
  __int64 v8; // rdx
  __int64 AdapterInformationInternal; // rax
  unsigned int v10; // r12d
  __int64 v11; // rsi
  unsigned int v13; // eax
  int v14; // ebx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  int v20; // r10d
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 MapRegisterFile; // rax
  __int64 v25; // r15
  __int128 v26; // xmm0
  _OWORD *v27; // rax
  int v28; // eax
  unsigned int v29; // r14d
  volatile signed __int32 *v30; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  int v34; // [rsp+20h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-18h] BYREF
  __int64 (__fastcall *v36)(__int64, __int64, __int64, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _QWORD); // [rsp+48h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+40h]
  __int64 v40; // [rsp+B0h] [rbp+58h] BYREF
  va_list va; // [rsp+B0h] [rbp+58h]
  __int64 v42; // [rsp+B8h] [rbp+60h] BYREF
  va_list va1; // [rsp+B8h] [rbp+60h]
  __int64 v44; // [rsp+C0h] [rbp+68h]
  __int64 (__fastcall *v45)(); // [rsp+C8h] [rbp+70h]
  __int64 v46; // [rsp+D0h] [rbp+78h]
  __int64 v47; // [rsp+D8h] [rbp+80h]
  va_list va2; // [rsp+E0h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, __int64 (__fastcall *)());
  v46 = va_arg(va2, _QWORD);
  v47 = va_arg(va2, _QWORD);
  v2 = 0LL;
  v3 = v42;
  v4 = v40;
  v6 = 0LL;
  RealDmaOperation = ViGetRealDmaOperation(a1, 88LL);
  LOBYTE(v8) = 1;
  v36 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v8);
  v10 = v44;
  v11 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_20;
  VF_ASSERT_IRQL(2u);
  if ( !v4 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 168));
  v4 = v40;
  VERIFY_BUFFER_LOCKED(v40);
  if ( *(_DWORD *)(v11 + 192) == 3 )
  {
    v13 = ViCheckMdlLength(v4, 0LL, v10);
    if ( v13 )
    {
      v14 = v13;
      ViHalPreprocessOptions(
        byte_14032315C,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v13,
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 36, v14, 0, 0LL, byte_14032315C);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v3 = v42;
    v2 = (__int64)v15;
    if ( !v15 )
      goto LABEL_20;
    v15[8] = 0LL;
    v16 = v4;
    *v15 = v46;
    v15[1] = v45;
    v15[10] = v15 + 9;
    v15[9] = v15 + 9;
    v17 = v3 & 0xFFF;
    v18 = *(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 40) + *(_DWORD *)(v4 + 44) - v3;
    v19 = v18;
    v20 = 0;
    while ( v18 < v10 )
    {
      v16 = *(_QWORD *)v16;
      if ( !v16 )
        break;
      v21 = v19 + 4095;
      v19 = *(_DWORD *)(v16 + 40);
      v22 = v17 + v21;
      v17 = *(_DWORD *)(v16 + 44);
      v20 += v22 >> 12;
      v18 += v19;
    }
    if ( v18 + 4096 < v17 + v10 )
    {
      DECREMENT_SCATTER_GATHER_LISTS(v11);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
      return 3221225507LL;
    }
    *(_QWORD *)(v2 + 56) = v11;
    v23 = v20 + ((v19 + v17 - v18 + v10 + 4095) >> 12);
    *(_DWORD *)(v2 + 48) = v23;
    MapRegisterFile = ViAllocateMapRegisterFile(v11, v23);
    v35 = MapRegisterFile;
    v25 = MapRegisterFile;
    if ( !MapRegisterFile )
      goto LABEL_16;
    *(_BYTE *)(MapRegisterFile + 25) = 1;
    *(_QWORD *)(v2 + 96) = MapRegisterFile;
    *(_QWORD *)(v2 + 24) = v3;
    *(_QWORD *)(v2 + 16) = v2 + 104;
    LOBYTE(v34) = v47;
    *(_DWORD *)(v2 + 32) = v10;
    if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v4, v3, v10, v34) )
    {
      ViFreeMapRegisterFile(v11);
LABEL_16:
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
      v2 = 0LL;
      goto LABEL_20;
    }
    v26 = *(_OWORD *)v4;
    v46 = v2;
    v45 = ViScatterGatherCallback;
    v27 = *(_OWORD **)(v2 + 16);
    v6 = v25;
    *v27 = v26;
    v27[1] = *(_OWORD *)(v4 + 16);
    v27[2] = *(_OWORD *)(v4 + 32);
    ViSwap(&v35, (__int64 *)va, (__int64 *)va1);
    v4 = v40;
  }
  v3 = v42;
LABEL_20:
  v28 = v36(a1, a2, v4, v3, v10, v45, v46, v47, v35, v36);
  v29 = v28;
  if ( v11 && v28 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v11);
    if ( v6 )
      ViFreeMapRegisterFile(v11);
    if ( v2 )
    {
      v30 = (volatile signed __int32 *)(v11 + 72);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v30);
      }
      else if ( _interlockedbittestandset64(v30, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v30);
      }
      v32 = *(_QWORD *)(v2 + 72);
      v33 = *(_QWORD **)(v2 + 80);
      if ( *(_QWORD *)(v32 + 8) != v2 + 72 || *v33 != v2 + 72 )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v30, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
      __writecr8(CurrentIrql);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
    }
  }
  return v29;
}
