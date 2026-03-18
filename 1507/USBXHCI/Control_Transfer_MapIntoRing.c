/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C0022660
 * Callers:
 *     Control_EvtDmaCallback @ 0x1C0021390 (Control_EvtDmaCallback.c)
 *     Control_Transfer_Map @ 0x1C00224CC (Control_Transfer_Map.c)
 * Callees:
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     TR_CalculateTDSize @ 0x1C002012C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C00206F4 (TR_GetPacketCount.c)
 *     TR_InitializeLinkTrb @ 0x1C00207B0 (TR_InitializeLinkTrb.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C00237F0 (WPP_RECORDER_SF_DDDqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0023F38 (WPP_RECORDER_SF_DDqq.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r15
  int v3; // r14d
  int v4; // edx
  int v5; // r13d
  int PacketCount; // eax
  __int64 v7; // r10
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // r8d
  _OWORD *v16; // rdi
  int v17; // edx
  __int64 v18; // rdx
  int v19; // edx
  __int64 result; // rax
  unsigned int v21; // edi
  unsigned int v22; // r14d
  unsigned int v23; // edi
  unsigned int v24; // edi
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // r8
  unsigned int v32; // ecx
  char v33; // al
  int v34; // r14d
  int v35; // eax
  unsigned int v36; // ebx
  int v37; // edi
  int v38; // eax
  __int64 v39; // rcx
  char v40; // bl
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  signed __int32 v45[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v46; // [rsp+20h] [rbp-49h]
  int v47; // [rsp+50h] [rbp-19h]
  int v48; // [rsp+54h] [rbp-15h]
  __int64 v49; // [rsp+58h] [rbp-11h]
  __int64 v50; // [rsp+60h] [rbp-9h]
  _OWORD *v51; // [rsp+68h] [rbp-1h]
  _OWORD v52[5]; // [rsp+70h] [rbp+7h] BYREF
  char v53; // [rsp+D0h] [rbp+67h]
  unsigned int v54; // [rsp+D8h] [rbp+6Fh]
  unsigned int v55; // [rsp+E0h] [rbp+77h]
  unsigned int v56; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 296);
  v47 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 88);
  v50 = *(_QWORD *)(v1 + 32);
  v5 = *(_BYTE *)(v50 + 32) & 1;
  PacketCount = TR_GetPacketCount(a1, v4);
  v8 = *(_DWORD *)(a1 + 184);
  v9 = v7 + 1;
  v48 = PacketCount;
  v10 = *(_QWORD *)(a1 + 176) + 16LL * v8;
  v54 = v7;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
  v49 = v7;
  v55 = v7;
  v56 = v7;
  v53 = v7;
  if ( (v11 & 8) != 0 && v8 + 21 > *(_DWORD *)(a1 + 188) )
  {
    TR_InitializeLinkTrb(a1, v9, (__int64)v52, v7 + 1);
    LODWORD(v7) = 0;
    v12 = *(_QWORD *)(a1 + 168);
    v13 = 2LL * *(unsigned int *)(a1 + 184);
    HIDWORD(v52[0]) |= 2u;
    *(_QWORD *)&v52[0] = *(_QWORD *)(v12 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 176) + 8 * v13) = v52[0];
    v14 = *(_DWORD *)(a1 + 192) == 0;
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = v14;
  }
  do
  {
    v15 = *(_DWORD *)(a1 + 184);
    v16 = (_OWORD *)(*(_QWORD *)(a1 + 176) + 16LL * v15);
    v51 = v16;
    if ( v15 + 1 <= *(_DWORD *)(a1 + 188) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
      {
        v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v19,
          v15,
          34,
          v46,
          v19,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v15,
          (char)v16,
          *(_DWORD *)(a1 + 192));
        LODWORD(v7) = 0;
      }
      result = 0LL;
      v52[0] = 0uLL;
      if ( v9 == 1 )
      {
        v22 = DWORD2(v52[0]) & 0xFFFE0000 | 8;
        *(_QWORD *)&v52[0] = *(_QWORD *)(v50 + 128);
        if ( *(_DWORD *)(v1 + 88) == (_DWORD)v7 )
        {
          v21 = HIDWORD(v52[0]) & 0xFFFC03BF | 0x840;
          goto LABEL_52;
        }
        if ( v5 == 1 )
          v21 = HIDWORD(v52[0]) & 0xFFFC03BF | 0x30840;
        else
          v21 = HIDWORD(v52[0]) & 0xFFFC03BF | 0x20840;
        v9 = 2;
        goto LABEL_57;
      }
      if ( v9 == 2 )
      {
        result = HIDWORD(v52[0]) & 0xFFFE0FFF;
        v23 = result | ((v5 & 1) << 16) | 0xC00;
      }
      else
      {
        v21 = HIDWORD(v52[0]);
        if ( v9 == 3 )
        {
          if ( v5 == 1 )
            v24 = HIDWORD(v52[0]) & 0xFFFE03FF | 0x1000;
          else
            v24 = HIDWORD(v52[0]) & 0xFFFE03FF | 0x11000;
          v22 = DWORD2(v52[0]);
          v21 = v24 | 0x10;
          v9 = 7;
          goto LABEL_58;
        }
        if ( v9 != 5 )
        {
          if ( (unsigned int)(v9 - 6) <= 1 )
          {
            v47 = v3 + 1;
            v22 = DWORD2(v52[0]);
            v21 = HIDWORD(v52[0]) & 0xFFFF03DF | 0x1C20;
            *(_QWORD *)&v52[0] = v1 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v9 == 7 )
            {
              v9 = 9;
              *(_QWORD *)&v52[0] = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
LABEL_59:
              if ( v51 == (_OWORD *)v10 )
              {
                LODWORD(v7) = 0;
                v37 = ((unsigned __int8)v21 ^ (*(_DWORD *)(a1 + 192) == 0)) & 1 ^ v21;
              }
              else
              {
                v37 = ((unsigned __int8)v21 ^ (unsigned __int8)*(_DWORD *)(a1 + 192)) & 1 ^ v21;
                LODWORD(v7) = 0;
              }
              v38 = v22 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 104) << 22);
              v3 = v47;
              *((_QWORD *)&v52[0] + 1) = __PAIR64__(v37, v38);
              *v51 = v52[0];
              ++*(_DWORD *)(a1 + 184);
              continue;
            }
LABEL_52:
            v9 = 3;
            goto LABEL_59;
          }
          v22 = DWORD2(v52[0]);
          goto LABEL_57;
        }
        v23 = HIDWORD(v52[0]) & 0xFFFF03FF | 0x400;
      }
      v25 = *(_DWORD *)(v1 + 48);
      HIDWORD(v52[0]) = v23;
      if ( !v25 )
        return result;
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 1 )
          {
            v28 = v55;
            if ( v55 )
            {
              v31 = v49;
              v30 = v54;
            }
            else
            {
              v29 = *(_QWORD *)(v1 + 80);
              v30 = v54;
              v31 = *(_QWORD *)(v29 + 24LL * v54 + 16);
              v28 = *(_DWORD *)(v29 + 24LL * v54 + 24);
              v49 = v31;
            }
            v32 = 0x10000;
            if ( v9 == 2 )
            {
              if ( v28 <= 0x200 || (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x40) == 0 || (v32 = 512, v5 != 1) )
              {
LABEL_40:
                *(_QWORD *)&v52[0] = v31;
                if ( v28 > v32 )
                {
                  v9 = 5;
                  v34 = (DWORD2(v52[0]) ^ v32) & 0x1FFFF ^ DWORD2(v52[0]);
                  v49 = v32 + v31;
                  v55 = v28 - v32;
                }
                else
                {
                  v55 = v7;
                  v54 = v30 + 1;
                  v34 = (v28 ^ DWORD2(v52[0])) & 0x1FFFF ^ DWORD2(v52[0]);
                  v9 = 6 - (**(_DWORD **)(v1 + 80) != v30 + 1);
                }
                goto LABEL_49;
              }
              v33 = 1;
              v53 = 1;
            }
            else
            {
              v33 = v53;
            }
            if ( v9 == 5 && v33 )
              v23 |= 0x10000u;
            goto LABEL_40;
          }
          v34 = DWORD2(v52[0]);
LABEL_49:
          v56 += v34 & 0x1FFFF;
          v22 = (v34 ^ ((unsigned int)TR_CalculateTDSize(a1, v48, v56, v9 == 6) << 17)) & 0x3E0000 ^ v34;
          v21 = v23 | 0x10;
LABEL_57:
          if ( (unsigned int)(v9 - 6) > 1 )
            goto LABEL_59;
LABEL_58:
          v21 |= 2u;
          goto LABEL_59;
        }
        if ( !v5 )
          memmove(*(void **)(*(_QWORD *)(v1 + 72) + 16LL), *(const void **)(v1 + 64), *(unsigned int *)(v1 + 88));
        v35 = DWORD2(v52[0]) ^ *(_DWORD *)(v1 + 88);
        *(_QWORD *)&v52[0] = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 24LL);
        v34 = v35 & 0x1FFFF ^ DWORD2(v52[0]);
      }
      else
      {
        v36 = *(_DWORD *)(v1 + 88);
        memmove(v52, *(const void **)(v1 + 64), v36);
        v23 = HIDWORD(v52[0]) | 0x40;
        v34 = (DWORD2(v52[0]) ^ v36) & 0x1FFFF ^ DWORD2(v52[0]);
      }
      v9 = 6;
      goto LABEL_49;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
    {
      v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDDqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v17,
        v15,
        33,
        v46,
        v17,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v15,
        (char)v16,
        *(_DWORD *)(a1 + 192));
    }
    TR_InitializeLinkTrb(a1, v9, (__int64)v52, v16 == (_OWORD *)v10);
    v18 = *(_QWORD *)(a1 + 168);
    LODWORD(v7) = 0;
    HIDWORD(v52[0]) |= 2u;
    *(_QWORD *)&v52[0] = *(_QWORD *)(v18 + 24);
    *v16 = v52[0];
    v14 = *(_DWORD *)(a1 + 192) == 0;
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = v14;
  }
  while ( v9 != 9 );
  *(_DWORD *)(v1 + 144) = *(_DWORD *)(a1 + 184);
  v14 = *(_DWORD *)(a1 + 192) == 0;
  v52[0] = 0uLL;
  v39 = *(unsigned int *)(a1 + 184);
  HIDWORD(v52[0]) = v14;
  *(_OWORD *)(*(_QWORD *)(a1 + 176) + 16 * v39) = v52[0];
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_DWORD *)(v1 + 112) = v3;
  *(_DWORD *)(a1 + 304) |= 1u;
  if ( *(_DWORD *)(a1 + 100) == 3 )
  {
    *(_DWORD *)(a1 + 100) = 2;
    v40 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 0;
    v40 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  LOBYTE(v41) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    v41,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    35,
    (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_QWORD *)(v1 + 24),
    v1);
  *(_BYTE *)(v10 + 12) ^= 1u;
  _InterlockedOr(v45, 0);
  v42 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(v42 + 16);
  **(_DWORD **)(result + 160) = (*(_DWORD *)(a1 + 64) << 16) | (unsigned __int8)*(_DWORD *)(v42 + 144);
  _InterlockedOr(v45, 0);
  if ( v40 )
  {
    v43 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v43 + 37) )
      return ESM_AddEvent((PVOID)(v43 + 272));
    v44 = *(_QWORD *)(v43 + 136);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v44 + 20));
    if ( (_DWORD)result == *(_DWORD *)(v44 + 8) )
      return ESM_AddEvent((PVOID)(v43 + 272));
  }
  return result;
}
