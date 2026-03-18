/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x14011341C
 * Callers:
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x14011374C (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesForTrimPass @ 0x140113778 (MiGetAvailablePagesForTrimPass.c)
 *     MiComputeAgeDistribution @ 0x140113790 (MiComputeAgeDistribution.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPulseLowAvailableEvent @ 0x14022E01C (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesForTrimPass; // rsi
  unsigned int StandbyRepurposed; // eax
  int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r10d
  int v22; // r11d
  int v23; // r12d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int8 v28; // di
  unsigned __int64 v29; // r15
  char v30; // al
  unsigned __int16 v31; // ax
  char v32; // al
  __int64 v33; // rax
  __int16 v35; // ax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+60h] [rbp+8h]
  unsigned int v44; // [rsp+70h] [rbp+18h]
  unsigned __int64 v45; // [rsp+78h] [rbp+20h]

  v2 = a1[657];
  v43 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(a1, 0LL);
  StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL);
  v9 = *(_DWORD *)(v2 + 44);
  if ( StandbyRepurposed > v9 )
    v10 = StandbyRepurposed - v9;
  else
    v10 = 0;
  v11 = *(_QWORD *)(v2 + 2416);
  v44 = v10;
  *(_DWORD *)(v2 + 44) = StandbyRepurposed;
  if ( AvailablePagesForTrimPass <= v11 )
    v12 = v11 - AvailablePagesForTrimPass;
  else
    v12 = AvailablePagesForTrimPass - v11;
  v13 = *(_DWORD *)(v2 + 128) & 7;
  v14 = 0;
  v15 = 0LL;
  *(_QWORD *)(v2 + 2208) += (v12 >> 3) - (*(_QWORD *)(v2 + 8 * v13 + 2216) >> 3);
  *(_QWORD *)(v2 + 8 * v13 + 2216) = v12;
  if ( *(_DWORD *)(v2 + 88) == 4 && *(_WORD *)(v2 + 2360) && *(_BYTE *)(v2 + 2362) && *(_BYTE *)(v2 + 2363) )
  {
    v16 = *(_QWORD *)(v2 + 2416);
    v17 = 0LL;
    v18 = v16;
  }
  else
  {
    v16 = *(_QWORD *)(v2 + 2416);
    v17 = AvailablePagesForTrimPass - *(_QWORD *)(v2 + 2384);
    v18 = v16 >> 2;
    v8 = 0;
  }
  if ( AvailablePagesForTrimPass < v18
    || AvailablePagesForTrimPass < 4 * v16 && v17 < 0 && AvailablePagesForTrimPass < v16 - v17 )
  {
    v14 = 1;
    v15 = v16 - v17 - AvailablePagesForTrimPass;
    if ( v15 > *(_QWORD *)(v2 + 2400) )
      v15 = *(_QWORD *)(v2 + 2400);
  }
  v45 = v10;
  if ( v10 >= AvailablePagesForTrimPass >> 2 )
  {
    v36 = v10 - (AvailablePagesForTrimPass >> 2);
    if ( v36 > v15 && v15 < 0x2000 && !v8 )
    {
      v15 = v10 - (AvailablePagesForTrimPass >> 2);
      v14 = 3;
      if ( v36 > 0x2000 )
        v15 = 0x2000LL;
    }
  }
  v19 = MiGetStandbyRepurposed(a1, 4LL);
  v23 = v19;
  if ( v15 )
  {
    if ( v15 < 0x1000 )
      v15 = 4096LL;
  }
  else if ( !v21 )
  {
    v24 = v19 - *(_DWORD *)(v2 + 48);
    if ( v24 > 0x20000 )
    {
      v37 = a1[688];
      if ( v37 >= 0x100000 || v37 >= a1[666] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v19;
      }
      else
      {
        v15 = 0x8000LL;
        v14 = 2;
      }
    }
    else if ( v22 && v24 > 0x18000 && *(_QWORD *)(v2 + 2424) < 0x20000uLL )
    {
      v43 = 1;
    }
  }
  v25 = *(_QWORD *)(v2 + 2416);
  if ( AvailablePagesForTrimPass < 4 * v25 )
  {
    v20 = *(_QWORD *)(v2 + 2208);
    v38 = 4 * v20;
    if ( 4 * v20 >= v25 )
    {
      v40 = 2 * v20;
      if ( 2 * v20 <= v25 )
        goto LABEL_17;
      v39 = *(_QWORD *)(v2 + 2400);
      *(_QWORD *)(v2 + 2416) = v40;
      if ( v40 <= v39 )
        goto LABEL_17;
    }
    else
    {
      v39 = *(_QWORD *)(v2 + 2392);
      *(_QWORD *)(v2 + 2416) = v38;
      if ( v38 >= v39 )
        goto LABEL_17;
    }
    *(_QWORD *)(v2 + 2416) = v39;
    goto LABEL_17;
  }
  if ( AvailablePagesForTrimPass > 16 * v25 )
    *(_QWORD *)(v2 + 2416) = *(_QWORD *)(v2 + 2408);
LABEL_17:
  v26 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 2384) = AvailablePagesForTrimPass;
  if ( v26 && v15 < v26 )
  {
    v15 = v26;
    v14 = 5;
  }
  if ( !v15 )
  {
    v27 = *(_QWORD *)(v2 + 2376);
    v28 = 0;
    if ( v27 )
    {
      if ( v27 > *(_QWORD *)(v2 + 2424) )
      {
        v29 = v45;
        v28 = 11;
        if ( *(_WORD *)(v2 + 2358) < 0xFAu )
          *(_WORD *)(v2 + 2358) = 250;
        goto LABEL_26;
      }
      *(_QWORD *)(v2 + 2376) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2424) >= (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2400)) )
      goto LABEL_48;
    if ( !*(_WORD *)(v2 + 2358) )
      goto LABEL_22;
    v35 = MiComputeAgeDistribution(a1, 1LL, 0LL);
    *(_WORD *)(v2 + 2358) = v35;
    if ( v35 )
      v28 = 12;
    if ( v28 )
    {
LABEL_48:
      v29 = v45;
    }
    else
    {
LABEL_22:
      v29 = v45;
      if ( v45 >= AvailablePagesForTrimPass >> 4 )
      {
        v28 = 10;
      }
      else
      {
        v30 = v28;
        if ( v43 == 1 )
          v30 = 9;
        v28 = v30;
      }
    }
LABEL_26:
    v31 = *(_WORD *)(v2 + 2360);
    if ( v31 )
    {
      if ( *(_WORD *)(v2 + 2358) < v31 )
        *(_WORD *)(v2 + 2358) = v31;
      v32 = v28;
      if ( !v28 )
        v32 = 13;
      v28 = v32;
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    v33 = a1[688];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_QWORD *)(a2 + 72) = v33;
    *(_BYTE *)(a2 + 2) = v28;
    memset((void *)(a2 + 16), 0, 0x38uLL);
    if ( v28 )
    {
      ++*(_DWORD *)(v2 + 4LL * v28 + 2488);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) == 1 )
    {
      v5 |= 0x80u;
      *(_WORD *)(v2 + 2358) = 10;
    }
    else if ( !v5 )
    {
      v5 = 64;
    }
    goto LABEL_34;
  }
  MiPulseLowAvailableEvent(a1, v20, 0LL);
  if ( (unsigned __int8)(v14 - 2) <= 1u )
    *(_QWORD *)(v2 + 2376) = v15;
  *(_QWORD *)(a2 + 80) = v15;
  *(_BYTE *)a2 = 0;
  v5 |= 1u;
  *(_QWORD *)(a2 + 96) = 0LL;
  v41 = a1[688];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v15 + v41;
  *(_BYTE *)(a2 + 2) = v14;
  memset((void *)(a2 + 16), 0, 0x38uLL);
  v42 = v14;
  v29 = v45;
  *(_DWORD *)(v2 + 48) = v23;
  ++*(_DWORD *)(v2 + 4 * v42 + 2488);
LABEL_34:
  if ( AvailablePagesForTrimPass && v29 < AvailablePagesForTrimPass )
    *(_BYTE *)(a2 + 3) = 100 * v44 / AvailablePagesForTrimPass;
  else
    *(_BYTE *)(a2 + 3) = 100;
  return v5;
}
