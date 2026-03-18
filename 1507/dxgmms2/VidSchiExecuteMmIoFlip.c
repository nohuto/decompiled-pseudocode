/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C0016460
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00016F8 (VidSchiPropagatePresentHistoryToken.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000DFB4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000F108 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     Template_pqqpxqqqq @ 0x1C00145DC (Template_pqqpxqqqq.c)
 *     Template_pqqxpxqqqdddddddddddd @ 0x1C00148F8 (Template_pqqxpxqqqdddddddddddd.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, _BYTE *a5)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  bool v11; // zf
  int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned int v17; // esi
  unsigned int v18; // r8d
  int v19; // eax
  char v20; // dl
  char v21; // dl
  int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // r15
  char v25; // r9
  unsigned int v26; // r10d
  int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // eax
  char v32; // dl
  int v33; // eax
  char v34; // dl
  unsigned int v35; // r8d
  int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rcx
  int *v42; // rdx
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rcx
  int *v46; // rdx
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // r8
  __int64 v50; // rcx
  int *v51; // rdx
  __int64 v52; // r9
  int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rcx
  unsigned __int8 (__fastcall *v56)(_DWORD *); // rdx
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  _DWORD *v62; // rsi
  char v63; // r13
  __int64 v64; // rsi
  _QWORD *v65; // rax
  __int64 v66; // rsi
  int v67; // eax
  int v68; // edx
  _DWORD *v69; // rax
  __int64 v70; // r14
  __int64 v71; // r12
  CRefCountedBuffer *v72; // rcx
  unsigned int v73; // r10d
  __int64 v74; // r9
  __int64 v75; // r8
  __int64 v76; // rdx
  int v77; // r14d
  __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v86; // rdx
  int v87; // edx
  __int64 v88; // rcx
  unsigned int v89; // [rsp+48h] [rbp-100h]
  _BYTE v90[4]; // [rsp+C8h] [rbp-80h] BYREF
  int v91; // [rsp+CCh] [rbp-7Ch]
  __int64 v92; // [rsp+D0h] [rbp-78h]
  unsigned int v93; // [rsp+D8h] [rbp-70h]
  unsigned int v94; // [rsp+DCh] [rbp-6Ch]
  __int64 v95; // [rsp+E0h] [rbp-68h]
  __int64 v96; // [rsp+E8h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v98[276]; // [rsp+108h] [rbp-40h] BYREF
  char v99; // [rsp+9B8h] [rbp+870h] BYREF
  int v100; // [rsp+9C0h] [rbp+878h]
  unsigned int v101; // [rsp+9C8h] [rbp+880h]
  unsigned int v102; // [rsp+9D0h] [rbp+888h]

  v102 = a4;
  v101 = a3;
  v100 = a2;
  v7 = a4;
  v8 = *(_QWORD *)(a1 + 8LL * a2 + 2640);
  v9 = a2;
  v92 = a2;
  v95 = v8;
  v10 = *(_QWORD *)(v8 + 8LL * a3 + 16) + 1144LL * a4;
  v96 = *(_QWORD *)(v8 + 8LL * a3 + 16);
  if ( *(_DWORD *)(v8 + 4) == 3 || (v11 = (*(_DWORD *)(v10 + 1148) & 0x100) == 0, v91 = 0, !v11) )
    v91 = 1;
  memset(v98, 0, 2136);
  if ( (*(_BYTE *)(v10 + 1148) & 0x10) != 0 )
    v12 = (unsigned __int8)**(_DWORD **)(v10 + 1192) | *(unsigned __int8 *)(*(_QWORD *)(v10 + 1192) + 1LL);
  else
    v12 = (1 << *(_DWORD *)(a1 + 124)) - 1;
  if ( (v12 & *(_DWORD *)(v8 + 2332)) != 0 )
    return 259LL;
  if ( *(_DWORD *)(a1 + 2480) )
  {
LABEL_92:
    v77 = v91;
    *a5 = 1;
    goto LABEL_95;
  }
  v13 = 0;
  if ( *(_DWORD *)(v10 + 1124) )
  {
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * v13 + 56) + 104LL);
      if ( *(_BYTE *)(v14 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 168), 0, 0) )
        goto LABEL_92;
    }
    while ( ++v13 < *(_DWORD *)(v10 + 1124) );
  }
  if ( (*(_DWORD *)(v10 + 1148) & 0x10) == 0 )
  {
    memset(v98, 0, 0x858uLL);
    v66 = *(_QWORD *)(v10 + 1192);
    LODWORD(v98[1]) = a2;
    v98[0] = a1;
    HIDWORD(v98[1]) = (*(_DWORD *)(v66 + 68) >> 17) & 0x1F;
    v98[2] = *(_QWORD *)(v66 + 32);
    v98[3] = *(_QWORD *)(v66 + 24);
    LODWORD(v98[70]) ^= (LOBYTE(v98[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 8;
    LODWORD(v98[70]) ^= (LOBYTE(v98[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 0x10;
    LODWORD(v98[70]) ^= (LOBYTE(v98[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 0x20;
    HIDWORD(v98[70]) = *(_DWORD *)(v10 + 1152);
    LODWORD(v98[70]) ^= (LOBYTE(v98[70]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 0x40;
    v67 = LODWORD(v98[70]) ^ (4 * *(_DWORD *)(v10 + 1148));
    LODWORD(v98[265]) = -1073741823;
    v68 = v67 & 0x80 ^ LODWORD(v98[70]);
    LODWORD(v98[70]) = v68;
    v69 = *(_DWORD **)(v10 + 1176);
    if ( v69 )
    {
      LODWORD(v98[263]) = *v69;
      v98[264] = *(_QWORD *)(v10 + 1176) + 8LL;
    }
    v70 = *(_QWORD *)(v10 + 1184);
    if ( v70 )
    {
      v71 = *(_QWORD *)(v10 + 1176);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v70 + 16), &LockHandle);
      v72 = *(CRefCountedBuffer **)(v70 + 8);
      if ( v72 )
        CRefCountedBuffer::RefCountedBufferRelease(v72);
      *(_QWORD *)(v70 + 8) = v71;
      _InterlockedIncrement((volatile signed __int32 *)(v71 + 4));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v68 = v98[70];
      v9 = v92;
    }
    v73 = 0;
    LODWORD(v98[4]) = *(_DWORD *)(v10 + 1120);
    if ( *(_DWORD *)(v10 + 1120) )
    {
      do
      {
        v98[v73 + 5] = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * v73 + 56) + 64LL);
        if ( v73 )
        {
          v74 = *(_QWORD *)(v10 + 1192);
          v75 = 56LL * v73 * *(_DWORD *)(v74 + 4);
          v76 = 3LL * (v73 - 1);
          v98[v76 + 71] = *(_QWORD *)(v75 + v74 + 24);
          LOWORD(v98[v76 + 72]) = (*(_DWORD *)(v75 + v74 + 68) >> 17) & 0x1F;
          v98[v76 + 73] = *(_QWORD *)(v75 + v74 + 32);
        }
        ++v73;
      }
      while ( v73 < *(_DWORD *)(v10 + 1120) );
      v68 = v98[70];
    }
    v77 = v91;
    if ( v91 )
      v78 = v68 | 2u;
    else
      v78 = v68 | 4u;
    LODWORD(v98[70]) = v78;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      v89 = (*(_DWORD *)(v66 + 68) >> 17) & 0x1F;
      Template_pqqpxqqqq(
        v89,
        v78,
        0LL,
        *(_QWORD *)(a1 + 16),
        v100,
        *(_DWORD *)(v10 + 1096),
        *(_QWORD *)(v66 + 24),
        *(_QWORD *)(v66 + 32),
        v89,
        *(_DWORD *)(v10 + 1104),
        *(_DWORD *)(v10 + 1116),
        v78);
    }
    v79 = *(unsigned int *)(a1 + 32);
    v80 = *(_QWORD *)(a1 + 24);
    v90[0] = 0;
    DpSynchronizeExecution(v80, VidSchiExecuteMmIoFlipAtISR, v98, v79, v90);
    if ( SLODWORD(v98[265]) >= 0 || v77 )
      goto LABEL_94;
    if ( LODWORD(v98[265]) == -1073741811 )
    {
      if ( (*(_DWORD *)(v10 + 1148) & 0x10) != 0 || (v98[70] & 0x40) == 0 )
      {
        v84 = WdLogNewEntry5_WdAssertion(v82, v81, v83, 0LL);
      }
      else
      {
        v84 = WdLogNewEntry5_WdAssertion(v82, v81, v83, 0LL);
        *(_QWORD *)(v84 + 24) = *(_QWORD *)(*(_QWORD *)(v10 + 1192) + 24LL);
        *(_QWORD *)(v84 + 32) = v9;
      }
      WdLogEvent5_WdAssertion(v84);
      return 3221225485LL;
    }
    return 259LL;
  }
  memset(v98, 0, 0x858uLL);
  v15 = *(_QWORD *)(v10 + 1192);
  v16 = 0LL;
  v94 = 0;
  v17 = *(unsigned __int8 *)(v15 + 1);
  v18 = (unsigned __int8)*(_DWORD *)v15;
  v11 = !_BitScanForward((unsigned int *)&v19, v18);
  v93 = v18;
  v20 = -1;
  if ( !v11 )
    v20 = v19;
  v22 = v20;
  v21 = -1;
  LODWORD(v92) = v22;
  v11 = !_BitScanForward((unsigned int *)&v22, v17);
  if ( !v11 )
    v21 = v22;
  v23 = v21;
  while ( v18 || v17 )
  {
    v24 = 120LL * (unsigned int)v16;
    memset((void *)(v24 + a1 + 2768), 0, 0x78uLL);
    v25 = v92;
    if ( (unsigned int)v92 >= v23 )
    {
      v18 = v93;
      *(_DWORD *)(v24 + a1 + 2768) = v23;
      *(_DWORD *)(v24 + a1 + 2772) = 0;
      v17 &= ~(1 << v23);
      v11 = !_BitScanForward((unsigned int *)&v33, v17);
      v34 = -1;
      if ( !v11 )
        v34 = v33;
      v23 = v34;
    }
    else
    {
      v26 = v94;
      v27 = *(_DWORD *)(v24 + a1 + 2800);
      v28 = 56LL * v94;
      *(_DWORD *)(v24 + a1 + 2768) = v92;
      *(_DWORD *)(v24 + a1 + 2772) = 1;
      v29 = *(_QWORD *)(v10 + 1192);
      v94 = v26 + 1;
      *(_DWORD *)(v24 + a1 + 2776) = (*(_DWORD *)(v28 + v29 + 68) >> 17) & 0x1F;
      *(_QWORD *)(v24 + a1 + 2784) = *(_QWORD *)(v28 + v29 + 32);
      *(_QWORD *)(v24 + a1 + 2792) = *(_QWORD *)(v28 + v29 + 24);
      *(_DWORD *)(v24 + a1 + 2800) ^= (*(_DWORD *)(v28 + v29 + 68) ^ v27) & 1;
      *(_DWORD *)(v24 + a1 + 2800) ^= (*(_DWORD *)(v28 + v29 + 68) ^ *(_DWORD *)(v24 + a1 + 2800)) & 2;
      *(_DWORD *)(v24 + a1 + 2804) = (unsigned __int16)*(_DWORD *)(v28 + v29 + 40);
      *(_DWORD *)(v24 + a1 + 2808) = (unsigned __int16)*(_DWORD *)(v28 + v29 + 44);
      *(_DWORD *)(v24 + a1 + 2812) = *(unsigned __int16 *)(v28 + v29 + 42);
      *(_DWORD *)(v24 + a1 + 2816) = *(unsigned __int16 *)(v28 + v29 + 46);
      *(_DWORD *)(v24 + a1 + 2820) = *(__int16 *)(v28 + v29 + 48);
      *(_DWORD *)(v24 + a1 + 2824) = *(__int16 *)(v28 + v29 + 52);
      *(_DWORD *)(v24 + a1 + 2828) = *(unsigned __int16 *)(v28 + v29 + 50);
      *(_DWORD *)(v24 + a1 + 2832) = *(unsigned __int16 *)(v28 + v29 + 54);
      *(_DWORD *)(v24 + a1 + 2836) = (unsigned __int16)*(_DWORD *)(v28 + v29 + 56);
      *(_DWORD *)(v24 + a1 + 2840) = (unsigned __int16)*(_DWORD *)(v28 + v29 + 60);
      *(_DWORD *)(v24 + a1 + 2844) = *(unsigned __int16 *)(v28 + v29 + 58);
      *(_DWORD *)(v24 + a1 + 2848) = *(unsigned __int16 *)(v28 + v29 + 62);
      *(_DWORD *)(v24 + a1 + 2852) = ((*(_DWORD *)(v28 + v29 + 68) >> 3) & 3) + 1;
      *(_DWORD *)(v24 + a1 + 2856) ^= (*(_DWORD *)(v24 + a1 + 2856) ^ (*(_DWORD *)(v28 + v29 + 68) >> 2)) & 1;
      *(_DWORD *)(v24 + a1 + 2860) = (*(_DWORD *)(v28 + v29 + 68) >> 5) & 3;
      *(_DWORD *)(v24 + a1 + 2864) ^= (*(_DWORD *)(v24 + a1 + 2864) ^ (*(_DWORD *)(v28 + v29 + 68) >> 7)) & 1;
      v30 = *(_DWORD *)(v24 + a1 + 2864) ^ ((unsigned __int8)*(_DWORD *)(v24 + a1 + 2864) ^ (unsigned __int8)(*(_DWORD *)(v28 + v29 + 68) >> 7)) & 2;
      *(_DWORD *)(v24 + a1 + 2864) = v30;
      *(_DWORD *)(v24 + a1 + 2864) = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(*(_DWORD *)(v28 + v29 + 68) >> 7)) & 4;
      *(_DWORD *)(v24 + a1 + 2868) = (*(_DWORD *)(v28 + v29 + 68) >> 10) & 7;
      *(_DWORD *)(v24 + a1 + 2872) = (*(_DWORD *)(v28 + v29 + 68) >> 13) & 1;
      *(_DWORD *)(v24 + a1 + 2876) = (*(_DWORD *)(v28 + v29 + 68) >> 14) & 1;
      *(_DWORD *)(120 * ((unsigned int)v16 + 24LL) + a1) = (*(_DWORD *)(v28 + v29 + 68) >> 15) & 3;
      v18 = ~(1 << v25) & v93;
      v11 = !_BitScanForward((unsigned int *)&v31, v18);
      v93 = v18;
      v32 = -1;
      if ( !v11 )
        v32 = v31;
      LODWORD(v92) = v32;
    }
    v16 = (unsigned int)(v16 + 1);
  }
  v35 = 0;
  HIDWORD(v98[67]) = v100;
  v98[0] = a1;
  LODWORD(v98[67]) |= 4u;
  LODWORD(v98[67]) ^= (LOBYTE(v98[67]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 8;
  LODWORD(v98[67]) ^= (LOBYTE(v98[67]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 0x10;
  LODWORD(v98[67]) ^= (LOBYTE(v98[67]) ^ (unsigned __int8)(8 * *(_DWORD *)(v10 + 1148))) & 0x20;
  LODWORD(v98[70]) = *(_DWORD *)(v10 + 1152);
  LODWORD(v98[265]) = -1073741823;
  v36 = *(_DWORD *)(v10 + 1120);
  LODWORD(v98[1]) = v36;
  if ( *(_DWORD *)(v10 + 1120) )
  {
    do
    {
      v37 = v35++;
      v98[v37 + 2] = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v37 + 56) + 64LL);
    }
    while ( v35 < *(_DWORD *)(v10 + 1120) );
    v36 = v98[1];
  }
  v38 = *(_QWORD *)(a1 + 16);
  v99 = 0;
  if ( *(_BYTE *)(v38 + 1910) )
  {
    v39 = (unsigned int)v16;
    v40 = a1 + 3728;
    memset((void *)(a1 + 3728), 0, 112LL * (unsigned int)v16);
    if ( (_DWORD)v16 )
    {
      v41 = a1 + 3732;
      v42 = (int *)(a1 + 2772);
      do
      {
        *(_DWORD *)(v41 - 4) = *(v42 - 1);
        v43 = *v42;
        *(_DWORD *)v41 = *v42;
        if ( v43 )
        {
          *(_DWORD *)(v41 + 4) = v42[1];
          *(_QWORD *)(v41 + 12) = *(_QWORD *)(v42 + 3);
          *(_QWORD *)(v41 + 20) = *(_QWORD *)(v42 + 5);
          *(_DWORD *)(v41 + 28) = v42[7];
          *(_OWORD *)(v41 + 32) = *((_OWORD *)v42 + 2);
          *(_OWORD *)(v41 + 48) = *((_OWORD *)v42 + 3);
          *(_DWORD *)(v41 + 64) = v42[20];
          *(_DWORD *)(v41 + 68) = v42[21];
          *(_DWORD *)(v41 + 72) = 0;
          *(_QWORD *)(v41 + 76) = 0LL;
          *(_DWORD *)(v41 + 84) = v42[22];
          *(_DWORD *)(v41 + 88) = v42[23];
          *(_DWORD *)(v41 + 92) = v42[24];
          *(_DWORD *)(v41 + 96) = v42[25];
          *(_DWORD *)(v41 + 100) = v42[26];
          *(_DWORD *)(v41 + 104) = v42[27];
        }
        v42 += 30;
        v41 += 112LL;
        --v39;
      }
      while ( v39 );
    }
LABEL_38:
    v98[69] = v40;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(v38 + 1911) )
  {
    v40 = a1 + 3728;
    v44 = (unsigned int)v16;
    memset((void *)(a1 + 3728), 0, (unsigned __int64)(unsigned int)v16 << 7);
    if ( (_DWORD)v16 )
    {
      v45 = a1 + 3732;
      v46 = (int *)(a1 + 2772);
      do
      {
        *(_DWORD *)(v45 - 4) = *(v46 - 1);
        v47 = *v46;
        *(_DWORD *)v45 = *v46;
        if ( v47 )
        {
          *(_DWORD *)(v45 + 4) = v46[1];
          *(_QWORD *)(v45 + 12) = *(_QWORD *)(v46 + 3);
          *(_QWORD *)(v45 + 20) = *(_QWORD *)(v46 + 5);
          *(_DWORD *)(v45 + 28) = v46[7];
          *(_OWORD *)(v45 + 32) = *((_OWORD *)v46 + 2);
          *(_OWORD *)(v45 + 48) = *((_OWORD *)v46 + 3);
          *(_OWORD *)(v45 + 64) = *((_OWORD *)v46 + 4);
          *(_DWORD *)(v45 + 80) = v46[20];
          *(_DWORD *)(v45 + 84) = v46[21];
          *(_DWORD *)(v45 + 88) = 0;
          *(_QWORD *)(v45 + 92) = 0LL;
          *(_DWORD *)(v45 + 100) = v46[22];
          *(_DWORD *)(v45 + 104) = v46[23];
          *(_DWORD *)(v45 + 108) = v46[24];
          *(_DWORD *)(v45 + 112) = v46[25];
          *(_DWORD *)(v45 + 116) = v46[26];
          *(_DWORD *)(v45 + 120) = v46[27];
        }
        v46 += 30;
        v45 += 128LL;
        --v44;
      }
      while ( v44 );
    }
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v38 + 1912) && *(_QWORD *)(v38 + 856) )
  {
    v48 = (unsigned int)v16;
    memset((void *)(a1 + 3728), 0, (unsigned __int64)(unsigned int)v16 << 7);
    if ( (_DWORD)v16 )
    {
      v49 = 0LL;
      v50 = a1 + 3732;
      v51 = (int *)(a1 + 2772);
      do
      {
        v52 = *(_QWORD *)(v10 + 1192);
        *(_DWORD *)(v50 - 4) = *(v51 - 1);
        v53 = *v51;
        *(_DWORD *)v50 = *v51;
        if ( v53 )
        {
          *(_DWORD *)(v50 + 4) = v51[1];
          *(_QWORD *)(v50 + 12) = *(_QWORD *)(v51 + 3);
          *(_QWORD *)(v50 + 20) = *(_QWORD *)(v51 + 5);
          *(_DWORD *)(v50 + 28) = v51[7];
          *(_OWORD *)(v50 + 32) = *((_OWORD *)v51 + 2);
          *(_OWORD *)(v50 + 48) = *((_OWORD *)v51 + 3);
          *(_OWORD *)(v50 + 64) = *((_OWORD *)v51 + 4);
          *(_DWORD *)(v50 + 80) = v51[20];
          *(_DWORD *)(v50 + 84) = v51[21];
          *(_DWORD *)(v50 + 88) = v51[22];
          *(_DWORD *)(v50 + 96) = v51[24];
          *(_DWORD *)(v50 + 100) = v51[25];
          *(_DWORD *)(v50 + 104) = v51[26];
          *(_DWORD *)(v50 + 108) = v51[27];
          *(_DWORD *)(v50 + 112) = v51[28];
          *(_DWORD *)(v50 + 116) = 0;
          *(_DWORD *)(v50 + 92) = *(_DWORD *)(v52 + v49 + 64);
        }
        v51 += 30;
        v49 += 56LL;
        v50 += 128LL;
        --v48;
      }
      while ( v48 );
    }
    v54 = 0;
    if ( v36 )
    {
      do
      {
        v55 = v54++;
        v98[v55 + 2] = v98[v55 + 2];
      }
      while ( v54 < LODWORD(v98[1]) );
    }
    v98[69] = a1 + 3728;
    v56 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
    goto LABEL_58;
  }
  v98[69] = a1 + 2768;
LABEL_57:
  v56 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_58:
  v57 = *(unsigned int *)(a1 + 32);
  v58 = *(_QWORD *)(a1 + 24);
  LODWORD(v98[68]) = v16;
  DpSynchronizeExecution(v58, v56, v98, v57, &v99);
  if ( bTracingEnabled && (_DWORD)v16 )
  {
    v62 = (_DWORD *)(a1 + 2840);
    v63 = v100;
    LODWORD(v92) = v101;
    do
    {
      HIDWORD(v92) = *(_DWORD *)(v10 + 1096);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
        Template_pqqxpxqqqdddddddddddd(
          v60,
          v59,
          v61,
          *(_QWORD *)(a1 + 16),
          v63,
          *(v62 - 18),
          v92,
          *((_QWORD *)v62 - 6),
          *((_QWORD *)v62 - 7),
          *(v62 - 16),
          *(_DWORD *)(v10 + 1104),
          *(_DWORD *)(v10 + 1116),
          *(v62 - 9),
          *(v62 - 7),
          *(v62 - 8),
          *(v62 - 6),
          *(v62 - 5),
          *(v62 - 3),
          *(v62 - 4),
          *(v62 - 2),
          *(v62 - 1),
          v62[1],
          *v62,
          v62[2]);
      v62 += 30;
      --v16;
    }
    while ( v16 );
    v8 = v95;
  }
  v64 = SLODWORD(v98[265]);
  if ( LODWORD(v98[265]) )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
    v65[6] = v98;
    v65[3] = 281LL;
    v65[4] = 11LL;
    v65[5] = v64;
    v65[7] = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdCriticalError(v65);
    __debugbreak();
  }
  v77 = v91;
LABEL_94:
  v7 = v102;
LABEL_95:
  if ( (*(_DWORD *)(v10 + 1148) & 0x20) != 0 )
  {
    v86 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v10 + 1168);
    if ( v86 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v10 + 1160),
        v86,
        1,
        (*(_DWORD *)(v10 + 1148) & 0x40) != 0,
        0,
        *(_QWORD *)(v10 + 1184),
        *(_QWORD *)(v10 + 1176),
        0LL);
  }
  if ( v77 )
  {
    *(_DWORD *)(v10 + 1100) = 11;
    *(_DWORD *)(v10 + 1144) = HIDWORD(v98[265]);
    *(_QWORD *)(v10 + 1136) = v98[266];
  }
  else
  {
    v11 = (*(_BYTE *)(v10 + 1148) & 0x10) == 0;
    *(_DWORD *)(v10 + 1100) = 5;
    if ( v11 )
      v87 = (1 << *(_DWORD *)(a1 + 124)) - 1;
    else
      v87 = (unsigned __int8)**(_DWORD **)(v10 + 1192) | *(unsigned __int8 *)(*(_QWORD *)(v10 + 1192) + 1LL);
    *(_DWORD *)(v8 + 2332) |= v87;
  }
  v88 = v96;
  *(_QWORD *)(v10 + 1128) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v88 + 40) = ((_BYTE)v7 + 1) & 0x3F;
  *(_DWORD *)(v88 + 44) = v7;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 408LL));
  return 0LL;
}
