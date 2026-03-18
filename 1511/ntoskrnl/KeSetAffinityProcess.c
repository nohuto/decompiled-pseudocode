/*
 * XREFs of KeSetAffinityProcess @ 0x14014075C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140093758 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x1400EB098 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r13
  char v7; // r14
  char v8; // si
  unsigned int v9; // edx
  signed __int32 v10; // r15d
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  signed __int32 v13; // r15d
  volatile LONG *v14; // r12
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
  char v26; // r12
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
  char v39; // [rsp+20h] [rbp-E0h]
  signed __int32 v40; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v41; // [rsp+28h] [rbp-D8h] BYREF
  __int64 CurrentIrql; // [rsp+30h] [rbp-D0h]
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-C8h]
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h]
  _QWORD v46[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v47[11]; // [rsp+60h] [rbp-A0h] BYREF

  *(_QWORD *)&v47[0] = 1310721LL;
  v46[0] = 0LL;
  v39 = 0;
  v41 = 0LL;
  v46[1] = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)v47 + 8, 0, 0xA0uLL);
  if ( (a2 & 3) == 0 )
    goto LABEL_2;
  if ( (a2 & 1) != 0 )
  {
    v7 = 1;
LABEL_2:
    v8 = 0;
    goto LABEL_3;
  }
  v8 = 1;
  v39 = 1;
LABEL_3:
  KeFirstGroupAffinityEx(v46, a3);
  v9 = *a3;
  v10 = 0;
  v40 = 0;
  v11 = 0;
  if ( v9 )
  {
    v12 = a3 + 4;
    do
    {
      if ( *v12 )
        _bittestandset(&v40, v11);
      ++v11;
      ++v12;
    }
    while ( v11 < v9 );
    v10 = v40;
  }
  v13 = v10 << 8;
  v44 = 0LL;
  v45 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v14 = (volatile LONG *)(a1 + 64);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v7 || (((*(_DWORD *)(a1 + 440) & 0xFFFFF00) - 1) & *(_DWORD *)(a1 + 440) & 0xFFFFF00) == 0 )
  {
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v8 )
    {
      v22 = *v15;
      v23 = 0;
      if ( !*v15 )
        goto LABEL_25;
      v24 = a1 - (_QWORD)a3;
      v25 = a3 + 4;
      v26 = 0;
      do
      {
        v27 = *(_QWORD *)((char *)v25 + v24 + 80);
        if ( v27 )
        {
          v44 = *(_QWORD *)((char *)v25 + v24 + 80);
          if ( v23 < *a3 )
          {
            v28 = *v25 | v27;
            if ( v28 != v27 )
            {
              v27 |= *v25;
              v44 = v28;
              v26 = 1;
            }
          }
          if ( LOWORD(v47[0]) <= v23 )
            LOWORD(v47[0]) = v23 + 1;
          *(_QWORD *)((char *)v25 + (char *)v47 - (char *)a3) |= v27;
        }
        ++v23;
        ++v25;
      }
      while ( v23 < v22 );
      v29 = v26 == 0;
      v14 = (volatile LONG *)(a1 + 64);
      if ( v29 )
        goto LABEL_25;
      v30 = v47[1];
      *(_OWORD *)v15 = v47[0];
      v31 = v47[2];
      *(_OWORD *)(a1 + 96) = v30;
      v32 = v47[3];
      *(_OWORD *)(a1 + 112) = v31;
      v33 = v47[4];
      *(_OWORD *)(a1 + 128) = v32;
      v34 = v47[5];
      *(_OWORD *)(a1 + 144) = v33;
      v35 = v47[6];
      *(_OWORD *)(a1 + 160) = v34;
      v36 = v47[8];
      *(_OWORD *)(a1 + 176) = v35;
      *(_OWORD *)(a1 + 192) = v47[7];
      v37 = v47[9];
      v38 = *(_QWORD *)&v47[10];
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
            if ( !v6 )
            {
              v6 = 1;
              *(_WORD *)(a1 + 568) = *(_WORD *)(a1 + 2LL * v16 + 528);
            }
          }
          ++v16;
        }
        while ( v16 < *a3 );
        v14 = (volatile LONG *)(a1 + 64);
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v18 = &v44;
      LOWORD(v45) = *((_WORD *)i - 100);
      v44 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v45 + 88);
      if ( !v44 )
        v18 = v46;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v41, (__int64)v18);
    }
    if ( !v39 )
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
LABEL_25:
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v41, CurrentIrql);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8((unsigned __int8)CurrentIrql);
  return 3221225485LL;
}
