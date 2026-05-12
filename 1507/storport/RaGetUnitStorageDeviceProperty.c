/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1C004C200
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C004C1A4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C0003B00 (RaidRemoveTrailingBlanks.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  char *v3; // rdi
  unsigned __int8 v7; // cl
  unsigned int v8; // esi
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int128 v12; // xmm0
  int v13; // eax
  unsigned __int16 v14; // ax
  _OWORD *v15; // rdx
  __int64 result; // rax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  unsigned __int16 v20; // di
  size_t v21; // r8
  unsigned int v22; // eax
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
    v12 = *((_OWORD *)v3 + 1);
    Src[5] = *((_QWORD *)v3 + 1);
    v13 = *((_DWORD *)v3 + 8);
    *(_OWORD *)((char *)&Src[6] + 1) = v12;
    *(_DWORD *)((char *)&Src[8] + 2) = v13;
    HIDWORD(Src[1]) = 40;
    Src[2] = 0x4200000031LL;
    if ( *(_WORD *)(a1 + 106) )
    {
      LODWORD(Src[3]) = 71;
      memset((char *)&Src[8] + 7, 0, 0x100uLL);
      v14 = *(_WORD *)(a1 + 104);
      v15 = *(_OWORD **)(a1 + 112);
      if ( v14 > 0x100u )
      {
        v23 = v15[1];
        *(_OWORD *)((char *)&Src[8] + 7) = *v15;
        v24 = v15[2];
        *(_OWORD *)((char *)&Src[10] + 7) = v23;
        v25 = v15[3];
        *(_OWORD *)((char *)&Src[12] + 7) = v24;
        v26 = v15[4];
        *(_OWORD *)((char *)&Src[14] + 7) = v25;
        v27 = v15[5];
        *(_OWORD *)((char *)&Src[16] + 7) = v26;
        v28 = v15[6];
        *(_OWORD *)((char *)&Src[18] + 7) = v27;
        *(_OWORD *)((char *)&Src[20] + 7) = v28;
        v29 = v15[7];
        v30 = v15 + 8;
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
        memmove((char *)&Src[8] + 7, v15, v14);
      }
      goto LABEL_7;
    }
LABEL_16:
    LODWORD(Src[3]) = 0;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(a1 + 136);
  Src[2] = 0x5100000028LL;
  v18 = *(_OWORD *)(v17 + 16);
  *(_OWORD *)&Src[5] = *(_OWORD *)v17;
  v19 = *(_QWORD *)(v17 + 32);
  *(_QWORD *)((char *)&Src[10] + 1) = *(_QWORD *)(v17 + 41);
  *(_OWORD *)&Src[7] = v18;
  Src[9] = v19;
  if ( !*(_WORD *)(a1 + 106) )
    goto LABEL_16;
  v20 = *(_WORD *)(a1 + 104);
  v21 = 20LL;
  LODWORD(Src[3]) = 90;
  if ( v20 < 0x14u )
    v21 = v20;
  memmove((char *)&Src[11] + 2, *(const void **)(a1 + 112), v21);
  v22 = 21;
  if ( (unsigned __int64)(v20 + 1) < 0x15 )
    v22 = v20 + 1;
  RaidRemoveTrailingBlanks((__int64)&Src[11] + 2, v22);
LABEL_7:
  memmove(a2, Src, v8);
  result = 0LL;
  *a3 = v8;
  return result;
}
