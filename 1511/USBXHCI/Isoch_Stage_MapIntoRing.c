/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C000E5A0
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C002AF50 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0001BA0 (Isoch_Stage_FreeScatterGatherList.c)
 *     Controller_GetFrameNumber @ 0x1C0002CD8 (Controller_GetFrameNumber.c)
 *     TR_CalculateTDSize @ 0x1C0004038 (TR_CalculateTDSize.c)
 *     Isoch_GetPacketLength @ 0x1C00041CC (Isoch_GetPacketLength.c)
 *     TR_GetPacketCount @ 0x1C000425C (TR_GetPacketCount.c)
 *     Isoch_InsertLinkTrb @ 0x1C002B214 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_Release @ 0x1C002BE8C (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C002D1B0 (WPP_RECORDER_SF_DDqqDDD.c)
 */

__int64 __fastcall Isoch_Stage_MapIntoRing(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rbx
  unsigned int v4; // r12d
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  int FrameNumber; // r8d
  KIRQL v13; // dl
  __int64 v14; // rcx
  __int64 result; // rax
  int v16; // r15d
  char v17; // cl
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // r9
  int v23; // edi
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // ebp
  __int64 v27; // r14
  bool v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edx
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // r11d
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r15d
  char v39; // r10
  unsigned int v40; // ebp
  unsigned int v41; // edx
  __int64 v42; // r9
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  bool v45; // zf
  unsigned int v46; // ebp
  __int16 v47; // r15
  __int64 v48; // rax
  int v49; // r15d
  unsigned int v50; // r9d
  unsigned int v51; // r8d
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // edx
  unsigned int v56; // eax
  unsigned int v57; // eax
  _OWORD *v58; // rsi
  _DWORD *v59; // r10
  int v60; // eax
  __int64 v61; // r8
  int v62; // ecx
  int v63; // ecx
  int v64; // eax
  signed __int32 v65[10]; // [rsp+0h] [rbp-118h] BYREF
  int v66; // [rsp+60h] [rbp-B8h]
  unsigned int v67; // [rsp+64h] [rbp-B4h]
  unsigned int PacketLength; // [rsp+68h] [rbp-B0h]
  unsigned int v69; // [rsp+6Ch] [rbp-ACh]
  int v70; // [rsp+70h] [rbp-A8h]
  __int64 v71; // [rsp+78h] [rbp-A0h]
  __int128 v72; // [rsp+80h] [rbp-98h]
  unsigned int v73; // [rsp+90h] [rbp-88h]
  unsigned int v74; // [rsp+94h] [rbp-84h]
  unsigned int v75; // [rsp+98h] [rbp-80h]
  int v76; // [rsp+9Ch] [rbp-7Ch]
  unsigned int v77; // [rsp+A0h] [rbp-78h]
  int PacketCount; // [rsp+A4h] [rbp-74h]
  __int64 v79; // [rsp+A8h] [rbp-70h]
  _DWORD *v80; // [rsp+B0h] [rbp-68h]
  __int64 v81; // [rsp+B8h] [rbp-60h]
  __int64 v82; // [rsp+C0h] [rbp-58h]
  char v84; // [rsp+128h] [rbp+10h]
  bool v85; // [rsp+130h] [rbp+18h]
  bool v86; // [rsp+138h] [rbp+20h]

  v1 = *(_QWORD **)a1;
  v80 = v1;
  PacketCount = 0;
  v84 = 0;
  v3 = v1[5];
  v81 = v1[4];
  v85 = (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x200000000LL) == 0;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 40);
  LODWORD(v6) = 0;
  v79 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(v79 + 16);
  v67 = *(_DWORD *)(v79 + 24);
  v71 = v7;
  v77 = 0;
  v70 = *(_DWORD *)(v3 + 184);
  v8 = *(_QWORD *)(v3 + 56);
  v69 = v5;
  v66 = 0;
  v76 = 0;
  v75 = *(_DWORD *)(v8 + 152);
  v73 = 0;
  v74 = 0;
  PacketLength = Isoch_GetPacketLength((__int64)v1, v5);
  if ( (*(_QWORD *)(v10 + 232) & 0x20000000000LL) != 0
    && (v76 = *(_DWORD *)(v11 + 128) + v5 / *(_DWORD *)(v3 + 308),
        FrameNumber = Controller_GetFrameNumber(v10, 2),
        FrameNumber - v76 >= 0) )
  {
    WPP_RECORDER_SF_DDqqDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
      FrameNumber,
      v9,
      v65[8],
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
      v1[3],
      a1,
      FrameNumber,
      v5,
      v76);
    Isoch_Stage_FreeScatterGatherList(v3, (_QWORD *)a1);
    *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
    Isoch_Stage_Release(v3, a1);
    v13 = *(_BYTE *)(v3 + 96);
    *(_DWORD *)(v3 + 280) |= 0x10u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v13);
    v14 = *(_QWORD *)(v3 + 56);
    result = *(_QWORD *)(v14 + 16);
    **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v14 + 144);
    _InterlockedOr(v65, 0);
    *(_DWORD *)(v3 + 304) = 1;
  }
  else
  {
    v57 = *(_DWORD *)(v3 + 184);
    v27 = 0LL;
    v26 = 4;
    if ( v57 >= *(_DWORD *)(v3 + 188) )
    {
      LOBYTE(v9) = 1;
      v27 = *(_QWORD *)(v3 + 176) + 16LL * v57;
      Isoch_InsertLinkTrb(v3, a1, 4LL, v9);
      v70 = 0;
    }
    v28 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 80LL) + 108LL) & 0x50) == 80;
    v86 = v28;
    while ( 2 )
    {
      v34 = *(_DWORD *)(v3 + 184);
      v16 = 0;
      v82 = v34;
      v35 = 0;
      v58 = (_OWORD *)(*(_QWORD *)(v3 + 176) + 16LL * v34);
      *(_QWORD *)&v72 = 0LL;
      HIDWORD(v72) = 0;
      if ( !v27 )
        v27 = (__int64)v58;
      v39 = 0;
      switch ( v26 )
      {
        case 4u:
        case 5u:
          v45 = v26 == 4;
          v46 = PacketLength;
          if ( v45 )
          {
            v47 = *(_WORD *)(v81 + 128) + v69 / *(_DWORD *)(v3 + 308);
            v76 = *(_DWORD *)(v81 + 128) + v69 / *(_DWORD *)(v3 + 308);
            v48 = *(_QWORD *)(v3 + 56);
            v49 = ((v47 & 0x7FF) << 20) | 0x1400;
            v50 = *(_WORD *)(v48 + 100) & 0x7FF;
            v45 = !v28;
            v51 = *(_DWORD *)(v48 + 148);
            v52 = PacketLength - 1;
            if ( v45 )
            {
              v56 = (v50 + v52) / v50;
              if ( !v56 )
                v56 = 1;
              v49 ^= ((unsigned __int16)v49 ^ (unsigned __int16)(((unsigned __int16)((v51 + v56) / (v51 + 1)) - 1) << 7)) & 0x180;
            }
            else
            {
              v53 = (v50 + v52) / v50;
              if ( !v53 )
                v53 = 1;
              v35 = (((unsigned __int8)((v51 + v53) / (v51 + 1)) - 1) & 0x1F) << 17;
            }
            v54 = (v50 + PacketLength - 1) / v50;
            if ( !v54 )
              v54 = 1;
            v55 = v54 % (v51 + 1);
            if ( v55 )
              v51 = v55 - 1;
            v38 = (v49 ^ (v51 << 16)) & 0xF0000 ^ v49;
            PacketCount = TR_GetPacketCount(v3, PacketLength);
          }
          else
          {
            v38 = 1024;
          }
          if ( v67 > v46 )
          {
            *(_QWORD *)&v72 = v71;
            v35 ^= (v46 ^ v35) & 0x1FFFF;
            v67 -= v46;
            v71 += v46;
            v31 = v66;
            if ( v66 + (v35 & 0x1FFFFu) > v75 )
              v35 ^= (v35 ^ (v75 - v66)) & 0x1FFFF;
            v26 = 6;
          }
          else
          {
            v40 = v46 - v67;
            v6 = (unsigned int)(v6 + 1);
            *(_QWORD *)&v72 = v71;
            PacketLength = v40;
            v41 = *(_DWORD *)v79;
            v35 ^= (v67 ^ v35) & 0x1FFFF;
            if ( (unsigned int)v6 >= *(_DWORD *)v79 )
            {
              v42 = 0LL;
              v43 = 0;
            }
            else
            {
              v42 = *(_QWORD *)(v79 + 24 * v6 + 16);
              v43 = *(_DWORD *)(v79 + 24 * v6 + 24);
            }
            v67 = v43;
            v71 = v42;
            if ( v66 + (v35 & 0x1FFFFu) > v75 )
            {
              v35 ^= (v35 ^ (v75 - v66)) & 0x1FFFF;
              if ( v40 )
              {
                while ( v43 <= v40 )
                {
                  v40 -= v43;
                  v6 = (unsigned int)(v6 + 1);
                  PacketLength = v40;
                  if ( (unsigned int)v6 >= v41 )
                  {
                    v71 = 0LL;
                    v67 = 0;
                    goto LABEL_54;
                  }
                  v42 = *(_QWORD *)(v79 + 24 * v6 + 16);
                  v43 = *(_DWORD *)(v79 + 24 * v6 + 24);
                  v71 = v42;
                  v67 = v43;
                  if ( !v40 )
                    goto LABEL_36;
                }
                v67 = v43 - v40;
                v71 = v40 + v42;
                PacketLength = 0;
              }
LABEL_36:
              v31 = v66;
              v26 = (v69 == *(_DWORD *)(a1 + 44)) + 6;
              goto LABEL_37;
            }
LABEL_54:
            if ( !v40 )
              goto LABEL_36;
            v31 = v66;
            v26 = 5;
          }
LABEL_37:
          v32 = (v35 & 0x1FFFF) + v31;
          v66 = v32;
          if ( !v39 )
          {
            v33 = TR_CalculateTDSize(v3, PacketCount, v32, v26 - 6 <= 1);
            v34 = v82;
            v35 ^= (v35 ^ (v33 << 17)) & 0x3E0000;
          }
          v36 = *(_QWORD *)(v3 + 40);
          v16 = v38 | 0x10;
          HIDWORD(v72) = v16;
          if ( (*(_QWORD *)(v36 + 232) & 0x800000000000LL) == 0 )
            goto LABEL_4;
          v37 = *(_QWORD *)(v3 + 48);
          if ( *(_DWORD *)(v37 + 20) != 1 || !*(_DWORD *)(v37 + 40) )
            goto LABEL_4;
          if ( v26 == 6 )
          {
            if ( *(_DWORD *)(v3 + 188) - v34 - 1 >= *(_DWORD *)(v3 + 384) )
              goto LABEL_5;
            v26 = 10;
          }
          else
          {
            if ( v26 != 7 )
            {
LABEL_4:
              if ( v26 - 6 > 1 )
                goto LABEL_6;
LABEL_5:
              v16 |= 2u;
              HIDWORD(v72) = v16;
              goto LABEL_6;
            }
            v26 = 11;
          }
LABEL_6:
          v17 = v84;
LABEL_7:
          if ( v58 != (_OWORD *)v27 )
            HIDWORD(v72) = ((unsigned __int8)v16 ^ (unsigned __int8)*(_DWORD *)(v3 + 192)) & 1 ^ v16;
          ++v4;
          DWORD2(v72) = v35 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 104) << 22);
          *v58 = v72;
          ++*(_DWORD *)(v3 + 184);
          if ( v17 )
          {
            Isoch_InsertLinkTrb(v3, a1, 5LL, 0LL);
            v84 = 0;
          }
          if ( v26 != 9 && v26 != 4 )
          {
            v18 = a1;
            v20 = v79;
LABEL_19:
            v21 = v73;
            v22 = v74;
            v23 = v70;
            goto LABEL_20;
          }
          v18 = a1;
          *(_DWORD *)(a1 + 104) = *(_DWORD *)(v3 + 184);
          v19 = (_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184));
          *v19 = 0LL;
          v19[1] = 0LL;
          if ( v26 != 9 && !*(_BYTE *)(v3 + 285) )
            goto LABEL_29;
          *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
          if ( v26 == 9 )
          {
            v59 = v80;
            v60 = v69 - v80[23];
            ++v80[25];
            v61 = *((_QWORD *)v59 + 4);
            v59[22] = v60;
            v62 = *(_DWORD *)(a1 + 44);
            if ( v62 == v59[20] - 1 )
              v63 = v59[16];
            else
              v63 = *(_DWORD *)(v61 + 12LL * (unsigned int)(v62 + 1) + 140);
            v64 = v76;
            v59[18] += v63 - *(_DWORD *)(v61 + 12LL * *(unsigned int *)(a1 + 40) + 140);
            ++*(_DWORD *)(v3 + 328);
            *(_DWORD *)(v3 + 280) |= 0x20u;
            *(_DWORD *)(v3 + 316) = v64;
          }
          else if ( !*(_BYTE *)(v3 + 285) )
          {
            goto LABEL_16;
          }
          *(_DWORD *)(v3 + 280) |= 0x11u;
LABEL_16:
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
LABEL_29:
          *(_BYTE *)(v27 + 12) ^= 1u;
          _InterlockedOr(v65, 0);
          v27 = 0LL;
          if ( *(_BYTE *)(v3 + 285) )
          {
            v30 = *(_QWORD *)(v3 + 56);
            *(_BYTE *)(v3 + 285) = 0;
            **(_DWORD **)(*(_QWORD *)(v30 + 16) + 160LL) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v30 + 144);
            _InterlockedOr(v65, 0);
          }
          v20 = v79;
          if ( v26 == 9 )
            goto LABEL_19;
          v21 = v6;
          v73 = v6;
          if ( (unsigned int)v6 < *(_DWORD *)v79 )
            v77 = v71 - *(_DWORD *)(v79 + 24LL * (unsigned int)v6 + 16);
          v23 = *(_DWORD *)(v3 + 184);
          v22 = v4;
          v70 = v23;
          v74 = v4;
LABEL_20:
          if ( *(_DWORD *)(v3 + 184) == *(_DWORD *)(v3 + 188) )
          {
            if ( v26 == 9 )
              goto LABEL_27;
            if ( v26 != 4 )
            {
              v24 = v21;
              LODWORD(v6) = v21;
              v25 = v77;
              v4 = v22;
              *(_DWORD *)(v3 + 184) = v23;
              v66 = 0;
              v67 = *(_DWORD *)(v20 + 24 * v24 + 24) - v25;
              v71 = *(_QWORD *)(v20 + 24 * v24 + 16) + v25;
              PacketLength = Isoch_GetPacketLength((__int64)v80, v69);
              v26 = 4;
            }
            LOBYTE(v22) = 1;
            v27 = *(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184);
            if ( (unsigned __int8)Isoch_InsertLinkTrb(v3, v18, v26, v22) )
              v70 = 0;
          }
          v28 = v86;
          if ( v26 != 9 )
            continue;
LABEL_27:
          v29 = *(_QWORD *)(v3 + 56);
          result = *(_QWORD *)(v29 + 16);
          **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v29 + 144);
          _InterlockedOr(v65, 0);
          break;
        case 6u:
        case 7u:
          v16 = 7200;
          *(_QWORD *)&v72 = 1LL;
          WORD1(v72) = v69;
          v44 = v69 + 1;
          HIDWORD(v72) = 7200;
          DWORD1(v72) = *(_DWORD *)(v81 + 128);
          ++v69;
          if ( v26 == 7 || v44 == v80[20] )
          {
            v26 = 9;
          }
          else
          {
            if ( (v44 & 0x7F) != 0 )
            {
              v16 = (v85 << 9) | 0x1C20;
              HIDWORD(v72) = v16;
            }
            v66 = 0;
            PacketLength = Isoch_GetPacketLength((__int64)v80, v44);
            v26 = 4;
          }
          goto LABEL_6;
        case 0xAu:
          v16 = 1042;
          *(_QWORD *)&v72 = 0LL;
          v17 = 1;
          HIDWORD(v72) = 1042;
          v84 = 1;
          v26 = 6;
          goto LABEL_7;
        case 0xBu:
          v16 = 1042;
          *(_QWORD *)&v72 = 0LL;
          v17 = 1;
          HIDWORD(v72) = 1042;
          v84 = 1;
          v26 = 7;
          goto LABEL_7;
        default:
          goto LABEL_6;
      }
      break;
    }
  }
  return result;
}
