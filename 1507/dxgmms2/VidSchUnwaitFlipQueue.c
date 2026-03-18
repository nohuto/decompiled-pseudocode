/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C00150E4
 * Callers:
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0003380 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C00132A0 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00016F8 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00176C4 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0019F38 (VidSchiRestartQueuedFlip.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rdi
  _DWORD *v4; // r13
  __int64 v5; // r15
  unsigned int *v6; // rbp
  __int64 v7; // rsi
  unsigned int *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r12
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v14; // rdx
  bool v15; // zf
  int v16; // edx
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+90h] [rbp+18h]

  result = *(_QWORD *)(a1 + 104);
  v2 = 0LL;
  v3 = *(_QWORD *)(result + 32);
  if ( *(_DWORD *)(v3 + 40) )
  {
    while ( 1 )
    {
      v4 = *(_DWORD **)(v3 + 8 * v2 + 2640);
      v5 = 0LL;
      if ( *(_DWORD *)(v3 + 124) )
        break;
LABEL_40:
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v3 + 40) )
        return result;
    }
    while ( 1 )
    {
      v6 = *(unsigned int **)&v4[2 * v5 + 4];
      if ( v6 )
        break;
LABEL_39:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v3 + 124) )
        goto LABEL_40;
    }
    v18 = 1;
    LOBYTE(v17) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6[9];
        v8 = &v6[286 * v7];
        v9 = v8[275];
        if ( v9 != 1 )
          break;
        v10 = *(_QWORD *)(*((_QWORD *)v8 + 7) + 104LL);
        result = VidSchiIsHardwareCompletedDependingCommandForFlip(v8 + 14);
        if ( !(_DWORD)result )
          goto LABEL_39;
        --*(_DWORD *)(v3 + 916);
        --v4[581];
        v11 = v4[1];
        switch ( v11 )
        {
          case 3:
LABEL_37:
            VidSchiFlipImmediateAndCompleteFlipEntry((struct _VIDSCH_GLOBAL *)v3, (__int64)&v17);
            goto LABEL_38;
          case 5:
            v8[275] = 2;
            v15 = v18 == 0;
            v6[9] = ((_BYTE)v7 + 1) & 0x3F;
            if ( !v15 )
            {
              v18 = 0;
              if ( (_DWORD)v7 == v6[10] || *((_BYTE *)v8 + 1112) )
              {
                *((_QWORD *)v8 + 141) = MEMORY[0xFFFFF78000000320];
                v12 = (v8[287] & 0x10) != 0
                    ? (unsigned __int8)**((_DWORD **)v8 + 149) | *(unsigned __int8 *)(*((_QWORD *)v8 + 149) + 1LL)
                    : (1 << *(_DWORD *)(v3 + 124)) - 1;
                if ( (v12 & v4[583]) == 0 )
                {
                  if ( *((_BYTE *)v8 + 1112) )
                    VidSchiRestartQueuedFlip(v10, (unsigned int)v2, (unsigned int)v5, (unsigned int)v7);
                  v13 = v8[277];
                  if ( v13 )
                  {
                    v8[275] = 3;
                    v8[277] = v13 - 1;
                  }
                  else
                  {
                    v15 = (v8[287] & 0x100) == 0;
                    v8[275] = 4;
                    if ( v15 )
                      VidSchiExecuteMmIoFlip(v3, v2, v5, v7, (__int64)&v17);
                    else
                      VidSchiFlipImmediateAndCompleteFlipEntry((struct _VIDSCH_GLOBAL *)v3, (__int64)&v17);
                  }
                }
              }
            }
            break;
          case 4:
            *((_QWORD *)v8 + 141) = MEMORY[0xFFFFF78000000320];
            v8[275] = 5;
            v6[9] = ((_BYTE)v7 + 1) & 0x3F;
            if ( (v8[287] & 0x20) != 0 )
            {
              v14 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v8 + 146);
              if ( v14 )
                VidSchiPropagatePresentHistoryToken(
                  *((PKSPIN_LOCK *)v8 + 145),
                  v14,
                  1,
                  (v8[287] & 0x40) != 0,
                  0,
                  *((_QWORD *)v8 + 148),
                  *((_QWORD *)v8 + 147),
                  0LL);
            }
            break;
        }
      }
      result = v9 - 2;
      if ( (result & 0xFFFFFFFD) != 0 )
        break;
      v16 = v4[1];
      if ( v16 == 3 )
        goto LABEL_37;
      if ( v16 == 5 )
      {
        if ( (v8[287] & 0x100) != 0 && v6[286 * v6[11] + 275] != 5 )
          goto LABEL_37;
        v15 = 1;
LABEL_30:
        if ( v15 )
LABEL_38:
          v6[9] = ((_BYTE)v7 + 1) & 0x3F;
      }
    }
    if ( v9 != 3 )
      goto LABEL_39;
    v15 = v4[1] == 5;
    goto LABEL_30;
  }
  return result;
}
