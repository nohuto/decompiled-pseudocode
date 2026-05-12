/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1C0057164
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C0057108 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C00022D0 (RaidRemoveTrailingBlanks.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
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
  int v17; // eax
  __int64 result; // rax
  __int128 v19; // xmm0
  int v20; // eax
  unsigned __int16 v21; // ax
  _OWORD *v22; // rdx
  char *v23; // rcx
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  _OWORD *v38; // rcx
  __int128 v39; // xmm0
  _OWORD *v40; // rdx
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  _QWORD Src[50]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = *(char **)(a1 + 96);
  memset(Src, 0, 0x18CuLL);
  v7 = v3[1];
  v8 = *a3;
  v9 = *v3;
  if ( *a3 > 0x18C )
    v8 = 396;
  Src[0] = 0x18C00000028LL;
  LOBYTE(Src[1]) = v9 & 0x1F;
  v10 = v7;
  BYTE2(Src[1]) = v7 >> 7;
  v11 = *(_QWORD *)(a1 + 24);
  BYTE1(Src[1]) = v10 & 0x7F;
  BYTE3(Src[1]) = (v3[7] & 2) != 0;
  HIDWORD(Src[3]) = *(_DWORD *)(v11 + 4356);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v24 = *(_QWORD *)(a1 + 144);
    if ( *(_BYTE *)(v24 + 8) )
    {
      v25 = *(_OWORD *)(v24 + 8);
      HIDWORD(Src[1]) = 40;
      *(_OWORD *)&Src[5] = v25;
    }
    v26 = *(_OWORD *)(v24 + 25);
    Src[2] = 0x7A00000039LL;
    v27 = *(_OWORD *)(v24 + 41);
    *(_OWORD *)((char *)&Src[7] + 1) = v26;
    v28 = *(_OWORD *)(v24 + 57);
    *(_OWORD *)((char *)&Src[9] + 1) = v27;
    v29 = *(_OWORD *)(v24 + 73);
    *(_OWORD *)((char *)&Src[11] + 1) = v28;
    v30 = *(_OWORD *)(v24 + 90);
    *(_OWORD *)((char *)&Src[13] + 1) = v29;
    *(_OWORD *)((char *)&Src[15] + 2) = v30;
    if ( !*(_WORD *)(a1 + 106) )
      goto LABEL_25;
    LODWORD(Src[3]) = 139;
    memset((char *)&Src[17] + 3, 0, 0x100uLL);
    v21 = *(_WORD *)(a1 + 104);
    v22 = *(_OWORD **)(a1 + 112);
    if ( v21 <= 0x100u )
    {
      v23 = (char *)&Src[17] + 3;
      goto LABEL_16;
    }
    v31 = (_OWORD *)((char *)&Src[17] + 3);
LABEL_24:
    v32 = v22[1];
    *v31 = *v22;
    v33 = v22[2];
    v31[1] = v32;
    v34 = v22[3];
    v31[2] = v33;
    v35 = v22[4];
    v31[3] = v34;
    v36 = v22[5];
    v31[4] = v35;
    v37 = v22[6];
    v31[5] = v36;
    v31[6] = v37;
    v38 = v31 + 8;
    v39 = v22[7];
    v40 = v22 + 8;
    *(v38 - 1) = v39;
    v41 = *((_QWORD *)v40 + 14);
    v42 = v40[1];
    *v38 = *v40;
    v43 = v40[2];
    v38[1] = v42;
    v44 = v40[3];
    v38[2] = v43;
    v45 = v40[4];
    v38[3] = v44;
    v46 = v40[5];
    v38[4] = v45;
    v47 = v40[6];
    v38[5] = v46;
    v38[6] = v47;
    *((_QWORD *)v38 + 14) = v41;
    *((_DWORD *)v38 + 30) = *((_DWORD *)v40 + 30);
    *((_WORD *)v38 + 62) = *((_WORD *)v40 + 62);
    *((_BYTE *)v38 + 126) = *((_BYTE *)v40 + 126);
    BYTE6(Src[40]) = 0;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 136) || (*(_DWORD *)(*(_QWORD *)(v11 + 528) + 184LL) & 0x40) == 0 )
  {
    v19 = *((_OWORD *)v3 + 1);
    Src[5] = *((_QWORD *)v3 + 1);
    v20 = *((_DWORD *)v3 + 8);
    *(_OWORD *)((char *)&Src[6] + 1) = v19;
    *(_DWORD *)((char *)&Src[8] + 2) = v20;
    HIDWORD(Src[1]) = 40;
    Src[2] = 0x4200000031LL;
    if ( !*(_WORD *)(a1 + 106) )
      goto LABEL_25;
    LODWORD(Src[3]) = 71;
    memset((char *)&Src[8] + 7, 0, 0x100uLL);
    v21 = *(_WORD *)(a1 + 104);
    v22 = *(_OWORD **)(a1 + 112);
    if ( v21 <= 0x100u )
    {
      v23 = (char *)&Src[8] + 7;
LABEL_16:
      memmove(v23, v22, v21);
      goto LABEL_12;
    }
    v31 = (_OWORD *)((char *)&Src[8] + 7);
    goto LABEL_24;
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
  {
LABEL_25:
    LODWORD(Src[3]) = 0;
    goto LABEL_12;
  }
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
LABEL_12:
  memmove(a2, Src, v8);
  result = 0LL;
  *a3 = v8;
  return result;
}
