/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C000E050
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C002B560 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     TR_CalculateTDSize @ 0x1C00018AC (TR_CalculateTDSize.c)
 *     Isoch_GetPacketLength @ 0x1C0001A20 (Isoch_GetPacketLength.c)
 *     TR_GetPacketCount @ 0x1C0001AA8 (TR_GetPacketCount.c)
 *     Controller_GetFrameNumber @ 0x1C0001C48 (Controller_GetFrameNumber.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0002EB0 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_InsertLinkTrb @ 0x1C002B824 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_Release @ 0x1C002C4A8 (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C002D700 (WPP_RECORDER_SF_DDqqDDD.c)
 */

__int64 __fastcall Isoch_Stage_MapIntoRing(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // r12
  __int64 v4; // rbx
  unsigned int v5; // r13d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  int FrameNumber; // r8d
  KIRQL v13; // dl
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned int v16; // esi
  char v17; // cl
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  int v23; // r14d
  __int64 v24; // r9
  unsigned int v25; // r15d
  bool v26; // r8
  __int64 v27; // rcx
  unsigned int v28; // r11d
  _OWORD *v29; // r14
  int v30; // edx
  unsigned int v31; // edx
  int v32; // eax
  unsigned int v33; // edi
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // esi
  char v39; // r10
  unsigned int v40; // r15d
  unsigned int v41; // edx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // edi
  unsigned int v48; // eax
  bool v49; // zf
  unsigned int v50; // r15d
  int v51; // eax
  unsigned int v52; // edi
  __int64 v53; // rax
  unsigned int v54; // esi
  unsigned int v55; // r9d
  unsigned int v56; // r8d
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // edx
  unsigned int v61; // eax
  _DWORD *v62; // r10
  int v63; // eax
  __int64 v64; // r8
  int v65; // ecx
  int v66; // ecx
  int v67; // eax
  signed __int32 v68[10]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+64h] [rbp-9Ch]
  unsigned int PacketLength; // [rsp+68h] [rbp-98h]
  unsigned int v72; // [rsp+6Ch] [rbp-94h]
  __int128 v73; // [rsp+70h] [rbp-90h]
  int v74; // [rsp+80h] [rbp-80h]
  unsigned int v75; // [rsp+84h] [rbp-7Ch]
  __int64 v76; // [rsp+88h] [rbp-78h]
  unsigned int v77; // [rsp+90h] [rbp-70h]
  int v78; // [rsp+94h] [rbp-6Ch]
  unsigned int v79; // [rsp+98h] [rbp-68h]
  unsigned int v80; // [rsp+9Ch] [rbp-64h]
  int PacketCount; // [rsp+A0h] [rbp-60h]
  unsigned int v82; // [rsp+A4h] [rbp-5Ch]
  __int64 v83; // [rsp+A8h] [rbp-58h]
  _DWORD *v84; // [rsp+B0h] [rbp-50h]
  __int64 v85; // [rsp+B8h] [rbp-48h]
  __int64 v86; // [rsp+C0h] [rbp-40h]
  __int128 v87; // [rsp+C8h] [rbp-38h]
  __int128 v88; // [rsp+D8h] [rbp-28h]
  __int128 v89; // [rsp+E8h] [rbp-18h]
  char v91; // [rsp+158h] [rbp+58h]
  bool v92; // [rsp+160h] [rbp+60h]
  bool v93; // [rsp+168h] [rbp+68h]

  v1 = *(_QWORD **)a1;
  v2 = 0LL;
  v91 = 0;
  v84 = v1;
  PacketCount = 0;
  v4 = v1[5];
  v85 = v1[4];
  v87 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 232LL);
  v93 = (v87 & 0x200000000LL) == 0;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 40);
  v83 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(v83 + 16);
  v69 = *(_DWORD *)(v83 + 24);
  v76 = v7;
  v82 = 0;
  v74 = *(_DWORD *)(v4 + 184);
  v8 = *(_QWORD *)(v4 + 56);
  v75 = v6;
  v72 = 0;
  v70 = 0;
  v77 = *(_DWORD *)(v8 + 152);
  v78 = 0;
  v80 = 0;
  v79 = 0;
  PacketLength = Isoch_GetPacketLength((__int64)v1, v6);
  v88 = v87;
  if ( (v87 & 0x20000000000LL) != 0
    && (v78 = *(_DWORD *)(v11 + 128) + v6 / *(_DWORD *)(v4 + 308),
        FrameNumber = Controller_GetFrameNumber(v10, 2),
        FrameNumber - v78 >= 0) )
  {
    WPP_RECORDER_SF_DDqqDDD(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      FrameNumber,
      v9,
      v68[8],
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      v1[3],
      a1,
      FrameNumber,
      v6,
      v78);
    Isoch_Stage_FreeScatterGatherList(v4, (_QWORD *)a1);
    *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    Isoch_Stage_Release(v4, a1);
    v13 = *(_BYTE *)(v4 + 96);
    *(_DWORD *)(v4 + 280) |= 0x10u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), v13);
    v14 = *(_QWORD *)(v4 + 56);
    result = *(_QWORD *)(v14 + 16);
    **(_DWORD **)(result + 160) = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v14 + 144);
    _InterlockedOr(v68, 0);
    *(_DWORD *)(v4 + 304) = 1;
  }
  else
  {
    v48 = *(_DWORD *)(v4 + 184);
    v25 = 4;
    if ( v48 >= *(_DWORD *)(v4 + 188) )
    {
      LOBYTE(v9) = 1;
      v2 = *(_QWORD *)(v4 + 176) + 16LL * v48;
      Isoch_InsertLinkTrb(v4, a1, 4LL, v9);
      v74 = 0;
    }
    v26 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 80LL) + 108LL) & 0x50) == 80;
    v92 = v26;
    while ( 2 )
    {
      v28 = *(_DWORD *)(v4 + 184);
      v86 = v28;
      v29 = (_OWORD *)(*(_QWORD *)(v4 + 176) + 16LL * v28);
      v73 = 0uLL;
      if ( !v2 )
        v2 = (__int64)v29;
      v39 = 0;
      switch ( v25 )
      {
        case 4u:
        case 5u:
          v49 = v25 == 4;
          v50 = PacketLength;
          if ( v49 )
          {
            v51 = v6 / *(_DWORD *)(v4 + 308);
            v52 = DWORD2(v73);
            v78 = *(_DWORD *)(v85 + 128) + v51;
            v53 = *(_QWORD *)(v4 + 56);
            v54 = HIDWORD(v73) & 0x800F17FF | ((v78 & 0x7FF) << 20) | 0x1400;
            v55 = *(_WORD *)(v53 + 100) & 0x7FF;
            v49 = !v26;
            v56 = *(_DWORD *)(v53 + 148);
            v57 = PacketLength - 1;
            if ( v49 )
            {
              v61 = (v55 + v57) / v55;
              if ( !v61 )
                v61 = 1;
              v54 ^= ((unsigned __int16)v54 ^ (unsigned __int16)(((unsigned __int16)((v56 + v61) / (v56 + 1)) - 1) << 7)) & 0x180;
            }
            else
            {
              v58 = (v55 + v57) / v55;
              if ( !v58 )
                v58 = 1;
              v52 = (DWORD2(v73) ^ (((v56 + v58) / (v56 + 1) - 1) << 17)) & 0x3E0000 ^ DWORD2(v73);
            }
            v59 = (v55 + PacketLength - 1) / v55;
            if ( !v59 )
              v59 = 1;
            v60 = v59 % (v56 + 1);
            if ( v60 )
              v56 = v60 - 1;
            v38 = (v54 ^ (v56 << 16)) & 0xF0000 ^ v54;
            PacketCount = TR_GetPacketCount(v4, PacketLength);
          }
          else
          {
            v52 = DWORD2(v73);
            v38 = HIDWORD(v73) & 0xFFFF03FF | 0x400;
          }
          if ( v69 > v50 )
          {
            *(_QWORD *)&v73 = v76;
            v33 = (v50 ^ v52) & 0x1FFFF ^ v52;
            v69 -= v50;
            v76 += v50;
            v30 = v70;
            if ( v70 + (v33 & 0x1FFFF) > v77 )
              v33 ^= (v33 ^ (v77 - v70)) & 0x1FFFF;
            v25 = 6;
          }
          else
          {
            v40 = v50 - v69;
            *(_QWORD *)&v73 = v76;
            PacketLength = v40;
            v41 = *(_DWORD *)v83;
            v42 = v72 + 1;
            v33 = (v69 ^ v52) & 0x1FFFF ^ v52;
            v72 = v42;
            if ( (unsigned int)v42 < v41 )
            {
              v42 *= 3LL;
              v46 = *(_QWORD *)(v83 + 8 * v42 + 16);
              v43 = *(_DWORD *)(v83 + 8 * v42 + 24);
              LODWORD(v42) = v72;
              v76 = v46;
            }
            else
            {
              v76 = 0LL;
              v43 = 0;
            }
            v69 = v43;
            if ( v70 + (v33 & 0x1FFFF) > v77 )
            {
              v33 ^= (v33 ^ (v77 - v70)) & 0x1FFFF;
              if ( v40 )
              {
                while ( v43 <= v40 )
                {
                  v40 -= v43;
                  v44 = (unsigned int)(v42 + 1);
                  PacketLength = v40;
                  v72 = v44;
                  if ( (unsigned int)v44 >= v41 )
                  {
                    v76 = 0LL;
                    v69 = 0;
                    goto LABEL_56;
                  }
                  v45 = 3 * v44;
                  v43 = *(_DWORD *)(v83 + 8 * v45 + 24);
                  v76 = *(_QWORD *)(v83 + 8 * v45 + 16);
                  v69 = v43;
                  if ( !v40 )
                    goto LABEL_38;
                  LODWORD(v42) = v72;
                }
                v76 += v40;
                v69 = v43 - v40;
                PacketLength = 0;
              }
LABEL_38:
              v30 = v70;
              v25 = (v75 == *(_DWORD *)(a1 + 44)) + 6;
              goto LABEL_39;
            }
LABEL_56:
            if ( !v40 )
              goto LABEL_38;
            v30 = v70;
            v25 = 5;
          }
LABEL_39:
          v31 = (v33 & 0x1FFFF) + v30;
          v70 = v31;
          if ( !v39 )
          {
            v32 = TR_CalculateTDSize(v4, PacketCount, v31, v25 - 6 <= 1);
            v28 = v86;
            v33 ^= (v33 ^ (v32 << 17)) & 0x3E0000;
          }
          v34 = *(_QWORD *)(v4 + 40);
          v16 = v38 | 0x10;
          HIDWORD(v73) = v16;
          v35 = *(_OWORD *)(v34 + 232);
          v36 = *(_QWORD *)(v34 + 232);
          v89 = v35;
          if ( (v36 & 0x800000000000LL) == 0 )
            goto LABEL_4;
          v37 = *(_QWORD *)(v4 + 48);
          if ( *(_DWORD *)(v37 + 20) != 1 || !*(_DWORD *)(v37 + 40) )
            goto LABEL_4;
          if ( v25 == 6 )
          {
            if ( *(_DWORD *)(v4 + 188) - v28 - 1 >= *(_DWORD *)(v4 + 384) )
              goto LABEL_5;
            v25 = 10;
          }
          else
          {
            if ( v25 != 7 )
            {
LABEL_4:
              if ( v25 - 6 > 1 )
                goto LABEL_6;
LABEL_5:
              v16 |= 2u;
              HIDWORD(v73) = v16;
              goto LABEL_6;
            }
            v25 = 11;
          }
LABEL_6:
          v17 = v91;
LABEL_7:
          if ( v29 != (_OWORD *)v2 )
            HIDWORD(v73) = ((unsigned __int8)v16 ^ (unsigned __int8)*(_DWORD *)(v4 + 192)) & 1 ^ v16;
          ++v5;
          DWORD2(v73) = v33 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 104) << 22);
          *v29 = v73;
          ++*(_DWORD *)(v4 + 184);
          if ( v17 )
          {
            Isoch_InsertLinkTrb(v4, a1, 5LL, 0LL);
            v91 = 0;
          }
          if ( v25 != 9 && v25 != 4 )
          {
            v18 = a1;
            v21 = v83;
LABEL_36:
            v22 = v80;
            v24 = v79;
            v23 = v74;
            goto LABEL_25;
          }
          v18 = a1;
          *(_DWORD *)(a1 + 104) = *(_DWORD *)(v4 + 184);
          v19 = (_QWORD *)(*(_QWORD *)(v4 + 176) + 16LL * *(unsigned int *)(v4 + 184));
          *v19 = 0LL;
          v19[1] = 0LL;
          if ( v25 != 9 && !*(_BYTE *)(v4 + 285) )
            goto LABEL_19;
          *(_BYTE *)(v4 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
          if ( v25 == 9 )
          {
            v62 = v84;
            v63 = v75 - v84[23];
            ++v84[25];
            v64 = *((_QWORD *)v62 + 4);
            v62[22] = v63;
            v65 = *(_DWORD *)(a1 + 44);
            if ( v65 == v62[20] - 1 )
              v66 = v62[16];
            else
              v66 = *(_DWORD *)(v64 + 12LL * (unsigned int)(v65 + 1) + 140);
            v67 = v78;
            v62[18] += v66 - *(_DWORD *)(v64 + 12LL * *(unsigned int *)(a1 + 40) + 140);
            ++*(_DWORD *)(v4 + 328);
            *(_DWORD *)(v4 + 280) |= 0x20u;
            *(_DWORD *)(v4 + 316) = v67;
          }
          else if ( !*(_BYTE *)(v4 + 285) )
          {
            goto LABEL_18;
          }
          *(_DWORD *)(v4 + 280) |= 0x11u;
LABEL_18:
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), *(_BYTE *)(v4 + 96));
LABEL_19:
          *(_BYTE *)(v2 + 12) ^= 1u;
          _InterlockedOr(v68, 0);
          v2 = 0LL;
          if ( *(_BYTE *)(v4 + 285) )
          {
            v20 = *(_QWORD *)(v4 + 56);
            *(_BYTE *)(v4 + 285) = 0;
            **(_DWORD **)(*(_QWORD *)(v20 + 16) + 160LL) = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v20 + 144);
            _InterlockedOr(v68, 0);
          }
          v21 = v83;
          if ( v25 == 9 )
            goto LABEL_36;
          v22 = v72;
          v80 = v72;
          if ( v72 < *(_DWORD *)v83 )
            v82 = v76 - *(_DWORD *)(v83 + 24LL * v72 + 16);
          v23 = *(_DWORD *)(v4 + 184);
          v24 = v5;
          v74 = v23;
          v79 = v5;
LABEL_25:
          if ( *(_DWORD *)(v4 + 184) == *(_DWORD *)(v4 + 188) )
          {
            if ( v25 == 9 )
              goto LABEL_32;
            if ( v25 != 4 )
            {
              v5 = v24;
              *(_DWORD *)(v4 + 184) = v23;
              v72 = v22;
              v70 = 0;
              v69 = *(_DWORD *)(v21 + 24LL * v22 + 24) - v82;
              v76 = *(_QWORD *)(v21 + 24LL * v22 + 16) + v82;
              PacketLength = Isoch_GetPacketLength((__int64)v84, v75);
              v25 = 4;
            }
            LOBYTE(v24) = 1;
            v2 = *(_QWORD *)(v4 + 176) + 16LL * *(unsigned int *)(v4 + 184);
            if ( (unsigned __int8)Isoch_InsertLinkTrb(v4, v18, v25, v24) )
              v74 = 0;
          }
          v6 = v75;
          v26 = v92;
          if ( v25 != 9 )
            continue;
LABEL_32:
          v27 = *(_QWORD *)(v4 + 56);
          result = *(_QWORD *)(v27 + 16);
          **(_DWORD **)(result + 160) = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v27 + 144);
          _InterlockedOr(v68, 0);
          break;
        case 6u:
        case 7u:
          *(_QWORD *)&v73 = 1LL;
          v16 = HIDWORD(v73) & 0xFFFF03DF | 0x1C20;
          WORD1(v73) = v6;
          v47 = v6 + 1;
          HIDWORD(v73) = v16;
          DWORD1(v73) = *(_DWORD *)(v85 + 128);
          v75 = v47;
          if ( v25 == 7 || v47 == v84[20] )
          {
            v33 = DWORD2(v73);
            v25 = 9;
          }
          else
          {
            if ( (v47 & 0x7F) != 0 )
            {
              v16 ^= ((unsigned __int16)v16 ^ (v93 << 9)) & 0x200;
              HIDWORD(v73) = v16;
            }
            v70 = 0;
            PacketLength = Isoch_GetPacketLength((__int64)v84, v47);
            v25 = 4;
LABEL_68:
            v33 = DWORD2(v73);
          }
          goto LABEL_6;
        case 0xAu:
          v17 = 1;
          *(_QWORD *)&v73 = 0LL;
          v33 = DWORD2(v73) & 0xFFC00000;
          v91 = 1;
          v16 = HIDWORD(v73) & 0xFFFF03ED | 0x412;
          v25 = 6;
          HIDWORD(v73) = v16;
          goto LABEL_7;
        case 0xBu:
          v17 = 1;
          *(_QWORD *)&v73 = 0LL;
          v33 = DWORD2(v73) & 0xFFC00000;
          v91 = 1;
          v16 = HIDWORD(v73) & 0xFFFF03ED | 0x412;
          v25 = 7;
          HIDWORD(v73) = v16;
          goto LABEL_7;
        default:
          v16 = HIDWORD(v73);
          goto LABEL_68;
      }
      break;
    }
  }
  return result;
}
