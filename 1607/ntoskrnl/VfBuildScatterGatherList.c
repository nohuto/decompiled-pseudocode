/*
 * XREFs of VfBuildScatterGatherList @ 0x1407068C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140705CE8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140705F2C (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x140708CF0 (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140709EAC (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x14070A67C (ViSwap.c)
 */

__int64 VfBuildScatterGatherList(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int128 *v4; // r14
  __int64 v6; // r12
  __int64 RealDmaOperation; // rax
  __int64 v8; // rdx
  __int64 AdapterInformationInternal; // rax
  __int64 v10; // r13
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
  unsigned int v22; // ebx
  KIRQL v23; // al
  __int64 v24; // r9
  _QWORD *v25; // r8
  int v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+50h] [rbp-18h] BYREF
  __int64 (__fastcall *v28)(__int64, __int64, __int128 *, __int64, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD, __int64, _QWORD); // [rsp+58h] [rbp-10h]
  __int128 *v31; // [rsp+C0h] [rbp+58h] BYREF
  va_list va; // [rsp+C0h] [rbp+58h]
  __int64 v33; // [rsp+C8h] [rbp+60h] BYREF
  va_list va1; // [rsp+C8h] [rbp+60h]
  __int64 v35; // [rsp+D0h] [rbp+68h]
  __int64 (__fastcall *v36)(); // [rsp+D8h] [rbp+70h]
  __int64 v37; // [rsp+E0h] [rbp+78h]
  __int64 v38; // [rsp+E8h] [rbp+80h]
  __int64 v39; // [rsp+F0h] [rbp+88h]
  __int64 v40; // [rsp+F8h] [rbp+90h]
  va_list va2; // [rsp+100h] [rbp+98h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v31 = va_arg(va1, __int128 *);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, _QWORD);
  v36 = va_arg(va2, __int64 (__fastcall *)());
  v37 = va_arg(va2, _QWORD);
  v38 = va_arg(va2, _QWORD);
  v39 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  v2 = 0LL;
  v3 = v33;
  v4 = v31;
  v6 = 0LL;
  RealDmaOperation = ViGetRealDmaOperation(a1, 112LL);
  LOBYTE(v8) = 1;
  v28 = (__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD, __int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v8);
  v10 = (unsigned int)v35;
  v11 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_14;
  VF_ASSERT_IRQL(2u);
  if ( !v4 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 168));
  v4 = v31;
  VERIFY_BUFFER_LOCKED((__int64)v31);
  if ( *(_DWORD *)(v11 + 192) == 3 )
  {
    v13 = ViCheckMdlLength(v4, 0LL, (unsigned int)v10);
    if ( v13 )
    {
      v14 = v13;
      ViHalPreprocessOptions(
        byte_1402F9994,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v13,
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 36, v14, 0, 0LL, byte_1402F9994);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v3 = v33;
    v2 = (__int64)v15;
    if ( !v15 )
      goto LABEL_14;
    v15[8] = 0LL;
    *v15 = v37;
    v15[1] = v36;
    v15[7] = v11;
    *((_DWORD *)v15 + 12) = (v10 + 4095 + (unsigned __int64)(v3 & 0xFFF)) >> 12;
    v16 = v15 + 9;
    v16[1] = v16;
    *v16 = v16;
    MapRegisterFile = ViAllocateMapRegisterFile(v11, *(unsigned int *)(v2 + 48));
    v27 = MapRegisterFile;
    v18 = MapRegisterFile;
    if ( !MapRegisterFile )
      goto LABEL_10;
    *(_BYTE *)(MapRegisterFile + 25) = 1;
    *(_QWORD *)(v2 + 96) = MapRegisterFile;
    *(_QWORD *)(v2 + 24) = v3;
    *(_QWORD *)(v2 + 16) = v2 + 104;
    LOBYTE(v26) = v38;
    *(_DWORD *)(v2 + 32) = v10;
    if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v4, v3, (unsigned int)v10, v26) )
    {
      ViFreeMapRegisterFile(v11);
LABEL_10:
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
      v2 = 0LL;
      goto LABEL_14;
    }
    v19 = *v4;
    v37 = v2;
    v36 = ViScatterGatherCallback;
    v20 = *(_OWORD **)(v2 + 16);
    v6 = v18;
    *v20 = v19;
    v20[1] = v4[1];
    v20[2] = v4[2];
    ViSwap(&v27, (__int128 **)va, (__int64 *)va1);
    v4 = v31;
  }
  v3 = v33;
LABEL_14:
  v21 = v28(a1, a2, v4, v3, v10, v36, v37, v38, v39, v40, v27, v28);
  v22 = v21;
  if ( v11 && v21 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v11);
    if ( v6 )
      ViFreeMapRegisterFile(v11);
    if ( v2 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 72));
      v24 = *(_QWORD *)(v2 + 72);
      v25 = *(_QWORD **)(v2 + 80);
      if ( *(_QWORD *)(v24 + 8) != v2 + 72 || *v25 != v2 + 72 )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 72), v23);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
    }
  }
  return v22;
}
