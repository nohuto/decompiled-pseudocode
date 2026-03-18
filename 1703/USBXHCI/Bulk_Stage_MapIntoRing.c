/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C000F600
 * Callers:
 *     Bulk_MapStage @ 0x1C00031B8 (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x1C000F5B0 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     TR_CalculateTDSize @ 0x1C000194C (TR_CalculateTDSize.c)
 *     Bulk_InsertLinkTrb @ 0x1C0001ACC (Bulk_InsertLinkTrb.c)
 *     TR_GetPacketCount @ 0x1C0001BBC (TR_GetPacketCount.c)
 *     memmove @ 0x1C0010B40 (memmove.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C002C088 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C002C1C0 (WPP_RECORDER_SF_DDDDqDD.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  _DWORD *v1; // r13
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int128 v7; // xmm1
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // r14d
  int v13; // edi
  int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  __int64 v18; // r10
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r14
  char v23; // r9
  int v24; // r8d
  __int64 v25; // rax
  _QWORD *v26; // rax
  KIRQL v27; // dl
  __int64 v28; // rcx
  __int64 result; // rax
  int PacketCount; // eax
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // r12
  __int128 v34; // xmm1
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r9
  unsigned int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // r10
  int v41; // eax
  unsigned int v42; // r15d
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned int v46; // edi
  signed __int32 v47[8]; // [rsp+0h] [rbp-B9h] BYREF
  int v48; // [rsp+20h] [rbp-99h]
  __int128 v49; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-49h]
  int v51; // [rsp+74h] [rbp-45h]
  __int64 v52; // [rsp+78h] [rbp-41h]
  _BOOL8 v53; // [rsp+80h] [rbp-39h]
  __int64 v54; // [rsp+88h] [rbp-31h]
  __int128 v55; // [rsp+90h] [rbp-29h]
  __int128 v56; // [rsp+A0h] [rbp-19h]
  __int128 v57; // [rsp+B0h] [rbp-9h]
  __int128 v58; // [rsp+C0h] [rbp+7h]
  unsigned int v59; // [rsp+120h] [rbp+67h]
  unsigned int v60; // [rsp+128h] [rbp+6Fh]
  unsigned int v61; // [rsp+130h] [rbp+77h]
  unsigned int v62; // [rsp+138h] [rbp+7Fh]

  v1 = *(_DWORD **)a1;
  v61 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_OWORD *)(v6 + 232);
  v54 = *(_QWORD *)(v6 + 344);
  v56 = v7;
  if ( (v7 & 0x400000000LL) != 0
    && (v36 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v36 + 40))
    && (v37 = *(_QWORD *)(v3 + 56), *(_BYTE *)(v37 + 98) >= 0x80u)
    && *(_DWORD *)(v36 + 20) <= 1u
    && (v38 = *(_WORD *)(v37 + 100) & 0x7FF, v5 % v38) )
  {
    v60 = v38 - v5 % v38;
  }
  else
  {
    v60 = 0;
  }
  v53 = (*(_DWORD *)(v4 + 32) & 1) != 0;
  PacketCount = TR_GetPacketCount(v3, v5);
  v15 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 88) = 0;
  v13 = 5;
  v31 = *(unsigned int *)(v3 + 184);
  v51 = PacketCount;
  v32 = *(_QWORD *)(v3 + 40);
  v33 = *(_QWORD *)(v3 + 176) + 16 * v31;
  v52 = 0LL;
  v34 = *(_OWORD *)(v32 + 232);
  v62 = 0;
  v50 = 0;
  v59 = v15;
  v57 = v34;
  if ( (v34 & 8) != 0 )
  {
    v23 = 1;
    v24 = 5;
LABEL_32:
    Bulk_InsertLinkTrb(v3, a1, v24, v23);
LABEL_51:
    v15 = v59;
    goto LABEL_18;
  }
  do
  {
LABEL_18:
    v20 = *(_DWORD *)(v3 + 184);
    v21 = *(_DWORD *)(v3 + 188);
    v22 = *(_QWORD *)(v3 + 176) + 16LL * v20;
    v49 = 0uLL;
    *(_QWORD *)&v55 = v22;
    if ( v20 + v15 > v21 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDq(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
          v20,
          17,
          v48,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
          *(_DWORD *)(v3 + 64),
          v20,
          v22);
      Bulk_InsertLinkTrb(v3, a1, v13, v22 == v33);
      goto LABEL_51;
    }
    v58 = *(_OWORD *)(*(_QWORD *)(v3 + 40) + 232LL);
    if ( (v58 & 0x2000000000000LL) != 0 )
    {
      v39 = *(_QWORD *)(v3 + 48);
      if ( *(_DWORD *)(v39 + 20) == 3 )
      {
        v40 = *(_QWORD *)(v3 + 56);
        if ( *(_DWORD *)(v40 + 120) == 6 && v13 == 7 && v20 + 9 > v21 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v40 + 80),
              *(unsigned __int8 *)(v39 + 135),
              v20,
              18,
              v48,
              *(_BYTE *)(v39 + 135),
              *(_DWORD *)(v40 + 144),
              *(_DWORD *)(v3 + 64),
              v20,
              v22);
          v23 = v22 == v33;
          v24 = 7;
          goto LABEL_32;
        }
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
        v20,
        v15,
        v48,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        *(_DWORD *)(v3 + 64),
        v20,
        v22,
        *(_DWORD *)(a1 + 88),
        v15);
      v15 = v59;
    }
    if ( v13 == 5 )
    {
      v43 = v1[15];
      v42 = HIDWORD(v49) & 0xFFFF03FF | 0x400;
      HIDWORD(v49) = v42;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            if ( v45 == 1 )
            {
              v8 = v62;
              if ( v62 )
              {
                v10 = v61;
                v11 = v52;
              }
              else
              {
                v9 = *(_QWORD *)(a1 + 56);
                v10 = v61;
                v11 = *(_QWORD *)(v9 + 24LL * v61 + 16);
                v8 = *(_DWORD *)(v9 + 24LL * v61 + 24);
                v52 = v11;
              }
              *(_QWORD *)&v49 = v11;
              if ( v8 > 0x10000 )
              {
                v12 = DWORD2(v49) & 0xFFFE0000 | 0x10000;
                v52 = v11 + 0x10000;
                v13 = 5;
                v62 = v8 - 0x10000;
              }
              else
              {
                v61 = v10 + 1;
                v12 = (v8 ^ DWORD2(v49)) & 0x1FFFF ^ DWORD2(v49);
                v62 = 0;
                v13 = 7;
                if ( **(_DWORD **)(a1 + 56) != v10 + 1 )
                  v13 = 5;
              }
            }
            else
            {
              v12 = DWORD2(v49);
            }
            goto LABEL_8;
          }
          if ( !v53 )
            memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
          v35 = DWORD2(v49) ^ *(_DWORD *)(a1 + 40);
          *(_QWORD *)&v49 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
          v12 = v35 & 0x1FFFF ^ DWORD2(v49);
        }
        else
        {
          v46 = *(_DWORD *)(a1 + 40);
          memmove(&v49, *(const void **)(a1 + 64), v46);
          v42 = HIDWORD(v49) | 0x40;
          v12 = (DWORD2(v49) ^ v46) & 0x1FFFF ^ DWORD2(v49);
        }
      }
      else
      {
        v12 = DWORD2(v49) & 0xFFFE0000;
      }
      v13 = 7;
LABEL_8:
      v50 += v12 & 0x1FFFF;
      v14 = TR_CalculateTDSize(v3, v51, v50, v13 == 7);
      v15 = v59;
      v16 = (v12 ^ (v14 << 17)) & 0x3E0000 ^ v12;
LABEL_9:
      v17 = v42 | 0x10;
      v59 = --v15;
      goto LABEL_10;
    }
    v16 = DWORD2(v49);
    if ( v13 != 7 )
    {
      v13 = 7;
      v41 = (v60 ^ DWORD2(v49)) & 0x1FFFF;
      v60 = 0;
      v42 = HIDWORD(v49) & 0xFFFF03FF | 0x400;
      v16 = (v41 ^ DWORD2(v49)) & 0xFFC1FFFF;
      *(_QWORD *)&v49 = *(_QWORD *)(v54 + 24);
      goto LABEL_9;
    }
    v13 = 9;
    *(_QWORD *)&v49 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(*(_QWORD *)(v3 + 56) + 99LL)) & 3;
    v17 = HIDWORD(v49) & 0xFFFF03DF | 0x1C20;
LABEL_10:
    HIDWORD(v49) = v17;
    ++*(_DWORD *)(a1 + 88);
    if ( v13 != 7 )
    {
      if ( v13 != 5 || v15 )
        goto LABEL_14;
      v15 = *(_DWORD *)(a1 + 84) - *(_DWORD *)(a1 + 88);
      if ( *(_DWORD *)(a1 + 80) < v15 )
        v15 = *(_DWORD *)(a1 + 80);
LABEL_13:
      v59 = v15;
LABEL_14:
      v18 = 8LL;
      goto LABEL_15;
    }
    if ( !v60 || !v54 )
    {
      v17 |= 2u;
      v15 = 1;
      HIDWORD(v49) = v17;
      goto LABEL_13;
    }
    v18 = 8LL;
    v13 = 8;
    v16 ^= (v16 ^ ((v16 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_15:
    if ( (_QWORD)v55 != v33 )
      HIDWORD(v49) = ((unsigned __int8)v17 ^ (unsigned __int8)*(_DWORD *)(v3 + 192)) & 1 ^ v17;
    DWORD2(v49) = v16 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 104) << 22);
    *(_OWORD *)v55 = v49;
    v19 = ++*(_DWORD *)(v3 + 184);
  }
  while ( v13 != 9 );
  v55 = *(_OWORD *)(*(_QWORD *)(v3 + 40) + 232LL);
  if ( (v55 & 0x2000000000000LL) != 0
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 120LL) == 6 )
  {
    do
    {
      v49 = 0uLL;
      v25 = *(_QWORD *)(v3 + 176);
      HIDWORD(v49) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
      *(_OWORD *)(v25 + 16LL * v19) = v49;
      v19 = ++*(_DWORD *)(v3 + 184);
      --v18;
    }
    while ( v18 );
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 184);
  v26 = (_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184));
  *v26 = 0LL;
  v26[1] = 0LL;
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  ++v1[26];
  v1[24] += *(_DWORD *)(a1 + 40);
  v27 = *(_BYTE *)(v3 + 96);
  ++*(_DWORD *)(v3 + 300);
  *(_DWORD *)(v3 + 276) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v27);
  *(_BYTE *)(v33 + 12) ^= 1u;
  _InterlockedOr(v47, 0);
  v28 = *(_QWORD *)(v3 + 56);
  result = *(_QWORD *)(v28 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v28 + 144);
  _InterlockedOr(v47, 0);
  return result;
}
