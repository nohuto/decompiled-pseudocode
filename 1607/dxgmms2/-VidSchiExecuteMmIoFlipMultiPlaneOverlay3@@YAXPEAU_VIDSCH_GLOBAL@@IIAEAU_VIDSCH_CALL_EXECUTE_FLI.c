/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAHPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0020E18
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C0002D90 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011F24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@@@Z @ 0x1C0020C60 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@.c)
 */

void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        int *a5,
        struct VIDSCH_FLIP_QUEUE *a6,
        unsigned int a7)
{
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // r10d
  unsigned int v12; // r8d
  int v13; // r12d
  char v14; // cl
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r14d
  char v19; // cl
  unsigned int v20; // r15d
  char v21; // r11
  unsigned int *v22; // r9
  __int64 v23; // r11
  unsigned int v24; // ecx
  int v25; // r11d
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rax
  char v31; // cl
  unsigned int v32; // eax
  char v33; // cl
  int v34; // eax
  __int64 v35; // rax
  _DWORD *v36; // rax
  struct _VIDSCH_GLOBAL *v37; // r14
  __int64 v38; // r15
  __int64 v39; // r12
  CRefCountedBuffer *v40; // rcx
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  _QWORD *v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  char v57[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v58; // [rsp+34h] [rbp-CCh]
  int v59; // [rsp+38h] [rbp-C8h]
  unsigned int v60; // [rsp+3Ch] [rbp-C4h]
  unsigned int v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+48h] [rbp-B8h] BYREF
  int v63; // [rsp+4Ch] [rbp-B4h]
  char *v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+58h] [rbp-A8h]
  int v66; // [rsp+5Ch] [rbp-A4h]
  unsigned int v67; // [rsp+60h] [rbp-A0h]
  int v68; // [rsp+64h] [rbp-9Ch]
  struct _VIDSCH_GLOBAL *v69; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h]
  _OWORD v71[6]; // [rsp+80h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  int v73; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v74; // [rsp+FCh] [rbp-4h]
  __int128 v75; // [rsp+10Ch] [rbp+Ch]
  int v76; // [rsp+11Ch] [rbp+1Ch]
  _QWORD v77[8]; // [rsp+120h] [rbp+20h] BYREF

  v69 = a1;
  v8 = 1224LL * a7;
  v9 = *((_QWORD *)a1 + a2 + 371);
  v60 = a2;
  v70 = a2;
  v61 = a7;
  if ( (*(_DWORD *)((_BYTE *)a6 + v8 + 1164) & 0x10) != 0 )
  {
    v10 = *(_QWORD *)((char *)a6 + v8 + 1208);
    v11 = *(unsigned __int8 *)(v10 + 1);
    v12 = (unsigned __int8)*(_DWORD *)v10;
  }
  else
  {
    v12 = 1;
    v11 = ((1 << *((_DWORD *)a1 + 32)) - 1) & 0xFFFFFFFE;
  }
  v13 = 0;
  v58 = v12;
  *((_DWORD *)a4 + 5) = 0;
  v59 = 0;
  v14 = -1;
  v15 = !_BitScanForward((unsigned int *)&v16, v12);
  v65 = v16;
  if ( !v15 )
    v14 = v16;
  v15 = !_BitScanForward((unsigned int *)&v17, v11);
  v18 = v14;
  v19 = -1;
  v66 = v17;
  if ( !v15 )
    v19 = v17;
  v20 = v19;
  while ( v12 || v11 )
  {
    v21 = 1;
    v22 = (unsigned int *)(v13 * ((8 * *(_DWORD *)(*(_QWORD *)((char *)a6 + v8 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                         + *(_QWORD *)((char *)a6 + v8 + 1208)
                         + 16LL);
    if ( v18 < v20 )
    {
      v23 = 0LL;
      v22[4] = v22[4] & 0xFFFFFFF9 | (2 * (*a5 & 1 | (2 * (*a5 == 0))));
      v24 = *(_DWORD *)((char *)a6 + v8 + 1124);
      v22[7] = v24;
      *((_QWORD *)v22 + 4) = v22 + 40;
      if ( v24 )
      {
        do
        {
          *(_QWORD *)(*((_QWORD *)v22 + 4) + 8 * v23) = 48LL
                                                      * (unsigned int)(v13
                                                                     + v23
                                                                     * *(_DWORD *)(*(_QWORD *)((char *)a6 + v8 + 1208)
                                                                                 + 4LL))
                                                      + *(_QWORD *)((char *)a6 + v8 + 1208)
                                                      + *(_DWORD *)(*(_QWORD *)((char *)a6 + v8 + 1208) + 4LL)
                                                      * ((8 * *(_DWORD *)(*(_QWORD *)((char *)a6 + v8 + 1208) + 8LL)
                                                        + 167) & 0xFFFFFFF8)
                                                      + 16LL;
          v23 = (unsigned int)(v23 + 1);
        }
        while ( (unsigned int)v23 < v22[7] );
      }
      v22[4] |= 1u;
      v25 = v59;
      *v22 = v18;
      v26 = v22[4] ^ (v22[4] ^ *(_DWORD *)((char *)a6 + v8 + 1164)) & 8;
      v22[4] = v26;
      v27 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)(*(_DWORD *)((char *)a6 + v8 + 1164) >> 1)) & 0x10;
      v28 = v22[14];
      v22[4] = v27;
      v29 = *(_QWORD *)((char *)a6 + v8 + 1208);
      v30 = v25 * ((8 * *(_DWORD *)(v29 + 8) + 167) & 0xFFFFFFF8);
      v59 = v25 + 1;
      v22[14] ^= (*(_DWORD *)(v30 + v29 + 172) ^ v28) & 1;
      v22[14] ^= (v22[14] ^ *(_DWORD *)(v30 + v29 + 172)) & 2;
      v22[15] = (unsigned __int16)*(_DWORD *)(v30 + v29 + 144);
      v22[16] = (unsigned __int16)*(_DWORD *)((unsigned int)v30 + v29 + 148);
      v22[17] = *(unsigned __int16 *)((unsigned int)v30 + v29 + 146);
      v22[18] = *(unsigned __int16 *)((unsigned int)v30 + v29 + 150);
      v22[19] = *(__int16 *)((unsigned int)v30 + v29 + 152);
      v22[20] = *(__int16 *)((unsigned int)v30 + v29 + 156);
      v22[21] = *(unsigned __int16 *)((unsigned int)v30 + v29 + 154);
      v22[22] = *(unsigned __int16 *)((unsigned int)v30 + v29 + 158);
      v22[23] = (unsigned __int16)*(_DWORD *)((unsigned int)v30 + v29 + 160);
      v22[24] = (unsigned __int16)*(_DWORD *)((unsigned int)v30 + v29 + 164);
      v22[25] = *(unsigned __int16 *)((unsigned int)v30 + v29 + 162);
      v22[26] = *(unsigned __int16 *)((unsigned int)v30 + v29 + 166);
      v22[27] = ((*(_DWORD *)((unsigned int)v30 + v29 + 172) >> 3) & 3) + 1;
      v22[28] ^= (v22[28] ^ (*(_DWORD *)((unsigned int)v30 + v29 + 172) >> 2)) & 1;
      v32 = *(_DWORD *)((unsigned int)v30 + v29 + 168);
      LODWORD(v29) = v58;
      v22[29] = v32;
      v31 = -1;
      v12 = ~(1 << v18) & v29;
      v15 = !_BitScanForward(&v32, v12);
      v58 = v12;
      v67 = v32;
      if ( !v15 )
        v31 = v32;
      v18 = v31;
LABEL_23:
      v35 = *((unsigned int *)a4 + 5);
      v77[v35] = v22;
      *((_DWORD *)a4 + 5) = v35 + 1;
      *((_QWORD *)v22 + 1) = ++*(_QWORD *)(v9 + 8LL * *v22 + 2288);
      goto LABEL_24;
    }
    if ( (*(unsigned __int16 *)(v9 + 18736) & (1 << v20)) != 0 )
    {
      *((_QWORD *)v22 + 4) = 0LL;
      v22[7] = 0;
      v22[10] = 0;
      *((_QWORD *)v22 + 6) = 0LL;
      v22[6] = 0;
      v22[4] = 0;
      *v22 = v20;
    }
    else
    {
      v21 = 0;
      *((_QWORD *)v22 + 1) = 0LL;
    }
    v33 = -1;
    v11 &= ~(1 << v20);
    v15 = !_BitScanForward((unsigned int *)&v34, v11);
    v68 = v34;
    if ( !v15 )
      v33 = v34;
    v20 = v33;
    if ( v21 )
      goto LABEL_23;
LABEL_24:
    ++v13;
  }
  v36 = *(_DWORD **)((char *)a6 + v8 + 1192);
  v37 = v69;
  if ( v36 )
  {
    *(_DWORD *)(v77[0] + 40LL) = *v36;
    *(_QWORD *)(v77[0] + 48LL) = *(_QWORD *)((char *)a6 + v8 + 1192) + 8LL;
  }
  v38 = *(_QWORD *)((char *)a6 + v8 + 1200);
  if ( v38 )
  {
    v39 = *(_QWORD *)((char *)a6 + v8 + 1192);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v38 + 16), &LockHandle);
    v40 = *(CRefCountedBuffer **)(v38 + 8);
    if ( v40 )
      CRefCountedBuffer::RefCountedBufferRelease(v40);
    *(_QWORD *)(v38 + 8) = v39;
    _InterlockedIncrement((volatile signed __int32 *)(v39 + 4));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v41 = *((_DWORD *)a4 + 3);
  *((_DWORD *)a4 + 2) = v60;
  *(_QWORD *)a4 = v37;
  *((_DWORD *)a4 + 3) ^= (*(_DWORD *)((char *)a6 + v8 + 1164) ^ v41) & 1;
  v42 = *((_DWORD *)a4 + 3) ^ (*((_DWORD *)a4 + 3) ^ *(_DWORD *)((char *)a6 + v8 + 1164)) & 2;
  *((_DWORD *)a4 + 3) = v42;
  *((_DWORD *)a4 + 3) = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)*(_DWORD *)((char *)a6 + v8 + 1164)) & 4;
  v43 = *(_DWORD *)((char *)a6 + v8 + 1168);
  *((_QWORD *)a4 + 4) = 0LL;
  *((_DWORD *)a4 + 10) = v43;
  *((_DWORD *)a4 + 530) = -1073741823;
  if ( (*(_DWORD *)((_BYTE *)a6 + v8 + 1164) & 0x200) != 0 )
  {
    v44 = *(_DWORD *)((char *)a6 + v8 + 1216);
    v62 = v44;
    if ( v44 )
    {
      if ( v44 == 1 )
      {
        v63 = 28;
        v64 = (char *)a6 + v8 + 1220;
      }
    }
    else
    {
      v63 = 0;
      v64 = 0LL;
    }
    *((_QWORD *)a4 + 6) = &v62;
  }
  if ( (*(_DWORD *)((_BYTE *)a6 + v8 + 1164) & 0x400) != 0 )
  {
    v45 = *(_OWORD *)((char *)a6 + v8 + 1248);
    v73 = 0;
    v46 = *(_OWORD *)((char *)a6 + v8 + 1264);
    v76 = 1;
    v74 = v45;
    *((_QWORD *)a4 + 4) = &v73;
    v75 = v46;
  }
  v57[0] = 0;
  *((_QWORD *)a4 + 3) = v77;
  v47 = DpSynchronizeExecution(
          *((_QWORD *)v37 + 3),
          VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3,
          a4,
          *((unsigned int *)v37 + 8),
          v57);
  v52 = v47;
  if ( v47 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v48, v50, v51);
    v53[3] = 281LL;
    v53[4] = 11LL;
    v53[5] = v52;
    v53[6] = a4;
    v53[7] = *((_QWORD *)v37 + 2);
    WdLogEvent5_WdCriticalError(v53);
    __debugbreak();
  }
  if ( *((_DWORD *)a4 + 530) == -1073741267 && (*((_DWORD *)a4 + 4) & 1) != 0 )
  {
    memset(v71, 0, 0x58uLL);
    v54 = *(_OWORD *)((char *)a4 + 8);
    v55 = *(_OWORD *)((char *)a4 + 24);
    *(_QWORD *)&v71[0] = v37;
    v71[2] = v54;
    v56 = *(_OWORD *)((char *)a4 + 40);
    *((_QWORD *)&v71[0] + 1) = *((_QWORD *)v37 + v70 + 371);
    DWORD2(v71[1]) = v61;
    v71[4] = v56;
    *(_QWORD *)&v71[1] = a6;
    v71[3] = v55;
    LODWORD(v71[5]) = 5;
    VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc((struct _VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER *)v71);
  }
}
