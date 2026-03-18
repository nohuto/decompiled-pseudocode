/*
 * XREFs of PnprQuiesceProcessors @ 0x140400DAC
 * Callers:
 *     PnprQuiesce @ 0x1401FCC54 (PnprQuiesce.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeSuspendClockTimerSafe @ 0x1401FEAC8 (KeSuspendClockTimerSafe.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403FB1C0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PnprGetMillisecondCounter @ 0x1403FFF10 (PnprGetMillisecondCounter.c)
 */

SIZE_T PnprQuiesceProcessors()
{
  void *v0; // rsi
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  SIZE_T v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int16 v14; // di
  unsigned int v15; // r14d
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  SIZE_T v18; // rdx
  SIZE_T v19; // rcx
  int v20; // eax
  int v21; // eax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int *v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  SIZE_T result; // rax
  unsigned int MillisecondCounter; // eax
  SIZE_T v33; // rcx
  SIZE_T v34; // rdx
  int v35; // eax
  __int64 v36; // r9
  __int128 v37; // xmm1
  unsigned int v38; // r8d
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  SIZE_T v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  SIZE_T v51; // rdx
  PVOID v52; // r8
  int v53; // ebx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  SIZE_T v71; // rax
  int i; // edx
  char DeferredContext[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v74; // [rsp+2Ch] [rbp-DCh]
  struct _KDPC Dpc; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v76; // [rsp+78h] [rbp-90h]
  __int128 v77; // [rsp+88h] [rbp-80h]
  __int128 v78; // [rsp+98h] [rbp-70h]
  __int128 v79; // [rsp+A8h] [rbp-60h]
  __int128 v80; // [rsp+B8h] [rbp-50h]
  __int128 v81; // [rsp+C8h] [rbp-40h]
  __int128 v82; // [rsp+D8h] [rbp-30h]
  __int128 v83; // [rsp+E8h] [rbp-20h]
  __int128 v84; // [rsp+F8h] [rbp-10h]
  __int128 v85; // [rsp+108h] [rbp+0h]
  SIZE_T v86; // [rsp+118h] [rbp+10h]

  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  __writecr8(2uLL);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, DeferredContext);
  Dpc.Importance = 2;
  v1 = *(_OWORD *)&KeActiveProcessors[4];
  v76 = *(_OWORD *)KeActiveProcessors;
  v2 = *(_OWORD *)&KeActiveProcessors[8];
  v77 = v1;
  v3 = *(_OWORD *)&KeActiveProcessors[12];
  v78 = v2;
  v4 = *(_OWORD *)&KeActiveProcessors[16];
  v79 = v3;
  v5 = *(_OWORD *)&KeActiveProcessors[20];
  v80 = v4;
  v6 = *(_OWORD *)&KeActiveProcessors[24];
  v81 = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[32];
  v82 = v6;
  v83 = *(_OWORD *)&KeActiveProcessors[28];
  v8 = *(_OWORD *)&KeActiveProcessors[36];
  v9 = *(_QWORD *)&KeActiveProcessors[40];
  v84 = v7;
  v85 = v8;
  v86 = v9;
  v10 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(PnprContext + 180)];
  v11 = LOWORD(KeActiveProcessors[0]);
  v12 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(PnprContext + 180)] >> 6;
  if ( LOWORD(KeActiveProcessors[0]) > (unsigned int)v12 )
  {
    *((_QWORD *)&v76 + v12 + 1) &= ~(1LL << (v10 & 0x3F));
    v11 = (unsigned __int16)v76;
  }
  v13 = *((_QWORD *)&v76 + 1);
  v14 = 0;
  v15 = (unsigned __int16)v11;
  while ( 1 )
  {
    while ( v13 )
    {
      _BitScanForward64(&v16, v13);
      v13 &= ~(1LL << v16);
      v74 = v16;
      v17 = KiProcessorNumberToIndexMappingTable[64 * v14 + (unsigned __int8)v16];
      Dpc.Number = v17 + 640;
      DeferredContext[0] = 0;
      KeInsertQueueDpc(&Dpc, v0, (PVOID)v17);
      while ( !DeferredContext[0] )
        _mm_pause();
    }
    if ( ++v14 >= v15 )
      break;
    v13 = *((_QWORD *)&v76 + v14 + 1);
  }
  v18 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( off_140321898((PVOID)v11, PnprContext, (PVOID)v10) < 0 )
    {
      v19 = PnprContext;
      v20 = *(_DWORD *)(PnprContext + 10744);
      if ( !v20 )
        v20 = 2428;
      *(_DWORD *)(PnprContext + 10744) = v20;
      v21 = *(_DWORD *)(v19 + 10748);
      if ( !v21 )
        v21 = 1;
      *(_DWORD *)(v19 + 10748) = v21;
      *(_OWORD *)KeActiveProcessors = v76;
      v22 = v78;
      *(_OWORD *)(0x140000000LL + 4003312) = v77;
      v23 = v79;
      *(_OWORD *)(0x140000000LL + 4003328) = v22;
      v24 = v80;
      *(_OWORD *)(0x140000000LL + 4003344) = v23;
      v25 = v81;
      *(_OWORD *)(0x140000000LL + 4003360) = v24;
      v26 = v82;
      *(_OWORD *)(0x140000000LL + 4003376) = v25;
      v27 = v83;
      *(_OWORD *)(0x140000000LL + 4003392) = v26;
      v28 = (int *)(0x140000000LL + 4003424);
      v29 = v84;
      *(_OWORD *)(0x140000000LL + 4003408) = v27;
      v30 = v85;
      result = v86;
LABEL_18:
      *(_OWORD *)v28 = v29;
      *((_OWORD *)v28 + 1) = v30;
      *((_QWORD *)v28 + 4) = result;
      return result;
    }
    v18 = PnprContext;
  }
  off_140321848(0LL, *(_QWORD *)(v18 + 10632), (PVOID)v10);
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v33 = PnprContext;
  *(_QWORD *)(PnprContext + 10752) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v33 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
    _mm_pause();
  v34 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
      _mm_pause();
    LOBYTE(v34) = 1;
    (*(void (__fastcall **)(_QWORD, SIZE_T))(PnprContext + 10736))(*(_QWORD *)(PnprContext + 10640), v34);
    v35 = PnprGetMillisecondCounter(0);
    v34 = PnprContext;
    *(_DWORD *)(PnprContext + 10760) = v35;
  }
  v36 = *(_QWORD *)(v34 + 16);
  v37 = *(_OWORD *)(0x140000000LL + 4003312);
  v38 = 0;
  v76 = *(_OWORD *)KeActiveProcessors;
  v39 = *(_OWORD *)(0x140000000LL + 4003328);
  v77 = v37;
  v40 = *(_OWORD *)(0x140000000LL + 4003344);
  v78 = v39;
  v41 = *(_OWORD *)(0x140000000LL + 4003360);
  v79 = v40;
  v42 = *(_OWORD *)(0x140000000LL + 4003376);
  v80 = v41;
  v43 = *(_OWORD *)(0x140000000LL + 4003392);
  v81 = v42;
  v44 = *(_OWORD *)(0x140000000LL + 4003408);
  v82 = v43;
  v45 = *(_OWORD *)(0x140000000LL + 4003424);
  v83 = v44;
  v46 = *(_OWORD *)(0x140000000LL + 4003440);
  v47 = *(_QWORD *)(0x140000000LL + 4003456);
  v84 = v45;
  v85 = v46;
  v86 = v47;
  if ( *(_DWORD *)(v36 + 8) )
  {
    do
    {
      v48 = v38++;
      qword_1403D15E8[v48] &= ~*(_QWORD *)(*(_QWORD *)v36 + 8 * v48);
    }
    while ( v38 < *(_DWORD *)(v36 + 8) );
    v34 = PnprContext;
  }
  v49 = *(_QWORD *)(v34 + 16);
  *(_QWORD *)(v34 + 200) = 1LL;
  if ( *(_DWORD *)(v49 + 16) )
  {
    v50 = PnprGetMillisecondCounter(0);
    v51 = PnprContext;
    *(_DWORD *)(PnprContext + 10764) = v50;
    v53 = off_140321848((PVOID)1, *(_QWORD *)(v51 + 10632), v52);
    v54 = PnprGetMillisecondCounter(0);
    v34 = PnprContext;
    *(_DWORD *)(PnprContext + 10768) = v54;
    if ( v53 < 0 )
    {
      v55 = *(_DWORD *)(v34 + 10744);
      if ( !v55 )
        v55 = 2513;
      *(_DWORD *)(v34 + 10744) = v55;
      v56 = *(_DWORD *)(v34 + 10748);
      if ( !v56 )
        v56 = 1;
      *(_DWORD *)(v34 + 10748) = v56;
      *(_OWORD *)KeActiveProcessors = v76;
      v57 = v78;
      *(_OWORD *)(0x140000000LL + 4003312) = v77;
      v58 = v79;
      *(_OWORD *)(0x140000000LL + 4003328) = v57;
      v59 = v80;
      *(_OWORD *)(0x140000000LL + 4003344) = v58;
      v60 = v81;
      *(_OWORD *)(0x140000000LL + 4003360) = v59;
      v61 = v82;
      *(_OWORD *)(0x140000000LL + 4003376) = v60;
      v62 = v83;
      *(_OWORD *)(0x140000000LL + 4003392) = v61;
      v28 = &KeActiveProcessors[32];
      v29 = v84;
      *(_OWORD *)&KeActiveProcessors[28] = v62;
      v30 = v85;
      result = v86;
      goto LABEL_18;
    }
  }
  *(_OWORD *)KeActiveProcessors = v76;
  v63 = v78;
  *(_OWORD *)(0x140000000LL + 4003312) = v77;
  v64 = v79;
  *(_OWORD *)(0x140000000LL + 4003328) = v63;
  v65 = v80;
  *(_OWORD *)(0x140000000LL + 4003344) = v64;
  v66 = v81;
  *(_OWORD *)(0x140000000LL + 4003360) = v65;
  v67 = v82;
  *(_OWORD *)(0x140000000LL + 4003376) = v66;
  v68 = v83;
  *(_OWORD *)(0x140000000LL + 4003392) = v67;
  v69 = v84;
  *(_OWORD *)(0x140000000LL + 4003408) = v68;
  v70 = v85;
  v71 = v86;
  *(_OWORD *)(0x140000000LL + 4003424) = v69;
  *(_OWORD *)(0x140000010LL + 4003424) = v70;
  *(_QWORD *)(0x140000020LL + 4003424) = v71;
  for ( i = *(_DWORD *)(v34 + 204); ; i = *(_DWORD *)(PnprContext + 204) )
  {
    result = PnprContext;
    if ( i >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
