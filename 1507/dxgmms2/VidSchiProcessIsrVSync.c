/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C0018DD0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C00042DC (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     Template_pqx @ 0x1C000FA20 (Template_pqx.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C001B450 (VidSchiUpdateCurrentIsrFrameTime.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(__int64 a1, __int64 a2, __int64 a3, struct _SLIST_ENTRY *a4)
{
  int v5; // r14d
  unsigned int v7; // esi
  int v8; // r12d
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r15
  __int64 v12; // rdx
  PSLIST_ENTRY v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  char v19; // r11
  char v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rdx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  _QWORD *v53; // rax
  struct _SLIST_ENTRY *v54; // rax
  __int64 v56; // [rsp+60h] [rbp+8h]

  v56 = 0LL;
  v5 = *(_DWORD *)(a2 + 8);
  v7 = 0;
  v8 = a3;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1976LL);
  v10 = *(_DWORD *)(v9 + 80);
  if ( v10 )
  {
    a3 = *(_QWORD *)(v9 + 112);
    while ( 1 )
    {
      v9 = 1008LL * v7;
      if ( *(_DWORD *)(v9 + a3 + 956) == v5 )
        break;
      if ( ++v7 >= v10 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v7 = -1;
  }
  if ( v7 != -1 && v7 < *(_DWORD *)(a1 + 40) )
  {
    _mm_lfence();
    LOBYTE(a3) = 1;
    v11 = *(_QWORD *)(a1 + 8LL * v7 + 2640);
    VidSchiUpdateCurrentIsrFrameTime(v9, v11, a3);
    v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v11 + 15104));
    if ( v13 )
    {
      LODWORD(v13->Next) = *(_DWORD *)a2;
      v13[2].Next = (struct _SLIST_ENTRY *)a1;
      HIDWORD(v13[4].Next) = v8;
      *((_DWORD *)&v13[3].Next + 3) = v7;
      LODWORD(v13[4].Next) = v5;
      *((_BYTE *)&v13[4].Next + 8) = 0;
      if ( *(_DWORD *)a2 == 7 )
      {
        v15 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v15 >= 8 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15, v12, a3, v14);
          v53[3] = a1;
          v53[4] = *(unsigned int *)(a2 + 8);
          v53[5] = *(unsigned int *)(a2 + 16);
          WdLogEvent5_WdAssertion(v53);
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 16);
          v17 = 0LL;
          v18 = 0LL;
          v19 = *(_BYTE *)(v16 + 1910);
          v20 = *(_BYTE *)(v16 + 1911);
          if ( (_DWORD)v15 )
          {
            do
            {
              if ( v19 )
              {
                v21 = *(_QWORD *)(a2 + 24) + 96 * v17;
                if ( *(_DWORD *)(v21 + 4) )
                {
                  v22 = 5 * v18;
                  *((_BYTE *)&v13[4].Next + 8) |= 1 << *(_DWORD *)v21;
                  *((_QWORD *)&v13[5].Next + v22) = *(_QWORD *)(v21 + 8);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 4) = *(_WORD *)(v21 + 20);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 6) = *(_WORD *)(v21 + 24);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 5) = *(_WORD *)(v21 + 28);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 7) = *(_WORD *)(v21 + 32);
                  *((_WORD *)&v13[6].Next + 4 * v22) = *(_WORD *)(v21 + 36);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 2) = *(_WORD *)(v21 + 40);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 1) = *(_WORD *)(v21 + 44);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 3) = *(_WORD *)(v21 + 48);
                  *((_WORD *)&v13[6].Next + 20 * v18 + 4) = *(_WORD *)(v21 + 36);
                  v23 = *((_DWORD *)&v13[7].Next + 10 * v18);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 6) = *(_WORD *)(v21 + 40);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 5) = *(_WORD *)(v21 + 44);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 7) = *(_WORD *)(v21 + 48);
                  *((_DWORD *)&v13[7].Next + 2 * v22) ^= (*(_DWORD *)(v21 + 16) ^ v23) & 1;
                  v24 = *((_DWORD *)&v13[7].Next + 10 * v18) ^ (*(_DWORD *)(v21 + 16) ^ *((_DWORD *)&v13[7].Next
                                                                                        + 10 * v18)) & 2;
                  *((_DWORD *)&v13[7].Next + 2 * v22) = v24;
                  v25 = *(_DWORD *)(v21 + 52);
                  if ( v25 > 1 )
                    *((_DWORD *)&v13[7].Next + 10 * v18) = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(8 * v25 - 8)) & 0x18;
                  else
                    *((_DWORD *)&v13[7].Next + 10 * v18) = v24 & 0xFFFFFFE7;
                  *((_DWORD *)&v13[7].Next + 10 * v18) ^= (*((_DWORD *)&v13[7].Next + 10 * v18) ^ (4
                                                                                                 * *(_DWORD *)(v21 + 56))) & 4;
                  v26 = *((_DWORD *)&v13[7].Next + 10 * v18) ^ (*((_DWORD *)&v13[7].Next + 10 * v18) ^ (32 * *(_DWORD *)(v21 + 72))) & 0x60;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v26;
                  v27 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v21 + 76) << 7)) & 0x80;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v27;
                  v28 = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v21 + 76) << 7)) & 0x100;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v28;
                  v29 = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v21 + 76) << 7)) & 0x200;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v29;
                  v30 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v21 + 80) << 10)) & 0x1C00;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v30;
                  v31 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v21 + 84) << 13)) & 0x2000;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v31;
                  v32 = v31 ^ ((unsigned __int16)v31 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v21 + 88) << 14)) & 0x4000;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v32;
                  v33 = *(_DWORD *)(v21 + 92);
LABEL_29:
                  *((_DWORD *)&v13[7].Next + 2 * v22) = v32 ^ (v32 ^ (v33 << 15)) & 0x18000;
                  v18 = (unsigned int)(v18 + 1);
                }
              }
              else if ( v20 )
              {
                v34 = *(_QWORD *)(a2 + 24) + 112LL * (unsigned int)v17;
                if ( *(_DWORD *)(v34 + 4) )
                {
                  v22 = 5 * v18;
                  *((_BYTE *)&v13[4].Next + 8) |= 1 << *(_DWORD *)v34;
                  *((_QWORD *)&v13[5].Next + v22) = *(_QWORD *)(v34 + 8);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 4) = *(_WORD *)(v34 + 20);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 6) = *(_WORD *)(v34 + 24);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 5) = *(_WORD *)(v34 + 28);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 7) = *(_WORD *)(v34 + 32);
                  *((_WORD *)&v13[6].Next + 4 * v22) = *(_WORD *)(v34 + 36);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 2) = *(_WORD *)(v34 + 40);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 1) = *(_WORD *)(v34 + 44);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 3) = *(_WORD *)(v34 + 48);
                  *((_WORD *)&v13[6].Next + 20 * v18 + 4) = *(_WORD *)(v34 + 52);
                  v35 = *((_DWORD *)&v13[7].Next + 10 * v18);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 6) = *(_WORD *)(v34 + 56);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 5) = *(_WORD *)(v34 + 60);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 7) = *(_WORD *)(v34 + 64);
                  *((_DWORD *)&v13[7].Next + 2 * v22) ^= (*(_DWORD *)(v34 + 16) ^ v35) & 1;
                  v36 = *((_DWORD *)&v13[7].Next + 10 * v18) ^ (*(_DWORD *)(v34 + 16) ^ *((_DWORD *)&v13[7].Next
                                                                                        + 10 * v18)) & 2;
                  *((_DWORD *)&v13[7].Next + 2 * v22) = v36;
                  v37 = *(_DWORD *)(v34 + 68);
                  if ( v37 > 1 )
                    *((_DWORD *)&v13[7].Next + 10 * v18) = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)(8 * v37 - 8)) & 0x18;
                  else
                    *((_DWORD *)&v13[7].Next + 10 * v18) = v36 & 0xFFFFFFE7;
                  *((_DWORD *)&v13[7].Next + 10 * v18) ^= (*((_DWORD *)&v13[7].Next + 10 * v18) ^ (4
                                                                                                 * *(_DWORD *)(v34 + 72))) & 4;
                  v38 = *((_DWORD *)&v13[7].Next + 10 * v18) ^ (*((_DWORD *)&v13[7].Next + 10 * v18) ^ (32 * *(_DWORD *)(v34 + 88))) & 0x60;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v38;
                  v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v34 + 92) << 7)) & 0x80;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v39;
                  v40 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 92) << 7)) & 0x100;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v40;
                  v41 = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 92) << 7)) & 0x200;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v41;
                  v42 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 96) << 10)) & 0x1C00;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v42;
                  v43 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 100) << 13)) & 0x2000;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v43;
                  v32 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 104) << 14)) & 0x4000;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v32;
                  v33 = *(_DWORD *)(v34 + 108);
                  goto LABEL_29;
                }
              }
              else
              {
                v44 = *(_QWORD *)(a2 + 24) + 104LL * (unsigned int)v17;
                if ( *(_DWORD *)(v44 + 4) )
                {
                  v22 = 5 * v18;
                  *((_BYTE *)&v13[4].Next + 8) |= 1 << *(_DWORD *)v44;
                  *((_QWORD *)&v13[5].Next + v22) = *(_QWORD *)(v44 + 8);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 4) = *(_WORD *)(v44 + 20);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 6) = *(_WORD *)(v44 + 24);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 5) = *(_WORD *)(v44 + 28);
                  *((_WORD *)&v13[5].Next + 4 * v22 + 7) = *(_WORD *)(v44 + 32);
                  *((_WORD *)&v13[6].Next + 4 * v22) = *(_WORD *)(v44 + 36);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 2) = *(_WORD *)(v44 + 40);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 1) = *(_WORD *)(v44 + 44);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 3) = *(_WORD *)(v44 + 48);
                  *((_WORD *)&v13[6].Next + 20 * v18 + 4) = *(_WORD *)(v44 + 52);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 6) = *(_WORD *)(v44 + 56);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 5) = *(_WORD *)(v44 + 60);
                  *((_WORD *)&v13[6].Next + 4 * v22 + 7) = *(_WORD *)(v44 + 64);
                  *((_DWORD *)&v13[7].Next + 2 * v22) ^= (*((_DWORD *)&v13[7].Next + 10 * v18) ^ *(_DWORD *)(v44 + 16)) & 1;
                  v45 = *((_DWORD *)&v13[7].Next + 10 * v18) ^ (*((_DWORD *)&v13[7].Next + 10 * v18) ^ *(_DWORD *)(v44 + 16)) & 2;
                  *((_DWORD *)&v13[7].Next + 2 * v22) = v45;
                  v46 = *(_DWORD *)(v44 + 68);
                  if ( v46 > 1 )
                    *((_DWORD *)&v13[7].Next + 10 * v18) = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(8 * v46 - 8)) & 0x18;
                  else
                    *((_DWORD *)&v13[7].Next + 10 * v18) = v45 & 0xFFFFFFE7;
                  *((_DWORD *)&v13[7].Next + 10 * v18) ^= (*((_DWORD *)&v13[7].Next + 10 * v18) ^ (4
                                                                                                 * *(_DWORD *)(v44 + 72))) & 4;
                  v47 = *((_DWORD *)&v13[7].Next + 10 * v18) ^ (*((_DWORD *)&v13[7].Next + 10 * v18) ^ (32 * *(_DWORD *)(v44 + 76))) & 0x60;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v47;
                  v48 = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v44 + 80) << 7)) & 0x80;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v48;
                  v49 = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 80) << 7)) & 0x100;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v49;
                  v50 = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 80) << 7)) & 0x200;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v50;
                  v51 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 84) << 10)) & 0x1C00;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v51;
                  v52 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 88) << 13)) & 0x2000;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v52;
                  v32 = v52 ^ ((unsigned __int16)v52 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 92) << 14)) & 0x4000;
                  *((_DWORD *)&v13[7].Next + 10 * v18) = v32;
                  v33 = *(_DWORD *)(v44 + 96);
                  goto LABEL_29;
                }
              }
              v17 = (unsigned int)(v17 + 1);
            }
            while ( (unsigned int)v17 < *(_DWORD *)(a2 + 16) );
          }
        }
      }
      else
      {
        *((_BYTE *)&v13[4].Next + 8) = 1;
        v54 = *(struct _SLIST_ENTRY **)(a2 + 16);
        v13[5].Next = v54;
        v56 = (__int64)v54;
      }
      *((_DWORD *)&v13[3].Next + 2) = *(_DWORD *)(v11 + 14640);
      *((_QWORD *)&v13[2].Next + 1) = *(_QWORD *)(v11 + 14632);
      v13[3].Next = a4;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1920), v13 + 1);
    }
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqx(v56, &EventVSyncInterrupt, a3, *(_QWORD *)(a1 + 16), v5, v56);
  return v7;
}
