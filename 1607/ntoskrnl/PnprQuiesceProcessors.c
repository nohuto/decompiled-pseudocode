/*
 * XREFs of PnprQuiesceProcessors @ 0x1403DC8B8
 * Callers:
 *     PnprQuiesce @ 0x1401D0400 (PnprQuiesce.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeSuspendClockTimerSafe @ 0x1401D231C (KeSuspendClockTimerSafe.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403D6AF0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PnprGetMillisecondCounter @ 0x1403DBA40 (PnprGetMillisecondCounter.c)
 */

SIZE_T PnprQuiesceProcessors()
{
  void *v0; // rbx
  __int128 v1; // xmm1
  SIZE_T v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  void *v10; // rcx
  void *v11; // r8
  SIZE_T v12; // rdx
  SIZE_T v13; // rcx
  int v14; // eax
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  SIZE_T result; // rax
  unsigned int MillisecondCounter; // eax
  SIZE_T v26; // rcx
  SIZE_T v27; // rdx
  int v28; // eax
  SIZE_T v29; // rax
  __int128 v30; // xmm1
  unsigned int v31; // r8d
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  SIZE_T v44; // rdx
  PVOID v45; // r8
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  SIZE_T v58; // rax
  int i; // edx
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v62[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v63; // [rsp+40h] [rbp-C8h]
  struct _KDPC Dpc; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+88h] [rbp-80h] BYREF
  __int128 v66; // [rsp+98h] [rbp-70h]
  __int128 v67; // [rsp+A8h] [rbp-60h]
  __int128 v68; // [rsp+B8h] [rbp-50h]
  __int128 v69; // [rsp+C8h] [rbp-40h]
  __int128 v70; // [rsp+D8h] [rbp-30h]
  __int128 v71; // [rsp+E8h] [rbp-20h]
  __int128 v72; // [rsp+F8h] [rbp-10h]
  __int128 v73; // [rsp+108h] [rbp+0h]
  __int128 v74; // [rsp+118h] [rbp+10h]
  SIZE_T v75; // [rsp+128h] [rbp+20h]

  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  __writecr8(2uLL);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  Dpc.Importance = 2;
  v1 = *(_OWORD *)&KeActiveProcessors[4];
  v2 = *(_QWORD *)&KeActiveProcessors[40];
  v65 = *(_OWORD *)KeActiveProcessors;
  v3 = *(_OWORD *)&KeActiveProcessors[8];
  v66 = v1;
  v4 = *(_OWORD *)&KeActiveProcessors[12];
  v67 = v3;
  v5 = *(_OWORD *)&KeActiveProcessors[16];
  v68 = v4;
  v6 = *(_OWORD *)&KeActiveProcessors[20];
  v69 = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[24];
  v70 = v6;
  v8 = *(_OWORD *)&KeActiveProcessors[32];
  v71 = v7;
  v72 = *(_OWORD *)&KeActiveProcessors[28];
  v9 = *(_OWORD *)&KeActiveProcessors[36];
  v73 = v8;
  v74 = v9;
  v75 = v2;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)&v65, *(_DWORD *)(PnprContext + 180));
  v62[1] = *((unsigned __int16 **)&v65 + 1);
  v62[0] = (unsigned __int16 *)&v65;
  v63 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v62) )
  {
    if ( !Dpc.DpcData )
      Dpc.Number = DeferredContext_4 + 640;
    DeferredContext = 0;
    KeInsertQueueDpc(&Dpc, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v12 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( off_1402F23E8(v10, PnprContext, v11) < 0 )
    {
      v13 = PnprContext;
      v14 = *(_DWORD *)(PnprContext + 10744);
      if ( !v14 )
        v14 = 2430;
      *(_DWORD *)(PnprContext + 10744) = v14;
      v15 = *(_DWORD *)(v13 + 10748);
      if ( !v15 )
        v15 = 1;
      *(_DWORD *)(v13 + 10748) = v15;
LABEL_15:
      *(_OWORD *)KeActiveProcessors = v65;
      v16 = v67;
      *(_OWORD *)&KeActiveProcessors[4] = v66;
      v17 = v68;
      *(_OWORD *)&KeActiveProcessors[8] = v16;
      v18 = v69;
      *(_OWORD *)&KeActiveProcessors[12] = v17;
      v19 = v70;
      *(_OWORD *)&KeActiveProcessors[16] = v18;
      v20 = v71;
      *(_OWORD *)&KeActiveProcessors[20] = v19;
      v21 = v72;
      *(_OWORD *)&KeActiveProcessors[24] = v20;
      v22 = v73;
      *(_OWORD *)&KeActiveProcessors[28] = v21;
      v23 = v74;
      result = v75;
      *(_OWORD *)&KeActiveProcessors[32] = v22;
      *(_OWORD *)&KeActiveProcessors[36] = v23;
      *(_QWORD *)&KeActiveProcessors[40] = result;
      return result;
    }
    v12 = PnprContext;
  }
  off_1402F2398(0LL, *(_QWORD *)(v12 + 10632), v11);
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v26 = PnprContext;
  *(_QWORD *)(PnprContext + 10752) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v26 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
    _mm_pause();
  v27 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
      _mm_pause();
    LOBYTE(v27) = 1;
    (*(void (__fastcall **)(_QWORD, SIZE_T))(PnprContext + 10736))(*(_QWORD *)(PnprContext + 10640), v27);
    v28 = PnprGetMillisecondCounter(0);
    v27 = PnprContext;
    *(_DWORD *)(PnprContext + 10760) = v28;
  }
  v29 = *(_QWORD *)&KeActiveProcessors[40];
  v30 = *(_OWORD *)&KeActiveProcessors[4];
  v31 = 0;
  v65 = *(_OWORD *)KeActiveProcessors;
  v32 = *(_OWORD *)&KeActiveProcessors[8];
  v66 = v30;
  v33 = *(_OWORD *)&KeActiveProcessors[12];
  v67 = v32;
  v34 = *(_OWORD *)&KeActiveProcessors[16];
  v68 = v33;
  v35 = *(_OWORD *)&KeActiveProcessors[20];
  v69 = v34;
  v36 = *(_OWORD *)&KeActiveProcessors[24];
  v70 = v35;
  v37 = *(_OWORD *)&KeActiveProcessors[28];
  v71 = v36;
  v38 = *(_OWORD *)&KeActiveProcessors[32];
  v72 = v37;
  v39 = *(_OWORD *)&KeActiveProcessors[36];
  v73 = v38;
  v74 = v39;
  v75 = v29;
  v40 = *(_QWORD *)(v27 + 16);
  if ( *(_DWORD *)(v40 + 8) )
  {
    do
    {
      v41 = v31++;
      *(_QWORD *)&KeActiveProcessors[2 * v41 + 2] &= ~*(_QWORD *)(*(_QWORD *)v40 + 8 * v41);
    }
    while ( v31 < *(_DWORD *)(v40 + 8) );
    v27 = PnprContext;
  }
  v42 = *(_QWORD *)(v27 + 16);
  *(_QWORD *)(v27 + 200) = 1LL;
  if ( *(_DWORD *)(v42 + 16) )
  {
    v43 = PnprGetMillisecondCounter(0);
    v44 = PnprContext;
    *(_DWORD *)(PnprContext + 10764) = v43;
    v46 = off_1402F2398((PVOID)1, *(_QWORD *)(v44 + 10632), v45);
    v47 = PnprGetMillisecondCounter(0);
    v27 = PnprContext;
    *(_DWORD *)(PnprContext + 10768) = v47;
    if ( v46 < 0 )
    {
      v48 = *(_DWORD *)(v27 + 10744);
      if ( !v48 )
        v48 = 2515;
      *(_DWORD *)(v27 + 10744) = v48;
      v49 = *(_DWORD *)(v27 + 10748);
      if ( !v49 )
        v49 = 1;
      *(_DWORD *)(v27 + 10748) = v49;
      goto LABEL_15;
    }
  }
  *(_OWORD *)KeActiveProcessors = v65;
  v50 = v67;
  *(_OWORD *)&KeActiveProcessors[4] = v66;
  v51 = v68;
  *(_OWORD *)&KeActiveProcessors[8] = v50;
  v52 = v69;
  *(_OWORD *)&KeActiveProcessors[12] = v51;
  v53 = v70;
  *(_OWORD *)&KeActiveProcessors[16] = v52;
  v54 = v71;
  *(_OWORD *)&KeActiveProcessors[20] = v53;
  v55 = v72;
  *(_OWORD *)&KeActiveProcessors[24] = v54;
  v56 = v73;
  *(_OWORD *)&KeActiveProcessors[28] = v55;
  v57 = v74;
  v58 = v75;
  *(_OWORD *)&KeActiveProcessors[32] = v56;
  *(_OWORD *)&KeActiveProcessors[36] = v57;
  *(_QWORD *)&KeActiveProcessors[40] = v58;
  for ( i = *(_DWORD *)(v27 + 204); ; i = *(_DWORD *)(PnprContext + 204) )
  {
    result = PnprContext;
    if ( i >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
