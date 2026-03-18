/*
 * XREFs of ExpCopyProcessInfo @ 0x1404967A0
 * Callers:
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3, _QWORD *a4)
{
  struct _EX_RUNDOWN_REF *v5; // r12
  __int64 v6; // r13
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned __int64 v8; // rtt
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  struct _KTHREAD *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r9
  unsigned int Ptr_high; // edi
  unsigned int v17; // esi
  struct _EX_RUNDOWN_REF *j; // rax
  __int16 v19; // ax
  __int64 v20; // rcx
  unsigned int *Count; // r14
  unsigned int v22; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned int i; // esi
  char v30; // al
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  unsigned __int64 v33; // rtt
  unsigned int v34; // r15d
  __int64 v36; // [rsp+0h] [rbp-C8h] BYREF
  BOOLEAN v37; // [rsp+21h] [rbp-A7h]
  unsigned int v38; // [rsp+24h] [rbp-A4h]
  unsigned int v39; // [rsp+28h] [rbp-A0h]
  unsigned int v40; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v41; // [rsp+30h] [rbp-98h]
  unsigned __int64 v42; // [rsp+40h] [rbp-88h]
  unsigned __int64 v43; // [rsp+48h] [rbp-80h]
  unsigned int v44; // [rsp+50h] [rbp-78h]
  unsigned int v45; // [rsp+54h] [rbp-74h]
  unsigned int *v46; // [rsp+58h] [rbp-70h]
  unsigned __int64 v47; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *v48; // [rsp+70h] [rbp-58h]
  unsigned __int64 v49; // [rsp+78h] [rbp-50h]
  unsigned __int64 v50; // [rsp+80h] [rbp-48h]

  v5 = a2;
  v6 = a1;
  v46 = 0LL;
  v7 = a2 + 92;
  _m_prefetchw(&a2[92]);
  v8 = a2[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)&a2[92], v8 + 2, v8) )
  {
    v37 = 1;
  }
  else
  {
    v37 = ExfAcquireRundownProtection(a2 + 92);
    if ( !v37 )
    {
LABEL_49:
      v40 = 0;
      goto LABEL_13;
    }
  }
  Count = (unsigned int *)v5[131].Count;
  v46 = Count;
  if ( !Count )
  {
    _m_prefetchw(v7);
    v33 = v7->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v33 - 2, v33) )
      ExfReleaseRundownProtection(v7);
    goto LABEL_49;
  }
  v34 = 0;
  v39 = 0;
  v22 = 0;
  v41 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v24 = 0;
  v38 = 0;
  while ( 1 )
  {
    v25 = dword_14077E03C;
    if ( v24 >= dword_14077E03C )
      break;
    v26 = &Count[16 * (unsigned __int64)v24];
    v27 = KeAbPreAcquire((ULONG_PTR)(v26 + 16), 0LL, 0LL, (__int64)a4);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v26 + 16, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v26 + 8, v27, (ULONG_PTR)(v26 + 16), (__int64)a4);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v34 += v26[22];
    v39 = v34;
    v22 += v26[23];
    v41 = v22;
    v38 = ++v24;
    Count = v46;
  }
  for ( i = 0; ; ++i )
  {
    v38 = i;
    if ( i >= v25 )
      break;
    v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Count[16 * i + 16], 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v30 & 2) != 0 && (v30 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Count[16 * i + 16]);
    KeAbPostRelease((ULONG_PTR)&Count[16 * i + 16]);
    v25 = dword_14077E03C;
  }
  v31 = KeGetCurrentThread();
  v48 = v31;
  v32 = v31->KernelApcDisable + 1;
  v31->KernelApcDisable = v32;
  if ( !v32
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
    && !v31->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v34 > (unsigned int)((255 * ((unsigned __int64)*Count >> 2)) >> 8) )
  {
    v34 = (255 * ((unsigned __int64)*Count >> 2)) >> 8;
    v39 = v34;
  }
  if ( v22 > v34 )
    v41 = v34;
  if ( &v36 != (__int64 *)-44LL )
    v40 = v34;
  v5 = a2;
  v9 = a2 + 92;
  _m_prefetchw(&a2[92]);
  v10 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v10 - 2, v10) )
    ExfReleaseRundownProtection(v9);
  v6 = a1;
LABEL_13:
  *(_DWORD *)(v6 + 96) = v40;
  *(struct _EX_RUNDOWN_REF *)(v6 + 32) = v5[97];
  *(_DWORD *)(v6 + 72) = SBYTE4(v5[55].Ptr);
  *(struct _EX_RUNDOWN_REF *)(v6 + 80) = v5[93];
  *(struct _EX_RUNDOWN_REF *)(v6 + 88) = v5[124];
  *(_DWORD *)(v6 + 20) = v5[210].Count;
  *(struct _EX_RUNDOWN_REF *)(v6 + 112) = v5[102];
  *(struct _EX_RUNDOWN_REF *)(v6 + 120) = v5[103];
  *(_DWORD *)(v6 + 128) = HIDWORD(v5[183].Ptr);
  *(_DWORD *)(v6 + 16) = v5[181].Count;
  *(_QWORD *)(v6 + 136) = v5[180].Count << 12;
  v11 = v5[172].Count << 12;
  v49 = v11;
  v50 = v5[173].Count << 12;
  v12 = v50;
  *(_QWORD *)(v6 + 144) = v11;
  if ( v12 >= v11 )
    v12 = v11;
  *(_QWORD *)(v6 + 8) = v12;
  v42 = v5[99].Count;
  v43 = v5[101].Count;
  *(_QWORD *)(v6 + 160) = v42;
  *(_QWORD *)(v6 + 152) = v43;
  v42 = v5[98].Count;
  v43 = v5[100].Count;
  *(_QWORD *)(v6 + 176) = v42;
  *(_QWORD *)(v6 + 168) = v43;
  v47 = v5[157].Count << 12;
  *(_QWORD *)(v6 + 184) = v47;
  *(_QWORD *)(v6 + 192) = v5[158].Count << 12;
  *(_QWORD *)(v6 + 200) = v47;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = KeAbPreAcquire((ULONG_PTR)&v5[211], 0LL, 0LL, (__int64)a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v5[211], 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&v5[211].Count, v14, (ULONG_PTR)&v5[211], v15);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Ptr_high = HIDWORD(v5[77].Ptr);
  v44 = Ptr_high;
  v17 = v5[78].Count;
  v45 = v17;
  a4[2] = v5[74].Count;
  a4[3] = v5[75].Count;
  a4[4] = v5[150].Count;
  a4[5] = v5[151].Count;
  a4[6] = v5[152].Count;
  a4[7] = v5[153].Count;
  a4[8] = v5[154].Count;
  a4[9] = v5[155].Count;
  for ( j = (struct _EX_RUNDOWN_REF *)v5[144].Count; j != &v5[144]; j = (struct _EX_RUNDOWN_REF *)j->Count )
  {
    Ptr_high += HIDWORD(j[-129].Ptr);
    v44 = Ptr_high;
    v17 += HIDWORD(j[-119].Ptr);
    v45 = v17;
    a4[2] += j[-201].Count;
    a4[3] += HIDWORD(j[-168].Ptr);
    a4[4] += j[-30].Count;
    a4[5] += j[-29].Count;
    a4[6] += j[-28].Count;
    a4[7] += j[-27].Count;
    a4[8] += j[-26].Count;
    a4[9] += j[-25].Count;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v5[211], 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&v5[211]);
  KeAbPostRelease((ULONG_PTR)&v5[211]);
  v19 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v20 = KeMaximumIncrement;
  *a4 = KeMaximumIncrement * (unsigned __int64)Ptr_high;
  a4[1] = v20 * v17;
  *(_QWORD *)(v6 + 24) = a4[2];
  *(_QWORD *)(v6 + 40) = a4[1];
  *(_QWORD *)(v6 + 48) = *a4;
  *(_QWORD *)(v6 + 208) = a4[4];
  *(_QWORD *)(v6 + 216) = a4[5];
  *(_QWORD *)(v6 + 224) = a4[6];
  *(_QWORD *)(v6 + 232) = a4[7];
  *(_QWORD *)(v6 + 240) = a4[8];
  *(_QWORD *)(v6 + 248) = a4[9];
  if ( a3 )
    *(struct _EX_RUNDOWN_REF *)(v6 + 104) = v5[93];
  return 0LL;
}
