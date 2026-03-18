/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C002C16C
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x1C002A110 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x1C002A554 (Bulk_MapStage.c)
 * Callees:
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     TR_CalculateTDSize @ 0x1C002012C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C00206F4 (TR_GetPacketCount.c)
 *     Bulk_InsertLinkTrb @ 0x1C002A35C (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C002D7FC (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C002D92C (WPP_RECORDER_SF_DDDDqDD.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  _DWORD *v1; // r13
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  unsigned int v12; // r12d
  int v13; // r14d
  int PacketCount; // eax
  unsigned int v15; // r10d
  int v16; // ebx
  __int64 v17; // rax
  unsigned int v18; // r8d
  int v19; // r14d
  unsigned int v20; // r9d
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r15d
  int v26; // ecx
  int v27; // r15d
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rdx
  unsigned int v34; // ebx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  KIRQL v40; // dl
  __int64 v41; // rcx
  __int64 result; // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-89h] BYREF
  int v44; // [rsp+20h] [rbp-69h]
  int v45; // [rsp+60h] [rbp-29h]
  __int64 v46; // [rsp+68h] [rbp-21h]
  __int64 v47; // [rsp+70h] [rbp-19h]
  __int64 v48; // [rsp+78h] [rbp-11h]
  _OWORD *v49; // [rsp+80h] [rbp-9h]
  __int64 v50; // [rsp+88h] [rbp-1h]
  __int128 v51; // [rsp+90h] [rbp+7h] BYREF
  int v52; // [rsp+F0h] [rbp+67h]
  unsigned int v53; // [rsp+F8h] [rbp+6Fh]
  unsigned int v54; // [rsp+100h] [rbp+77h]
  unsigned int v55; // [rsp+108h] [rbp+7Fh]

  v1 = *(_DWORD **)a1;
  v53 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)(v6 + 336);
  v8 = *(_QWORD *)(v6 + 232);
  v46 = v7;
  if ( (v8 & 0x400000000LL) != 0
    && (v9 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v9 + 40))
    && (v10 = *(_QWORD *)(v3 + 56), *(char *)(v10 + 98) < 0)
    && *(_DWORD *)(v9 + 20) <= 1u
    && (v11 = *(_WORD *)(v10 + 100) & 0x7FF, v5 % v11) )
  {
    v12 = v11 - v5 % v11;
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_BYTE *)(v4 + 32) & 1;
  PacketCount = TR_GetPacketCount(v3, v5);
  v15 = *(_DWORD *)(a1 + 80);
  v45 = PacketCount;
  v16 = 5;
  *(_DWORD *)(a1 + 88) = 0;
  v47 = *(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184);
  v17 = *(_QWORD *)(v3 + 40);
  v48 = 0LL;
  v54 = 0;
  v55 = 0;
  v52 = v15;
  if ( (*(_QWORD *)(v17 + 232) & 8) != 0 )
  {
    Bulk_InsertLinkTrb(v3, a1, 5, 1);
    v15 = v52;
  }
  v50 = v13;
  do
  {
    do
    {
      while ( 1 )
      {
        v18 = *(_DWORD *)(v3 + 184);
        v19 = 0;
        v20 = *(_DWORD *)(v3 + 188);
        v21 = *(_QWORD *)(v3 + 176) + 16LL * v18;
        v49 = (_OWORD *)v21;
        v51 = 0uLL;
        if ( v18 + v15 > v20 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
              *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
              v18,
              17,
              v44,
              *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
              *(_DWORD *)(v3 + 64),
              v18,
              v21);
            v21 = (__int64)v49;
          }
          Bulk_InsertLinkTrb(v3, a1, v16, v21 == v47);
          v15 = v52;
          goto LABEL_67;
        }
        if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x2000000000000LL) == 0 )
          break;
        v22 = *(_QWORD *)(v3 + 48);
        if ( *(_DWORD *)(v22 + 20) != 3 )
          break;
        v23 = *(_QWORD *)(v3 + 56);
        if ( *(_DWORD *)(v23 + 120) != 6 || v16 != 7 || v18 + 9 <= v20 )
          break;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(v23 + 80),
            *(unsigned __int8 *)(v22 + 135),
            v18,
            18,
            v44,
            *(_BYTE *)(v22 + 135),
            *(_DWORD *)(v23 + 144),
            *(_DWORD *)(v3 + 64),
            v18,
            v21);
          v21 = (__int64)v49;
        }
        Bulk_InsertLinkTrb(v3, a1, 7, v21 == v47);
        v15 = v52;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDDDqDD(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
          v18,
          0,
          v44,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
          *(_DWORD *)(v3 + 64),
          v18,
          v21,
          *(_DWORD *)(a1 + 88),
          v15);
        v15 = v52;
      }
      if ( v16 == 5 )
      {
        v26 = v1[15];
        v27 = 1024;
        HIDWORD(v51) = 1024;
        if ( v26 )
        {
          v28 = v26 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
              {
                v30 = v54;
                if ( v54 )
                {
                  v33 = v48;
                  v32 = v53;
                }
                else
                {
                  v31 = *(_QWORD *)(a1 + 56);
                  v32 = v53;
                  v33 = *(_QWORD *)(v31 + 24LL * v53 + 16);
                  v30 = *(_DWORD *)(v31 + 24LL * v53 + 24);
                  v48 = v33;
                }
                *(_QWORD *)&v51 = v33;
                v16 = 5;
                if ( v30 > 0x10000 )
                {
                  v19 = 0x10000;
                  v48 = v33 + 0x10000;
                  v54 = v30 - 0x10000;
                }
                else
                {
                  v54 = 0;
                  v19 = v30 & 0x1FFFF;
                  v53 = v32 + 1;
                  if ( **(_DWORD **)(a1 + 56) == v32 + 1 )
                    v16 = 7;
                }
              }
              goto LABEL_47;
            }
            if ( !v50 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v19 = *(_DWORD *)(a1 + 40) & 0x1FFFF;
            *(_QWORD *)&v51 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
          }
          else
          {
            v34 = *(_DWORD *)(a1 + 40);
            memmove(&v51, *(const void **)(a1 + 64), v34);
            v27 = HIDWORD(v51) | 0x40;
            v19 = (DWORD2(v51) ^ v34) & 0x1FFFF ^ DWORD2(v51);
          }
        }
        else
        {
          v19 = 0;
        }
        v16 = 7;
LABEL_47:
        v55 += v19 & 0x1FFFF;
        v35 = TR_CalculateTDSize(v3, v45, v55, v16 == 7);
        v15 = v52;
        v24 = v46;
        v19 ^= (v19 ^ (v35 << 17)) & 0x3E0000;
        v25 = v27 | 0x10;
        goto LABEL_48;
      }
      if ( v16 == 7 )
      {
        v25 = 7200;
        v16 = 9;
        *(_QWORD *)&v51 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(*(_QWORD *)(v3 + 56) + 99LL)) & 3;
        v24 = v46;
        goto LABEL_49;
      }
      v24 = v46;
      *(_QWORD *)&v51 = *(_QWORD *)(v46 + 24);
      v19 = v12 & 0x1FFFF;
      v25 = 1040;
      v12 = 0;
      v16 = 7;
LABEL_48:
      v52 = --v15;
LABEL_49:
      HIDWORD(v51) = v25;
      v36 = ++*(_DWORD *)(a1 + 88);
      if ( v16 == 7 )
      {
        if ( v12 && v24 )
        {
          v16 = 8;
          v19 ^= (v19 ^ ((v19 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
          goto LABEL_59;
        }
        v25 |= 2u;
        v15 = 1;
        HIDWORD(v51) = v25;
        v52 = 1;
      }
      if ( v16 == 5 && !v15 )
      {
        v15 = *(_DWORD *)(a1 + 84) - v36;
        if ( *(_DWORD *)(a1 + 80) < v15 )
          v15 = *(_DWORD *)(a1 + 80);
        v52 = v15;
      }
LABEL_59:
      if ( v49 != (_OWORD *)v47 )
        HIDWORD(v51) = ((unsigned __int8)v25 ^ (unsigned __int8)*(_DWORD *)(v3 + 192)) & 1 ^ v25;
      DWORD2(v51) = v19 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 104) << 22);
      *v49 = v51;
      v37 = (unsigned int)++*(_DWORD *)(v3 + 184);
    }
    while ( v16 != 9 );
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x2000000000000LL) == 0
      || *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) != 3
      || *(_DWORD *)(*(_QWORD *)(v3 + 56) + 120LL) != 6 )
    {
      break;
    }
    *(_QWORD *)&v51 = 0LL;
    DWORD2(v51) = 0;
    v38 = 8LL;
    do
    {
      HIDWORD(v51) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
      *(_OWORD *)(*(_QWORD *)(v3 + 176) + 16 * v37) = v51;
      v37 = (unsigned int)++*(_DWORD *)(v3 + 184);
      --v38;
    }
    while ( v38 );
LABEL_67:
    ;
  }
  while ( v16 != 9 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 184);
  v39 = (_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184));
  *v39 = 0LL;
  v39[1] = 0LL;
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  ++v1[26];
  v1[24] += *(_DWORD *)(a1 + 40);
  v40 = *(_BYTE *)(v3 + 96);
  ++*(_DWORD *)(v3 + 300);
  *(_DWORD *)(v3 + 276) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v40);
  *(_BYTE *)(v47 + 12) ^= 1u;
  _InterlockedOr(v43, 0);
  v41 = *(_QWORD *)(v3 + 56);
  result = *(_QWORD *)(v41 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v41 + 144);
  _InterlockedOr(v43, 0);
  return result;
}
