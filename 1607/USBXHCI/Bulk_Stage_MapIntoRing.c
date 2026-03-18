/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C000E960
 * Callers:
 *     Bulk_MapStage @ 0x1C0003018 (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x1C000E910 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     TR_CalculateTDSize @ 0x1C00018AC (TR_CalculateTDSize.c)
 *     Bulk_InsertLinkTrb @ 0x1C00019D4 (Bulk_InsertLinkTrb.c)
 *     TR_GetPacketCount @ 0x1C0001AA8 (TR_GetPacketCount.c)
 *     memmove @ 0x1C000FEC0 (memmove.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C002F4EC (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C002F61C (WPP_RECORDER_SF_DDDDqDD.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  _DWORD *v1; // r13
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v6; // xmm0
  unsigned int v7; // ecx
  BOOL v8; // edi
  int PacketCount; // eax
  unsigned int v10; // r9d
  unsigned int v11; // r11d
  int v12; // r12d
  __int64 v13; // rax
  _OWORD *v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  _OWORD *v17; // rdi
  __int64 v18; // r10
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // r14d
  int v23; // eax
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  __int64 v26; // r10
  int v27; // eax
  unsigned int v28; // edx
  int v29; // ecx
  __int64 v30; // rax
  _QWORD *v31; // rax
  KIRQL v32; // dl
  __int64 v33; // rcx
  __int64 result; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r9
  unsigned int v38; // edx
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // r15d
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned int v45; // edi
  signed __int32 v46[8]; // [rsp+0h] [rbp-C9h] BYREF
  int v47; // [rsp+20h] [rbp-A9h]
  __int128 v48; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-59h]
  __int64 v50; // [rsp+78h] [rbp-51h]
  int v51; // [rsp+80h] [rbp-49h]
  __int64 v52; // [rsp+88h] [rbp-41h]
  __int64 v53; // [rsp+90h] [rbp-39h]
  _BOOL8 v54; // [rsp+98h] [rbp-31h]
  __int128 v55; // [rsp+A0h] [rbp-29h]
  __int128 v56; // [rsp+B0h] [rbp-19h]
  __int128 v57; // [rsp+C0h] [rbp-9h]
  __int128 v58; // [rsp+D0h] [rbp+7h]
  unsigned int v59; // [rsp+130h] [rbp+67h]
  unsigned int v60; // [rsp+138h] [rbp+6Fh]
  unsigned int v61; // [rsp+140h] [rbp+77h]
  unsigned int v62; // [rsp+148h] [rbp+7Fh]

  v1 = *(_DWORD **)a1;
  v62 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_OWORD *)(v5 + 232);
  v53 = *(_QWORD *)(v5 + 344);
  v7 = *(_DWORD *)(a1 + 40);
  v56 = v6;
  if ( (v6 & 0x400000000LL) != 0
    && (v36 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v36 + 40))
    && (v37 = *(_QWORD *)(v3 + 56), *(char *)(v37 + 98) < 0)
    && *(_DWORD *)(v36 + 20) <= 1u
    && (v38 = v7 % (*(_WORD *)(v37 + 100) & 0x7FFu)) != 0 )
  {
    v61 = (*(_WORD *)(v37 + 100) & 0x7FF) - v38;
  }
  else
  {
    v61 = 0;
  }
  v8 = (*(_DWORD *)(v4 + 32) & 1) != 0;
  PacketCount = TR_GetPacketCount(v3, v7);
  v10 = *(_DWORD *)(a1 + 80);
  v11 = 0;
  v51 = PacketCount;
  v12 = 5;
  *(_DWORD *)(a1 + 88) = 0;
  v50 = *(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184);
  v13 = *(_QWORD *)(v3 + 40);
  v52 = 0LL;
  v60 = 0;
  v49 = 0;
  v59 = v10;
  v57 = *(_OWORD *)(v13 + 232);
  if ( (v57 & 8) != 0 )
  {
    Bulk_InsertLinkTrb(v3, a1, 5, 1);
    v10 = v59;
    v11 = 0;
  }
  v14 = (_OWORD *)v50;
  v54 = v8;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v3 + 184);
        v16 = *(_DWORD *)(v3 + 188);
        v17 = (_OWORD *)(*(_QWORD *)(v3 + 176) + 16LL * v15);
        v48 = 0uLL;
        *(_QWORD *)&v55 = v17;
        if ( v15 + v10 <= v16 )
          break;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
            v15,
            17,
            v47,
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
            *(_DWORD *)(v3 + 64),
            v15,
            (char)v17);
        Bulk_InsertLinkTrb(v3, a1, v12, v17 == v14);
        v10 = v59;
        v11 = v60;
      }
      v58 = *(_OWORD *)(*(_QWORD *)(v3 + 40) + 232LL);
      if ( (v58 & 0x2000000000000LL) == 0 )
        break;
      v39 = *(_QWORD *)(v3 + 48);
      if ( *(_DWORD *)(v39 + 20) != 3 )
        break;
      v18 = *(_QWORD *)(v3 + 56);
      if ( v12 != 7 || *(_DWORD *)(v18 + 120) != 6 || v15 + 9 <= v16 )
        break;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDq(
          *(_QWORD *)(v18 + 80),
          *(unsigned __int8 *)(v39 + 135),
          v15,
          18,
          v47,
          *(_BYTE *)(v39 + 135),
          *(_DWORD *)(v18 + 144),
          *(_DWORD *)(v3 + 64),
          v15,
          (char)v17);
      Bulk_InsertLinkTrb(v3, a1, 7, v17 == v14);
      v10 = v59;
      v11 = v60;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
        v15,
        v10,
        v47,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        *(_DWORD *)(v3 + 64),
        v15,
        (char)v17,
        *(_DWORD *)(a1 + 88),
        v10);
      v10 = v59;
      v11 = v60;
    }
    if ( v12 == 5 )
    {
      v42 = v1[15];
      v41 = HIDWORD(v48) & 0xFFFF03FF | 0x400;
      HIDWORD(v48) = v41;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            if ( v44 == 1 )
            {
              if ( v11 )
              {
                v20 = v62;
                v21 = v52;
              }
              else
              {
                v19 = *(_QWORD *)(a1 + 56);
                v20 = v62;
                v21 = *(_QWORD *)(v19 + 24LL * v62 + 16);
                v11 = *(_DWORD *)(v19 + 24LL * v62 + 24);
                v52 = v21;
              }
              v12 = 5;
              *(_QWORD *)&v48 = v21;
              if ( v11 > 0x10000 )
              {
                v22 = DWORD2(v48) & 0xFFFE0000 | 0x10000;
                v52 = v21 + 0x10000;
                v60 = v11 - 0x10000;
              }
              else
              {
                v60 = 0;
                v62 = v20 + 1;
                v22 = (v11 ^ DWORD2(v48)) & 0x1FFFF ^ DWORD2(v48);
                if ( **(_DWORD **)(a1 + 56) == v20 + 1 )
                  v12 = 7;
              }
            }
            else
            {
              v22 = DWORD2(v48);
            }
            goto LABEL_24;
          }
          if ( !v54 )
            memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
          v35 = DWORD2(v48) ^ *(_DWORD *)(a1 + 40);
          *(_QWORD *)&v48 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
          v22 = v35 & 0x1FFFF ^ DWORD2(v48);
        }
        else
        {
          v45 = *(_DWORD *)(a1 + 40);
          memmove(&v48, *(const void **)(a1 + 64), v45);
          v41 = HIDWORD(v48) | 0x40;
          v22 = (DWORD2(v48) ^ v45) & 0x1FFFF ^ DWORD2(v48);
          v17 = (_OWORD *)v55;
        }
      }
      else
      {
        v22 = DWORD2(v48) & 0xFFFE0000;
      }
      v12 = 7;
LABEL_24:
      v49 += v22 & 0x1FFFF;
      v23 = TR_CalculateTDSize(v3, v51, v49, v12 == 7);
      v10 = v59;
      v24 = (v22 ^ (v23 << 17)) & 0x3E0000 ^ v22;
LABEL_25:
      v25 = v41 | 0x10;
      v59 = --v10;
      goto LABEL_26;
    }
    v24 = DWORD2(v48);
    if ( v12 != 7 )
    {
      v12 = 7;
      v40 = (v61 ^ DWORD2(v48)) & 0x1FFFF;
      v61 = 0;
      v41 = HIDWORD(v48) & 0xFFFF03FF | 0x400;
      v24 = (v40 ^ DWORD2(v48)) & 0xFFC1FFFF;
      *(_QWORD *)&v48 = *(_QWORD *)(v53 + 24);
      goto LABEL_25;
    }
    v12 = 9;
    *(_QWORD *)&v48 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(*(_QWORD *)(v3 + 56) + 99LL)) & 3;
    v25 = HIDWORD(v48) & 0xFFFF03DF | 0x1C20;
LABEL_26:
    HIDWORD(v48) = v25;
    ++*(_DWORD *)(a1 + 88);
    if ( v12 != 7 )
    {
      if ( v12 != 5 || v10 )
        goto LABEL_30;
      v10 = *(_DWORD *)(a1 + 84) - *(_DWORD *)(a1 + 88);
      if ( *(_DWORD *)(a1 + 80) < v10 )
        v10 = *(_DWORD *)(a1 + 80);
LABEL_29:
      v59 = v10;
LABEL_30:
      v26 = 8LL;
      goto LABEL_31;
    }
    if ( !v61 || !v53 )
    {
      v25 |= 2u;
      v10 = 1;
      HIDWORD(v48) = v25;
      goto LABEL_29;
    }
    v26 = 8LL;
    v12 = 8;
    v24 ^= (v24 ^ ((v24 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_31:
    if ( v17 != (_OWORD *)v50 )
      HIDWORD(v48) = ((unsigned __int8)v25 ^ (unsigned __int8)*(_DWORD *)(v3 + 192)) & 1 ^ v25;
    v11 = v60;
    v27 = v24 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 104) << 22);
    v14 = (_OWORD *)v50;
    DWORD2(v48) = v27;
    *v17 = v48;
    v28 = ++*(_DWORD *)(v3 + 184);
  }
  while ( v12 != 9 );
  v55 = *(_OWORD *)(*(_QWORD *)(v3 + 40) + 232LL);
  if ( (v55 & 0x2000000000000LL) != 0
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 120LL) == 6 )
  {
    do
    {
      v29 = *(_DWORD *)(v3 + 192);
      v48 = 0uLL;
      v30 = *(_QWORD *)(v3 + 176);
      HIDWORD(v48) = v29 & 1 | 0x2000;
      *(_OWORD *)(v30 + 16LL * v28) = v48;
      v28 = ++*(_DWORD *)(v3 + 184);
      --v26;
    }
    while ( v26 );
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 184);
  v31 = (_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184));
  *v31 = 0LL;
  v31[1] = 0LL;
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  ++v1[26];
  v1[24] += *(_DWORD *)(a1 + 40);
  v32 = *(_BYTE *)(v3 + 96);
  ++*(_DWORD *)(v3 + 300);
  *(_DWORD *)(v3 + 276) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v32);
  *(_BYTE *)(v50 + 12) ^= 1u;
  _InterlockedOr(v46, 0);
  v33 = *(_QWORD *)(v3 + 56);
  result = *(_QWORD *)(v33 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v33 + 144);
  _InterlockedOr(v46, 0);
  return result;
}
