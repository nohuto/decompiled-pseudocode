/*
 * XREFs of VfBuildScatterGatherList @ 0x14073B110
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

__int64 VfBuildScatterGatherList(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int128 *v4; // r14
  __int64 v6; // r13
  __int64 RealDmaOperation; // rax
  __int64 v8; // rdx
  __int64 AdapterInformationInternal; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned int v13; // eax
  int v14; // ebx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 MapRegisterFile; // rax
  __int64 v18; // r15
  __int128 v19; // xmm0
  _OWORD *v20; // rax
  int v21; // eax
  unsigned int v22; // r14d
  volatile signed __int32 *v23; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  int v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+50h] [rbp-18h] BYREF
  __int64 (__fastcall *v29)(__int64, __int64, __int128 *, __int64, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD, __int64, _QWORD); // [rsp+58h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+40h]
  __int128 *v33; // [rsp+C0h] [rbp+58h] BYREF
  va_list va; // [rsp+C0h] [rbp+58h]
  __int64 v35; // [rsp+C8h] [rbp+60h] BYREF
  va_list va1; // [rsp+C8h] [rbp+60h]
  __int64 v37; // [rsp+D0h] [rbp+68h]
  __int64 (__fastcall *v38)(); // [rsp+D8h] [rbp+70h]
  __int64 v39; // [rsp+E0h] [rbp+78h]
  __int64 v40; // [rsp+E8h] [rbp+80h]
  __int64 v41; // [rsp+F0h] [rbp+88h]
  __int64 v42; // [rsp+F8h] [rbp+90h]
  va_list va2; // [rsp+100h] [rbp+98h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v33 = va_arg(va1, __int128 *);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
  v37 = va_arg(va2, _QWORD);
  v38 = va_arg(va2, __int64 (__fastcall *)());
  v39 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  v41 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD);
  v2 = 0LL;
  v3 = v35;
  v4 = v33;
  v6 = 0LL;
  RealDmaOperation = ViGetRealDmaOperation(a1, 112LL);
  LOBYTE(v8) = 1;
  v29 = (__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD, __int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v8);
  v10 = (unsigned int)v37;
  v11 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_14;
  VF_ASSERT_IRQL(2u);
  if ( !v4 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 168));
  v4 = v33;
  VERIFY_BUFFER_LOCKED((__int64)v33);
  if ( *(_DWORD *)(v11 + 192) == 3 )
  {
    v13 = ViCheckMdlLength(v4, 0LL, (unsigned int)v10);
    if ( v13 )
    {
      v14 = v13;
      ViHalPreprocessOptions(
        byte_140323154,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v13,
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 36, v14, 0, 0LL, byte_140323154);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v3 = v35;
    v2 = (__int64)v15;
    if ( !v15 )
      goto LABEL_14;
    v15[8] = 0LL;
    *v15 = v39;
    v15[1] = v38;
    v15[7] = v11;
    *((_DWORD *)v15 + 12) = (v10 + 4095 + (unsigned __int64)(v3 & 0xFFF)) >> 12;
    v16 = v15 + 9;
    v16[1] = v16;
    *v16 = v16;
    MapRegisterFile = ViAllocateMapRegisterFile(v11, *(unsigned int *)(v2 + 48));
    v28 = MapRegisterFile;
    v18 = MapRegisterFile;
    if ( !MapRegisterFile )
      goto LABEL_10;
    *(_BYTE *)(MapRegisterFile + 25) = 1;
    *(_QWORD *)(v2 + 96) = MapRegisterFile;
    *(_QWORD *)(v2 + 24) = v3;
    *(_QWORD *)(v2 + 16) = v2 + 104;
    LOBYTE(v27) = v40;
    *(_DWORD *)(v2 + 32) = v10;
    if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v4, v3, (unsigned int)v10, v27) )
    {
      ViFreeMapRegisterFile(v11);
LABEL_10:
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
      v2 = 0LL;
      goto LABEL_14;
    }
    v19 = *v4;
    v39 = v2;
    v38 = ViScatterGatherCallback;
    v20 = *(_OWORD **)(v2 + 16);
    v6 = v18;
    *v20 = v19;
    v20[1] = v4[1];
    v20[2] = v4[2];
    ViSwap(&v28, (__int128 **)va, (__int64 *)va1);
    v4 = v33;
  }
  v3 = v35;
LABEL_14:
  v21 = v29(a1, a2, v4, v3, v10, v38, v39, v40, v41, v42, v28, v29);
  v22 = v21;
  if ( v11 && v21 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v11);
    if ( v6 )
      ViFreeMapRegisterFile(v11);
    if ( v2 )
    {
      v23 = (volatile signed __int32 *)(v11 + 72);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v23);
      }
      else if ( _interlockedbittestandset64(v23, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v23);
      }
      v25 = *(_QWORD *)(v2 + 72);
      v26 = *(_QWORD **)(v2 + 80);
      if ( *(_QWORD *)(v25 + 8) != v2 + 72 || *v26 != v2 + 72 )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v23, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v23, 0LL);
      __writecr8(CurrentIrql);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
    }
  }
  return v22;
}
