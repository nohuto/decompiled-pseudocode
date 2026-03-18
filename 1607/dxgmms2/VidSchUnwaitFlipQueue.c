/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C0005650
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0020870 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0021E1C (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0025970 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C0002D90 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000B200 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiCompletePendingFlip @ 0x1C0011A70 (VidSchiCompletePendingFlip.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58 (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002546C (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchUnwaitFlipQueue(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // edi
  unsigned int *v8; // rbp
  __int64 v9; // r13
  unsigned int *v10; // r14
  unsigned int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // r10d
  bool v20; // cc
  int v21; // eax
  __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // eax
  int v25; // edx
  bool v26; // zf
  __int64 v27; // r9
  unsigned int v28; // edx
  int v29; // r8d
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+88h] [rbp+10h]
  __int64 v32; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v5 = 0;
  if ( !*((_DWORD *)a1 + 10) )
    return;
  do
  {
    v6 = *((_QWORD *)a1 + v5 + 371);
    if ( !*(_BYTE *)(v6 + 46916) )
      goto LABEL_37;
    v26 = *((_DWORD *)a1 + 32) == 0;
    v7 = 0;
    LOBYTE(v30) = 0;
    if ( v26 )
      goto LABEL_37;
    do
    {
      v8 = *(unsigned int **)(v6 + 8LL * v7 + 24);
      if ( !v8 )
        goto LABEL_34;
      a4 = 1LL;
      v31 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = v8[9];
          v10 = &v8[306 * v9];
          v11 = v10[275];
          if ( v11 == 1 )
            break;
          if ( ((v11 - 2) & 0xFFFFFFFD) != 0 )
          {
            if ( v11 != 3 )
              goto LABEL_34;
            v26 = *(_DWORD *)(v6 + 4) == 5;
LABEL_46:
            if ( v26 )
              v8[9] = ((_BYTE)v9 + 1) & 0x3F;
          }
          else
          {
            v25 = *(_DWORD *)(v6 + 4);
            if ( v25 == 3 )
              goto LABEL_40;
            if ( v25 == 5 )
            {
              if ( (v10[291] & 0x100) == 0 || v8[306 * v8[11] + 275] == 5 )
              {
                v26 = 1;
                goto LABEL_46;
              }
LABEL_40:
              VidSchiFlipImmediateAndCompleteFlipEntry(a1, (__int64)&v30);
              a4 = v31;
              v8[9] = ((_BYTE)v9 + 1) & 0x3F;
            }
          }
        }
        v26 = v10[282] == 0;
        v12 = 0;
        v13 = *((_QWORD *)v10 + 7);
        v32 = 0LL;
        v14 = *(_QWORD *)(v13 + 104);
        v33 = v14;
        if ( v26 )
          break;
        while ( 1 )
        {
          v32 = *(_QWORD *)&v10[2 * v12 + 14];
          v15 = *(_QWORD *)(v32 + 104);
          if ( *(_BYTE *)(v15 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 160), 0, 0) )
            break;
          if ( ++v12 >= v10[282] )
            goto LABEL_11;
        }
LABEL_18:
        --*((_DWORD *)a1 + 240);
        --*(_DWORD *)(v6 + 2268);
        v21 = *(_DWORD *)(v6 + 4);
        if ( v21 == 3 )
          goto LABEL_40;
        if ( v21 == 5 )
        {
          v10[275] = 2;
          v8[9] = ((_BYTE)v9 + 1) & 0x3F;
          if ( (_DWORD)a4 )
          {
            a4 = 0LL;
            v31 = 0;
            if ( (_DWORD)v9 == v8[10] || *((_BYTE *)v10 + 1112) )
            {
              *((_QWORD *)v10 + 142) = MEMORY[0xFFFFF78000000320];
              v22 = *((_QWORD *)a1 + 2);
              if ( *(_QWORD *)(v22 + 904) && *(_BYTE *)(v22 + 2090) )
              {
                v27 = *(_QWORD *)(v6 + 8LL * v7 + 24);
                v28 = *(_DWORD *)(v27 + 48);
                v29 = ((unsigned __int8)*(_DWORD *)(v27 + 44) - 1) & 0x3F;
                if ( v28 == v29 )
                {
LABEL_58:
                  a4 = 0LL;
                  goto LABEL_23;
                }
                while ( *(_DWORD *)(1224LL * v28 + v27 + 1100) != 14 )
                {
                  v28 = ((_BYTE)v28 - 1) & 0x3F;
                  if ( v28 == v29 )
                    goto LABEL_58;
                }
                a4 = 0LL;
              }
              else
              {
LABEL_23:
                if ( (v10[291] & 0x10) != 0 )
                  v23 = (unsigned __int8)**((_DWORD **)v10 + 151) | *(unsigned __int8 *)(*((_QWORD *)v10 + 151) + 1LL);
                else
                  v23 = (1 << *((_DWORD *)a1 + 32)) - 1;
                if ( (v23 & *(_DWORD *)(v6 + 2280)) == 0 )
                {
                  if ( *((_BYTE *)v10 + 1112) )
                  {
                    VidSchiRestartQueuedFlip(v14, v5, v7, (unsigned int)v9);
                    a4 = v31;
                  }
                  v24 = v10[277];
                  if ( v24 )
                  {
                    v10[275] = 3;
                    v10[277] = v24 - 1;
                  }
                  else
                  {
                    v26 = (v10[291] & 0x100) == 0;
                    v10[275] = 4;
                    if ( v26 )
                      VidSchiExecuteMmIoFlip(a1, v5, v7, v9, &v30);
                    else
                      VidSchiFlipImmediateAndCompleteFlipEntry(a1, (__int64)&v30);
                    a4 = v31;
                  }
                }
              }
            }
          }
        }
      }
LABEL_11:
      v16 = 0LL;
      v17 = v10[282];
      if ( !v17 )
      {
LABEL_17:
        LOBYTE(v16) = 1;
        VidSchiUpdateLastCompletedPresentTimestamp(v32, v16, 0LL);
        a4 = v31;
        v14 = v33;
        goto LABEL_18;
      }
      while ( 1 )
      {
        v18 = *(_QWORD *)&v10[2 * (unsigned int)v16 + 14];
        a4 = v10[2 * (unsigned int)v16 + 145];
        v19 = *(_DWORD *)(v18 + 156);
        v20 = (unsigned int)a4 <= v19;
        if ( (_DWORD)a4 == v19 )
        {
          if ( v10[2 * (unsigned int)v16 + 144] > *(_DWORD *)(v18 + 152) )
            break;
          v20 = (unsigned int)a4 <= v19;
        }
        if ( !v20 )
          break;
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v17 )
          goto LABEL_17;
      }
LABEL_34:
      ++v7;
    }
    while ( v7 < *((_DWORD *)a1 + 32) );
    if ( (_BYTE)v30 )
      VidSchiCompletePendingFlip(a1, v5, 9LL, a4);
LABEL_37:
    ++v5;
  }
  while ( v5 < *((_DWORD *)a1 + 10) );
}
