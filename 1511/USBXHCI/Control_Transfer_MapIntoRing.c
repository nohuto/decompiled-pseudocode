/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C000B950
 * Callers:
 *     Control_Transfer_Map @ 0x1C00020E8 (Control_Transfer_Map.c)
 *     Control_EvtDmaCallback @ 0x1C0029240 (Control_EvtDmaCallback.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C0003B78 (TR_InitializeLinkTrb.c)
 *     TR_CalculateTDSize @ 0x1C0004038 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C000425C (TR_GetPacketCount.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000D300 (WPP_RECORDER_SF_DDqq.c)
 *     memmove @ 0x1C0010CC0 (memmove.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C002A200 (WPP_RECORDER_SF_DDDqD.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r15
  int v3; // edx
  BOOL v4; // r13d
  int PacketCount; // eax
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  _OWORD *v14; // rsi
  int v15; // edx
  __int64 v16; // rdx
  bool v17; // zf
  unsigned int v18; // esi
  int v19; // esi
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 result; // rax
  int v29; // edx
  int v30; // eax
  int v31; // r12d
  unsigned int v32; // r12d
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned int v35; // ecx
  unsigned int v36; // esi
  unsigned int v37; // esi
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // edi
  __int64 v42; // rcx
  signed __int32 v43[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v44; // [rsp+20h] [rbp-49h]
  int v45; // [rsp+28h] [rbp-41h]
  __int64 v46; // [rsp+38h] [rbp-31h]
  __int64 v47; // [rsp+40h] [rbp-29h]
  unsigned int v48; // [rsp+50h] [rbp-19h]
  int v49; // [rsp+54h] [rbp-15h]
  __int64 v50; // [rsp+58h] [rbp-11h]
  __int64 v51; // [rsp+60h] [rbp-9h]
  _OWORD *v52; // [rsp+68h] [rbp-1h]
  _OWORD v53[5]; // [rsp+70h] [rbp+7h] BYREF
  char v54; // [rsp+D0h] [rbp+67h]
  unsigned int v55; // [rsp+D8h] [rbp+6Fh]
  unsigned int v56; // [rsp+E0h] [rbp+77h]
  int v57; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 296);
  v57 = 0;
  v3 = *(_DWORD *)(v1 + 88);
  v51 = *(_QWORD *)(v1 + 32);
  v4 = (*(_DWORD *)(v51 + 32) & 1) != 0;
  PacketCount = TR_GetPacketCount(a1, v3);
  v6 = *(_DWORD *)(a1 + 184);
  v7 = 1;
  v49 = PacketCount;
  v8 = *(_QWORD *)(a1 + 176) + 16LL * v6;
  v55 = v9;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
  v50 = v9;
  v56 = v9;
  v48 = v9;
  v54 = v9;
  if ( (v10 & 8) != 0 && v6 + 21 > *(_DWORD *)(a1 + 188) )
  {
    TR_InitializeLinkTrb(a1, 1, (__int64)v53, 1);
    v11 = *(_QWORD *)(a1 + 168);
    v12 = 2LL * *(unsigned int *)(a1 + 184);
    HIDWORD(v53[0]) |= 2u;
    *(_QWORD *)&v53[0] = *(_QWORD *)(v11 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 176) + 8 * v12) = v53[0];
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) == 0;
  }
  do
  {
    v13 = *(_DWORD *)(a1 + 184);
    v14 = (_OWORD *)(*(_QWORD *)(a1 + 176) + 16LL * v13);
    v52 = v14;
    if ( v13 + 1 <= *(_DWORD *)(a1 + 188) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v29 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v29,
          v13,
          34,
          v44,
          v29,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v13,
          (char)v14,
          *(_DWORD *)(a1 + 192));
      }
      v53[0] = 0uLL;
      result = v7 - 1;
      switch ( v7 )
      {
        case 1:
          v32 = DWORD2(v53[0]) & 0xFFFE0000 | 8;
          v17 = *(_DWORD *)(v1 + 88) == 0;
          *(_QWORD *)&v53[0] = *(_QWORD *)(v51 + 128);
          if ( v17 )
          {
            v18 = HIDWORD(v53[0]) & 0xFFFC03BF | 0x840;
            goto LABEL_44;
          }
          if ( v4 )
            v18 = HIDWORD(v53[0]) & 0xFFFC03BF | 0x30840;
          else
            v18 = HIDWORD(v53[0]) & 0xFFFC03BF | 0x20840;
          v7 = 2;
          goto LABEL_10;
        case 2:
        case 5:
          if ( v7 == 2 )
          {
            result = HIDWORD(v53[0]) & 0xFFFE0FFF;
            v36 = result | (v4 << 16) | 0xC00;
          }
          else
          {
            v36 = HIDWORD(v53[0]) & 0xFFFF03FF | 0x400;
          }
          v38 = *(_DWORD *)(v1 + 48);
          HIDWORD(v53[0]) = v36;
          if ( !v38 )
            return result;
          v39 = v38 - 1;
          if ( !v39 )
          {
            v41 = *(_DWORD *)(v1 + 88);
            memmove(v53, *(const void **)(v1 + 64), v41);
            v36 = HIDWORD(v53[0]) | 0x40;
            v31 = (DWORD2(v53[0]) ^ v41) & 0x1FFFF ^ DWORD2(v53[0]);
LABEL_23:
            v7 = 6;
            goto LABEL_24;
          }
          v40 = v39 - 1;
          if ( !v40 )
          {
            if ( !v4 )
              memmove(*(void **)(*(_QWORD *)(v1 + 72) + 16LL), *(const void **)(v1 + 64), *(unsigned int *)(v1 + 88));
            v30 = DWORD2(v53[0]) ^ *(_DWORD *)(v1 + 88);
            *(_QWORD *)&v53[0] = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 24LL);
            v31 = v30 & 0x1FFFF ^ DWORD2(v53[0]);
            goto LABEL_23;
          }
          if ( v40 == 1 )
          {
            v33 = v56;
            if ( !v56 )
            {
              v34 = *(_QWORD *)(v1 + 80);
              v50 = *(_QWORD *)(v34 + 24LL * v55 + 16);
              v33 = *(_DWORD *)(v34 + 24LL * v55 + 24);
            }
            v35 = 0x10000;
            if ( v7 == 2 )
            {
              if ( v33 > 0x200 && (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x40) != 0 )
              {
                v35 = 512;
                if ( v4 )
                  v54 = 1;
              }
            }
            else if ( v54 && v7 == 5 )
            {
              v36 |= 0x10000u;
            }
            *(_QWORD *)&v53[0] = v50;
            if ( v33 > v35 )
            {
              v7 = 5;
              v31 = (DWORD2(v53[0]) ^ v35) & 0x1FFFF ^ DWORD2(v53[0]);
              v50 += v35;
              v56 = v33 - v35;
            }
            else
            {
              v56 = 0;
              v31 = (v33 ^ DWORD2(v53[0])) & 0x1FFFF ^ DWORD2(v53[0]);
              v7 = (++v55 == **(_DWORD **)(v1 + 80)) + 5;
            }
          }
          else
          {
            v31 = DWORD2(v53[0]);
          }
LABEL_24:
          v48 += v31 & 0x1FFFF;
          v32 = (v31 ^ ((unsigned int)TR_CalculateTDSize(a1, v49, v48, v7 == 6) << 17)) & 0x3E0000 ^ v31;
          v18 = v36 | 0x10;
LABEL_25:
          if ( (unsigned int)(v7 - 6) <= 1 )
            v18 |= 2u;
LABEL_10:
          if ( v52 == (_OWORD *)v8 )
            v19 = ((unsigned __int8)v18 ^ (*(_DWORD *)(a1 + 192) == 0)) & 1 ^ v18;
          else
            v19 = ((unsigned __int8)v18 ^ (unsigned __int8)*(_DWORD *)(a1 + 192)) & 1 ^ v18;
          *((_QWORD *)&v53[0] + 1) = __PAIR64__(v19, v32 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 104) << 22));
          *v52 = v53[0];
          ++*(_DWORD *)(a1 + 184);
          break;
        case 3:
          if ( v4 )
            v37 = HIDWORD(v53[0]) & 0xFFFE03FF | 0x1000;
          else
            v37 = HIDWORD(v53[0]) & 0xFFFE03FF | 0x11000;
          v32 = DWORD2(v53[0]);
          v18 = v37 | 0x12;
          v7 = 7;
          goto LABEL_10;
        case 6:
        case 7:
          ++v57;
          v32 = DWORD2(v53[0]);
          v18 = HIDWORD(v53[0]) & 0xFFFF03DF | 0x1C20;
          *(_QWORD *)&v53[0] = v1 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 7 )
          {
            v7 = 9;
            *(_QWORD *)&v53[0] = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          }
          else
          {
LABEL_44:
            v7 = 3;
          }
          goto LABEL_10;
        default:
          v18 = HIDWORD(v53[0]);
          v32 = DWORD2(v53[0]);
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
          v44,
          v15,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v13,
          (char)v14,
          *(_DWORD *)(a1 + 192));
      }
      TR_InitializeLinkTrb(a1, v7, (__int64)v53, v14 == (_OWORD *)v8);
      v16 = *(_QWORD *)(a1 + 168);
      HIDWORD(v53[0]) |= 2u;
      *(_QWORD *)&v53[0] = *(_QWORD *)(v16 + 24);
      *v14 = v53[0];
      v17 = *(_DWORD *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 192) = v17;
    }
  }
  while ( v7 != 9 );
  *(_DWORD *)(v1 + 144) = *(_DWORD *)(a1 + 184);
  v17 = *(_DWORD *)(a1 + 192) == 0;
  v53[0] = 0uLL;
  v20 = *(unsigned int *)(a1 + 184);
  HIDWORD(v53[0]) = v17;
  *(_OWORD *)(*(_QWORD *)(a1 + 176) + 16 * v20) = v53[0];
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_DWORD *)(v1 + 112) = v57;
  *(_DWORD *)(a1 + 304) |= 1u;
  if ( *(_DWORD *)(a1 + 100) == 3 )
  {
    *(_DWORD *)(a1 + 100) = 2;
    v21 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 0;
    v21 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v22 = *(_QWORD *)(a1 + 48);
  v23 = *(_QWORD *)(a1 + 56);
  v47 = v1;
  v24 = *(unsigned __int8 *)(v22 + 135);
  v46 = *(_QWORD *)(v1 + 24);
  LODWORD(v22) = *(_DWORD *)(v23 + 144);
  v25 = *(_QWORD *)(v23 + 80);
  LOBYTE(v45) = v24;
  LOBYTE(v24) = 4;
  WPP_RECORDER_SF_DDqq(v25, v24, v26, 35, (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids, v45, v22, v46, v1);
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v43, 0);
  v27 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(v27 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(a1 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v27 + 144);
  _InterlockedOr(v43, 0);
  if ( v21 )
  {
    v42 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v42 + 37) )
      return ESM_AddEvent((PVOID)(v42 + 272));
    result = *(_QWORD *)(v42 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)(result + 20)) == *(_DWORD *)(result + 8) )
      return ESM_AddEvent((PVOID)(v42 + 272));
  }
  return result;
}
