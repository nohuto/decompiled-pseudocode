/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C0002D90
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58 (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011F24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAHPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0020E18 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     Template_pqqpxqqqq @ 0x1C0023098 (Template_pqqpxqqqq.c)
 *     Template_pqqxpxqqqdddddddddddd @ 0x1C00233B4 (Template_pqqxpxqqqdddddddddddd.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  struct VIDSCH_FLIP_QUEUE *v9; // r15
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  char v18; // al
  int v19; // ecx
  _DWORD *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r10d
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // r9
  char *v39; // rax
  unsigned __int8 (__fastcall *v40)(void *); // rdx
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // edx
  int v44; // r8d
  _QWORD *v45; // rax
  unsigned __int64 v46; // rcx
  _DWORD *v47; // r13
  char v48; // r12
  char v49; // r11
  char *v50; // r11
  __int64 v51; // rcx
  __int64 v52; // r10
  unsigned int v53; // r8d
  unsigned int v54; // edx
  char v55; // cl
  unsigned int v56; // r8d
  bool v57; // zf
  int v58; // eax
  unsigned int v59; // r13d
  unsigned int v60; // r12d
  unsigned int v61; // r8d
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r8d
  char *v65; // rcx
  __int64 v66; // r9
  char *v67; // rdx
  int v68; // eax
  unsigned int v69; // edx
  char v70; // cl
  int v71; // eax
  char *v72; // rcx
  __int64 v73; // r9
  char *v74; // rdx
  int v75; // eax
  unsigned int v76; // r10d
  char *v77; // rdx
  char *v78; // r8
  __int64 v79; // rcx
  int v80; // r11d
  int v81; // eax
  unsigned int v82; // edx
  __int64 v83; // rcx
  unsigned int v84; // edx
  int *v85; // rcx
  char v86; // cl
  int v87; // eax
  int v88; // eax
  char v89; // cl
  __int64 v90; // rax
  CRefCountedBuffer *v91; // rcx
  volatile signed __int32 *v92; // rcx
  __int64 v94; // rcx
  __int64 v95; // r8
  REGHANDLE EtwHandle; // rax
  int UserData; // [rsp+20h] [rbp-120h]
  unsigned int v98; // [rsp+C0h] [rbp-80h]
  unsigned int v99; // [rsp+C0h] [rbp-80h]
  char v100[4]; // [rsp+C4h] [rbp-7Ch] BYREF
  int v101; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v102; // [rsp+CCh] [rbp-74h]
  unsigned int v103; // [rsp+D0h] [rbp-70h]
  unsigned int v104; // [rsp+D4h] [rbp-6Ch]
  unsigned __int64 v105; // [rsp+D8h] [rbp-68h]
  char *v106; // [rsp+E0h] [rbp-60h]
  __int64 v107; // [rsp+E8h] [rbp-58h]
  int v108; // [rsp+F0h] [rbp-50h]
  int v109; // [rsp+F4h] [rbp-4Ch]
  int v110; // [rsp+F8h] [rbp-48h]
  int v111; // [rsp+FCh] [rbp-44h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+100h] [rbp-40h] BYREF
  _QWORD v113[276]; // [rsp+120h] [rbp-20h] BYREF
  __int64 v114; // [rsp+9D0h] [rbp+890h] BYREF
  unsigned int v115; // [rsp+9D8h] [rbp+898h]
  unsigned int v116; // [rsp+9E0h] [rbp+8A0h]
  unsigned int v117; // [rsp+9E8h] [rbp+8A8h]

  v117 = a4;
  v116 = a3;
  v115 = a2;
  v105 = a2;
  v6 = a4;
  v7 = *((_QWORD *)a1 + a2 + 371);
  v8 = a3 + 3LL;
  v107 = v7;
  v9 = *(struct VIDSCH_FLIP_QUEUE **)(v7 + 8 * v8);
  v10 = (_DWORD *)((char *)v9 + 1224 * a4);
  v114 = v7 + 8 * v8;
  v101 = *(_DWORD *)(v7 + 4) == 3 || (v10[291] & 0x100) != 0;
  memset(v113, 0, 0x858uLL);
  v12 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v12 + 904) )
  {
    if ( *(_BYTE *)(v12 + 2090) )
    {
      v84 = *(_DWORD *)(*(_QWORD *)v114 + 48LL);
      LODWORD(v11) = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v114 + 44LL) - 1) & 0x3F;
      if ( v84 != (_DWORD)v11 )
      {
        while ( *(_DWORD *)(1224LL * v84 + *(_QWORD *)v114 + 1100) != 14 )
        {
          v84 = ((_BYTE)v84 - 1) & 0x3F;
          if ( v84 == (_DWORD)v11 )
            goto LABEL_5;
        }
        return 259LL;
      }
    }
  }
LABEL_5:
  if ( (v10[291] & 0x10) != 0 )
    v13 = (unsigned __int8)**((_DWORD **)v10 + 151) | *(unsigned __int8 *)(*((_QWORD *)v10 + 151) + 1LL);
  else
    v13 = (1 << *((_DWORD *)a1 + 32)) - 1;
  if ( (v13 & *(_DWORD *)(v7 + 2280)) != 0 )
    return 259LL;
  if ( !*((_DWORD *)a1 + 700) )
  {
    v14 = 0;
    if ( v10[282] )
    {
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)&v10[2 * v14 + 14] + 104LL);
        if ( *(_BYTE *)(v11 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 160), 0, 0) )
          goto LABEL_44;
      }
      while ( (unsigned int)++v14 < v10[282] );
    }
    v15 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v15 + 904) && *(_BYTE *)(v15 + 2090) )
    {
      VidSchiExecuteMmIoFlipMultiPlaneOverlay3(a1, v115, v11, (struct _VIDSCH_CALL_EXECUTE_FLIP *)v113, &v101, v9, v6);
LABEL_27:
      if ( SLODWORD(v113[265]) >= 0 || v101 )
        goto LABEL_28;
      if ( LODWORD(v113[265]) == -1073741811 )
      {
        if ( (v10[291] & 0x10) != 0 || (v113[70] & 0x40) == 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion();
        }
        else
        {
          v36 = WdLogNewEntry5_WdAssertion();
          v37 = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                          * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                          + *((_QWORD *)v10 + 151)
                          + 24LL);
          *(_QWORD *)(v36 + 32) = v105;
          *(_QWORD *)(v36 + 24) = v37;
        }
        WdLogEvent5_WdAssertion(v36);
        return 3221225485LL;
      }
      v35 = *((_QWORD *)a1 + 2);
      if ( *(_QWORD *)(v35 + 904) && LODWORD(v113[265]) == -1073741267 && *(_BYTE *)(v35 + 2090) )
      {
        v10[275] = 13;
        return 259LL;
      }
      return 259LL;
    }
    if ( (v10[291] & 0x10) == 0 )
    {
      memset(v113, 0, 0x858uLL);
      v17 = v115;
      LODWORD(v113[1]) = v115;
      v113[0] = a1;
      HIDWORD(v113[1]) = *(unsigned __int16 *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                             * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                             + *((_QWORD *)v10 + 151)
                                             + 32LL);
      v113[2] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                          * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                          + *((_QWORD *)v10 + 151)
                          + 40LL);
      v113[3] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                          * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                          + *((_QWORD *)v10 + 151)
                          + 24LL);
      LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * v10[291])) & 8;
      LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * v10[291])) & 0x10;
      LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * v10[291])) & 0x20;
      HIDWORD(v113[70]) = v10[292];
      LODWORD(v113[70]) ^= (LOBYTE(v113[70]) ^ (unsigned __int8)(8 * v10[291])) & 0x40;
      v18 = LOBYTE(v113[70]) ^ (4 * v10[291]);
      LODWORD(v113[265]) = -1073741823;
      v19 = v18 & 0x80 ^ LODWORD(v113[70]);
      LODWORD(v113[70]) = v19;
      v20 = (_DWORD *)*((_QWORD *)v10 + 149);
      if ( v20 )
      {
        LODWORD(v113[263]) = *v20;
        v113[264] = *((_QWORD *)v10 + 149) + 8LL;
      }
      v21 = *((_QWORD *)v10 + 150);
      v107 = v21;
      if ( v21 )
      {
        v106 = (char *)*((_QWORD *)v10 + 149);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 16), &LockHandle);
        v90 = v107;
        v91 = *(CRefCountedBuffer **)(v107 + 8);
        if ( v91 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v91);
          v90 = v107;
        }
        v92 = (volatile signed __int32 *)v106;
        *(_QWORD *)(v90 + 8) = v106;
        _InterlockedIncrement(v92 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v19 = v113[70];
        v17 = v115;
      }
      v22 = 0;
      LODWORD(v113[4]) = v10[281];
      if ( v10[281] )
      {
        do
        {
          v16 = *((_QWORD *)v10 + 151);
          v113[v22 + 5] = *(_QWORD *)(v16
                                    + *(_DWORD *)(v16 + 4) * ((8 * *(_DWORD *)(v16 + 8) + 167) & 0xFFFFFFF8)
                                    + 48LL * v22 * *(_DWORD *)(v16 + 4)
                                    + 16);
          if ( v22 )
          {
            v38 = &v113[3 * v22 + 68];
            *v38 = *(_QWORD *)(*((_QWORD *)v10 + 151)
                             + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                             * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                             + 48LL * v22 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                             + 24);
            *((_WORD *)v38 + 4) = *(_WORD *)(*((_QWORD *)v10 + 151)
                                           + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                           + 48LL * v22 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                           + 32);
            v16 = *((_QWORD *)v10 + 151);
            v38[2] = *(_QWORD *)(v16
                               + *(_DWORD *)(v16 + 4) * ((8 * *(_DWORD *)(v16 + 8) + 167) & 0xFFFFFFF8)
                               + 48LL * v22 * *(_DWORD *)(v16 + 4)
                               + 40);
          }
          ++v22;
        }
        while ( v22 < v10[281] );
        v19 = v113[70];
        v17 = v115;
      }
      v23 = v19;
      v24 = v19 | 4;
      v25 = v23 | 2;
      if ( v101 )
        v24 = v25;
      LODWORD(v113[70]) = v24;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqqpxqqqq(
          v24,
          v17,
          v16,
          *((_QWORD *)a1 + 2),
          v17,
          v10[274],
          v113[3],
          v113[2],
          SBYTE4(v113[1]),
          v10[276],
          v10[279],
          v24);
      v26 = *((unsigned int *)a1 + 8);
      v27 = *((_QWORD *)a1 + 3);
      v100[0] = 0;
      DpSynchronizeExecution(v27, VidSchiExecuteMmIoFlipAtISR, v113, v26, v100);
      goto LABEL_27;
    }
    memset(v113, 0, 0x858uLL);
    v85 = (int *)*((_QWORD *)v10 + 151);
    v60 = 0;
    v98 = 0;
    v87 = *v85;
    v54 = *((unsigned __int8 *)v85 + 1);
    v86 = -1;
    v56 = (unsigned __int8)v87;
    v57 = !_BitScanForward((unsigned int *)&v87, (unsigned __int8)v87);
    v104 = v56;
    v108 = v87;
    if ( !v57 )
      v86 = v87;
    v103 = v54;
    v57 = !_BitScanForward((unsigned int *)&v88, v54);
    v59 = v86;
    v89 = -1;
    v109 = v88;
    if ( !v57 )
      v89 = v88;
    v102 = v89;
    while ( v56 || v54 )
    {
      v106 = (char *)a1 + 120 * v60;
      v105 = (unsigned __int64)(v106 + 3096);
      memset(v106 + 3096, 0, 0x78uLL);
      v49 = v102;
      if ( v59 >= v102 )
      {
        v69 = v103;
        v56 = v104;
        *(_DWORD *)v105 = v102;
        *((_DWORD *)v106 + 775) = 0;
        v70 = -1;
        v54 = ~(1 << v49) & v69;
        v57 = !_BitScanForward((unsigned int *)&v71, v54);
        v103 = v54;
        v111 = v71;
        if ( !v57 )
          v70 = v71;
        v102 = v70;
      }
      else
      {
        v50 = v106;
        *(_DWORD *)v105 = v59;
        *((_DWORD *)v50 + 775) = 1;
        *((_DWORD *)v50 + 776) = *(unsigned __int16 *)(48LL * v98
                                                     + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                                     + *((_QWORD *)v10 + 151)
                                                     + 32);
        v51 = *((_QWORD *)v10 + 151);
        v52 = v98 * ((8 * *(_DWORD *)(v51 + 8) + 167) & 0xFFFFFFF8) + v51 + 144;
        *((_QWORD *)v50 + 389) = *(_QWORD *)(48LL * v98
                                           + *(_DWORD *)(v51 + 4) * ((8 * *(_DWORD *)(v51 + 8) + 167) & 0xFFFFFFF8)
                                           + v51
                                           + 40);
        *((_QWORD *)a1 + 15 * v60 + 390) = *(_QWORD *)(48LL * v98
                                                     + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                                     + *((_QWORD *)v10 + 151)
                                                     + 24);
        *((_DWORD *)v50 + 782) ^= (*(_DWORD *)(v52 + 28) ^ *((_DWORD *)v50 + 782)) & 1;
        *((_DWORD *)v50 + 782) ^= (*(_DWORD *)(v52 + 28) ^ *((_DWORD *)v50 + 782)) & 2;
        *((_DWORD *)v50 + 783) = (unsigned __int16)*(_DWORD *)v52;
        *((_DWORD *)v50 + 784) = (unsigned __int16)*(_DWORD *)(v52 + 4);
        *((_DWORD *)v50 + 785) = *(unsigned __int16 *)(v52 + 2);
        *((_DWORD *)v50 + 786) = *(unsigned __int16 *)(v52 + 6);
        *((_DWORD *)v50 + 787) = *(__int16 *)(v52 + 8);
        *((_DWORD *)v50 + 788) = *(__int16 *)(v52 + 12);
        *((_DWORD *)v50 + 789) = *(unsigned __int16 *)(v52 + 10);
        *((_DWORD *)v50 + 790) = *(unsigned __int16 *)(v52 + 14);
        *((_DWORD *)v50 + 791) = (unsigned __int16)*(_DWORD *)(v52 + 16);
        *((_DWORD *)v50 + 792) = (unsigned __int16)*(_DWORD *)(v52 + 20);
        *((_DWORD *)v50 + 793) = *(unsigned __int16 *)(v52 + 18);
        *((_DWORD *)v50 + 794) = *(unsigned __int16 *)(v52 + 22);
        *((_DWORD *)v50 + 795) = ((*(_DWORD *)(v52 + 28) >> 3) & 3) + 1;
        v53 = v104;
        ++v98;
        *((_DWORD *)v50 + 796) ^= (*((_DWORD *)v50 + 796) ^ (*(_DWORD *)(v52 + 28) >> 2)) & 1;
        v54 = v103;
        *((_DWORD *)v50 + 797) = (*(_DWORD *)(v52 + 28) >> 5) & 3;
        *((_DWORD *)v50 + 798) ^= (*((_DWORD *)v50 + 798) ^ (*(_DWORD *)(v52 + 28) >> 7)) & 1;
        LODWORD(v51) = *((_DWORD *)v50 + 798) ^ ((unsigned __int8)*((_DWORD *)v50 + 798) ^ (unsigned __int8)(*(_DWORD *)(v52 + 28) >> 7)) & 2;
        *((_DWORD *)v50 + 798) = v51;
        *((_DWORD *)v50 + 798) = v51 ^ ((unsigned __int8)v51 ^ (unsigned __int8)(*(_DWORD *)(v52 + 28) >> 7)) & 4;
        *((_DWORD *)v50 + 799) = (*(_DWORD *)(v52 + 28) >> 10) & 7;
        *((_DWORD *)v50 + 800) = (*(_DWORD *)(v52 + 28) >> 13) & 1;
        *((_DWORD *)v50 + 801) = (*(_DWORD *)(v52 + 28) >> 14) & 1;
        *((_DWORD *)v50 + 802) = (*(_DWORD *)(v52 + 28) >> 15) & 3;
        v55 = -1;
        v56 = ~(1 << v59) & v53;
        v57 = !_BitScanForward((unsigned int *)&v58, v56);
        v104 = v56;
        v110 = v58;
        if ( !v57 )
          v55 = v58;
        v59 = v55;
      }
      ++v60;
    }
    v61 = 0;
    v6 = v117;
    HIDWORD(v113[67]) = v115;
    v113[0] = a1;
    LODWORD(v113[67]) |= 4u;
    v99 = v60;
    v7 = v107;
    LODWORD(v113[67]) ^= (LOBYTE(v113[67]) ^ (unsigned __int8)(8 * v10[291])) & 8;
    LODWORD(v113[67]) ^= (LOBYTE(v113[67]) ^ (unsigned __int8)(8 * v10[291])) & 0x10;
    LODWORD(v113[67]) ^= (LOBYTE(v113[67]) ^ (unsigned __int8)(8 * v10[291])) & 0x20;
    LODWORD(v113[70]) = v10[292];
    LODWORD(v113[265]) = -1073741823;
    LODWORD(v113[1]) = v10[281];
    v102 = v113[1];
    if ( v10[281] )
    {
      do
      {
        v62 = v61++;
        v113[v62 + 2] = *(_QWORD *)(*(_QWORD *)&v10[2 * v62 + 14] + 64LL);
      }
      while ( v61 < v10[281] );
      v102 = v113[1];
    }
    v63 = *((_QWORD *)a1 + 2);
    LOBYTE(v114) = 0;
    if ( *(_BYTE *)(v63 + 2054) )
    {
      memset((char *)a1 + 4056, 0, 112LL * v99);
      v64 = v99;
      if ( v99 )
      {
        v65 = (char *)a1 + 4060;
        v66 = v99;
        v67 = (char *)a1 + 3100;
        do
        {
          *((_DWORD *)v65 - 1) = *((_DWORD *)v67 - 1);
          v68 = *(_DWORD *)v67;
          *(_DWORD *)v65 = *(_DWORD *)v67;
          if ( v68 )
          {
            *((_DWORD *)v65 + 1) = *((_DWORD *)v67 + 1);
            *(_QWORD *)(v65 + 12) = *(_QWORD *)(v67 + 12);
            *(_QWORD *)(v65 + 20) = *(_QWORD *)(v67 + 20);
            *((_DWORD *)v65 + 7) = *((_DWORD *)v67 + 7);
            *((_OWORD *)v65 + 2) = *((_OWORD *)v67 + 2);
            *((_OWORD *)v65 + 3) = *((_OWORD *)v67 + 3);
            *((_DWORD *)v65 + 16) = *((_DWORD *)v67 + 20);
            *((_DWORD *)v65 + 17) = *((_DWORD *)v67 + 21);
            *((_DWORD *)v65 + 18) = 0;
            *(_QWORD *)(v65 + 76) = 0LL;
            *((_DWORD *)v65 + 21) = *((_DWORD *)v67 + 22);
            *((_DWORD *)v65 + 22) = *((_DWORD *)v67 + 23);
            *((_DWORD *)v65 + 23) = *((_DWORD *)v67 + 24);
            *((_DWORD *)v65 + 24) = *((_DWORD *)v67 + 25);
            *((_DWORD *)v65 + 25) = *((_DWORD *)v67 + 26);
            *((_DWORD *)v65 + 26) = *((_DWORD *)v67 + 27);
          }
          v67 += 120;
          v65 += 112;
          --v66;
        }
        while ( v66 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v63 + 2055) )
      {
        if ( *(_BYTE *)(v63 + 2056) && *(_QWORD *)(v63 + 872) )
        {
          memset((char *)a1 + 4056, 0, (unsigned __int64)v99 << 7);
          v76 = 0;
          if ( v99 )
          {
            v77 = (char *)a1 + 4060;
            v78 = (char *)a1 + 3100;
            do
            {
              v79 = *((_QWORD *)v10 + 151);
              v80 = 8 * *(_DWORD *)(v79 + 8) + 160;
              *((_DWORD *)v77 - 1) = *((_DWORD *)v78 - 1);
              v81 = *(_DWORD *)v78;
              *(_DWORD *)v77 = *(_DWORD *)v78;
              if ( v81 )
              {
                *((_DWORD *)v77 + 1) = *((_DWORD *)v78 + 1);
                *(_QWORD *)(v77 + 12) = *(_QWORD *)(v78 + 12);
                *(_QWORD *)(v77 + 20) = *(_QWORD *)(v78 + 20);
                *((_DWORD *)v77 + 7) = *((_DWORD *)v78 + 7);
                *((_OWORD *)v77 + 2) = *((_OWORD *)v78 + 2);
                *((_OWORD *)v77 + 3) = *((_OWORD *)v78 + 3);
                *((_OWORD *)v77 + 4) = *((_OWORD *)v78 + 4);
                *((_DWORD *)v77 + 20) = *((_DWORD *)v78 + 20);
                *((_DWORD *)v77 + 21) = *((_DWORD *)v78 + 21);
                *((_DWORD *)v77 + 22) = *((_DWORD *)v78 + 22);
                *((_DWORD *)v77 + 24) = *((_DWORD *)v78 + 24);
                *((_DWORD *)v77 + 25) = *((_DWORD *)v78 + 25);
                *((_DWORD *)v77 + 26) = *((_DWORD *)v78 + 26);
                *((_DWORD *)v77 + 27) = *((_DWORD *)v78 + 27);
                *((_DWORD *)v77 + 28) = *((_DWORD *)v78 + 28);
                *((_DWORD *)v77 + 29) = 0;
                *((_DWORD *)v77 + 23) = *(_DWORD *)(v76 * ((v80 + 7) & 0xFFFFFFF8) + v79 + 168);
              }
              ++v76;
              v78 += 120;
              v77 += 128;
            }
            while ( v76 < v99 );
          }
          v82 = 0;
          if ( v102 )
          {
            do
            {
              v83 = v82++;
              v113[v83 + 2] = v113[v83 + 2];
            }
            while ( v82 < LODWORD(v113[1]) );
          }
          LODWORD(v113[68]) = v99;
          v39 = (char *)a1 + 4056;
          v40 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
          goto LABEL_60;
        }
        LODWORD(v113[68]) = v99;
        v39 = (char *)a1 + 3096;
LABEL_59:
        v40 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_60:
        v41 = *((unsigned int *)a1 + 8);
        v42 = *((_QWORD *)a1 + 3);
        v113[69] = v39;
        DpSynchronizeExecution(v42, v40, v113, v41, &v114);
        if ( bTracingEnabled )
        {
          v46 = v99;
          if ( v99 )
          {
            v47 = (_DWORD *)((char *)a1 + 3168);
            v48 = v115;
            LODWORD(v106) = v116;
            v105 = v99;
            do
            {
              HIDWORD(v106) = v10[274];
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                Template_pqqxpxqqqdddddddddddd(
                  v46,
                  v43,
                  v44,
                  *((_QWORD *)a1 + 2),
                  v48,
                  *(v47 - 18),
                  (char)v106,
                  *((_QWORD *)v47 - 6),
                  *((_QWORD *)v47 - 7),
                  *(v47 - 16),
                  v10[276],
                  v10[279],
                  *(v47 - 9),
                  *(v47 - 7),
                  *(v47 - 8),
                  *(v47 - 6),
                  *(v47 - 5),
                  *(v47 - 3),
                  *(v47 - 4),
                  *(v47 - 2),
                  *(v47 - 1),
                  v47[1],
                  *v47,
                  v47[2]);
                v46 = v105;
              }
              v47 += 30;
              v105 = --v46;
            }
            while ( v46 );
            v7 = v107;
            v6 = v117;
          }
        }
        v115 = v113[265];
        if ( LODWORD(v113[265]) )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v45[5] = (int)v115;
          v45[6] = v113;
          v45[3] = 281LL;
          v45[4] = 11LL;
          v45[7] = *((_QWORD *)a1 + 2);
          WdLogEvent5_WdCriticalError(v45);
          __debugbreak();
        }
        goto LABEL_28;
      }
      memset((char *)a1 + 4056, 0, (unsigned __int64)v99 << 7);
      v64 = v99;
      if ( v99 )
      {
        v72 = (char *)a1 + 4060;
        v73 = v99;
        v74 = (char *)a1 + 3100;
        do
        {
          *((_DWORD *)v72 - 1) = *((_DWORD *)v74 - 1);
          v75 = *(_DWORD *)v74;
          *(_DWORD *)v72 = *(_DWORD *)v74;
          if ( v75 )
          {
            *((_DWORD *)v72 + 1) = *((_DWORD *)v74 + 1);
            *(_QWORD *)(v72 + 12) = *(_QWORD *)(v74 + 12);
            *(_QWORD *)(v72 + 20) = *(_QWORD *)(v74 + 20);
            *((_DWORD *)v72 + 7) = *((_DWORD *)v74 + 7);
            *((_OWORD *)v72 + 2) = *((_OWORD *)v74 + 2);
            *((_OWORD *)v72 + 3) = *((_OWORD *)v74 + 3);
            *((_OWORD *)v72 + 4) = *((_OWORD *)v74 + 4);
            *((_DWORD *)v72 + 20) = *((_DWORD *)v74 + 20);
            *((_DWORD *)v72 + 21) = *((_DWORD *)v74 + 21);
            *((_DWORD *)v72 + 22) = 0;
            *(_QWORD *)(v72 + 92) = 0LL;
            *((_DWORD *)v72 + 25) = *((_DWORD *)v74 + 22);
            *((_DWORD *)v72 + 26) = *((_DWORD *)v74 + 23);
            *((_DWORD *)v72 + 27) = *((_DWORD *)v74 + 24);
            *((_DWORD *)v72 + 28) = *((_DWORD *)v74 + 25);
            *((_DWORD *)v72 + 29) = *((_DWORD *)v74 + 26);
            *((_DWORD *)v72 + 30) = *((_DWORD *)v74 + 27);
          }
          v74 += 120;
          v72 += 128;
          --v73;
        }
        while ( v73 );
        LODWORD(v113[68]) = v99;
        v39 = (char *)a1 + 4056;
        goto LABEL_59;
      }
    }
    LODWORD(v113[68]) = v64;
    v39 = (char *)a1 + 4056;
    goto LABEL_59;
  }
LABEL_44:
  *a5 = 1;
LABEL_28:
  if ( (v10[291] & 0x20) != 0 )
  {
    v34 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v10 + 148);
    if ( v34 )
    {
      LOBYTE(UserData) = 0;
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)v10 + 147),
        v34,
        1,
        (v10[291] & 0x40) != 0,
        UserData,
        *((_QWORD *)v10 + 150),
        *((_QWORD *)v10 + 149),
        0LL);
    }
  }
  v28 = v10[291];
  if ( v101 )
  {
    v10[275] = 11;
    v10[290] = HIDWORD(v113[265]);
    *((_QWORD *)v10 + 143) = v113[266];
  }
  else
  {
    v10[275] = 5;
    if ( (v28 & 0x10) != 0 )
      v29 = (unsigned __int8)**((_DWORD **)v10 + 151) | *(unsigned __int8 *)(*((_QWORD *)v10 + 151) + 1LL);
    else
      v29 = (1 << *((_DWORD *)a1 + 32)) - 1;
    *(_DWORD *)(v7 + 2280) |= v29;
  }
  *((_QWORD *)v10 + 142) = MEMORY[0xFFFFF78000000320];
  v30 = 1224LL * *((unsigned int *)v9 + 11);
  *((_DWORD *)v9 + 12) = v6;
  if ( *(_DWORD *)((char *)v9 + v30 + 1100) != 5 )
    *((_DWORD *)v9 + 11) = v6;
  *((_DWORD *)v9 + 10) = ((_BYTE)v6 + 1) & 0x3F;
  v31 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 408LL);
  if ( *(_QWORD *)(v31 + 7840) > (unsigned __int64)qword_1C0035288 )
  {
    *(_DWORD *)(v31 + 7848) += dword_1C0035294;
    if ( *(_DWORD *)(v31 + 7848) > (unsigned int)dword_1C0035290
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v31 + 7856) > (unsigned __int64)qword_1C0035298 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v57 = bTracingEnabled == 0;
      *(_QWORD *)(v31 + 7856) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v31 + 7848) = 0;
      if ( !v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v94, &EventPerformanceWarning, v95, 5LL);
    }
  }
  else
  {
    v32 = *(_DWORD *)(v31 + 7848);
    if ( v32 )
      *(_DWORD *)(v31 + 7848) = v32 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)(v31 + 7840), 0LL);
  return 0LL;
}
