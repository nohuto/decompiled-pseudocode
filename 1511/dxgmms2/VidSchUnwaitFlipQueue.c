/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C0004080
 * Callers:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001000 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EBAC (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0002518 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C00031E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0007460 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0021AFC (VidSchiRestartQueuedFlip.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  _DWORD *v3; // r14
  bool v4; // zf
  unsigned int v5; // r12d
  _DWORD *v6; // r13
  unsigned int *v7; // rbp
  int v8; // r8d
  __int64 v9; // rsi
  unsigned int *v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // r11d
  __int64 v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  bool v20; // cc
  int v21; // eax
  int v22; // edx
  unsigned int v23; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v24; // rdx
  int v25; // edx
  char v26; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+18h]
  int v28; // [rsp+A8h] [rbp+20h]

  result = *(_QWORD *)(a1 + 104);
  v2 = 0;
  v27 = 0;
  v3 = *(_DWORD **)(result + 32);
  if ( !v3[10] )
    return result;
  do
  {
    v4 = v3[31] == 0;
    v5 = 0;
    result = v2;
    v26 = 0;
    v6 = *(_DWORD **)&v3[2 * v2 + 648];
    if ( v4 )
      goto LABEL_52;
    do
    {
      result = v5;
      v7 = *(unsigned int **)&v6[2 * v5 + 6];
      if ( !v7 )
        goto LABEL_49;
      v8 = 1;
      v28 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = v7[9];
          v10 = &v7[290 * v9];
          v11 = v10[275];
          if ( v11 == 1 )
            break;
          result = v11 - 2;
          if ( (result & 0xFFFFFFFD) != 0 )
          {
            if ( v11 != 3 )
              goto LABEL_49;
            if ( v6[1] == 5 )
              v7[9] = ((_BYTE)v9 + 1) & 0x3F;
          }
          else
          {
            v25 = v6[1];
            if ( v25 == 3 )
              goto LABEL_47;
            if ( v25 == 5 )
            {
              if ( (v10[291] & 0x100) != 0 && v7[290 * v7[11] + 275] != 5 )
              {
LABEL_47:
                VidSchiFlipImmediateAndCompleteFlipEntry((_DWORD)v3, v2, v5, v9, (__int64)&v26);
                v8 = v28;
                v7[9] = ((_BYTE)v9 + 1) & 0x3F;
              }
              else
              {
                v7[9] = ((_BYTE)v9 + 1) & 0x3F;
              }
            }
          }
        }
        v12 = 0LL;
        v13 = 0;
        v14 = *(_QWORD *)(*((_QWORD *)v10 + 7) + 104LL);
        if ( !v10[282] )
          break;
        while ( 1 )
        {
          v12 = *(_QWORD *)&v10[2 * v13 + 14];
          v15 = *(_QWORD *)(v12 + 104);
          if ( *(_BYTE *)(v15 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 168), 0, 0) )
            break;
          if ( ++v13 >= v10[282] )
            goto LABEL_10;
        }
LABEL_17:
        --v3[231];
        --v6[583];
        v21 = v6[1];
        v2 = v27;
        switch ( v21 )
        {
          case 3:
            goto LABEL_47;
          case 5:
            v10[275] = 2;
            v7[9] = ((_BYTE)v9 + 1) & 0x3F;
            if ( v8 )
            {
              v8 = 0;
              v28 = 0;
              if ( (_DWORD)v9 == v7[10] || *((_BYTE *)v10 + 1112) )
              {
                *((_QWORD *)v10 + 142) = MEMORY[0xFFFFF78000000320];
                v22 = (v10[291] & 0x10) != 0
                    ? (unsigned __int8)**((_DWORD **)v10 + 151) | *(unsigned __int8 *)(*((_QWORD *)v10 + 151) + 1LL)
                    : (1 << v3[31]) - 1;
                v2 = v27;
                if ( (v22 & v6[585]) == 0 )
                {
                  if ( *((_BYTE *)v10 + 1112) )
                  {
                    VidSchiRestartQueuedFlip(v14, v27, v5, (unsigned int)v9);
                    v8 = v28;
                  }
                  v23 = v10[277];
                  if ( v23 )
                  {
                    v10[275] = 3;
                    v10[277] = v23 - 1;
                  }
                  else
                  {
                    v4 = (v10[291] & 0x100) == 0;
                    v10[275] = 4;
                    if ( v4 )
                      VidSchiExecuteMmIoFlip((__int64)v3, v2, v5, v9, &v26);
                    else
                      VidSchiFlipImmediateAndCompleteFlipEntry((_DWORD)v3, v2, v5, v9, (__int64)&v26);
                    v8 = v28;
                  }
                }
              }
            }
            break;
          case 4:
            *((_QWORD *)v10 + 142) = MEMORY[0xFFFFF78000000320];
            v10[275] = 5;
            v7[9] = ((_BYTE)v9 + 1) & 0x3F;
            if ( (v10[291] & 0x20) != 0 )
            {
              v24 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v10 + 148);
              if ( v24 )
              {
                VidSchiPropagatePresentHistoryToken(
                  *((PKSPIN_LOCK *)v10 + 147),
                  v24,
                  1,
                  (v10[291] & 0x40) != 0,
                  0,
                  *((_QWORD *)v10 + 150),
                  *((_QWORD *)v10 + 149),
                  0LL);
                v8 = v28;
              }
            }
            break;
        }
      }
LABEL_10:
      v16 = v10[282];
      v17 = 0LL;
      if ( !v16 )
      {
LABEL_16:
        LOBYTE(v17) = 1;
        VidSchiUpdateLastCompletedPresentTimestamp(v12, v17, 0LL);
        v8 = v28;
        goto LABEL_17;
      }
      while ( 1 )
      {
        result = *(_QWORD *)&v10[2 * (unsigned int)v17 + 14];
        v18 = v10[2 * (unsigned int)v17 + 145];
        v19 = *(_DWORD *)(result + 156);
        v20 = v18 <= v19;
        if ( v18 == v19 )
        {
          result = *(unsigned int *)(result + 152);
          if ( v10[2 * (unsigned int)v17 + 144] > (unsigned int)result )
            break;
          v20 = v18 <= v19;
        }
        if ( !v20 )
          break;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_16;
      }
      v2 = v27;
LABEL_49:
      ++v5;
    }
    while ( v5 < v3[31] );
    if ( v26 )
      result = VidSchiCompletePendingFlip((__int64)v3, v2, 9);
LABEL_52:
    v27 = ++v2;
  }
  while ( v2 < v3[10] );
  return result;
}
