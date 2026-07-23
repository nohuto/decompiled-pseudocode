/*
 * XREFs of VfGetScatterGatherList @ 0x140707628
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
  unsigned int v29; // ebx
  KIRQL v30; // al
  __int64 v31; // r9
  _QWORD *v32; // r8
  int v33; // [rsp+20h] [rbp-38h]
  __int64 v34; // [rsp+40h] [rbp-18h] BYREF
  __int64 (__fastcall *v35)(__int64, __int64, __int64, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _QWORD); // [rsp+48h] [rbp-10h]
  __int64 v38; // [rsp+B0h] [rbp+58h] BYREF
  va_list va; // [rsp+B0h] [rbp+58h]
  __int64 v40; // [rsp+B8h] [rbp+60h] BYREF
  va_list va1; // [rsp+B8h] [rbp+60h]
  __int64 v42; // [rsp+C0h] [rbp+68h]
  __int64 (__fastcall *v43)(); // [rsp+C8h] [rbp+70h]
  __int64 v44; // [rsp+D0h] [rbp+78h]
  __int64 v45; // [rsp+D8h] [rbp+80h]
  va_list va2; // [rsp+E0h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v38 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v40 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD);
  v43 = va_arg(va2, __int64 (__fastcall *)());
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  v2 = 0LL;
  v3 = v40;
  v4 = v38;
  v6 = 0LL;
  RealDmaOperation = ViGetRealDmaOperation(a1, 88LL);
  LOBYTE(v8) = 1;
  v35 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v8);
  v10 = v42;
  v11 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_20;
  VF_ASSERT_IRQL(2u);
  if ( !v4 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 168));
  v4 = v38;
  VERIFY_BUFFER_LOCKED(v38);
  if ( *(_DWORD *)(v11 + 192) == 3 )
  {
    v13 = ViCheckMdlLength(v4, 0LL, v10);
    if ( v13 )
    {
      v14 = v13;
      ViHalPreprocessOptions(
        byte_1402F9990,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v13,
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 36, v14, 0, 0LL, byte_1402F9990);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v3 = v40;
    v2 = (__int64)v15;
    if ( !v15 )
      goto LABEL_20;
    v15[8] = 0LL;
    v16 = v4;
    *v15 = v44;
    v15[1] = v43;
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
    v34 = MapRegisterFile;
    v25 = MapRegisterFile;
    if ( !MapRegisterFile )
      goto LABEL_16;
    *(_BYTE *)(MapRegisterFile + 25) = 1;
    *(_QWORD *)(v2 + 96) = MapRegisterFile;
    *(_QWORD *)(v2 + 24) = v3;
    *(_QWORD *)(v2 + 16) = v2 + 104;
    LOBYTE(v33) = v45;
    *(_DWORD *)(v2 + 32) = v10;
    if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v4, v3, v10, v33) )
    {
      ViFreeMapRegisterFile(v11);
LABEL_16:
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
      v2 = 0LL;
      goto LABEL_20;
    }
    v26 = *(_OWORD *)v4;
    v44 = v2;
    v43 = ViScatterGatherCallback;
    v27 = *(_OWORD **)(v2 + 16);
    v6 = v25;
    *v27 = v26;
    v27[1] = *(_OWORD *)(v4 + 16);
    v27[2] = *(_OWORD *)(v4 + 32);
    ViSwap(&v34, (__int64 *)va, (__int64 *)va1);
    v4 = v38;
  }
  v3 = v40;
LABEL_20:
  v28 = v35(a1, a2, v4, v3, v10, v43, v44, v45, v34, v35);
  v29 = v28;
  if ( v11 && v28 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v11);
    if ( v6 )
      ViFreeMapRegisterFile(v11);
    if ( v2 )
    {
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 72));
      v31 = *(_QWORD *)(v2 + 72);
      v32 = *(_QWORD **)(v2 + 80);
      if ( *(_QWORD *)(v31 + 8) != v2 + 72 || *v32 != v2 + 72 )
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 72), v30);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v2);
    }
  }
  return v29;
}
