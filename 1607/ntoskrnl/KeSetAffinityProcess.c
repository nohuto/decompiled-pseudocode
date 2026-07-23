/*
 * XREFs of KeSetAffinityProcess @ 0x14014A628
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x14067DD40 (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14007D1A8 (KiSetIdealNodeProcessByGroup.c)
 *     KeFirstGroupAffinityEx @ 0x1400AA560 (KeFirstGroupAffinityEx.c)
 *     KiSetAffinityThread @ 0x1400C885C (KiSetAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  signed __int32 v3; // r15d
  char v7; // r12
  char v8; // r14
  char v9; // r13
  unsigned int v10; // edx
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  signed __int32 v13; // r15d
  __int64 CurrentIrql; // rsi
  unsigned __int16 *v15; // rcx
  unsigned __int16 v16; // si
  _QWORD *i; // rdi
  __int64 *v18; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned __int16 v22; // si
  unsigned __int16 v23; // r8
  __int64 v24; // r11
  _QWORD *v25; // r9
  char v26; // r15
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
  signed __int32 v39; // [rsp+24h] [rbp-DCh] BYREF
  signed __int32 v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+38h] [rbp-C8h]
  __int64 v43; // [rsp+40h] [rbp-C0h]
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  _QWORD v47[2]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v48[11]; // [rsp+70h] [rbp-90h] BYREF

  v3 = 0;
  LODWORD(v48[0]) = 1310721;
  v47[0] = 0LL;
  v41 = 0LL;
  v47[1] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  memset((char *)v48 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v8 = 1;
    else
      v9 = 1;
  }
  KeFirstGroupAffinityEx(v47, a3);
  v10 = *a3;
  v39 = 0;
  v11 = 0;
  if ( v10 )
  {
    v12 = a3 + 4;
    do
    {
      if ( *v12 )
        _bittestandset(&v39, v11);
      ++v11;
      ++v12;
    }
    while ( v11 < v10 );
    v3 = v39;
  }
  v13 = v3 << 8;
  v40 = v13;
  v45 = 0LL;
  v46 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v8 || (((*(_DWORD *)(a1 + 440) & 0xFFFFF00) - 1) & *(_DWORD *)(a1 + 440) & 0xFFFFF00) == 0 )
  {
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v9 )
    {
      v22 = *v15;
      v23 = 0;
      if ( !*v15 )
        goto LABEL_24;
      v24 = a1 - (_QWORD)a3;
      v25 = a3 + 4;
      v26 = 0;
      do
      {
        v27 = *(_QWORD *)((char *)v25 + v24 + 80);
        if ( v27 )
        {
          v45 = *(_QWORD *)((char *)v25 + v24 + 80);
          if ( v23 < *a3 )
          {
            v28 = *v25 | v27;
            if ( v28 != v27 )
            {
              v27 |= *v25;
              v45 = v28;
              v26 = 1;
            }
          }
          if ( LOWORD(v48[0]) <= v23 )
            LOWORD(v48[0]) = v23 + 1;
          *(_QWORD *)((char *)v25 + (char *)v48 - (char *)a3) |= v27;
        }
        ++v23;
        ++v25;
      }
      while ( v23 < v22 );
      v29 = v26 == 0;
      v13 = v40;
      if ( v29 )
        goto LABEL_24;
      v30 = v48[1];
      *(_OWORD *)v15 = v48[0];
      v31 = v48[2];
      *(_OWORD *)(a1 + 96) = v30;
      v32 = v48[3];
      *(_OWORD *)(a1 + 112) = v31;
      v33 = v48[4];
      *(_OWORD *)(a1 + 128) = v32;
      v34 = v48[5];
      *(_OWORD *)(a1 + 144) = v33;
      v35 = v48[6];
      *(_OWORD *)(a1 + 160) = v34;
      v36 = v48[8];
      *(_OWORD *)(a1 + 176) = v35;
      *(_OWORD *)(a1 + 192) = v48[7];
      v37 = v48[9];
      v38 = *(_QWORD *)&v48[10];
      *(_OWORD *)(a1 + 208) = v36;
      *(_OWORD *)(a1 + 224) = v37;
      *(_QWORD *)(a1 + 240) = v38;
    }
    else
    {
      v16 = 0;
      *(_OWORD *)v15 = *(_OWORD *)a3;
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
          if ( *(_QWORD *)&a3[4 * v16 + 4] )
          {
            KiSetIdealNodeProcessByGroup(a1, 0LL, v16);
            if ( !v7 )
            {
              v7 = 1;
              *(_WORD *)(a1 + 568) = *(_WORD *)(a1 + 2LL * v16 + 528);
            }
          }
          ++v16;
        }
        while ( v16 < *a3 );
        v13 = v40;
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v18 = &v45;
      LOWORD(v46) = *((_WORD *)i - 100);
      v45 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v46 + 88);
      if ( !v45 )
        v18 = v47;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v41, v18);
    }
    if ( !v9 )
    {
      _m_prefetchw((const void *)(a1 + 440));
      v19 = *(_DWORD *)(a1 + 440);
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v13 | v19 & 0xF00000FF, v19);
      }
      while ( v20 != v19 );
    }
LABEL_24:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v41, v43);
    return 0LL;
  }
  KiReleaseProcessLockExclusive(a1, CurrentIrql);
  return 3221225485LL;
}
