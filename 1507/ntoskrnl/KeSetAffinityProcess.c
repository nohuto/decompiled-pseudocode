/*
 * XREFs of KeSetAffinityProcess @ 0x14016DD9C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140401918 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x1406C0654 (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x14002B770 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, __int16 *a3)
{
  char v6; // r13
  char v7; // r15
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  signed __int32 v10; // r12d
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  signed __int32 v13; // r12d
  __int64 CurrentIrql; // rsi
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // esi
  signed __int32 v17; // edx
  char v19; // r15
  unsigned __int16 *v20; // rcx
  unsigned __int16 v21; // si
  unsigned __int16 v22; // si
  unsigned __int16 v23; // r8
  char v24; // r15
  _QWORD *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rax
  bool v29; // zf
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rax
  _QWORD *i; // rsi
  __int64 *v40; // r8
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  char v43; // [rsp+20h] [rbp-E0h]
  signed __int32 v44; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v45; // [rsp+28h] [rbp-D8h]
  _QWORD *v46; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-C8h]
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  __int64 v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  _OWORD v52[11]; // [rsp+60h] [rbp-A0h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  *(_QWORD *)&v52[0] = 1310721LL;
  v50 = 0LL;
  v43 = 0;
  v51 = 0LL;
  v46 = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)v52 + 8, 0, 0xA0uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v7 = 1;
    else
      v43 = 1;
  }
  v8 = *a3;
  v9 = 0;
  if ( *a3 )
  {
    while ( !*(_QWORD *)&a3[4 * v9 + 4] )
    {
      if ( ++v9 >= v8 )
        goto LABEL_10;
    }
    v51 = v9;
    v50 = *(_QWORD *)&a3[4 * v9 + 4];
  }
LABEL_10:
  v10 = 0;
  v44 = 0;
  v11 = 0;
  if ( v8 )
  {
    v12 = a3 + 4;
    do
    {
      if ( *v12 )
        _bittestandset(&v44, v11);
      ++v11;
      ++v12;
    }
    while ( v11 < v8 );
    v10 = v44;
  }
  v13 = v10 << 8;
  v48 = 0LL;
  v49 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v45 = CurrentIrql;
  __writecr8(2uLL);
  v15 = (volatile signed __int32 *)(a1 + 64);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v16 = 0;
    if ( _interlockedbittestandset(v15, 0x1Fu) )
      v16 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 64));
    v17 = *v15;
    if ( (*v15 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v17 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v15, v17 | 0x40000000, v17);
        if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v16);
        v17 = *v15;
      }
      while ( (*v15 & 0xBFFFFFFF) != 0x80000000 );
      v6 = 0;
    }
    LOBYTE(CurrentIrql) = v45;
  }
  if ( v7 && (((*(_DWORD *)(a1 + 440) & 0xFFFFF00) - 1) & *(_DWORD *)(a1 + 440) & 0xFFFFF00) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
    else
      *v15 = 0;
    __writecr8((unsigned __int8)CurrentIrql);
    return 3221225485LL;
  }
  v19 = v43;
  v20 = (unsigned __int16 *)(a1 + 80);
  if ( v43 )
  {
    v22 = *v20;
    v23 = 0;
    if ( !*v20 )
      goto LABEL_63;
    v24 = 0;
    v25 = a3 + 4;
    v26 = a1 - (_QWORD)a3;
    do
    {
      v27 = *(_QWORD *)((char *)v25 + v26 + 80);
      if ( v27 )
      {
        v48 = *(_QWORD *)((char *)v25 + v26 + 80);
        if ( v23 < (unsigned __int16)*a3 )
        {
          v28 = *v25 | v27;
          if ( v28 != v27 )
          {
            v27 |= *v25;
            v48 = v28;
            v24 = 1;
          }
        }
        if ( LOWORD(v52[0]) <= v23 )
          LOWORD(v52[0]) = v23 + 1;
        *(_QWORD *)((char *)v25 + (char *)v52 - (char *)a3) |= v27;
      }
      ++v23;
      ++v25;
    }
    while ( v23 < v22 );
    v29 = v24 == 0;
    v19 = v43;
    if ( v29 )
      goto LABEL_63;
    v30 = v52[1];
    *(_OWORD *)v20 = v52[0];
    v31 = v52[2];
    *(_OWORD *)(a1 + 96) = v30;
    v32 = v52[3];
    *(_OWORD *)(a1 + 112) = v31;
    v33 = v52[4];
    *(_OWORD *)(a1 + 128) = v32;
    v34 = v52[5];
    *(_OWORD *)(a1 + 144) = v33;
    v35 = v52[6];
    *(_OWORD *)(a1 + 160) = v34;
    v36 = v52[8];
    *(_OWORD *)(a1 + 176) = v35;
    *(_OWORD *)(a1 + 192) = v52[7];
    v37 = v52[9];
    v38 = *(_QWORD *)&v52[10];
    *(_OWORD *)(a1 + 208) = v36;
    *(_OWORD *)(a1 + 224) = v37;
    *(_QWORD *)(a1 + 240) = v38;
  }
  else
  {
    v21 = 0;
    *(_OWORD *)v20 = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 96) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(a1 + 112) = *((_OWORD *)a3 + 2);
    *(_OWORD *)(a1 + 128) = *((_OWORD *)a3 + 3);
    *(_OWORD *)(a1 + 144) = *((_OWORD *)a3 + 4);
    *(_OWORD *)(a1 + 160) = *((_OWORD *)a3 + 5);
    *(_OWORD *)(a1 + 176) = *((_OWORD *)a3 + 6);
    *(_OWORD *)(a1 + 192) = *((_OWORD *)a3 + 7);
    *(_OWORD *)(a1 + 208) = *((_OWORD *)a3 + 8);
    *(_OWORD *)(a1 + 224) = *((_OWORD *)a3 + 9);
    *(_QWORD *)(a1 + 240) = *((_QWORD *)a3 + 20);
    if ( *a3 )
    {
      do
      {
        if ( *(_QWORD *)&a3[4 * v21 + 4] )
        {
          KiSetIdealNodeProcessByGroup(a1, 0LL, v21);
          if ( !v6 )
          {
            v6 = 1;
            *(_WORD *)(a1 + 568) = *(_WORD *)(a1 + 2LL * v21 + 528);
          }
        }
        ++v21;
      }
      while ( v21 < (unsigned __int16)*a3 );
      v19 = 0;
      v15 = (volatile signed __int32 *)(a1 + 64);
    }
  }
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
  {
    v40 = &v48;
    LOWORD(v49) = *((_WORD *)i - 100);
    v48 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v49 + 88);
    if ( !v48 )
      v40 = &v50;
    KiSetAffinityThread((__int64)(i - 95), (__int64 *)&v46, v40, 0LL);
  }
  if ( !v19 )
  {
    _m_prefetchw((const void *)(a1 + 440));
    v41 = *(_DWORD *)(a1 + 440);
    do
    {
      v42 = v41;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v13 | v41 & 0xF00000FF, v41);
    }
    while ( v42 != v41 );
  }
LABEL_63:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
  else
    *v15 = 0;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v46, v45);
  return 0LL;
}
