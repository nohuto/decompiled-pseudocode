/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C000EF40
 * Callers:
 *     Bulk_MapStage @ 0x1C00025AC (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x1C000EEF0 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     TR_CalculateTDSize @ 0x1C0004038 (TR_CalculateTDSize.c)
 *     Bulk_InsertLinkTrb @ 0x1C0004180 (Bulk_InsertLinkTrb.c)
 *     TR_GetPacketCount @ 0x1C000425C (TR_GetPacketCount.c)
 *     memmove @ 0x1C0010CC0 (memmove.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C002EF7C (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C002F0AC (WPP_RECORDER_SF_DDDDqDD.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r10d
  int v11; // esi
  int PacketCount; // eax
  unsigned int v13; // r12d
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned int v17; // r8d
  int v18; // esi
  unsigned int v19; // r9d
  _OWORD *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r11
  unsigned int v24; // ecx
  int v25; // r15d
  int v26; // r15d
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rdx
  unsigned int v34; // edi
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rcx
  __int128 v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rcx
  __int128 v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rcx
  __int128 v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  KIRQL v59; // al
  __int64 v60; // rcx
  KIRQL v61; // dl
  __int64 v62; // rcx
  __int64 result; // rax
  signed __int32 v64[8]; // [rsp+0h] [rbp-89h] BYREF
  int v65; // [rsp+20h] [rbp-69h]
  int v66; // [rsp+60h] [rbp-29h]
  __int64 v67; // [rsp+68h] [rbp-21h]
  __int64 v68; // [rsp+70h] [rbp-19h]
  __int64 v69; // [rsp+78h] [rbp-11h]
  __int64 v70; // [rsp+80h] [rbp-9h]
  __int64 v71; // [rsp+88h] [rbp-1h]
  __int128 v72; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v73; // [rsp+F0h] [rbp+67h]
  unsigned int v74; // [rsp+F8h] [rbp+6Fh]
  unsigned int v75; // [rsp+100h] [rbp+77h]
  unsigned int v76; // [rsp+108h] [rbp+7Fh]

  v74 = 0;
  v71 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v71 + 40);
  v4 = *(_QWORD *)(v71 + 32);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_QWORD *)(v5 + 336);
  v7 = *(_QWORD *)(v5 + 232);
  v67 = v6;
  if ( (v7 & 0x400000000LL) != 0
    && (v8 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v8 + 40))
    && (v9 = *(_QWORD *)(v3 + 56), *(char *)(v9 + 98) < 0)
    && *(_DWORD *)(v8 + 20) <= 1u
    && (v10 = *(_WORD *)(v9 + 100) & 0x7FF, v2 % v10) )
  {
    v73 = v10 - v2 % v10;
  }
  else
  {
    v73 = 0;
  }
  v11 = *(_BYTE *)(v4 + 32) & 1;
  PacketCount = TR_GetPacketCount(v3, v2);
  v13 = *(_DWORD *)(a1 + 80);
  v66 = PacketCount;
  *(_DWORD *)(a1 + 88) = 0;
  v14 = 5;
  v69 = *(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184);
  v15 = *(_QWORD *)(v3 + 40);
  v70 = 0LL;
  v75 = 0;
  v76 = 0;
  if ( (*(_QWORD *)(v15 + 232) & 8) != 0 )
    Bulk_InsertLinkTrb(v3, a1, 5, 1);
  v16 = v11;
  v68 = v11;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v3 + 184);
        v18 = 0;
        v19 = *(_DWORD *)(v3 + 188);
        v20 = (_OWORD *)(*(_QWORD *)(v3 + 176) + 16LL * v17);
        v72 = 0uLL;
        if ( v17 + v13 <= v19 )
          break;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
            v17,
            17,
            v65,
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
            *(_DWORD *)(v3 + 64),
            v17,
            (char)v20);
        Bulk_InsertLinkTrb(v3, a1, v14, v20 == (_OWORD *)v69);
        v16 = v68;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x2000000000000LL) == 0 )
        break;
      v21 = *(_QWORD *)(v3 + 48);
      if ( *(_DWORD *)(v21 + 20) != 3 )
        break;
      v22 = *(_QWORD *)(v3 + 56);
      if ( *(_DWORD *)(v22 + 120) != 6 || v14 != 7 || v17 + 9 <= v19 )
        break;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDq(
          *(_QWORD *)(v22 + 80),
          *(unsigned __int8 *)(v21 + 135),
          v17,
          18,
          v65,
          *(_BYTE *)(v21 + 135),
          *(_DWORD *)(v22 + 144),
          *(_DWORD *)(v3 + 64),
          v17,
          (char)v20);
      Bulk_InsertLinkTrb(v3, a1, 7, v20 == (_OWORD *)v69);
      v16 = v68;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
        v17,
        v19,
        v65,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        *(_DWORD *)(v3 + 64),
        v17,
        (char)v20,
        *(_DWORD *)(a1 + 88),
        v13);
      v16 = v68;
    }
    if ( v14 == 5 )
    {
      v26 = 1024;
      HIDWORD(v72) = 1024;
      v27 = *(_DWORD *)(v71 + 60);
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 == 1 )
            {
              v30 = v75;
              if ( v75 )
              {
                v33 = v70;
                v32 = v74;
              }
              else
              {
                v31 = *(_QWORD *)(a1 + 56);
                v32 = v74;
                v33 = *(_QWORD *)(v31 + 24LL * v74 + 16);
                v30 = *(_DWORD *)(v31 + 24LL * v74 + 24);
                v70 = v33;
              }
              *(_QWORD *)&v72 = v33;
              v14 = 5;
              if ( v30 > 0x10000 )
              {
                v18 = 0x10000;
                v70 = v33 + 0x10000;
                v75 = v30 - 0x10000;
              }
              else
              {
                v18 = v30;
                v75 = 0;
                v74 = v32 + 1;
                if ( **(_DWORD **)(a1 + 56) == v32 + 1 )
                  v14 = 7;
              }
            }
          }
          else
          {
            if ( !v16 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v14 = 7;
            v18 = *(_DWORD *)(a1 + 40) & 0x1FFFF;
            *(_QWORD *)&v72 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
          }
        }
        else
        {
          v34 = *(_DWORD *)(a1 + 40);
          memmove(&v72, *(const void **)(a1 + 64), v34);
          v26 = HIDWORD(v72) | 0x40;
          v18 = (DWORD2(v72) ^ v34) & 0x1FFFF ^ DWORD2(v72);
          v14 = 7;
        }
      }
      else
      {
        v14 = 7;
      }
      v76 += v18 & 0x1FFFF;
      v35 = TR_CalculateTDSize(v3, v66, v76, v14 == 7);
      v23 = v67;
      v25 = v26 | 0x10;
      v18 ^= (v18 ^ (v35 << 17)) & 0x3E0000;
      --v13;
    }
    else
    {
      v23 = v67;
      if ( v14 != 7 )
      {
        --v13;
        v18 = v73 & 0x1FFFF;
        *(_QWORD *)&v72 = *(_QWORD *)(v67 + 24);
        v24 = 0;
        v25 = 1040;
        HIDWORD(v72) = 1040;
        v73 = 0;
        v14 = 7;
        goto LABEL_48;
      }
      v25 = 7200;
      v14 = 9;
      *(_QWORD *)&v72 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(*(_QWORD *)(v3 + 56) + 99LL)) & 3;
    }
    HIDWORD(v72) = v25;
    v24 = v73;
LABEL_48:
    ++*(_DWORD *)(a1 + 88);
    if ( v14 == 7 )
    {
      if ( v24 && v23 )
      {
        v14 = 8;
        v18 ^= (v18 ^ ((v18 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
      }
      else
      {
        v25 |= 2u;
        v13 = 1;
        HIDWORD(v72) = v25;
      }
    }
    else if ( v14 == 5 && !v13 )
    {
      v13 = *(_DWORD *)(a1 + 84) - *(_DWORD *)(a1 + 88);
      if ( *(_DWORD *)(a1 + 80) < v13 )
        v13 = *(_DWORD *)(a1 + 80);
    }
    if ( v20 != (_OWORD *)v69 )
      HIDWORD(v72) = ((unsigned __int8)v25 ^ (unsigned __int8)*(_DWORD *)(v3 + 192)) & 1 ^ v25;
    v16 = v68;
    DWORD2(v72) = v18 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 104) << 22);
    *v20 = v72;
    v36 = (unsigned int)++*(_DWORD *)(v3 + 184);
  }
  while ( v14 != 9 );
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x2000000000000LL) != 0
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 120LL) == 6 )
  {
    v37 = *(_DWORD *)(v3 + 192) & 1;
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    HIDWORD(v72) = v37 | 0x2000;
    v38 = v72;
    v39 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v39 + 16 * v36) = v38;
    v40 = 2LL * (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
    v41 = v72;
    v42 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v42 + 8 * v40) = v41;
    v43 = 2LL * (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
    v44 = v72;
    v45 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v45 + 8 * v43) = v44;
    v46 = 2LL * (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
    v47 = v72;
    v48 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v48 + 8 * v46) = v47;
    v49 = 2LL * (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
    v50 = v72;
    v51 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v51 + 8 * v49) = v50;
    v52 = 2LL * (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = *(_DWORD *)(v3 + 192) & 1 | 0x2000;
    v53 = v72;
    v54 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v54 + 8 * v52) = v53;
    LODWORD(v54) = *(_DWORD *)(v3 + 192);
    v55 = (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = v54 & 1 | 0x2000;
    *(_OWORD *)(*(_QWORD *)(v3 + 176) + 16 * v55) = v72;
    LODWORD(v54) = *(_DWORD *)(v3 + 192);
    v56 = (unsigned int)++*(_DWORD *)(v3 + 184);
    HIDWORD(v72) = v54 & 1 | 0x2000;
    v57 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)&v72 = 0LL;
    DWORD2(v72) = 0;
    *(_OWORD *)(v57 + 16 * v56) = v72;
    ++*(_DWORD *)(v3 + 184);
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 184);
  v58 = (_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184));
  *v58 = 0LL;
  v58[1] = 0LL;
  v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  v60 = v71;
  *(_BYTE *)(v3 + 96) = v59;
  ++*(_DWORD *)(v60 + 104);
  *(_DWORD *)(v60 + 96) += *(_DWORD *)(a1 + 40);
  v61 = *(_BYTE *)(v3 + 96);
  ++*(_DWORD *)(v3 + 300);
  *(_DWORD *)(v3 + 276) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v61);
  *(_BYTE *)(v69 + 12) ^= 1u;
  _InterlockedOr(v64, 0);
  v62 = *(_QWORD *)(v3 + 56);
  result = *(_QWORD *)(v62 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v62 + 144);
  _InterlockedOr(v64, 0);
  return result;
}
