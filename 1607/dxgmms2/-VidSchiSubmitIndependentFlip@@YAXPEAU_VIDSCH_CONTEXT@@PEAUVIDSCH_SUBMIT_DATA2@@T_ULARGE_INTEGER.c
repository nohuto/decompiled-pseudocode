/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0021E1C
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pqqpqqqxxqq @ 0x1C0022ED8 (Template_pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  unsigned int *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v6; // cl
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  char v11; // al
  unsigned int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // r12
  __int64 v15; // r9
  int v16; // r8d
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // r8d
  bool i; // zf
  int v23; // eax
  char v24; // cl
  __int64 v25; // rdi
  _DWORD *v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  bool v29; // r8
  int v30; // ecx
  int v31; // edx
  unsigned int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _VIDSCH_CONTEXT *v37; // r9
  __int64 v38; // rcx
  char v39; // [rsp+70h] [rbp-68h]
  int v40; // [rsp+74h] [rbp-64h]
  __int64 v41; // [rsp+88h] [rbp-50h]
  __int64 v43; // [rsp+E8h] [rbp+10h]
  unsigned int v44; // [rsp+E8h] [rbp+10h]
  DWORD LowPart; // [rsp+F0h] [rbp+18h]
  int v46; // [rsp+F8h] [rbp+20h]

  LowPart = a3.LowPart;
  v10 = *((unsigned int *)a2 + 29);
  v3 = (unsigned int *)((char *)a2 + 424);
  v4 = *((_QWORD *)a1 + 13);
  v5 = (unsigned int)v10;
  v40 = *((_DWORD *)a2 + 29);
  v6 = -1;
  v8 = *(_QWORD *)(v4 + 32);
  v9 = *(_QWORD *)(v8 + 8 * v10 + 2968);
  i = !_BitScanForward((unsigned int *)&v10, (unsigned __int8)*((_DWORD *)a2 + 106));
  if ( !i )
    v6 = v10;
  v11 = v6;
  v12 = 0;
  if ( v6 == -1 )
    v11 = 0;
  v13 = (unsigned int)v11;
  v14 = 272 * v13;
  v39 = v11;
  v43 = v13;
  if ( *((_DWORD *)a2 + 35) )
  {
    do
    {
      v15 = *(_QWORD *)((char *)a2
                      + 48 * v12 * *((_DWORD *)a2 + 107)
                      + *((_DWORD *)a2 + 107) * ((8 * *((_DWORD *)a2 + 108) + 167) & 0xFFFFFFF8)
                      + 472);
      *(_QWORD *)((char *)a2
                + 48 * v12 * *((_DWORD *)a2 + 107)
                + *((_DWORD *)a2 + 107) * ((8 * *((_DWORD *)a2 + 108) + 167) & 0xFFFFFFF8)
                + 464) = *(_QWORD *)(*(_QWORD *)(v15 + 96) + 24LL);
      v16 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 96) + 6LL);
      if ( *((_BYTE *)a2 + 348) )
        *(_WORD *)((char *)a2
                 + 48 * v12 * *((_DWORD *)a2 + 107)
                 + *((_DWORD *)a2 + 107) * ((8 * *((_DWORD *)a2 + 108) + 167) & 0xFFFFFFF8)
                 + 456) = v16;
      else
        *((_DWORD *)a2 + 119) ^= (*((_DWORD *)a2 + 119) ^ (v16 << 17)) & 0x3E0000;
      ++v12;
    }
    while ( v12 < *((_DWORD *)a2 + 35) );
    v13 = (unsigned int)v11;
  }
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 && (v46 = *((_DWORD *)a2 + 36), v46 == *(_DWORD *)(v14 + v9 + 120)) )
  {
    v17 = *((_DWORD *)a2 + 37);
  }
  else
  {
    v17 = *((_DWORD *)a2 + 31);
    v46 = 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v5 + 996));
  v18 = *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL);
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL) + 8 * v18) + 8 * v5 + 520);
  if ( (*(_DWORD *)a2 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v5 + 5504) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  if ( *(_DWORD *)(v14 + v9 + 156) == 1 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v19, v18);
    v20[3] = *((_QWORD *)a2 + 13);
    v20[4] = *((unsigned int *)a2 + 28);
    v20[5] = v17;
    v20[6] = *(_QWORD *)((char *)v3 + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8) + 40);
    v20[7] = *(unsigned __int16 *)((char *)v3 + v3[1] * ((8 * v3[2] + 167) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v20);
    v13 = v43;
    *(_DWORD *)(v14 + v9 + 168) = 0;
    *(_DWORD *)(v14 + v9 + 156) = 2;
  }
  ++*(_DWORD *)(v8 + 956);
  ++*(_DWORD *)(v4 + 1128);
  ++*(_DWORD *)(v8 + 960);
  ++*(_DWORD *)(v9 + 2268);
  ++*(_DWORD *)(v14 + v9 + 168);
  ++*(_DWORD *)(v9 + 2264);
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
    v21 = (unsigned __int8)*v3 | *((unsigned __int8 *)v3 + 1);
  else
    v21 = (1 << *(_DWORD *)(v8 + 128)) - 1;
  for ( i = !_BitScanForward((unsigned int *)&v23, v21); ; i = !_BitScanForward((unsigned int *)&v23, v21) )
  {
    v24 = -1;
    if ( !i )
      v24 = v23;
    if ( !v21 )
      break;
    ++*(_DWORD *)(272LL * v24 + *(_QWORD *)(v8 + 8 * v5 + 2968) + 164);
    v21 &= ~(1 << v24);
  }
  v41 = *(_QWORD *)(v9 + 8 * v13 + 24);
  v44 = *(_DWORD *)(v41 + 32);
  v25 = v41 + 1224LL * v44;
  v26 = *(_DWORD **)(v25 + 1208);
  memset((void *)(v25 + 56), 0, 0x4C8uLL);
  *(_QWORD *)(v25 + 1208) = v26;
  memset(v26 + 4, 0, v26[1] * (48 * v26[2] + ((8 * v26[2] + 167) & 0xFFFFFFF8)));
  *(_QWORD *)(v25 + 1176) = *((_QWORD *)a2 + 12);
  v27 = *((_QWORD *)a2 + 13);
  *(_DWORD *)(v25 + 1164) |= 0x20u;
  *(_QWORD *)(v25 + 1184) = v27;
  *(_DWORD *)(v25 + 1164) ^= ((unsigned __int8)*(_DWORD *)(v25 + 1164) ^ (unsigned __int8)(*(_DWORD *)a2 >> 22)) & 0x10;
  v28 = *((_DWORD *)a2 + 36);
  if ( v28 != *(_DWORD *)(v14 + v9 + 124) )
  {
    *(_DWORD *)(v14 + v9 + 124) = v28;
    *(_DWORD *)(v25 + 1164) |= 0x40u;
  }
  *(_DWORD *)(v25 + 1096) = LowPart;
  *(_DWORD *)(v25 + 1100) = 1;
  *(_DWORD *)(v25 + 1104) = *((_DWORD *)a2 + 28);
  *(_QWORD *)(v25 + 576) = *((_QWORD *)a1 + 19);
  *(_BYTE *)(v25 + 1112) = (*(_DWORD *)a2 & 0x10) != 0;
  v29 = *(_DWORD *)(v8 + 2152) != 1
     && (*(_DWORD *)(v8 + 2152) == 2 || (*(_DWORD *)a2 & 0x10000000) != 0)
     && (*(_BYTE *)(v25 + 1164) & 0x10) == 0;
  *(_DWORD *)(v25 + 1164) ^= (*(_DWORD *)(v25 + 1164) ^ (*(_DWORD *)a2 >> 19)) & 1;
  v30 = *(_DWORD *)(v25 + 1164) ^ ((unsigned __int8)*(_DWORD *)(v25 + 1164) ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 2;
  *(_DWORD *)(v25 + 1164) = v30;
  v31 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 4;
  *(_DWORD *)(v25 + 1164) = v31;
  v32 = 0;
  *(_DWORD *)(v25 + 1164) = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 8;
  *(_QWORD *)(v25 + 1192) = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v25 + 1200) = *((_QWORD *)a2 + 4);
  *(_DWORD *)(v25 + 1128) = *((_DWORD *)a2 + 35);
  for ( *(_DWORD *)(v25 + 1124) = *((_DWORD *)a2 + 35); v32 < *((_DWORD *)a2 + 35); ++v32 )
  {
    v33 = 8LL * v32;
    v34 = *(_QWORD *)((char *)a2 + v33 + *((unsigned int *)a2 + 104));
    *(_QWORD *)(v33 + v25 + 56) = v34;
    ++*(_DWORD *)(v34 + 792);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)&v3[12 * v32 * v3[1] + 12]
                                                                                        + v3[1]
                                                                                        * ((8 * v3[2] + 167) & 0xFFFFFFF8))
                                                                            + 96LL)
                                                                + 16LL)
                                                    + 8LL));
  }
  *(_DWORD *)(v25 + 1168) = v46;
  if ( *(_BYTE *)(v25 + 1112) )
  {
    *(_DWORD *)(v25 + 1108) = 0;
    if ( v29 )
      *(_DWORD *)(v25 + 1164) |= 0x180u;
  }
  else if ( v17 )
  {
    *(_DWORD *)(v25 + 1108) = v17 - 1;
  }
  else
  {
    *(_DWORD *)(v25 + 1164) |= 0x80u;
    *(_DWORD *)(v25 + 1108) = 0;
    if ( v29 )
      *(_DWORD *)(v25 + 1164) |= 0x100u;
  }
  memmove(*(void **)(v25 + 1208), v3, v3[3]);
  *(_DWORD *)(v25 + 1116) = *((_DWORD *)a2 + 34);
  *(_DWORD *)(v25 + 1120) = *((_DWORD *)a2 + 34);
  if ( (*(_DWORD *)a2 & 0x800) != 0 )
    *(_BYTE *)(v25 + 1113) = 1;
  *(_DWORD *)(v41 + 32) = ((_BYTE)v44 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 964));
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 2272));
  if ( bTracingEnabled )
  {
    v38 = *((_QWORD *)a2 + 22);
    if ( v38 )
    {
      v37 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 7);
      if ( !v37 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
        v37 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqqpqqqxxqq(
          v38,
          v35,
          v36,
          (_DWORD)v37,
          LowPart,
          v40,
          v38,
          v17,
          v39,
          *((_DWORD *)a2 + 46),
          *(_QWORD *)(v14 + v9 + 128),
          *(_QWORD *)(v14 + v9 + 136),
          *((_DWORD *)a2 + 28),
          BYTE1(*(_DWORD *)(v25 + 1164)) & 1);
    }
  }
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v8, v35, v36, (__int64)v37);
}
