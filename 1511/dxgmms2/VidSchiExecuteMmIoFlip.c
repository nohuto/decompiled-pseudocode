/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C00031E0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0001F84 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11@Z @ 0x1C00030C4 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C0016730 (VidMmFreeDeferredDmaBufferMapping.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pqqpxqqqq @ 0x1C002004C (Template_pqqpxqqqq.c)
 *     Template_pqqxpxqqqdddddddddddd @ 0x1C0020368 (Template_pqqxpxqqqdddddddddddd.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, _BYTE *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // rbx
  bool v9; // zf
  int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned int v15; // r12d
  unsigned int v16; // r8d
  int v17; // eax
  char v18; // dl
  int v19; // eax
  char v20; // dl
  unsigned int v21; // r13d
  __int64 v22; // rdi
  char v23; // r9
  int v24; // ecx
  unsigned int v25; // r10d
  unsigned __int64 v26; // r8
  int v27; // ecx
  unsigned int v28; // eax
  char v29; // dl
  int v30; // eax
  char v31; // dl
  unsigned int v32; // r8d
  char v33; // r12
  int v34; // r13d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rcx
  int *v40; // rdx
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rcx
  int *v44; // rdx
  int v45; // eax
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  __int64 v51; // r12
  __int64 v52; // r8
  __int64 v53; // rcx
  int *v54; // rdx
  __int64 v55; // r9
  int v56; // eax
  unsigned int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rcx
  _DWORD *v63; // rdi
  __int64 v64; // r15
  __int64 v65; // r15
  char v66; // al
  int v67; // edx
  _DWORD *v68; // rax
  __int64 v69; // r13
  __int64 v70; // r12
  CRefCountedBuffer *v71; // rcx
  unsigned int v72; // r8d
  unsigned __int64 v73; // r9
  _QWORD *v74; // rcx
  int v75; // r13d
  int v76; // eax
  int v77; // edx
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  int v83; // r15d
  struct _D3DKMT_PRESENTHISTORYTOKEN *v84; // rax
  __int64 v85; // r13
  KSPIN_LOCK *v86; // rcx
  __int64 v87; // r12
  char v88; // r15
  CRefCountedBuffer *v89; // rcx
  int v90; // edi
  __int64 v91; // rcx
  char v92; // al
  __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 v95; // r8
  REGHANDLE EtwHandle; // rax
  int v97; // eax
  _QWORD *v98; // rax
  void *v99; // rcx
  _BYTE v100[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v101; // [rsp+C4h] [rbp-7Ch]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v102; // [rsp+C8h] [rbp-78h]
  unsigned int v103; // [rsp+D0h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+D8h] [rbp-68h]
  int v105; // [rsp+E0h] [rbp-60h]
  __int64 v106; // [rsp+E8h] [rbp-58h]
  __int64 v107; // [rsp+F0h] [rbp-50h]
  unsigned int v108; // [rsp+F8h] [rbp-48h]
  int v109; // [rsp+FCh] [rbp-44h]
  int v110; // [rsp+100h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+120h] [rbp-20h] BYREF
  _QWORD v113[269]; // [rsp+140h] [rbp+0h] BYREF
  char v114; // [rsp+9F0h] [rbp+8B0h] BYREF
  unsigned int v115; // [rsp+9F8h] [rbp+8B8h]
  unsigned int v116; // [rsp+A00h] [rbp+8C0h]
  unsigned int v117; // [rsp+A08h] [rbp+8C8h]

  v117 = a4;
  v116 = a3;
  v115 = a2;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 8LL * a2 + 2592);
  v106 = v7;
  v107 = *(_QWORD *)(v7 + 8LL * a3 + 24);
  v8 = v107 + 1160LL * a4;
  if ( *(_DWORD *)(v7 + 4) == 3 || (v9 = (*(_DWORD *)(v8 + 1164) & 0x100) == 0, v101 = 0, !v9) )
    v101 = 1;
  memset(v113, 0, 2136);
  if ( (*(_BYTE *)(v8 + 1164) & 0x10) != 0 )
    v10 = (unsigned __int8)**(_DWORD **)(v8 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v8 + 1208) + 1LL);
  else
    v10 = (1 << *(_DWORD *)(a1 + 124)) - 1;
  if ( (v10 & *(_DWORD *)(v7 + 2340)) != 0 )
    return 259LL;
  if ( *(_DWORD *)(a1 + 2440) )
    goto LABEL_89;
  v11 = 0;
  if ( *(_DWORD *)(v8 + 1128) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v8 + 8LL * v11 + 56) + 104LL);
      if ( *(_BYTE *)(v12 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 168), 0, 0) )
        break;
      if ( ++v11 >= *(_DWORD *)(v8 + 1128) )
        goto LABEL_13;
    }
LABEL_89:
    *a5 = 1;
    goto LABEL_90;
  }
LABEL_13:
  if ( (*(_DWORD *)(v8 + 1164) & 0x10) != 0 )
  {
    memset(v113, 0, 0x858uLL);
    v13 = *(_QWORD *)(v8 + 1208);
    v14 = 0LL;
    LODWORD(SpinLock) = 0;
    v15 = *(unsigned __int8 *)(v13 + 1);
    v16 = (unsigned __int8)*(_DWORD *)v13;
    v9 = !_BitScanForward((unsigned int *)&v17, v16);
    v103 = v16;
    v109 = v17;
    v18 = -1;
    if ( !v9 )
      v18 = v17;
    LODWORD(v102) = v18;
    v9 = !_BitScanForward((unsigned int *)&v19, v15);
    v105 = v19;
    v20 = -1;
    if ( !v9 )
      v20 = v19;
    v21 = v20;
    while ( v16 || v15 )
    {
      v22 = a1 + 120LL * (unsigned int)v14;
      memset((void *)(v22 + 2720), 0, 0x78uLL);
      v23 = (char)v102;
      if ( (unsigned int)v102 >= v21 )
      {
        v16 = v103;
        *(_DWORD *)(v22 + 2720) = v21;
        *(_DWORD *)(v22 + 2724) = 0;
        v15 &= ~(1 << v21);
        v9 = !_BitScanForward((unsigned int *)&v30, v15);
        v110 = v30;
        v31 = -1;
        if ( !v9 )
          v31 = v30;
        v14 = (unsigned int)(v14 + 1);
        v21 = v31;
      }
      else
      {
        v24 = *(_DWORD *)(v22 + 2752);
        v25 = (unsigned int)SpinLock;
        *(_DWORD *)(v22 + 2720) = (_DWORD)v102;
        *(_DWORD *)(v22 + 2724) = 1;
        v26 = *(_QWORD *)(v8 + 1208) + ((unsigned __int64)v25 << 6);
        LODWORD(SpinLock) = v25 + 1;
        *(_DWORD *)(v22 + 2728) = (*(_DWORD *)(v26 + 68) >> 17) & 0x1F;
        *(_QWORD *)(v22 + 2736) = *(_QWORD *)(v26 + 32);
        *(_QWORD *)(v22 + 2744) = *(_QWORD *)(v26 + 24);
        *(_DWORD *)(v22 + 2752) ^= (*(_DWORD *)(v26 + 68) ^ v24) & 1;
        *(_DWORD *)(v22 + 2752) ^= (*(_DWORD *)(v26 + 68) ^ *(_DWORD *)(v22 + 2752)) & 2;
        *(_DWORD *)(v22 + 2756) = (unsigned __int16)*(_DWORD *)(v26 + 40);
        *(_DWORD *)(120 * ((unsigned int)v14 + 23LL) + a1) = (unsigned __int16)*(_DWORD *)(v26 + 44);
        *(_DWORD *)(v22 + 2764) = *(unsigned __int16 *)(v26 + 42);
        *(_DWORD *)(v22 + 2768) = *(unsigned __int16 *)(v26 + 46);
        *(_DWORD *)(v22 + 2772) = *(__int16 *)(v26 + 48);
        *(_DWORD *)(v22 + 2776) = *(__int16 *)(v26 + 52);
        *(_DWORD *)(v22 + 2780) = *(unsigned __int16 *)(v26 + 50);
        *(_DWORD *)(v22 + 2784) = *(unsigned __int16 *)(v26 + 54);
        *(_DWORD *)(v22 + 2788) = (unsigned __int16)*(_DWORD *)(v26 + 56);
        *(_DWORD *)(v22 + 2792) = (unsigned __int16)*(_DWORD *)(v26 + 60);
        *(_DWORD *)(v22 + 2796) = *(unsigned __int16 *)(v26 + 58);
        *(_DWORD *)(v22 + 2800) = *(unsigned __int16 *)(v26 + 62);
        *(_DWORD *)(v22 + 2804) = ((*(_DWORD *)(v26 + 68) >> 3) & 3) + 1;
        *(_DWORD *)(v22 + 2808) ^= (*(_DWORD *)(v22 + 2808) ^ (*(_DWORD *)(v26 + 68) >> 2)) & 1;
        *(_DWORD *)(v22 + 2812) = (*(_DWORD *)(v26 + 68) >> 5) & 3;
        *(_DWORD *)(v22 + 2816) ^= (*(_DWORD *)(v22 + 2816) ^ (*(_DWORD *)(v26 + 68) >> 7)) & 1;
        v27 = *(_DWORD *)(v22 + 2816) ^ ((unsigned __int8)*(_DWORD *)(v22 + 2816) ^ (unsigned __int8)(*(_DWORD *)(v26 + 68) >> 7)) & 2;
        *(_DWORD *)(v22 + 2816) = v27;
        *(_DWORD *)(v22 + 2816) = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(*(_DWORD *)(v26 + 68) >> 7)) & 4;
        *(_DWORD *)(v22 + 2820) = (*(_DWORD *)(v26 + 68) >> 10) & 7;
        *(_DWORD *)(v22 + 2824) = (*(_DWORD *)(v26 + 68) >> 13) & 1;
        *(_DWORD *)(v22 + 2828) = (*(_DWORD *)(v26 + 68) >> 14) & 1;
        v28 = *(_DWORD *)(v26 + 68);
        LODWORD(v26) = v103;
        *(_DWORD *)(v22 + 2832) = (v28 >> 15) & 3;
        v16 = ~(1 << v23) & v26;
        v9 = !_BitScanForward(&v28, v16);
        v103 = v16;
        v108 = v28;
        v29 = -1;
        if ( !v9 )
          v29 = v28;
        v14 = (unsigned int)(v14 + 1);
        LODWORD(v102) = v29;
      }
    }
    v32 = 0;
    v33 = v115;
    LODWORD(v113[67]) |= 4u;
    v113[0] = a1;
    HIDWORD(v113[67]) = v115;
    LODWORD(v113[67]) ^= (LOBYTE(v113[67]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 8;
    LODWORD(v113[67]) ^= (LOBYTE(v113[67]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 0x10;
    LODWORD(v113[67]) ^= (LOBYTE(v113[67]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 0x20;
    LODWORD(v113[70]) = *(_DWORD *)(v8 + 1168);
    LODWORD(v113[265]) = -1073741823;
    v34 = *(_DWORD *)(v8 + 1124);
    LODWORD(v113[1]) = v34;
    if ( *(_DWORD *)(v8 + 1124) )
    {
      do
      {
        v35 = v32++;
        v113[v35 + 2] = *(_QWORD *)(*(_QWORD *)(8 * v35 + v8 + 56) + 64LL);
      }
      while ( v32 < *(_DWORD *)(v8 + 1124) );
      v34 = v113[1];
    }
    v36 = *(_QWORD *)(a1 + 16);
    v114 = 0;
    if ( *(_BYTE *)(v36 + 1918) )
    {
      v37 = (unsigned int)v14;
      v38 = a1 + 3680;
      memset((void *)(a1 + 3680), 0, 112LL * (unsigned int)v14);
      if ( (_DWORD)v14 )
      {
        v39 = a1 + 3684;
        v40 = (int *)(a1 + 2724);
        do
        {
          *(_DWORD *)(v39 - 4) = *(v40 - 1);
          v41 = *v40;
          *(_DWORD *)v39 = *v40;
          if ( v41 )
          {
            *(_DWORD *)(v39 + 4) = v40[1];
            *(_QWORD *)(v39 + 12) = *(_QWORD *)(v40 + 3);
            *(_QWORD *)(v39 + 20) = *(_QWORD *)(v40 + 5);
            *(_DWORD *)(v39 + 28) = v40[7];
            *(_OWORD *)(v39 + 32) = *((_OWORD *)v40 + 2);
            *(_OWORD *)(v39 + 48) = *((_OWORD *)v40 + 3);
            *(_DWORD *)(v39 + 64) = v40[20];
            *(_DWORD *)(v39 + 68) = v40[21];
            *(_DWORD *)(v39 + 72) = 0;
            *(_QWORD *)(v39 + 76) = 0LL;
            *(_DWORD *)(v39 + 84) = v40[22];
            *(_DWORD *)(v39 + 88) = v40[23];
            *(_DWORD *)(v39 + 92) = v40[24];
            *(_DWORD *)(v39 + 96) = v40[25];
            *(_DWORD *)(v39 + 100) = v40[26];
            *(_DWORD *)(v39 + 104) = v40[27];
          }
          v40 += 30;
          v39 += 112LL;
          --v37;
        }
        while ( v37 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v36 + 1919) )
      {
        if ( *(_BYTE *)(v36 + 1920) && *(_QWORD *)(v36 + 856) )
        {
          v51 = (unsigned int)v14;
          memset((void *)(a1 + 3680), 0, (unsigned __int64)(unsigned int)v14 << 7);
          if ( (_DWORD)v14 )
          {
            v52 = 0LL;
            v53 = a1 + 3684;
            v54 = (int *)(a1 + 2724);
            do
            {
              v55 = *(_QWORD *)(v8 + 1208);
              *(_DWORD *)(v53 - 4) = *(v54 - 1);
              v56 = *v54;
              *(_DWORD *)v53 = *v54;
              if ( v56 )
              {
                *(_DWORD *)(v53 + 4) = v54[1];
                *(_QWORD *)(v53 + 12) = *(_QWORD *)(v54 + 3);
                *(_QWORD *)(v53 + 20) = *(_QWORD *)(v54 + 5);
                *(_DWORD *)(v53 + 28) = v54[7];
                *(_OWORD *)(v53 + 32) = *((_OWORD *)v54 + 2);
                *(_OWORD *)(v53 + 48) = *((_OWORD *)v54 + 3);
                *(_OWORD *)(v53 + 64) = *((_OWORD *)v54 + 4);
                *(_DWORD *)(v53 + 80) = v54[20];
                *(_DWORD *)(v53 + 84) = v54[21];
                *(_DWORD *)(v53 + 88) = v54[22];
                *(_DWORD *)(v53 + 96) = v54[24];
                *(_DWORD *)(v53 + 100) = v54[25];
                *(_DWORD *)(v53 + 104) = v54[26];
                *(_DWORD *)(v53 + 108) = v54[27];
                *(_DWORD *)(v53 + 112) = v54[28];
                *(_DWORD *)(v53 + 116) = 0;
                *(_DWORD *)(v53 + 92) = *(_DWORD *)(v55 + v52 + 64);
              }
              v54 += 30;
              v52 += 64LL;
              v53 += 128LL;
              --v51;
            }
            while ( v51 );
          }
          v57 = 0;
          if ( v34 )
          {
            do
            {
              v58 = v57++;
              v113[v58 + 2] = v113[v58 + 2];
            }
            while ( v57 < LODWORD(v113[1]) );
          }
          v59 = *(unsigned int *)(a1 + 32);
          v60 = *(_QWORD *)(a1 + 24);
          v113[69] = a1 + 3680;
          LODWORD(v113[68]) = v14;
          DpSynchronizeExecution(v60, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2, v113, v59, &v114);
          v33 = v115;
        }
        else
        {
          v61 = *(unsigned int *)(a1 + 32);
          v62 = *(_QWORD *)(a1 + 24);
          v113[69] = a1 + 2720;
          LODWORD(v113[68]) = v14;
          DpSynchronizeExecution(v62, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR, v113, v61, &v114);
        }
        goto LABEL_56;
      }
      v38 = a1 + 3680;
      v42 = (unsigned int)v14;
      memset((void *)(a1 + 3680), 0, (unsigned __int64)(unsigned int)v14 << 7);
      if ( (_DWORD)v14 )
      {
        v43 = a1 + 3684;
        v44 = (int *)(a1 + 2724);
        do
        {
          *(_DWORD *)(v43 - 4) = *(v44 - 1);
          v45 = *v44;
          *(_DWORD *)v43 = *v44;
          if ( v45 )
          {
            *(_DWORD *)(v43 + 4) = v44[1];
            *(_QWORD *)(v43 + 12) = *(_QWORD *)(v44 + 3);
            *(_QWORD *)(v43 + 20) = *(_QWORD *)(v44 + 5);
            *(_DWORD *)(v43 + 28) = v44[7];
            *(_OWORD *)(v43 + 32) = *((_OWORD *)v44 + 2);
            *(_OWORD *)(v43 + 48) = *((_OWORD *)v44 + 3);
            *(_OWORD *)(v43 + 64) = *((_OWORD *)v44 + 4);
            *(_DWORD *)(v43 + 80) = v44[20];
            *(_DWORD *)(v43 + 84) = v44[21];
            *(_DWORD *)(v43 + 88) = 0;
            *(_QWORD *)(v43 + 92) = 0LL;
            *(_DWORD *)(v43 + 100) = v44[22];
            *(_DWORD *)(v43 + 104) = v44[23];
            *(_DWORD *)(v43 + 108) = v44[24];
            *(_DWORD *)(v43 + 112) = v44[25];
            *(_DWORD *)(v43 + 116) = v44[26];
            *(_DWORD *)(v43 + 120) = v44[27];
          }
          v44 += 30;
          v43 += 128LL;
          --v42;
        }
        while ( v42 );
      }
    }
    v46 = *(unsigned int *)(a1 + 32);
    v47 = *(_QWORD *)(a1 + 24);
    LODWORD(v113[68]) = v14;
    v113[69] = v38;
    DpSynchronizeExecution(v47, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR, v113, v46, &v114);
    v33 = v115;
LABEL_56:
    if ( bTracingEnabled && (_DWORD)v14 )
    {
      v63 = (_DWORD *)(a1 + 2792);
      LODWORD(v102) = v116;
      do
      {
        HIDWORD(v102) = *(_DWORD *)(v8 + 1096);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pqqxpxqqqdddddddddddd(
            v49,
            v48,
            v50,
            *(_QWORD *)(a1 + 16),
            v33,
            *(v63 - 18),
            (char)v102,
            *((_QWORD *)v63 - 6),
            *((_QWORD *)v63 - 7),
            *(v63 - 16),
            *(_DWORD *)(v8 + 1104),
            *(_DWORD *)(v8 + 1116),
            *(v63 - 9),
            *(v63 - 7),
            *(v63 - 8),
            *(v63 - 6),
            *(v63 - 5),
            *(v63 - 3),
            *(v63 - 4),
            *(v63 - 2),
            *(v63 - 1),
            v63[1],
            *v63,
            v63[2]);
        v63 += 30;
        --v14;
      }
      while ( v14 );
    }
    v64 = SLODWORD(v113[265]);
    if ( LODWORD(v113[265]) )
    {
      v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v98[6] = v113;
      v98[3] = 281LL;
      v98[4] = 11LL;
      v98[5] = v64;
      v98[7] = *(_QWORD *)(a1 + 16);
      WdLogEvent5_WdCriticalError(v98);
      VidMmFreeDeferredDmaBufferMapping(v99);
      JUMPOUT(0x1C0004072LL);
    }
    goto LABEL_90;
  }
  memset(v113, 0, 0x858uLL);
  v65 = *(_QWORD *)(v8 + 1208);
  v113[0] = a1;
  LODWORD(v113[1]) = v6;
  HIDWORD(v113[1]) = (*(_DWORD *)(v65 + 68) >> 17) & 0x1F;
  v113[2] = *(_QWORD *)(v65 + 32);
  v113[3] = *(_QWORD *)(v65 + 24);
  LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 8;
  LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 0x10;
  LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 0x20;
  HIDWORD(v113[70]) = *(_DWORD *)(v8 + 1168);
  LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v8 + 1164))) & 0x40;
  v66 = LOBYTE(v113[70]) ^ (4 * *(_DWORD *)(v8 + 1164));
  LODWORD(v113[265]) = -1073741823;
  v67 = v66 & 0x80 ^ LODWORD(v113[70]);
  LODWORD(v113[70]) = v67;
  v68 = *(_DWORD **)(v8 + 1192);
  if ( v68 )
  {
    LODWORD(v113[263]) = *v68;
    v113[264] = *(_QWORD *)(v8 + 1192) + 8LL;
  }
  v69 = *(_QWORD *)(v8 + 1200);
  if ( v69 )
  {
    v70 = *(_QWORD *)(v8 + 1192);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v69 + 16), &LockHandle);
    v71 = *(CRefCountedBuffer **)(v69 + 8);
    if ( v71 )
      CRefCountedBuffer::RefCountedBufferRelease(v71);
    *(_QWORD *)(v69 + 8) = v70;
    _InterlockedIncrement((volatile signed __int32 *)(v70 + 4));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v67 = v113[70];
    v6 = v115;
  }
  v72 = 0;
  LODWORD(v113[4]) = *(_DWORD *)(v8 + 1124);
  if ( *(_DWORD *)(v8 + 1124) )
  {
    do
    {
      v73 = *(_QWORD *)(v8 + 1208) + ((unsigned __int64)(v72 * *(_DWORD *)(*(_QWORD *)(v8 + 1208) + 4LL)) << 6);
      v113[v72 + 5] = *(_QWORD *)(v73 + 72);
      if ( v72 )
      {
        v74 = &v113[3 * v72 + 68];
        *v74 = *(_QWORD *)(v73 + 24);
        *((_WORD *)v74 + 4) = (*(_DWORD *)(v73 + 68) >> 17) & 0x1F;
        v74[2] = *(_QWORD *)(v73 + 32);
      }
      ++v72;
    }
    while ( v72 < *(_DWORD *)(v8 + 1124) );
    v67 = v113[70];
  }
  v75 = v101;
  v76 = v67 | 2;
  v77 = v67 | 4;
  if ( v101 )
    v77 = v76;
  LODWORD(v113[70]) = v77;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqqpxqqqq(
      (*(_DWORD *)(v65 + 68) >> 17) & 0x1F,
      v77,
      v72,
      *(_QWORD *)(a1 + 16),
      v6,
      *(_DWORD *)(v8 + 1096),
      *(_QWORD *)(v65 + 24),
      *(_QWORD *)(v65 + 32),
      (*(_DWORD *)(v65 + 68) >> 17) & 0x1F,
      *(_DWORD *)(v8 + 1104),
      *(_DWORD *)(v8 + 1116),
      v77);
  v78 = *(unsigned int *)(a1 + 32);
  v79 = *(_QWORD *)(a1 + 24);
  v100[0] = 0;
  DpSynchronizeExecution(v79, VidSchiExecuteMmIoFlipAtISR, v113, v78, v100);
  if ( SLODWORD(v113[265]) < 0 && !v75 )
  {
    if ( LODWORD(v113[265]) != -1073741811 )
      return 259LL;
    if ( (*(_DWORD *)(v8 + 1164) & 0x10) != 0 || (v113[70] & 0x40) == 0 )
    {
      v80 = WdLogNewEntry5_WdAssertion();
    }
    else
    {
      v80 = WdLogNewEntry5_WdAssertion();
      v81 = *(_QWORD *)(*(_QWORD *)(v8 + 1208) + 24LL);
      *(_QWORD *)(v80 + 32) = v6;
      *(_QWORD *)(v80 + 24) = v81;
    }
    WdLogEvent5_WdAssertion(v80);
    return 3221225485LL;
  }
LABEL_90:
  v83 = *(_DWORD *)(v8 + 1164);
  if ( (v83 & 0x20) != 0 )
  {
    v84 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + 1184);
    v102 = v84;
    if ( v84 )
    {
      v85 = *(_QWORD *)(v8 + 1200);
      v86 = *(KSPIN_LOCK **)(v8 + 1176);
      v87 = *(_QWORD *)(v8 + 1192);
      v88 = (v83 & 0x40) != 0;
      SpinLock = v86;
      if ( v85 && v87 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v85 + 16), &v112);
        v89 = *(CRefCountedBuffer **)(v85 + 8);
        if ( v89 )
          CRefCountedBuffer::RefCountedBufferRelease(v89);
        *(_QWORD *)(v85 + 8) = v87;
        _InterlockedIncrement((volatile signed __int32 *)(v87 + 4));
        KeReleaseInStackQueuedSpinLock(&v112);
        v84 = v102;
        v86 = SpinLock;
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(v86, v84, 1, v88, 0);
    }
  }
  if ( v101 )
  {
    *(_DWORD *)(v8 + 1100) = 11;
    *(_DWORD *)(v8 + 1160) = HIDWORD(v113[265]);
    *(_QWORD *)(v8 + 1144) = v113[266];
  }
  else
  {
    v9 = (*(_BYTE *)(v8 + 1164) & 0x10) == 0;
    *(_DWORD *)(v8 + 1100) = 5;
    if ( v9 )
      v90 = (1 << *(_DWORD *)(a1 + 124)) - 1;
    else
      v90 = (unsigned __int8)**(_DWORD **)(v8 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v8 + 1208) + 1LL);
    *(_DWORD *)(v106 + 2340) |= v90;
  }
  v91 = v107;
  *(_QWORD *)(v8 + 1136) = MEMORY[0xFFFFF78000000320];
  v92 = v117;
  *(_DWORD *)(v91 + 44) = v117;
  *(_DWORD *)(v91 + 40) = (v92 + 1) & 0x3F;
  v93 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
  if ( *(_QWORD *)(v93 + 7792) <= (unsigned __int64)qword_1C002F278 )
  {
    v97 = *(_DWORD *)(v93 + 7800);
    if ( v97 )
      *(_DWORD *)(v93 + 7800) = v97 - 1;
  }
  else
  {
    *(_DWORD *)(v93 + 7800) += dword_1C002F284;
    if ( *(_DWORD *)(v93 + 7800) > (unsigned int)dword_1C002F280
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v93 + 7808) > (unsigned __int64)qword_1C002F288 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v9 = bTracingEnabled == 0;
      *(_QWORD *)(v93 + 7808) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v93 + 7800) = 0;
      if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        Template_q(v94, &EventPerformanceWarning, v95, 5LL);
        _InterlockedExchange64((volatile __int64 *)(v93 + 7792), 0LL);
        return 0LL;
      }
    }
  }
  _InterlockedExchange64((volatile __int64 *)(v93 + 7792), 0LL);
  return 0LL;
}
