/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C000DDE0
 * Callers:
 *     Control_Transfer_Map @ 0x1C0003648 (Control_Transfer_Map.c)
 *     Control_EvtDmaCallback @ 0x1C0025E30 (Control_EvtDmaCallback.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C00014BC (TR_InitializeLinkTrb.c)
 *     TR_CalculateTDSize @ 0x1C000194C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C0001BBC (TR_GetPacketCount.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000DCB0 (WPP_RECORDER_SF_DDqq.c)
 *     memmove @ 0x1C0010B40 (memmove.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C0026E48 (WPP_RECORDER_SF_DDDqD.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r14
  int v3; // edx
  int PacketCount; // eax
  int v5; // r11d
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // r15
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  _OWORD *v13; // r13
  int v14; // edx
  __int64 v15; // rdx
  bool v16; // zf
  unsigned int v17; // esi
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 result; // rax
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // r12d
  unsigned int v32; // r12d
  unsigned int v33; // esi
  int v34; // eax
  unsigned int v35; // esi
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // edi
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v42; // [rsp+20h] [rbp-69h]
  __int64 v43; // [rsp+28h] [rbp-61h]
  __int64 v44; // [rsp+30h] [rbp-59h]
  __int64 v45; // [rsp+38h] [rbp-51h]
  __int64 v46; // [rsp+40h] [rbp-49h]
  unsigned int v47; // [rsp+50h] [rbp-39h]
  BOOL v48; // [rsp+54h] [rbp-35h]
  int v49; // [rsp+58h] [rbp-31h]
  __int64 v50; // [rsp+60h] [rbp-29h]
  __int64 v51; // [rsp+68h] [rbp-21h]
  _OWORD v52[2]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v53; // [rsp+90h] [rbp+7h]
  char v54; // [rsp+F0h] [rbp+67h]
  unsigned int v55; // [rsp+F8h] [rbp+6Fh]
  unsigned int v56; // [rsp+100h] [rbp+77h]
  int v57; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 296);
  v57 = 0;
  v3 = *(_DWORD *)(v1 + 88);
  v51 = *(_QWORD *)(v1 + 32);
  v48 = (*(_DWORD *)(v51 + 32) & 1) != 0;
  PacketCount = TR_GetPacketCount(a1, v3);
  v6 = *(_DWORD *)(a1 + 184);
  v7 = 1;
  v49 = PacketCount;
  v8 = *(_QWORD *)(a1 + 176) + 16LL * v6;
  v55 = 0;
  v9 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
  v50 = 0LL;
  v56 = 0;
  v47 = 0;
  v54 = 0;
  v52[1] = v9;
  if ( (v9 & 8) != 0 && v6 + 21 > *(_DWORD *)(a1 + 188) )
  {
    TR_InitializeLinkTrb(a1, 1, (__int64)v52, 1);
    v10 = *(_QWORD *)(a1 + 168);
    v11 = 2LL * *(unsigned int *)(a1 + 184);
    HIDWORD(v52[0]) |= 2u;
    *(_QWORD *)&v52[0] = *(_QWORD *)(v10 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 176) + 8 * v11) = v52[0];
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) == 0;
  }
  do
  {
    v12 = *(_DWORD *)(a1 + 184);
    v13 = (_OWORD *)(*(_QWORD *)(a1 + 176) + 16LL * v12);
    if ( v12 + 1 <= *(_DWORD *)(a1 + 188) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v27,
          v12,
          34,
          v42,
          v27,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v12,
          (char)v13,
          *(_DWORD *)(a1 + 192));
        v5 = v48;
      }
      v52[0] = 0uLL;
      result = v7 - 1;
      switch ( v7 )
      {
        case 1:
          v32 = DWORD2(v52[0]) & 0xFFFE0000 | 8;
          v16 = *(_DWORD *)(v1 + 88) == 0;
          *(_QWORD *)&v52[0] = *(_QWORD *)(v51 + 128);
          if ( v16 )
          {
            v17 = HIDWORD(v52[0]) & 0xFFFC03BF | 0x840;
            goto LABEL_42;
          }
          if ( v5 == 1 )
            v17 = HIDWORD(v52[0]) & 0xFFFC03BF | 0x30840;
          else
            v17 = HIDWORD(v52[0]) & 0xFFFC03BF | 0x20840;
          v7 = 2;
          goto LABEL_10;
        case 2:
        case 5:
          if ( v7 == 2 )
          {
            result = (unsigned int)(v5 << 16);
            v33 = result | HIDWORD(v52[0]) & 0xFFFE0FFF | 0xC00;
          }
          else
          {
            v33 = HIDWORD(v52[0]) & 0xFFFF03FF | 0x400;
          }
          v36 = *(_DWORD *)(v1 + 48);
          HIDWORD(v52[0]) = v33;
          if ( !v36 )
            return result;
          v37 = v36 - 1;
          if ( !v37 )
          {
            v39 = *(_DWORD *)(v1 + 88);
            memmove(v52, *(const void **)(v1 + 64), v39);
            v33 = HIDWORD(v52[0]) | 0x40;
            v31 = (DWORD2(v52[0]) ^ v39) & 0x1FFFF ^ DWORD2(v52[0]);
LABEL_48:
            v7 = 6;
            goto LABEL_31;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            if ( !v5 )
              memmove(*(void **)(*(_QWORD *)(v1 + 72) + 16LL), *(const void **)(v1 + 64), *(unsigned int *)(v1 + 88));
            v34 = DWORD2(v52[0]) ^ *(_DWORD *)(v1 + 88);
            *(_QWORD *)&v52[0] = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 24LL);
            v31 = v34 & 0x1FFFF ^ DWORD2(v52[0]);
            goto LABEL_48;
          }
          if ( v38 == 1 )
          {
            v28 = v56;
            if ( !v56 )
            {
              v29 = *(_QWORD *)(v1 + 80);
              v50 = *(_QWORD *)(v29 + 24LL * v55 + 16);
              v28 = *(_DWORD *)(v29 + 24LL * v55 + 24);
            }
            v30 = 0x10000;
            if ( v7 == 2 )
            {
              if ( v28 > 0x200 )
              {
                v53 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
                if ( (v53 & 0x40) != 0 )
                {
                  v30 = 512;
                  if ( v5 == 1 )
                    v54 = 1;
                }
              }
            }
            else if ( v54 && v7 == 5 )
            {
              v33 |= 0x10000u;
            }
            if ( v28 > v30 )
            {
              v31 = v30 | DWORD2(v52[0]) & 0xFFFE0000;
              *(_QWORD *)&v52[0] = v50;
              v7 = 5;
              v50 += v30;
              v56 = v28 - v30;
            }
            else
            {
              *(_QWORD *)&v52[0] = v50;
              v56 = 0;
              v31 = (v28 ^ DWORD2(v52[0])) & 0x1FFFF ^ DWORD2(v52[0]);
              v7 = (++v55 == **(_DWORD **)(v1 + 80)) + 5;
            }
          }
          else
          {
            v31 = DWORD2(v52[0]);
          }
LABEL_31:
          v47 += v31 & 0x1FFFF;
          v32 = (v31 ^ ((unsigned int)TR_CalculateTDSize(a1, v49, v47, v7 == 6) << 17)) & 0x3E0000 ^ v31;
          v17 = v33 | 0x10;
LABEL_32:
          if ( (unsigned int)(v7 - 6) <= 1 )
            v17 |= 2u;
LABEL_10:
          if ( v13 == (_OWORD *)v8 )
            HIDWORD(v52[0]) = v17 & 0xFFFFFFFE | (*(_DWORD *)(a1 + 192) == 0);
          else
            HIDWORD(v52[0]) = ((unsigned __int8)v17 ^ (unsigned __int8)*(_DWORD *)(a1 + 192)) & 1 ^ v17;
          DWORD2(v52[0]) = v32 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 104) << 22);
          *v13 = v52[0];
          ++*(_DWORD *)(a1 + 184);
          break;
        case 3:
          if ( v5 == 1 )
            v35 = HIDWORD(v52[0]) & 0xFFFE03FF | 0x1000;
          else
            v35 = HIDWORD(v52[0]) & 0xFFFE03FF | 0x11000;
          v32 = DWORD2(v52[0]);
          v17 = v35 | 0x12;
          v7 = 7;
          goto LABEL_10;
        case 6:
        case 7:
          ++v57;
          v32 = DWORD2(v52[0]);
          v17 = HIDWORD(v52[0]) & 0xFFFF03DF | 0x1C20;
          *(_QWORD *)&v52[0] = v1 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 7 )
          {
            v7 = 9;
            *(_QWORD *)&v52[0] = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          }
          else
          {
LABEL_42:
            v7 = 3;
          }
          goto LABEL_10;
        default:
          v17 = HIDWORD(v52[0]);
          v32 = DWORD2(v52[0]);
          goto LABEL_32;
      }
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v14,
          v12,
          33,
          v42,
          v14,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v12,
          (char)v13,
          *(_DWORD *)(a1 + 192));
      }
      TR_InitializeLinkTrb(a1, v7, (__int64)v52, v13 == (_OWORD *)v8);
      v15 = *(_QWORD *)(a1 + 168);
      HIDWORD(v52[0]) |= 2u;
      *(_QWORD *)&v52[0] = *(_QWORD *)(v15 + 24);
      *v13 = v52[0];
      v16 = *(_DWORD *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 192) = v16;
    }
    v5 = v48;
  }
  while ( v7 != 9 );
  *(_DWORD *)(v1 + 144) = *(_DWORD *)(a1 + 184);
  v16 = *(_DWORD *)(a1 + 192) == 0;
  v52[0] = 0uLL;
  v18 = *(_QWORD *)(a1 + 176);
  HIDWORD(v52[0]) = v16;
  *(_OWORD *)(v18 + 16LL * *(unsigned int *)(a1 + 184)) = v52[0];
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_DWORD *)(v1 + 112) = v57;
  *(_DWORD *)(a1 + 304) |= 1u;
  if ( *(_DWORD *)(a1 + 100) == 3 )
  {
    *(_DWORD *)(a1 + 100) = 2;
    v19 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 0;
    v19 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v20 = *(_QWORD *)(a1 + 48);
  v21 = *(_QWORD *)(a1 + 56);
  v46 = v1;
  v22 = *(unsigned __int8 *)(v20 + 135);
  v45 = *(_QWORD *)(v1 + 24);
  LODWORD(v20) = *(_DWORD *)(v21 + 144);
  v23 = *(_QWORD *)(v21 + 80);
  LODWORD(v44) = v20;
  LODWORD(v43) = v22;
  WPP_RECORDER_SF_DDqq(
    v23,
    4u,
    v24,
    0x23u,
    (__int64)&WPP_b8bb340e430930fc90b81b2b4d1cc689_Traceguids,
    v43,
    v44,
    v45,
    v1);
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v41, 0);
  v25 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(v25 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(a1 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v25 + 144);
  _InterlockedOr(v41, 0);
  if ( v19 )
  {
    v40 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v40 + 37) )
      return ESM_AddEvent((PVOID)(v40 + 272));
    result = *(_QWORD *)(v40 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)(result + 20)) == *(_DWORD *)(result + 8) )
      return ESM_AddEvent((PVOID)(v40 + 272));
  }
  return result;
}
