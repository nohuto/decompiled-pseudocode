/*
 * XREFs of EtwpEnableKernelTrace @ 0x14054A9EC
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x14054A8A8 (EtwpUpdateKernelGroupMasks.c)
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoPerfInit @ 0x1401F7E60 (IoPerfInit.c)
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x140246644 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 *     KeSetIntervalProfile @ 0x140560678 (KeSetIntervalProfile.c)
 *     KeInitializeProfileCallback @ 0x1406992BC (KeInitializeProfileCallback.c)
 *     AlpcRegisterLogRoutine @ 0x14069FE4C (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x1406AD128 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1406E146C (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(__int64 a1, const __m128i *a2, unsigned int a3)
{
  int updated; // r15d
  int v7; // r14d
  __int32 v8; // eax
  __int64 v9; // r12
  int v10; // edi
  int v11; // esi
  __int32 v12; // eax
  unsigned int i; // edi
  _BYTE *v15; // rax
  __int64 v16; // r13
  _DWORD v18[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-28h] BYREF

  updated = 0;
  memset(v18, 0, sizeof(v18));
  v7 = v18[1];
  if ( a2 )
  {
    v8 = a2->m128i_i32[1];
    if ( (v8 & 0x80000) != 0 )
    {
      v7 = v18[1] | 0x80000;
      v18[1] |= 0x80000u;
    }
    if ( (v8 & 0x800000) != 0 )
    {
      v7 |= 0x800000u;
      v18[1] = v7;
    }
  }
  if ( a1 && (*(_DWORD *)(a1 + 4) & 0x880000) != 0 )
    KiSetTimerEx(
      (__int64)&EtwpMemInfoTimer,
      -10000 * EtwpMemInfoInterval,
      ((__int64)((unsigned __int128)(-10000 * EtwpMemInfoInterval * (__int128)(__int64)0xCB923A29C779A6B5uLL) >> 64) >> 11)
    + ((unsigned __int64)((unsigned __int128)(-10000 * EtwpMemInfoInterval * (__int128)(__int64)0xCB923A29C779A6B5uLL) >> 64) >> 63),
      0,
      (__int64)&EtwpMemInfoDpc);
  v9 = 2LL;
  if ( EtwpFileSystemReady && (updated = EtwpUpdateFileInfoDriverState(a1, a2, 1LL, a3)) != 0 || !a2 )
  {
LABEL_56:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_67;
  }
  v10 = v18[0];
  if ( (a2->m128i_i32[0] & 0x2000000) != 0 )
  {
    v10 = v18[0] | 0x2000000;
    qword_140316470 = (__int64)EtwpTraceFileIo;
    v18[0] |= 0x2000000u;
  }
  if ( (a2->m128i_i32[0] & 0x4000000) != 0 )
  {
    v10 |= 0x4000000u;
    qword_140316468 = (__int64)EtwpTraceFileIo;
    v18[0] = v10;
  }
  if ( (a2->m128i_i32[0] & 0x200) != 0 )
  {
    v10 |= 0x200u;
    qword_140316460 = (__int64)EtwpTraceFileName;
    v18[0] = v10;
  }
  if ( (a2->m128i_i32[0] & 0x100) != 0 )
  {
    v10 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_140316450 = (__int64)EtwpTraceRedirectedIo;
    v18[0] = v10;
  }
  if ( (a2->m128i_i32[0] & 0x400) != 0 )
  {
    v10 |= 0x400u;
    qword_14034E348 = (__int64)EtwpTraceIoInit;
    v18[0] = v10;
  }
  v11 = v18[4];
  if ( (a2[1].m128i_i32[0] & 1) != 0 )
  {
    v11 = v18[4] | 1;
    qword_14034E350 = (__int64)EtwpTraceOpticalIo;
    v18[4] |= 1u;
  }
  if ( (a2[1].m128i_i32[0] & 2) != 0 )
  {
    v11 |= 2u;
    qword_14034E358 = (__int64)EtwpTraceOpticalIoInit;
    v18[4] = v11;
  }
  if ( (a2->m128i_i32[0] & 0x200000) != 0 )
  {
    v10 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    v18[0] = v10;
  }
  if ( (a2[1].m128i_i32[0] & 0x400000) != 0 )
  {
    v11 |= 0x400000u;
    qword_140316430 = (__int64)EtwpTraceFltIo;
    v18[4] = v11;
  }
  if ( (a2[1].m128i_i32[0] & 0x80000) != 0 )
  {
    v11 |= 0x80000u;
    qword_140316438 = (__int64)EtwpTraceFltIo;
    v18[4] = v11;
  }
  if ( (a2[1].m128i_i32[0] & 0x100000) != 0 )
  {
    v11 |= 0x100000u;
    qword_140316440 = (__int64)EtwpTraceFltTimedIo;
    v18[4] = v11;
  }
  if ( (a2[1].m128i_i32[0] & 0x200000) != 0 )
  {
    v11 |= 0x200000u;
    qword_140316448 = (__int64)EtwpTraceFltTimedIo;
    v18[4] = v11;
  }
  if ( (a2[1].m128i_i32[0] & 0x1000000) != 0 )
  {
    v11 |= 0x1000000u;
    qword_14031EE00 = (__int64)EtwpTraceWdf;
    v18[4] = v11;
  }
  if ( (a2[1].m128i_i32[0] & 0x2000000) != 0 )
  {
    v11 |= 0x2000000u;
    qword_14031EE08 = (__int64)EtwpTraceWdf;
    v18[4] = v11;
  }
  if ( (a2->m128i_i32[2] & 0x8000000) != 0 )
  {
    v18[2] |= 0x8000000u;
    qword_14031EE10 = (__int64)EtwpSystemTraceWdf;
  }
  v12 = a2->m128i_i32[0];
  if ( (a2->m128i_i32[0] & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v10 |= 0x20000u;
    v18[0] = v10;
    CmpTraceTxrRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))EtwpTraceRegistryTransaction;
  }
  if ( (v12 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_67;
    v10 |= 0x100000u;
    v18[0] = v10;
  }
  if ( (a2->m128i_i32[0] & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify();
    v10 |= 0x10000u;
    v18[0] = v10;
  }
  if ( (a2->m128i_i32[1] & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_67;
    v7 |= 0x10u;
    v18[1] = v7;
  }
  if ( (a2->m128i_i32[0] & 0x40000) == 0 )
  {
LABEL_49:
    if ( (a2->m128i_i32[1] & 2) != 0 )
    {
      KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
      KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
      KeStartProfile((ULONG_PTR)&EtwpProfileObject);
      v7 |= 2u;
      v18[1] = v7;
    }
    if ( (a2->m128i_i32[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_1403274E8 + 248 * i);
      v18[1] = v7 | 0x400;
    }
    if ( (a2[1].m128i_i32[0] & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      v18[4] = v11 | 0x80;
    }
    if ( (a2->m128i_i32[1] & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_56;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    v18[0] = v10 | 0x40000;
    goto LABEL_49;
  }
LABEL_67:
  v15 = (_BYTE *)(v19 - (_BYTE *)a2);
  v16 = a1 - (_QWORD)a2;
  do
  {
    *(const __m128i *)((char *)a2 + (_QWORD)v15) = _mm_and_si128(
                                                     _mm_andnot_si128(
                                                       _mm_loadu_si128(a2),
                                                       (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                                     _mm_loadu_si128((const __m128i *)((char *)a2 + v16)));
    ++a2;
    --v9;
  }
  while ( v9 );
  EtwpDisableKernelTrace(v19, v18, a3);
  return (unsigned int)updated;
}
