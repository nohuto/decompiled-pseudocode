/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0024070 (VidSchiExecutePostPresentAtPassiveLevel.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C0002D90 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58 (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002546C (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(struct _VIDSCH_GLOBAL *a1, bool *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r12d
  bool *v5; // r14
  unsigned int v6; // r13d
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned int v13; // edx
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // r14
  int v18; // r8d
  int v19; // edx
  int v20; // r15d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int i; // r8d
  int v25; // r8d
  __int64 v26; // r9
  unsigned int j; // edx
  int v28; // r9d
  unsigned int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // r11
  unsigned int k; // r8d
  int v33; // r10d
  int v34; // r8d
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  char v38; // [rsp+B0h] [rbp+8h] BYREF
  bool *v39; // [rsp+B8h] [rbp+10h]
  unsigned int v40; // [rsp+C0h] [rbp+18h]
  unsigned int v41; // [rsp+C8h] [rbp+20h]

  v41 = a4;
  v40 = a3;
  v39 = a2;
  v4 = a4;
  v5 = a2;
  v6 = a3;
  a4 = (unsigned int)a4;
  v36 = (unsigned int)a4;
  v8 = *((_QWORD *)a1 + a3 + 371);
  v37 = v8;
  v9 = *(_QWORD *)(v8 + 8LL * (unsigned int)a4 + 24);
  v35 = v9;
  v10 = *(unsigned int *)(v9 + 40);
  v11 = *(_DWORD *)(v9 + 40);
  v12 = 1224 * v10 + v9 + 56;
  if ( *(_DWORD *)(v8 + 2264) )
  {
    v13 = ((_BYTE)v10 + 1) & 0x3F;
    if ( v13 != (_DWORD)v10 )
    {
      v14 = v8;
      v15 = *(_QWORD *)(v8 + 8LL * (unsigned int)a4 + 24);
      do
      {
        v16 = v15 + 1224LL * v13;
        if ( (unsigned int)(*(_DWORD *)(v16 + 1100) - 2) > 1 )
          break;
        v22 = *((_QWORD *)a1 + 2);
        if ( *(_QWORD *)(v22 + 904) && *(_BYTE *)(v22 + 2090) )
        {
          v23 = *(_QWORD *)(v14 + 8 * a4 + 24);
          for ( i = *(_DWORD *)(v23 + 48);
                i != (((unsigned __int8)*(_DWORD *)(v23 + 44) - 1) & 0x3F);
                i = ((_BYTE)i - 1) & 0x3F )
          {
            if ( *(_DWORD *)(1224LL * i + v23 + 1100) == 14 )
              goto LABEL_5;
          }
          a4 = v36;
        }
        v25 = (*(_BYTE *)(v16 + 1164) & 0x10) != 0
            ? (unsigned __int8)**(_DWORD **)(v16 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v16 + 1208) + 1LL)
            : (1 << *((_DWORD *)a1 + 32)) - 1;
        if ( (v25 & *(_DWORD *)(v14 + 2280)) != 0 )
          break;
        if ( *(_BYTE *)(v16 + 1112) )
        {
          v11 = v13;
          v12 = v16 + 56;
        }
        v13 = ((_BYTE)v13 + 1) & 0x3F;
      }
      while ( v13 != (_DWORD)v10 );
LABEL_5:
      v4 = v41;
      v6 = v40;
      v8 = v37;
      v9 = v35;
      a4 = v36;
    }
    if ( v11 == (_DWORD)v10 )
    {
      if ( (unsigned int)(*(_DWORD *)(v12 + 1044) - 2) <= 1 )
      {
        *(_QWORD *)(v12 + 1080) = MEMORY[0xFFFFF78000000320];
        v17 = *((_QWORD *)a1 + 2);
        if ( *(_QWORD *)(v17 + 904) && *(_BYTE *)(v17 + 2090) )
        {
          v26 = *(_QWORD *)(v8 + 8 * a4 + 24);
          for ( j = *(_DWORD *)(v26 + 48);
                j != (((unsigned __int8)*(_DWORD *)(v26 + 44) - 1) & 0x3F);
                j = ((_BYTE)j - 1) & 0x3F )
          {
            if ( *(_DWORD *)(1224LL * j + v26 + 1100) == 14 )
              goto LABEL_15;
          }
        }
        v18 = *(_DWORD *)(v12 + 1108);
        if ( (v18 & 0x10) != 0 )
          v19 = (unsigned __int8)**(_DWORD **)(v12 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v12 + 1152) + 1LL);
        else
          v19 = (1 << *((_DWORD *)a1 + 32)) - 1;
        v20 = *(_DWORD *)(v8 + 2280);
        if ( (v20 & v19) == 0 )
        {
          v21 = *(_DWORD *)(v12 + 1052);
          if ( v21 )
          {
            *(_DWORD *)(v12 + 1044) = 3;
            *(_DWORD *)(v12 + 1052) = v21 - 1;
          }
          else
          {
            if ( (v18 & 0x80u) != 0 )
            {
              v28 = *(_DWORD *)(v35 + 40);
              v29 = ((_BYTE)v28 + 1) & 0x3F;
              if ( v29 != v28 )
              {
                do
                {
                  v30 = v35 + 1224LL * v29;
                  if ( *(_DWORD *)(v30 + 1100) != 2 )
                    break;
                  if ( *(_QWORD *)(v17 + 904) && *(_BYTE *)(v17 + 2090) )
                  {
                    v31 = *(_QWORD *)(v37 + 8 * v36 + 24);
                    for ( k = *(_DWORD *)(v31 + 48);
                          k != (((unsigned __int8)*(_DWORD *)(v31 + 44) - 1) & 0x3F);
                          k = ((_BYTE)k - 1) & 0x3F )
                    {
                      if ( *(_DWORD *)(1224LL * k + v31 + 1100) == 14 )
                        goto LABEL_58;
                    }
                  }
                  v33 = *(_DWORD *)(v30 + 1164);
                  v34 = (v33 & 0x10) != 0
                      ? (unsigned __int8)**(_DWORD **)(v30 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v30 + 1208) + 1LL)
                      : (1 << *((_DWORD *)a1 + 32)) - 1;
                  if ( (v20 & v34) != 0 )
                    break;
                  v12 = v30 + 56;
                  v11 = v29;
                  if ( (v33 & 0x80u) == 0 )
                    break;
                  v29 = ((_BYTE)v29 + 1) & 0x3F;
                }
                while ( v29 != v28 );
LABEL_58:
                v4 = v41;
                v6 = v40;
              }
              if ( v11 != v28 )
                VidSchiCompleteFlipEntry((_DWORD)a1, v6, v4, v28, ((_BYTE)v11 - 1) & 0x3F, 6, (__int64)&v38);
            }
            *(_DWORD *)(v12 + 1044) = 4;
          }
        }
LABEL_15:
        v5 = v39;
      }
    }
    else
    {
      VidSchiRestartQueuedFlip(*(_QWORD *)(*(_QWORD *)(1224 * v10 + v9 + 56) + 104LL), v6, v4, v11);
      *(_DWORD *)(v12 + 1044) = 4;
    }
    if ( *(_DWORD *)(v12 + 1044) == 4 )
    {
      if ( (*(_DWORD *)(v12 + 1108) & 0x100) != 0 )
        VidSchiFlipImmediateAndCompleteFlipEntry(a1, (__int64)v5);
      else
        VidSchiExecuteMmIoFlip(a1, (__int64)v5);
    }
  }
}
