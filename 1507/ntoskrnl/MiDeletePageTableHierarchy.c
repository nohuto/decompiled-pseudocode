/*
 * XREFs of MiDeletePageTableHierarchy @ 0x140039EA0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1402244DC (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x14022FBF4 (MiUnmapLargeUserPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDeletePageTableHierarchy(int *a1, unsigned __int64 a2)
{
  int *v3; // r13
  __int64 v4; // rsi
  _KPROCESS *Process; // rax
  __int64 v6; // rcx
  unsigned __int64 *v7; // r8
  unsigned __int16 *v8; // r9
  __int64 v9; // r11
  ULONG_PTR *v10; // r14
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  ULONG_PTR v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // r15
  ULONG_PTR v19; // rbx
  int v20; // ebp
  unsigned int v21; // ebx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rbx
  char v25; // al
  __int64 v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 result; // rax
  ULONG_PTR v30; // [rsp+30h] [rbp-158h] BYREF
  __int64 v31; // [rsp+38h] [rbp-150h]
  unsigned __int16 *v32; // [rsp+40h] [rbp-148h]
  _KPROCESS *v33; // [rsp+48h] [rbp-140h]
  unsigned __int64 *v34; // [rsp+50h] [rbp-138h]
  _QWORD v35[3]; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-118h] BYREF
  int v37; // [rsp+80h] [rbp-108h] BYREF
  __int16 v38; // [rsp+84h] [rbp-104h]
  __int64 v39; // [rsp+88h] [rbp-100h]
  __int64 v40; // [rsp+90h] [rbp-F8h]
  __int64 v41; // [rsp+98h] [rbp-F0h]

  v31 = 0LL;
  v3 = a1;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = Process;
  if ( !a1 )
  {
    v3 = &v37;
    v39 = 20LL;
    v37 = 1;
    v38 = 0;
    v40 = 0LL;
    v41 = 0LL;
  }
  v6 = 0x90482413000LL;
  v7 = &STACK[0x90482413030];
  v8 = &Process[1].IdealNode[8];
  v34 = &STACK[0x90482413030];
  v32 = &Process[1].IdealNode[8];
  while ( 1 )
  {
    v9 = 0x58000000000LL;
    v10 = (ULONG_PTR *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = *v10;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, 0x7FFFFFFFF8LL)
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v6 = (__int64)KeGetCurrentThread()->ApcState.Process;
      v12 = *(_QWORD *)(v6 + 1520);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)v10 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v13 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
    v30 = v11;
    v14 = v11;
    if ( (unsigned __int64)v7 <= 0x7F8
      && (unsigned int)MiPteHasShadow(v6, v11)
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)&v30 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
    }
    v17 = (_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - v9);
    if ( !v4 )
      v4 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - v9;
    MiTerminateWsle(a2, v8, *v17);
    if ( (ULONG_PTR *)(v17[1] | 0x8000000000000000uLL) != v10 )
      KeBugCheckEx(0x1Au, 0x401uLL, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v11, v17[1]);
    *v10 = 0LL;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
    v18 = ++v31;
    MiInsertTbFlushEntry(v3, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0xFFF )
      break;
    v19 = MI_GET_USED_PTES_HANDLE(a2);
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v19);
    if ( (*(_DWORD *)(v19 + 16) & 0x3FF0000) != 0 )
      break;
    v7 = v34;
    v8 = v32;
    a2 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL;
    v6 = 0x90482413000LL;
  }
  MiFlushTbList(v3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v33[1].Affinity.Bitmap[13], -v18);
  v20 = BYTE4(PerfGlobalGroupMask) & 1;
  do
  {
    v21 = 0;
    v22 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
      while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
    }
    *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
    if ( v20 )
    {
      memset(v35, 0, sizeof(v35));
      MiIdentifyPfn(v4, v35);
    }
    v23 = *(_QWORD *)(v4 + 24);
    v24 = v23 & 0x3FFFFFFFFFFFFFFFLL;
    v25 = *(_BYTE *)(v4 + 34) & 7;
    if ( (v23 & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
    {
      if ( v25 != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v4 + 0x58000000000LL) / 48, *(_BYTE *)(v4 + 34) & 7, v23 & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v4 + 24) = v23 ^ (v23 ^ (v24 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_48:
      v26 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF);
      MiChargeCommit(v26, 1LL, 4LL);
      goto LABEL_49;
    }
    if ( v25 != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v4 + 0x58000000000LL) / 48, *(_BYTE *)(v4 + 34) & 7, v23 & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v4 + 24) = v23 ^ (v23 ^ (v24 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v24 == 1 && (unsigned int)MiPfnShareCountIsZero(v4, 0LL) == 3 )
      goto LABEL_48;
LABEL_49:
    if ( v24 != 1 )
      *(_QWORD *)v4 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v27 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v27);
      }
      while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
    }
    if ( (*(_BYTE *)(v22 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v22 + 0x58000000000LL) / 48,
        *(_BYTE *)(v22 + 34) & 7,
        *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v28 = (*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ v28) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v28 )
      MiPfnShareCountIsZero(v22, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v18;
    v4 = v22;
    if ( v20 )
    {
      v36[1] = 24LL;
      v36[0] = v35;
      result = (__int64)EtwTraceKernelEvent((int)v36, 1, 0x20000001u, 0x277u, 289413890);
    }
  }
  while ( v18 );
  return result;
}
