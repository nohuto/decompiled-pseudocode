/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C000D090
 * Callers:
 *     Control_Transfer_Map @ 0x1C000346C (Control_Transfer_Map.c)
 *     Control_EvtDmaCallback @ 0x1C0029860 (Control_EvtDmaCallback.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C000146C (TR_InitializeLinkTrb.c)
 *     TR_CalculateTDSize @ 0x1C00018AC (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C0001AA8 (TR_GetPacketCount.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000CF64 (WPP_RECORDER_SF_DDqq.c)
 *     memmove @ 0x1C000FEC0 (memmove.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C002A820 (WPP_RECORDER_SF_DDDqD.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r13
  int v3; // edx
  BOOL v4; // r15d
  int PacketCount; // eax
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  _OWORD *v14; // r12
  int v15; // edx
  __int64 v16; // rdx
  bool v17; // zf
  unsigned int v18; // esi
  int v19; // esi
  int v20; // eax
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 result; // rax
  int v30; // edx
  int v31; // eax
  int v32; // r15d
  unsigned int v33; // r15d
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned int v36; // ecx
  unsigned int v37; // esi
  unsigned int v38; // esi
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned int v42; // edi
  __int64 v43; // rcx
  signed __int32 v44[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v45; // [rsp+20h] [rbp-69h]
  __int64 v46; // [rsp+28h] [rbp-61h]
  __int64 v47; // [rsp+30h] [rbp-59h]
  __int64 v48; // [rsp+38h] [rbp-51h]
  __int64 v49; // [rsp+40h] [rbp-49h]
  unsigned int v50; // [rsp+50h] [rbp-39h]
  BOOL v51; // [rsp+54h] [rbp-35h]
  int v52; // [rsp+58h] [rbp-31h]
  __int64 v53; // [rsp+60h] [rbp-29h]
  __int64 v54; // [rsp+68h] [rbp-21h]
  _OWORD v55[2]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v56; // [rsp+90h] [rbp+7h]
  char v57; // [rsp+F0h] [rbp+67h]
  unsigned int v58; // [rsp+F8h] [rbp+6Fh]
  unsigned int v59; // [rsp+100h] [rbp+77h]
  int v60; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 296);
  v60 = 0;
  v3 = *(_DWORD *)(v1 + 88);
  v54 = *(_QWORD *)(v1 + 32);
  v4 = (*(_DWORD *)(v54 + 32) & 1) != 0;
  v51 = v4;
  PacketCount = TR_GetPacketCount(a1, v3);
  v6 = *(_DWORD *)(a1 + 184);
  v7 = 1;
  v52 = PacketCount;
  v8 = *(_QWORD *)(a1 + 176) + 16LL * v6;
  v58 = v9;
  v10 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
  v53 = v9;
  v59 = v9;
  v50 = v9;
  v57 = v9;
  v55[1] = v10;
  if ( (v10 & 8) != 0 && v6 + 21 > *(_DWORD *)(a1 + 188) )
  {
    TR_InitializeLinkTrb(a1, 1, (__int64)v55, 1);
    v11 = *(_QWORD *)(a1 + 168);
    v12 = 2LL * *(unsigned int *)(a1 + 184);
    HIDWORD(v55[0]) |= 2u;
    *(_QWORD *)&v55[0] = *(_QWORD *)(v11 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 176) + 8 * v12) = v55[0];
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) == 0;
  }
  do
  {
    v13 = *(_DWORD *)(a1 + 184);
    v14 = (_OWORD *)(*(_QWORD *)(a1 + 176) + 16LL * v13);
    if ( v13 + 1 <= *(_DWORD *)(a1 + 188) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v30,
          v13,
          34,
          v45,
          v30,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v13,
          (char)v14,
          *(_DWORD *)(a1 + 192));
      }
      v55[0] = 0uLL;
      result = v7 - 1;
      switch ( v7 )
      {
        case 1:
          v33 = DWORD2(v55[0]) & 0xFFFE0000 | 8;
          v17 = *(_DWORD *)(v1 + 88) == 0;
          *(_QWORD *)&v55[0] = *(_QWORD *)(v54 + 128);
          if ( v17 )
          {
            v18 = HIDWORD(v55[0]) & 0xFFFC03BF | 0x840;
            goto LABEL_44;
          }
          if ( v51 )
            v18 = HIDWORD(v55[0]) & 0xFFFC03BF | 0x30840;
          else
            v18 = HIDWORD(v55[0]) & 0xFFFC03BF | 0x20840;
          v7 = 2;
          goto LABEL_10;
        case 2:
        case 5:
          if ( v7 == 2 )
          {
            result = HIDWORD(v55[0]) & 0xFFFE0FFF;
            v37 = result | (v4 << 16) | 0xC00;
          }
          else
          {
            v37 = HIDWORD(v55[0]) & 0xFFFF03FF | 0x400;
          }
          v39 = *(_DWORD *)(v1 + 48);
          HIDWORD(v55[0]) = v37;
          if ( !v39 )
            return result;
          v40 = v39 - 1;
          if ( !v40 )
          {
            v42 = *(_DWORD *)(v1 + 88);
            memmove(v55, *(const void **)(v1 + 64), v42);
            v37 = HIDWORD(v55[0]) | 0x40;
            v32 = (DWORD2(v55[0]) ^ v42) & 0x1FFFF ^ DWORD2(v55[0]);
LABEL_23:
            v7 = 6;
            goto LABEL_24;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            if ( !v4 )
              memmove(*(void **)(*(_QWORD *)(v1 + 72) + 16LL), *(const void **)(v1 + 64), *(unsigned int *)(v1 + 88));
            v31 = DWORD2(v55[0]) ^ *(_DWORD *)(v1 + 88);
            *(_QWORD *)&v55[0] = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 24LL);
            v32 = v31 & 0x1FFFF ^ DWORD2(v55[0]);
            goto LABEL_23;
          }
          if ( v41 == 1 )
          {
            v34 = v59;
            if ( !v59 )
            {
              v35 = *(_QWORD *)(v1 + 80);
              v53 = *(_QWORD *)(v35 + 24LL * v58 + 16);
              v34 = *(_DWORD *)(v35 + 24LL * v58 + 24);
            }
            v36 = 0x10000;
            if ( v7 == 2 )
            {
              if ( v34 > 0x200 )
              {
                v56 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
                if ( (v56 & 0x40) != 0 )
                {
                  v36 = 512;
                  if ( v4 )
                    v57 = 1;
                }
              }
            }
            else if ( v57 && v7 == 5 )
            {
              v37 |= 0x10000u;
            }
            *(_QWORD *)&v55[0] = v53;
            if ( v34 > v36 )
            {
              v7 = 5;
              v32 = (DWORD2(v55[0]) ^ v36) & 0x1FFFF ^ DWORD2(v55[0]);
              v53 += v36;
              v59 = v34 - v36;
            }
            else
            {
              v59 = 0;
              v32 = (v34 ^ DWORD2(v55[0])) & 0x1FFFF ^ DWORD2(v55[0]);
              v7 = (++v58 == **(_DWORD **)(v1 + 80)) + 5;
            }
          }
          else
          {
            v32 = DWORD2(v55[0]);
          }
LABEL_24:
          v50 += v32 & 0x1FFFF;
          v33 = (v32 ^ ((unsigned int)TR_CalculateTDSize(a1, v52, v50, v7 == 6) << 17)) & 0x3E0000 ^ v32;
          v18 = v37 | 0x10;
LABEL_25:
          if ( (unsigned int)(v7 - 6) <= 1 )
            v18 |= 2u;
LABEL_10:
          if ( v14 == (_OWORD *)v8 )
            v19 = ((unsigned __int8)v18 ^ (*(_DWORD *)(a1 + 192) == 0)) & 1 ^ v18;
          else
            v19 = ((unsigned __int8)v18 ^ (unsigned __int8)*(_DWORD *)(a1 + 192)) & 1 ^ v18;
          v20 = v33 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 104) << 22);
          v4 = v51;
          *((_QWORD *)&v55[0] + 1) = __PAIR64__(v19, v20);
          *v14 = v55[0];
          ++*(_DWORD *)(a1 + 184);
          break;
        case 3:
          if ( v4 )
            v38 = HIDWORD(v55[0]) & 0xFFFE03FF | 0x1000;
          else
            v38 = HIDWORD(v55[0]) & 0xFFFE03FF | 0x11000;
          v33 = DWORD2(v55[0]);
          v18 = v38 | 0x12;
          v7 = 7;
          goto LABEL_10;
        case 6:
        case 7:
          ++v60;
          v33 = DWORD2(v55[0]);
          v18 = HIDWORD(v55[0]) & 0xFFFF03DF | 0x1C20;
          *(_QWORD *)&v55[0] = v1 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 7 )
          {
            v7 = 9;
            *(_QWORD *)&v55[0] = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          }
          else
          {
LABEL_44:
            v7 = 3;
          }
          goto LABEL_10;
        default:
          v18 = HIDWORD(v55[0]);
          v33 = DWORD2(v55[0]);
          goto LABEL_25;
      }
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v15,
          v13,
          33,
          v45,
          v15,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v13,
          (char)v14,
          *(_DWORD *)(a1 + 192));
      }
      TR_InitializeLinkTrb(a1, v7, (__int64)v55, v14 == (_OWORD *)v8);
      v16 = *(_QWORD *)(a1 + 168);
      HIDWORD(v55[0]) |= 2u;
      *(_QWORD *)&v55[0] = *(_QWORD *)(v16 + 24);
      *v14 = v55[0];
      v17 = *(_DWORD *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 192) = v17;
    }
  }
  while ( v7 != 9 );
  *(_DWORD *)(v1 + 144) = *(_DWORD *)(a1 + 184);
  v17 = *(_DWORD *)(a1 + 192) == 0;
  v55[0] = 0uLL;
  v21 = *(unsigned int *)(a1 + 184);
  HIDWORD(v55[0]) = v17;
  *(_OWORD *)(*(_QWORD *)(a1 + 176) + 16 * v21) = v55[0];
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_DWORD *)(v1 + 112) = v60;
  *(_DWORD *)(a1 + 304) |= 1u;
  if ( *(_DWORD *)(a1 + 100) == 3 )
  {
    *(_DWORD *)(a1 + 100) = 2;
    v22 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 0;
    v22 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v23 = *(_QWORD *)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 56);
  v49 = v1;
  v25 = *(unsigned __int8 *)(v23 + 135);
  v48 = *(_QWORD *)(v1 + 24);
  LODWORD(v23) = *(_DWORD *)(v24 + 144);
  v26 = *(_QWORD *)(v24 + 80);
  LODWORD(v47) = v23;
  LODWORD(v46) = v25;
  WPP_RECORDER_SF_DDqq(
    v26,
    4u,
    v27,
    0x23u,
    (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
    v46,
    v47,
    v48,
    v1);
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v44, 0);
  v28 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(v28 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(a1 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v28 + 144);
  _InterlockedOr(v44, 0);
  if ( v22 )
  {
    v43 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v43 + 37) )
      return ESM_AddEvent((PVOID)(v43 + 272));
    result = *(_QWORD *)(v43 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)(result + 20)) == *(_DWORD *)(result + 8) )
      return ESM_AddEvent((PVOID)(v43 + 272));
  }
  return result;
}
