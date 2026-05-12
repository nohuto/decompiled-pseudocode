/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1C0050240
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C00501E4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C0004868 (RaidRemoveTrailingBlanks.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  char *v3; // rdi
  unsigned __int8 v7; // cl
  unsigned int v8; // esi
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  unsigned __int16 v15; // di
  size_t v16; // r8
  unsigned int v17; // eax
  __int64 result; // rax
  __int128 v19; // xmm0
  int v20; // eax
  unsigned __int16 v21; // ax
  _OWORD *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  _OWORD *v30; // rdx
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  _QWORD Src[42]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = *(char **)(a1 + 96);
  memset(Src, 0, 0x148uLL);
  v7 = v3[1];
  v8 = *a3;
  v9 = *v3;
  if ( *a3 > 0x148 )
    v8 = 328;
  Src[0] = 0x14800000028LL;
  LOBYTE(Src[1]) = v9 & 0x1F;
  v10 = v7;
  BYTE2(Src[1]) = v7 >> 7;
  v11 = *(_QWORD *)(a1 + 24);
  BYTE1(Src[1]) = v10 & 0x7F;
  BYTE3(Src[1]) = (v3[7] & 2) != 0;
  HIDWORD(Src[3]) = *(_DWORD *)(v11 + 4356);
  if ( !*(_QWORD *)(a1 + 136) || (*(_DWORD *)(*(_QWORD *)(v11 + 528) + 184LL) & 0x40) == 0 )
  {
    v19 = *((_OWORD *)v3 + 1);
    Src[5] = *((_QWORD *)v3 + 1);
    v20 = *((_DWORD *)v3 + 8);
    *(_OWORD *)((char *)&Src[6] + 1) = v19;
    *(_DWORD *)((char *)&Src[8] + 2) = v20;
    HIDWORD(Src[1]) = 40;
    Src[2] = 0x4200000031LL;
    if ( *(_WORD *)(a1 + 106) )
    {
      LODWORD(Src[3]) = 71;
      memset((char *)&Src[8] + 7, 0, 0x100uLL);
      v21 = *(_WORD *)(a1 + 104);
      v22 = *(_OWORD **)(a1 + 112);
      if ( v21 > 0x100u )
      {
        v23 = v22[1];
        *(_OWORD *)((char *)&Src[8] + 7) = *v22;
        v24 = v22[2];
        *(_OWORD *)((char *)&Src[10] + 7) = v23;
        v25 = v22[3];
        *(_OWORD *)((char *)&Src[12] + 7) = v24;
        v26 = v22[4];
        *(_OWORD *)((char *)&Src[14] + 7) = v25;
        v27 = v22[5];
        *(_OWORD *)((char *)&Src[16] + 7) = v26;
        v28 = v22[6];
        *(_OWORD *)((char *)&Src[18] + 7) = v27;
        *(_OWORD *)((char *)&Src[20] + 7) = v28;
        v29 = v22[7];
        v30 = v22 + 8;
        *(_OWORD *)((char *)&Src[22] + 7) = v29;
        v31 = *((_QWORD *)v30 + 14);
        v32 = v30[1];
        *(_OWORD *)((char *)&Src[24] + 7) = *v30;
        v33 = v30[2];
        *(_OWORD *)((char *)&Src[26] + 7) = v32;
        v34 = v30[3];
        *(_OWORD *)((char *)&Src[28] + 7) = v33;
        v35 = v30[4];
        *(_OWORD *)((char *)&Src[30] + 7) = v34;
        v36 = v30[5];
        *(_OWORD *)((char *)&Src[32] + 7) = v35;
        v37 = v30[6];
        *(_OWORD *)((char *)&Src[34] + 7) = v36;
        *(_OWORD *)((char *)&Src[36] + 7) = v37;
        *(_QWORD *)((char *)&Src[38] + 7) = v31;
        *(_DWORD *)((char *)&Src[39] + 7) = *((_DWORD *)v30 + 30);
        *(_WORD *)((char *)&Src[40] + 3) = *((_WORD *)v30 + 62);
        *(_WORD *)((char *)&Src[40] + 5) = *((unsigned __int8 *)v30 + 126);
      }
      else
      {
        memmove((char *)&Src[8] + 7, v22, v21);
      }
      goto LABEL_11;
    }
LABEL_16:
    LODWORD(Src[3]) = 0;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)(a1 + 136);
  Src[2] = 0x5100000028LL;
  v13 = *(_OWORD *)(v12 + 16);
  *(_OWORD *)&Src[5] = *(_OWORD *)v12;
  v14 = *(_QWORD *)(v12 + 32);
  *(_QWORD *)((char *)&Src[10] + 1) = *(_QWORD *)(v12 + 41);
  *(_OWORD *)&Src[7] = v13;
  Src[9] = v14;
  if ( !*(_WORD *)(a1 + 106) )
    goto LABEL_16;
  v15 = *(_WORD *)(a1 + 104);
  v16 = 20LL;
  LODWORD(Src[3]) = 90;
  if ( v15 < 0x14u )
    v16 = v15;
  memmove((char *)&Src[11] + 2, *(const void **)(a1 + 112), v16);
  v17 = 21;
  if ( (unsigned __int64)(v15 + 1) < 0x15 )
    v17 = v15 + 1;
  RaidRemoveTrailingBlanks((__int64)&Src[11] + 2, v17);
LABEL_11:
  memmove(a2, Src, v8);
  result = 0LL;
  *a3 = v8;
  return result;
}
