/*
 * XREFs of EtwpEnableKernelTrace @ 0x1404968E8
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x1404967A0 (EtwpUpdateKernelGroupMasks.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoPerfInit @ 0x1401CA4B4 (IoPerfInit.c)
 *     KeStartProfile @ 0x1401D6B70 (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1402111E4 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496D14 (EtwpUpdateFileInfoDriverState.c)
 *     KeSetIntervalProfile @ 0x14052A8A4 (KeSetIntervalProfile.c)
 *     KeInitializeProfileCallback @ 0x14064FE00 (KeInitializeProfileCallback.c)
 *     AlpcRegisterLogRoutine @ 0x14065655C (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x1406673C8 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x14069F054 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(__int64 a1, const __m128i *a2, unsigned int a3)
{
  int updated; // r15d
  __int64 v7; // r9
  int v8; // r14d
  __int32 v9; // eax
  __int64 v10; // r12
  int v11; // edi
  int v12; // esi
  __int32 v13; // eax
  unsigned int i; // edi
  _BYTE *v16; // rax
  __int64 v17; // r13
  unsigned int v18; // [rsp+20h] [rbp-60h]
  _QWORD v19[2]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v20[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+58h] [rbp-28h] BYREF

  v18 = a3;
  updated = 0;
  memset(v20, 0, sizeof(v20));
  v8 = v20[1];
  if ( a2 )
  {
    v9 = a2->m128i_i32[1];
    if ( (v9 & 0x80000) != 0 )
    {
      v8 = v20[1] | 0x80000;
      v20[1] |= 0x80000u;
    }
    if ( (v9 & 0x800000) != 0 )
    {
      v8 |= 0x800000u;
      v20[1] = v8;
    }
  }
  if ( a1 && (*(_DWORD *)(a1 + 4) & 0x880000) != 0 )
  {
    v19[1] = -1LL;
    v19[0] = 0LL;
    KeSetTimer2(
      (__int64)&EtwpMemInfoTimer,
      -10000LL * (unsigned int)EtwpMemInfoInterval,
      10000LL * (unsigned int)EtwpMemInfoInterval,
      (__int64)v19);
  }
  v10 = 2LL;
  if ( EtwpFileSystemReady && (updated = EtwpUpdateFileInfoDriverState(a1, a2, 1LL, a3, v18)) != 0 || !a2 )
  {
LABEL_56:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_67;
  }
  v11 = v20[0];
  v7 = 0x2000000LL;
  if ( (a2->m128i_i32[0] & 0x2000000) != 0 )
  {
    v11 = v20[0] | 0x2000000;
    qword_1402F2770 = (__int64)EtwpTraceFileIo;
    v20[0] |= 0x2000000u;
  }
  if ( (a2->m128i_i32[0] & 0x4000000) != 0 )
  {
    v11 |= 0x4000000u;
    qword_1402F2768 = (__int64)EtwpTraceFileIo;
    v20[0] = v11;
  }
  if ( (a2->m128i_i32[0] & 0x200) != 0 )
  {
    v11 |= 0x200u;
    qword_1402F2760 = (__int64)EtwpTraceFileName;
    v20[0] = v11;
  }
  if ( (a2->m128i_i32[0] & 0x100) != 0 )
  {
    v11 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_1402F2750 = (__int64)EtwpTraceRedirectedIo;
    v20[0] = v11;
  }
  if ( (a2->m128i_i32[0] & 0x400) != 0 )
  {
    v11 |= 0x400u;
    qword_140326408 = (__int64)EtwpTraceIoInit;
    v20[0] = v11;
  }
  v12 = v20[4];
  if ( (a2[1].m128i_i32[0] & 1) != 0 )
  {
    v12 = v20[4] | 1;
    qword_140326410 = (__int64)EtwpTraceOpticalIo;
    v20[4] |= 1u;
  }
  if ( (a2[1].m128i_i32[0] & 2) != 0 )
  {
    v12 |= 2u;
    qword_140326418 = (__int64)EtwpTraceOpticalIoInit;
    v20[4] = v12;
  }
  if ( (a2->m128i_i32[0] & 0x200000) != 0 )
  {
    v11 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    v20[0] = v11;
  }
  if ( (a2[1].m128i_i32[0] & 0x400000) != 0 )
  {
    v12 |= 0x400000u;
    qword_1402F2730 = (__int64)EtwpTraceFltIo;
    v20[4] = v12;
  }
  if ( (a2[1].m128i_i32[0] & 0x80000) != 0 )
  {
    v12 |= 0x80000u;
    qword_1402F2738 = (__int64)EtwpTraceFltIo;
    v20[4] = v12;
  }
  if ( (a2[1].m128i_i32[0] & 0x100000) != 0 )
  {
    v12 |= 0x100000u;
    qword_1402F2740 = (__int64)EtwpTraceFltTimedIo;
    v20[4] = v12;
  }
  if ( (a2[1].m128i_i32[0] & 0x200000) != 0 )
  {
    v12 |= 0x200000u;
    qword_1402F2748 = (__int64)EtwpTraceFltTimedIo;
    v20[4] = v12;
  }
  if ( (a2[1].m128i_i32[0] & 0x1000000) != 0 )
  {
    v12 |= 0x1000000u;
    qword_1402F6F20 = (__int64)EtwpTraceWdf;
    v20[4] = v12;
  }
  if ( (a2[1].m128i_i32[0] & 0x2000000) != 0 )
  {
    v12 |= 0x2000000u;
    qword_1402F6F28 = (__int64)EtwpTraceWdf;
    v20[4] = v12;
  }
  if ( (a2->m128i_i32[2] & 0x8000000) != 0 )
  {
    v20[2] |= 0x8000000u;
    qword_1402F6F30 = (__int64)EtwpSystemTraceWdf;
  }
  v13 = a2->m128i_i32[0];
  if ( (a2->m128i_i32[0] & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v11 |= 0x20000u;
    v20[0] = v11;
    CmpTraceTxrRoutine = (__int64)EtwpTraceRegistryTransaction;
  }
  if ( (v13 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_67;
    v11 |= 0x100000u;
    v20[0] = v11;
  }
  if ( (a2->m128i_i32[0] & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify();
    v11 |= 0x10000u;
    v20[0] = v11;
  }
  if ( (a2->m128i_i32[1] & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_67;
    v8 |= 0x10u;
    v20[1] = v8;
  }
  if ( (a2->m128i_i32[0] & 0x40000) == 0 )
  {
LABEL_49:
    if ( (a2->m128i_i32[1] & 2) != 0 )
    {
      KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
      KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
      KeStartProfile((ULONG_PTR)&EtwpProfileObject);
      v8 |= 2u;
      v20[1] = v8;
    }
    if ( (a2->m128i_i32[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_1402FD668 + 248 * i);
      v20[1] = v8 | 0x400;
    }
    if ( (a2[1].m128i_i32[0] & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      v20[4] = v12 | 0x80;
    }
    if ( (a2->m128i_i32[1] & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_56;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    v20[0] = v11 | 0x40000;
    goto LABEL_49;
  }
LABEL_67:
  v16 = (_BYTE *)(v21 - (_BYTE *)a2);
  v17 = a1 - (_QWORD)a2;
  do
  {
    *(const __m128i *)((char *)a2 + (_QWORD)v16) = _mm_and_si128(
                                                     _mm_andnot_si128(
                                                       _mm_loadu_si128(a2),
                                                       (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                                     _mm_loadu_si128((const __m128i *)((char *)a2 + v17)));
    ++a2;
    --v10;
  }
  while ( v10 );
  EtwpDisableKernelTrace(v21, v20, v18, v7);
  return (unsigned int)updated;
}
