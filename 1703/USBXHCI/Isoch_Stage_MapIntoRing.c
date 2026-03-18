/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C000EDE0
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0027D80 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     TR_CalculateTDSize @ 0x1C000194C (TR_CalculateTDSize.c)
 *     Isoch_GetPacketLength @ 0x1C0001B20 (Isoch_GetPacketLength.c)
 *     TR_GetPacketCount @ 0x1C0001BBC (TR_GetPacketCount.c)
 *     Controller_GetFrameNumber @ 0x1C0001D6C (Controller_GetFrameNumber.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0003048 (Isoch_Stage_FreeScatterGatherList.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     Isoch_InsertLinkTrb @ 0x1C0028044 (Isoch_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C002A154 (WPP_RECORDER_SF_DDqqDDD.c)
 */

__int64 __fastcall Isoch_Stage_MapIntoRing(__int64 *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbx
  __int128 v4; // xmm0
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  int FrameNumber; // r8d
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // r12
  int v14; // r8d
  unsigned int v15; // r13d
  _OWORD *v16; // r15
  unsigned int v17; // esi
  char v18; // cl
  int v19; // eax
  unsigned int v20; // esi
  __int64 *v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r8d
  int v26; // r15d
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 result; // rax
  unsigned int v31; // r11d
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rdi
  unsigned int v35; // r8d
  __int64 v36; // rcx
  int v37; // edx
  unsigned int v38; // edx
  __int64 v39; // rcx
  unsigned int v40; // r14d
  unsigned int v41; // esi
  int v42; // eax
  unsigned int v43; // esi
  __int64 v44; // rax
  unsigned int v45; // r14d
  unsigned int v46; // r9d
  bool v47; // zf
  unsigned int v48; // r8d
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // r14d
  char v54; // r10
  unsigned int v55; // r11d
  unsigned int v56; // eax
  __int64 v57; // rsi
  KIRQL v58; // dl
  __int64 v59; // rcx
  __int64 v60; // rax
  __int128 v61; // xmm1
  __int64 v62; // rax
  __int64 v63; // rax
  _DWORD *v64; // r10
  int v65; // eax
  __int64 v66; // r8
  int v67; // ecx
  int v68; // ecx
  int v69; // eax
  signed __int32 v70[10]; // [rsp+0h] [rbp-100h] BYREF
  int v71; // [rsp+60h] [rbp-A0h]
  unsigned int PacketLength; // [rsp+64h] [rbp-9Ch]
  unsigned int v73; // [rsp+68h] [rbp-98h]
  __int128 v74; // [rsp+70h] [rbp-90h]
  int v75; // [rsp+80h] [rbp-80h]
  unsigned int v76; // [rsp+84h] [rbp-7Ch]
  __int64 v77; // [rsp+88h] [rbp-78h]
  int v78; // [rsp+90h] [rbp-70h]
  unsigned int v79; // [rsp+94h] [rbp-6Ch]
  int v80; // [rsp+98h] [rbp-68h]
  unsigned int v81; // [rsp+9Ch] [rbp-64h]
  unsigned int v82; // [rsp+A0h] [rbp-60h]
  int PacketCount; // [rsp+A4h] [rbp-5Ch]
  int v84; // [rsp+A8h] [rbp-58h]
  unsigned int v85; // [rsp+ACh] [rbp-54h]
  __int64 v86; // [rsp+B0h] [rbp-50h]
  int v87; // [rsp+B8h] [rbp-48h]
  _DWORD *v88; // [rsp+C0h] [rbp-40h]
  __int64 v89; // [rsp+C8h] [rbp-38h]
  __int128 v90; // [rsp+D0h] [rbp-30h]
  __int128 v91; // [rsp+E0h] [rbp-20h]
  __int128 v92; // [rsp+F0h] [rbp-10h]
  char v94; // [rsp+158h] [rbp+58h]
  unsigned int v95; // [rsp+168h] [rbp+68h]

  v1 = (_QWORD *)*a1;
  v94 = 0;
  v88 = v1;
  PacketCount = 0;
  v3 = v1[5];
  v89 = v1[4];
  v4 = *(_OWORD *)(*(_QWORD *)(v3 + 40) + 232LL);
  v90 = v4;
  if ( (v4 & 0x200000000LL) != 0 )
    v84 = 0;
  else
    v84 = 512;
  v5 = *((_DWORD *)a1 + 10);
  v86 = a1[9];
  v95 = *(_DWORD *)(v86 + 24);
  v77 = *(_QWORD *)(v86 + 16);
  v85 = 0;
  v75 = *(_DWORD *)(v3 + 184);
  v6 = *(_QWORD *)(v3 + 56);
  v76 = v5;
  v78 = 0;
  v73 = 0;
  v79 = *(_DWORD *)(v6 + 152);
  v71 = 0;
  v80 = 0;
  v82 = 0;
  v81 = 0;
  PacketLength = Isoch_GetPacketLength((__int64)v1, v5);
  v91 = v4;
  if ( (v4 & 0x20000000000LL) == 0
    || (v80 = *(_DWORD *)(v9 + 128) + v5 / *(_DWORD *)(v3 + 308),
        FrameNumber = Controller_GetFrameNumber(v8, 2),
        FrameNumber - v80 < 0) )
  {
    v11 = *(_DWORD *)(v3 + 184);
    v12 = 4;
    v13 = 0LL;
    if ( v11 >= *(_DWORD *)(v3 + 188) )
    {
      LOBYTE(v7) = 1;
      v13 = *(_QWORD *)(v3 + 176) + 16LL * v11;
      Isoch_InsertLinkTrb(v3, a1, 4LL, v7);
      v75 = 0;
    }
    v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 80LL) + 108LL) & 0x50;
    v87 = v14;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v3 + 184);
      v74 = 0uLL;
      v16 = (_OWORD *)(*(_QWORD *)(v3 + 176) + 16LL * v15);
      if ( !v13 )
        v13 = *(_QWORD *)(v3 + 176) + 16LL * v15;
      v54 = 0;
      switch ( v12 )
      {
        case 4u:
        case 5u:
          v55 = PacketLength;
          if ( v12 == 4 )
          {
            v42 = v5 / *(_DWORD *)(v3 + 308);
            v43 = DWORD2(v74);
            v80 = *(_DWORD *)(v89 + 128) + v42;
            v44 = *(_QWORD *)(v3 + 56);
            v45 = HIDWORD(v74) & 0x800F17FF | ((v80 & 0x7FF) << 20) | 0x1400;
            v46 = *(_WORD *)(v44 + 100) & 0x7FF;
            v47 = v14 == 80;
            v48 = *(_DWORD *)(v44 + 148);
            v49 = PacketLength - 1;
            if ( v47 )
            {
              v50 = (v46 + v49) / v46;
              if ( !v50 )
                v50 = 1;
              v43 = (DWORD2(v74) ^ (((v48 + v50) / (v48 + 1) - 1) << 17)) & 0x3E0000 ^ DWORD2(v74);
            }
            else
            {
              v56 = (v46 + v49) / v46;
              if ( !v56 )
                v56 = 1;
              v45 ^= ((unsigned __int16)v45 ^ (unsigned __int16)(((unsigned __int16)((v48 + v56) / (v48 + 1)) - 1) << 7)) & 0x180;
            }
            v51 = (v46 + PacketLength - 1) / v46;
            if ( !v51 )
              v51 = 1;
            v52 = v51 % (v48 + 1);
            if ( v52 )
              v48 = v52 - 1;
            v53 = (v45 ^ (v48 << 16)) & 0xF0000 ^ v45;
            PacketCount = TR_GetPacketCount(v3, PacketLength);
          }
          else
          {
            v43 = DWORD2(v74);
            v53 = HIDWORD(v74) & 0xFFFF03FF | 0x400;
          }
          if ( v95 <= v55 )
          {
            v31 = v55 - v95;
            v32 = v73 + 1;
            *(_QWORD *)&v74 = v77;
            PacketLength = v31;
            v73 = v32;
            v33 = *(_DWORD *)v86;
            v17 = (v95 ^ v43) & 0x1FFFF ^ v43;
            if ( (unsigned int)v32 < *(_DWORD *)v86 )
            {
              v32 *= 3LL;
              v34 = *(_QWORD *)(v86 + 8 * v32 + 16);
              v35 = *(_DWORD *)(v86 + 8 * v32 + 24);
              LODWORD(v32) = v73;
            }
            else
            {
              v34 = 0LL;
              v35 = 0;
            }
            v95 = v35;
            v77 = v34;
            if ( v71 + (v17 & 0x1FFFF) <= v79 )
              goto LABEL_49;
            v17 ^= (v17 ^ (v79 - v71)) & 0x1FFFF;
            if ( v31 )
            {
              while ( 1 )
              {
                if ( v35 > v31 )
                {
                  v95 = v35 - v31;
                  v77 = v31 + v34;
                  PacketLength = 0;
                  goto LABEL_52;
                }
                v31 -= v35;
                v36 = (unsigned int)(v32 + 1);
                PacketLength = v31;
                v73 = v36;
                if ( (unsigned int)v36 >= v33 )
                  break;
                v39 = 3 * v36;
                v34 = *(_QWORD *)(v86 + 8 * v39 + 16);
                v35 = *(_DWORD *)(v86 + 8 * v39 + 24);
                v77 = v34;
                v95 = v35;
                if ( !v31 )
                  goto LABEL_52;
                LODWORD(v32) = v73;
              }
              v77 = 0LL;
              v95 = 0;
LABEL_49:
              if ( v31 )
              {
                v37 = v71;
                v12 = 5;
                goto LABEL_53;
              }
            }
LABEL_52:
            v37 = v71;
            v12 = (v76 == *((_DWORD *)a1 + 11)) + 6;
            goto LABEL_53;
          }
          v37 = v71;
          *(_QWORD *)&v74 = v77;
          v17 = (v55 ^ v43) & 0x1FFFF ^ v43;
          v95 -= v55;
          v77 += v55;
          if ( v71 + (v17 & 0x1FFFF) > v79 )
            v17 ^= (v17 ^ (v79 - v71)) & 0x1FFFF;
          v12 = 6;
LABEL_53:
          v38 = (v17 & 0x1FFFF) + v37;
          v71 = v38;
          if ( !v54 )
            v17 ^= (v17 ^ ((unsigned int)TR_CalculateTDSize(v3, PacketCount, v38, v12 - 6 <= 1) << 17)) & 0x3E0000;
          v60 = *(_QWORD *)(v3 + 40);
          v40 = v53 | 0x10;
          HIDWORD(v74) = v40;
          v61 = *(_OWORD *)(v60 + 232);
          v62 = *(_QWORD *)(v60 + 232);
          v92 = v61;
          if ( (v62 & 0x800000000000LL) == 0 )
            goto LABEL_62;
          v63 = *(_QWORD *)(v3 + 48);
          if ( *(_DWORD *)(v63 + 20) != 1 || !*(_DWORD *)(v63 + 40) )
            goto LABEL_62;
          if ( v12 == 6 )
          {
            if ( *(_DWORD *)(v3 + 188) - v15 - 1 < *(_DWORD *)(v3 + 384) )
            {
              v12 = 10;
              goto LABEL_12;
            }
LABEL_63:
            v40 |= 2u;
            HIDWORD(v74) = v40;
            goto LABEL_12;
          }
          if ( v12 != 7 )
          {
LABEL_62:
            if ( v12 - 6 > 1 )
              goto LABEL_12;
            goto LABEL_63;
          }
          v12 = 11;
LABEL_12:
          v18 = v94;
LABEL_13:
          if ( v16 != (_OWORD *)v13 )
            HIDWORD(v74) = ((unsigned __int8)v40 ^ (unsigned __int8)*(_DWORD *)(v3 + 192)) & 1 ^ v40;
          v19 = v17 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 104) << 22);
          v20 = v78 + 1;
          DWORD2(v74) = v19;
          ++v78;
          *v16 = v74;
          ++*(_DWORD *)(v3 + 184);
          if ( v18 )
          {
            Isoch_InsertLinkTrb(v3, a1, 5LL, 0LL);
            v94 = 0;
          }
          if ( v12 != 9 && v12 != 4 )
          {
            v21 = a1;
            v24 = v86;
            goto LABEL_39;
          }
          v21 = a1;
          *((_DWORD *)a1 + 26) = *(_DWORD *)(v3 + 184);
          v22 = (_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184));
          *v22 = 0LL;
          v22[1] = 0LL;
          if ( v12 != 9 && !*(_BYTE *)(v3 + 285) )
            goto LABEL_23;
          *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
          if ( v12 == 9 )
          {
            v64 = v88;
            v65 = v76 - v88[23];
            ++v88[25];
            v66 = *((_QWORD *)v64 + 4);
            v64[22] = v65;
            v67 = *((_DWORD *)a1 + 11);
            if ( v67 == v64[20] - 1 )
              v68 = v64[16];
            else
              v68 = *(_DWORD *)(v66 + 12LL * (unsigned int)(v67 + 1) + 140);
            v69 = v80;
            v64[18] += v68 - *(_DWORD *)(v66 + 12LL * *((unsigned int *)a1 + 10) + 140);
            ++*(_DWORD *)(v3 + 328);
            *(_DWORD *)(v3 + 280) |= 0x20u;
            *(_DWORD *)(v3 + 316) = v69;
LABEL_21:
            *(_DWORD *)(v3 + 280) |= 0x11u;
            goto LABEL_22;
          }
          if ( *(_BYTE *)(v3 + 285) )
            goto LABEL_21;
LABEL_22:
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
LABEL_23:
          *(_BYTE *)(v13 + 12) ^= 1u;
          _InterlockedOr(v70, 0);
          v13 = 0LL;
          if ( *(_BYTE *)(v3 + 285) )
          {
            v23 = *(_QWORD *)(v3 + 56);
            *(_BYTE *)(v3 + 285) = 0;
            **(_DWORD **)(*(_QWORD *)(v23 + 16) + 160LL) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v23 + 144);
            _InterlockedOr(v70, 0);
          }
          v24 = v86;
          if ( v12 != 9 )
          {
            v25 = v73;
            v82 = v73;
            if ( v73 < *(_DWORD *)v86 )
              v85 = v77 - *(_DWORD *)(v86 + 24LL * v73 + 16);
            v26 = *(_DWORD *)(v3 + 184);
            v27 = v20;
            v21 = a1;
            v75 = v26;
            v81 = v20;
            goto LABEL_29;
          }
LABEL_39:
          v25 = v82;
          v27 = v81;
          v26 = v75;
LABEL_29:
          if ( *(_DWORD *)(v3 + 184) == *(_DWORD *)(v3 + 188) )
          {
            if ( v12 == 9 )
              goto LABEL_36;
            if ( v12 != 4 )
            {
              *(_DWORD *)(v3 + 184) = v26;
              v73 = v25;
              v78 = v27;
              v28 = *(_DWORD *)(v24 + 24LL * v25 + 24) - v85;
              v71 = 0;
              v95 = v28;
              v77 = *(_QWORD *)(v24 + 24LL * v25 + 16) + v85;
              PacketLength = Isoch_GetPacketLength((__int64)v88, v76);
              v12 = 4;
            }
            LOBYTE(v27) = 1;
            v13 = *(_QWORD *)(v3 + 176) + 16LL * *(unsigned int *)(v3 + 184);
            if ( (unsigned __int8)Isoch_InsertLinkTrb(v3, v21, v12, v27) )
              v75 = 0;
          }
          v5 = v76;
          v14 = v87;
          if ( v12 == 9 )
          {
LABEL_36:
            v29 = *(_QWORD *)(v3 + 56);
            result = *(_QWORD *)(v29 + 16);
            **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v29 + 144);
            _InterlockedOr(v70, 0);
            return result;
          }
          break;
        case 6u:
        case 7u:
          *(_QWORD *)&v74 = 1LL;
          v40 = HIDWORD(v74) & 0xFFFF03DF | 0x1C20;
          WORD1(v74) = v5;
          v41 = v5 + 1;
          HIDWORD(v74) = v40;
          DWORD1(v74) = *(_DWORD *)(v89 + 128);
          v76 = v41;
          if ( v12 == 7 || v41 == v88[20] )
          {
            v12 = 9;
          }
          else
          {
            if ( (v41 & 0x7F) != 0 )
            {
              v40 = v84 | v40 & 0xFFFFFDFF;
              HIDWORD(v74) = v40;
            }
            v71 = 0;
            PacketLength = Isoch_GetPacketLength((__int64)v88, v41);
            v12 = 4;
          }
          goto LABEL_11;
        case 0xAu:
          v18 = 1;
          *(_QWORD *)&v74 = 0LL;
          v17 = DWORD2(v74) & 0xFFC00000;
          v94 = 1;
          v40 = HIDWORD(v74) & 0xFFFF03ED | 0x412;
          v12 = 6;
          HIDWORD(v74) = v40;
          goto LABEL_13;
        case 0xBu:
          v18 = 1;
          *(_QWORD *)&v74 = 0LL;
          v17 = DWORD2(v74) & 0xFFC00000;
          v94 = 1;
          v40 = HIDWORD(v74) & 0xFFFF03ED | 0x412;
          v12 = 7;
          HIDWORD(v74) = v40;
          goto LABEL_13;
        default:
          v40 = HIDWORD(v74);
LABEL_11:
          v17 = DWORD2(v74);
          goto LABEL_12;
      }
    }
  }
  WPP_RECORDER_SF_DDqqDDD(
    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
    FrameNumber,
    v7,
    v70[8],
    *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
    v1[3],
    (char)a1,
    FrameNumber,
    v5,
    v80);
  Isoch_Stage_FreeScatterGatherList(v3, a1);
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  v57 = *a1;
  if ( *((_BYTE *)a1 + 56) )
  {
    IoFreeMdl((PMDL)a1[8]);
    a1[8] = 0LL;
    *((_BYTE *)a1 + 56) = 0;
  }
  TR_ReleaseSegments(v3, (unsigned __int64 *)a1 + 1, 1);
  TR_ReleaseSegments(v3, (unsigned __int64 *)a1 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v57 + 112), (unsigned __int8 *)a1);
  v58 = *(_BYTE *)(v3 + 96);
  *(_DWORD *)(v3 + 280) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), v58);
  v59 = *(_QWORD *)(v3 + 56);
  result = *(_QWORD *)(v59 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v59 + 144);
  _InterlockedOr(v70, 0);
  *(_DWORD *)(v3 + 304) = 1;
  return result;
}
