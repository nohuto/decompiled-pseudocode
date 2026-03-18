/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C00270E8
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0024B20 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0014E4C (Controller_GetFrameNumber.c)
 *     TR_CalculateTDSize @ 0x1C002012C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C00206F4 (TR_GetPacketCount.c)
 *     Isoch_GetPacketLength @ 0x1C0024DE4 (Isoch_GetPacketLength.c)
 *     Isoch_InsertLinkTrb @ 0x1C0024E28 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0027064 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Stage_Release @ 0x1C00279C8 (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C0029590 (WPP_RECORDER_SF_DDqqDDD.c)
 */

__int64 __fastcall Isoch_Stage_MapIntoRing(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // bl
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned int PacketLength; // r13d
  int FrameNumber; // r8d
  int v14; // r9d
  KIRQL v15; // dl
  __int64 result; // rax
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r12
  int v20; // esi
  bool v21; // r8
  int v22; // r15d
  __int64 v23; // r10
  int v24; // r14d
  __int64 v25; // r10
  char v26; // r10
  int v27; // r10d
  char v28; // dl
  unsigned int v29; // ecx
  unsigned int v30; // r11d
  __int64 v31; // rax
  int v32; // r14d
  unsigned int v33; // r9d
  bool v34; // zf
  int v35; // r8d
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // r14d
  __int64 v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // r8
  unsigned int v46; // ecx
  int v47; // r11d
  unsigned int v48; // r11d
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // eax
  _QWORD *v52; // rax
  _DWORD *v53; // r10
  int v54; // eax
  __int64 v55; // r8
  int v56; // ecx
  int v57; // ecx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // r8d
  int v62; // r9d
  int v63; // r11d
  __int64 v64; // rax
  char inserted; // al
  int v66; // r11d
  __int64 v67; // rcx
  signed __int32 v68[10]; // [rsp+0h] [rbp-B9h] BYREF
  int v69; // [rsp+60h] [rbp-59h]
  unsigned int v70; // [rsp+64h] [rbp-55h]
  int v71; // [rsp+68h] [rbp-51h]
  unsigned int v72; // [rsp+6Ch] [rbp-4Dh]
  __int64 v73; // [rsp+70h] [rbp-49h]
  int v74; // [rsp+78h] [rbp-41h]
  __int128 v75; // [rsp+80h] [rbp-39h]
  int v76; // [rsp+90h] [rbp-29h]
  unsigned int v77; // [rsp+94h] [rbp-25h]
  unsigned int v78; // [rsp+98h] [rbp-21h]
  int v79; // [rsp+9Ch] [rbp-1Dh]
  unsigned int v80; // [rsp+A0h] [rbp-19h]
  int PacketCount; // [rsp+A4h] [rbp-15h]
  __int64 v82; // [rsp+A8h] [rbp-11h]
  _DWORD *v83; // [rsp+B0h] [rbp-9h]
  __int64 v84; // [rsp+B8h] [rbp-1h]
  __int64 v85; // [rsp+C0h] [rbp+7h]
  _OWORD *v86; // [rsp+C8h] [rbp+Fh]
  char v88; // [rsp+128h] [rbp+6Fh]
  bool v89; // [rsp+130h] [rbp+77h]
  unsigned int v90; // [rsp+138h] [rbp+7Fh]

  v1 = *(_QWORD **)a1;
  v3 = *(_DWORD *)(a1 + 40);
  v82 = *(_QWORD *)(a1 + 72);
  v4 = v1[5];
  v5 = v1[4];
  v6 = *(_QWORD *)(v4 + 40);
  v90 = *(_DWORD *)(v82 + 24);
  v73 = *(_QWORD *)(v82 + 16);
  v80 = 0;
  v7 = *(_QWORD *)(v6 + 232);
  v71 = *(_DWORD *)(v4 + 184);
  v8 = *(_QWORD *)(v4 + 56);
  v83 = v1;
  v9 = (v7 & 0x200000000LL) == 0;
  v84 = v5;
  LODWORD(v8) = *(_DWORD *)(v8 + 152);
  PacketCount = 0;
  v88 = 0;
  v70 = v3;
  v74 = 0;
  v72 = 0;
  v69 = 0;
  v79 = 0;
  v77 = 0;
  v76 = 0;
  v78 = v8;
  PacketLength = Isoch_GetPacketLength((__int64)v1, v3);
  if ( (*(_QWORD *)(v10 + 232) & 0x20000000000LL) != 0 )
  {
    v79 = *(_DWORD *)(v11 + 128) + v3 / *(_DWORD *)(v4 + 308);
    FrameNumber = Controller_GetFrameNumber(v10, 2);
    if ( FrameNumber - v79 >= 0 )
    {
      WPP_RECORDER_SF_DDqqDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
        FrameNumber,
        v14,
        v68[8],
        *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
        v1[3],
        a1,
        FrameNumber,
        v3,
        v79);
      Isoch_Stage_FreeScatterGatherList(v4, (_QWORD *)a1);
      *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
      Isoch_Stage_Release(v4, a1);
      v15 = *(_BYTE *)(v4 + 96);
      *(_DWORD *)(v4 + 280) |= 0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), v15);
      **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL) + 160LL) = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL);
      _InterlockedOr(v68, 0);
      result = 1LL;
      *(_DWORD *)(v4 + 304) = 1;
      return result;
    }
  }
  v17 = *(_DWORD *)(v4 + 184);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 4;
  if ( v17 >= *(_DWORD *)(v4 + 188) )
  {
    v19 = *(_QWORD *)(v4 + 176) + 16LL * v17;
    Isoch_InsertLinkTrb(v4, a1, 4, 1);
    v18 = 0LL;
    v71 = 0;
  }
  v21 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 80LL) + 108LL) & 0x50) == 80;
  v89 = v21;
  do
  {
    v22 = 0;
    v23 = *(unsigned int *)(v4 + 184);
    v85 = v23;
    v24 = 0;
    v25 = *(_QWORD *)(v4 + 176) + 16 * v23;
    v86 = (_OWORD *)v25;
    *(_QWORD *)&v75 = 0LL;
    if ( !v19 )
      v19 = v25;
    HIDWORD(v75) = 0;
    v26 = 0;
    if ( v20 < 4 )
    {
      v27 = 1;
      goto LABEL_70;
    }
    if ( v20 > 5 )
    {
      v27 = 1;
      if ( v20 <= 7 )
      {
        v24 = 7200;
        *(_QWORD *)&v75 = 1LL;
        WORD1(v75) = v70;
        v29 = v70 + 1;
        HIDWORD(v75) = 7200;
        DWORD1(v75) = *(_DWORD *)(v84 + 128);
        ++v70;
        if ( v20 == 7 || v29 == v83[20] )
        {
          v20 = 9;
        }
        else
        {
          if ( (v29 & 0x7F) != 0 )
          {
            v24 = (v9 << 9) | 0x1C20;
            HIDWORD(v75) = v24;
          }
          v69 = 0;
          PacketLength = Isoch_GetPacketLength((__int64)v83, v29);
          v18 = 0LL;
          v20 = 4;
        }
      }
      else
      {
        if ( v20 == 10 )
        {
          v24 = 1042;
          *(_QWORD *)&v75 = 0LL;
          v28 = 1;
          HIDWORD(v75) = 1042;
          v88 = 1;
          v20 = 6;
          goto LABEL_71;
        }
        if ( v20 == 11 )
        {
          v24 = 1042;
          *(_QWORD *)&v75 = 0LL;
          v28 = 1;
          HIDWORD(v75) = 1042;
          v88 = 1;
          v20 = 7;
          goto LABEL_71;
        }
      }
      goto LABEL_70;
    }
    v30 = v70;
    if ( v20 == 4 )
    {
      v79 = *(_DWORD *)(v84 + 128) + v70 / *(_DWORD *)(v4 + 308);
      v31 = *(_QWORD *)(v4 + 56);
      v32 = ((v79 & 0x7FF) << 20) | 0x1400;
      v33 = *(_WORD *)(v31 + 100) & 0x7FF;
      v34 = !v21;
      v35 = *(_DWORD *)(v31 + 148);
      v36 = v33 - 1;
      v37 = v35 + 1;
      if ( v34 )
      {
        v39 = (PacketLength + v36) / v33;
        if ( !v39 )
          v39 = 1;
        v32 = ((unsigned __int16)(((unsigned __int16)((v35 + v39) / v37) - 1) << 7) ^ 0x1400) & 0x180 ^ (((v79 & 0x7FF) << 20) | 0x1400);
      }
      else
      {
        v38 = (PacketLength + v36) / v33;
        if ( !v38 )
          v38 = 1;
        v22 = (((unsigned __int8)((v35 + v38) / v37) - 1) & 0x1F) << 17;
      }
      v40 = v35 + 1;
      v41 = (v33 + PacketLength - 1) / v33;
      if ( !v41 )
        v41 = 1;
      if ( v41 % v40 )
        v35 = v41 % v40 - 1;
      v42 = (v32 ^ (v35 << 16)) & 0xF0000 ^ v32;
      PacketCount = TR_GetPacketCount(v4, PacketLength);
    }
    else
    {
      v42 = 1024;
    }
    if ( v90 > PacketLength )
    {
      v47 = v69;
      *(_QWORD *)&v75 = v73;
      v22 ^= (PacketLength ^ v22) & 0x1FFFF;
      v90 -= PacketLength;
      v73 += PacketLength;
      if ( v69 + (v22 & 0x1FFFFu) > v78 )
        v22 ^= (v22 ^ (v78 - v69)) & 0x1FFFF;
      v20 = 6;
      goto LABEL_57;
    }
    PacketLength -= v90;
    v43 = v72 + 1;
    *(_QWORD *)&v75 = v73;
    v72 = v43;
    v44 = *(_DWORD *)v82;
    v22 ^= (v90 ^ v22) & 0x1FFFF;
    if ( (unsigned int)v43 >= *(_DWORD *)v82 )
    {
      v45 = 0LL;
      v73 = 0LL;
      v46 = 0;
    }
    else
    {
      v45 = *(_QWORD *)(v82 + 24 * v43 + 16);
      v46 = *(_DWORD *)(v82 + 24 * v43 + 24);
      v73 = v45;
    }
    v90 = v46;
    if ( v69 + (v22 & 0x1FFFFu) <= v78 )
    {
LABEL_50:
      if ( PacketLength )
      {
        v20 = 5;
        goto LABEL_53;
      }
    }
    else
    {
      v22 ^= (v22 ^ (v78 - v69)) & 0x1FFFF;
      while ( PacketLength )
      {
        if ( v46 > PacketLength )
        {
          v46 -= PacketLength;
          v45 += PacketLength;
          PacketLength = 0;
        }
        else
        {
          v43 = (unsigned int)(v43 + 1);
          PacketLength -= v46;
          v72 = v43;
          if ( (unsigned int)v43 >= v44 )
          {
            v73 = 0LL;
            v90 = 0;
            goto LABEL_50;
          }
          v45 = *(_QWORD *)(v82 + 24 * v43 + 16);
          v46 = *(_DWORD *)(v82 + 24 * v43 + 24);
        }
        v90 = v46;
        v73 = v45;
      }
    }
    v20 = 7 - (*(_DWORD *)(a1 + 44) != v30);
LABEL_53:
    v47 = v69;
    v18 = 0LL;
LABEL_57:
    v48 = (v22 & 0x1FFFF) + v47;
    v69 = v48;
    if ( !v26 )
    {
      v22 ^= (v22 ^ ((unsigned int)TR_CalculateTDSize(v4, PacketCount, v48, (unsigned int)(v20 - 6) <= 1) << 17)) & 0x3E0000;
      v18 = 0LL;
    }
    v49 = *(_QWORD *)(v4 + 40);
    v24 = v42 | 0x10;
    HIDWORD(v75) = v24;
    v27 = 1;
    if ( (*(_QWORD *)(v49 + 232) & 0x800000000000LL) != 0 )
    {
      v50 = *(_QWORD *)(v4 + 48);
      if ( *(_DWORD *)(v50 + 20) == 1 && *(_DWORD *)(v50 + 40) != (_DWORD)v18 )
      {
        if ( v20 == 6 )
        {
          if ( (unsigned int)(*(_DWORD *)(v4 + 188) - v85 - 1) >= *(_DWORD *)(v4 + 384) )
            goto LABEL_68;
          v20 = 10;
        }
        if ( v20 == 7 )
          v20 = 11;
      }
    }
    if ( (unsigned int)(v20 - 6) <= 1 )
    {
LABEL_68:
      v24 |= 2u;
      HIDWORD(v75) = v24;
    }
LABEL_70:
    v28 = v88;
LABEL_71:
    if ( v86 != (_OWORD *)v19 )
      HIDWORD(v75) = v27 & (v24 ^ *(_DWORD *)(v4 + 192)) ^ v24;
    v51 = *(unsigned __int16 *)(v4 + 104);
    v74 += v27;
    DWORD2(v75) = v22 & 0x3FFFFF | (v51 << 22);
    *v86 = v75;
    *(_DWORD *)(v4 + 184) += v27;
    if ( v28 )
    {
      Isoch_InsertLinkTrb(v4, a1, 5, 0);
      v18 = 0LL;
      v88 = 0;
      LOBYTE(v27) = 1;
    }
    if ( v20 != 9 && v20 != 4 )
    {
      v60 = v82;
LABEL_94:
      v62 = v76;
      v61 = v77;
      v63 = v71;
      goto LABEL_95;
    }
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(v4 + 184);
    v52 = (_QWORD *)(*(_QWORD *)(v4 + 176) + 16LL * *(unsigned int *)(v4 + 184));
    *v52 = 0LL;
    v52[1] = 0LL;
    if ( v20 == 9 || *(_BYTE *)(v4 + 285) != (_BYTE)v18 )
    {
      *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
      if ( v20 == 9 )
      {
        v53 = v83;
        v54 = v70 - v83[23];
        ++v83[25];
        v55 = *((_QWORD *)v53 + 4);
        v53[22] = v54;
        v56 = *(_DWORD *)(a1 + 44);
        if ( v56 == v53[20] - 1 )
          v57 = v53[16];
        else
          v57 = *(_DWORD *)(v55 + 12LL * (unsigned int)(v56 + 1) + 140);
        v58 = v79;
        v53[18] += v57 - *(_DWORD *)(v55 + 12LL * *(unsigned int *)(a1 + 40) + 140);
        ++*(_DWORD *)(v4 + 328);
        *(_DWORD *)(v4 + 280) |= 0x20u;
        *(_DWORD *)(v4 + 316) = v58;
LABEL_85:
        *(_DWORD *)(v4 + 280) |= 0x11u;
      }
      else if ( *(_BYTE *)(v4 + 285) )
      {
        goto LABEL_85;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
      v18 = 0LL;
      LOBYTE(v27) = 1;
    }
    *(_BYTE *)(v19 + 12) ^= v27;
    _InterlockedOr(v68, v18);
    v19 = v18;
    if ( *(_BYTE *)(v4 + 285) != (_BYTE)v18 )
    {
      v59 = *(_QWORD *)(v4 + 56);
      *(_BYTE *)(v4 + 285) = v18;
      **(_DWORD **)(*(_QWORD *)(v59 + 16) + 160LL) = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v59 + 144);
      _InterlockedOr(v68, v18);
    }
    v60 = v82;
    if ( v20 == 9 )
      goto LABEL_94;
    v61 = v72;
    v77 = v72;
    if ( v72 < *(_DWORD *)v82 )
      v80 = v73 - *(_DWORD *)(v82 + 24LL * v72 + 16);
    v62 = v74;
    v63 = *(_DWORD *)(v4 + 184);
    v71 = v63;
    v76 = v74;
LABEL_95:
    if ( *(_DWORD *)(v4 + 184) == *(_DWORD *)(v4 + 188) )
    {
      if ( v20 == 9 )
        break;
      if ( v20 != 4 )
      {
        *(_DWORD *)(v4 + 184) = v63;
        v72 = v61;
        v74 = v62;
        v90 = *(_DWORD *)(v60 + 24LL * v61 + 24) - v80;
        v64 = *(_QWORD *)(v60 + 24LL * v61 + 16) + v80;
        v69 = 0;
        v73 = v64;
        PacketLength = Isoch_GetPacketLength((__int64)v83, v70);
        v20 = 4;
      }
      v19 = *(_QWORD *)(v4 + 176) + 16LL * *(unsigned int *)(v4 + 184);
      inserted = Isoch_InsertLinkTrb(v4, a1, v20, v27);
      v66 = v71;
      v18 = 0LL;
      if ( inserted )
        v66 = 0;
      v71 = v66;
    }
    else
    {
      v18 = 0LL;
    }
    v21 = v89;
  }
  while ( v20 != 9 );
  v67 = *(_QWORD *)(v4 + 56);
  result = *(_QWORD *)(v67 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v67 + 144);
  _InterlockedOr(v68, 0);
  return result;
}
