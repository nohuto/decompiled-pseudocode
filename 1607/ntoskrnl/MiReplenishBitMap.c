/*
 * XREFs of MiReplenishBitMap @ 0x140088A20
 * Callers:
 *     MiEmptyPteBins @ 0x140017698 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140088F20 (MiFlushTbListEarly.c)
 *     MiReturnSystemPtes @ 0x1400BE660 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400DD7C0 (RtlInterlockedSetClearRunEx.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 */

ULONG_PTR __fastcall MiReplenishBitMap(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rdi
  unsigned int v6; // r15d
  int v7; // ebp
  ULONG_PTR v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 PteTimeStamp; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  ULONG_PTR v19; // r10
  __int64 v20; // r11
  ULONG_PTR v21; // r13
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  ULONG_PTR v27; // r11
  __int64 v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r10
  ULONG_PTR v34; // r10
  unsigned __int64 v35; // r9
  volatile signed __int32 *v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR v42; // rdi
  unsigned __int64 v43; // r15
  __int64 v44; // rsi
  ULONG_PTR v45; // r9
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // r8
  _QWORD *v49; // rax
  signed __int32 v51[8]; // [rsp+0h] [rbp-158h] BYREF
  int v52; // [rsp+30h] [rbp-128h]
  int v53; // [rsp+34h] [rbp-124h]
  __int64 v54; // [rsp+38h] [rbp-120h]
  ULONG_PTR v55; // [rsp+40h] [rbp-118h]
  ULONG_PTR v56; // [rsp+48h] [rbp-110h]
  int v57; // [rsp+50h] [rbp-108h] BYREF
  __int16 v58; // [rsp+54h] [rbp-104h]
  __int64 v59; // [rsp+58h] [rbp-100h]
  __int64 v60; // [rsp+60h] [rbp-F8h]
  __int64 v61; // [rsp+68h] [rbp-F0h]

  v55 = a2;
  v54 = 0LL;
  BugCheckParameter4 = a2;
  v52 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a3 == 1 )
  {
    v59 = 20LL;
    v57 = 0;
    v58 = 0;
    v60 = 0LL;
    v61 = 0LL;
    _InterlockedOr(v51, 0);
    v7 = KiTbFlushTimeStamp;
    v53 = KiTbFlushTimeStamp;
  }
  else
  {
    v6 = 1;
    v53 = 0;
    v52 = 1;
    v7 = 0;
    HIDWORD(v59) = 0;
  }
  do
  {
    v8 = 0LL;
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 16) + 8 * BugCheckParameter4);
      if ( (v11 & 0xF000) == 0x1000 )
      {
        PteTimeStamp = 1LL;
      }
      else
      {
        v14 = MI_READ_PTE_LOCK_FREE(v12 + 8);
        PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v14, v15, v16);
      }
      v8 += PteTimeStamp;
      v17 = MiGetPteTimeStamp(v11, v9, v10);
      v21 = v17;
      v56 = v17;
      if ( !v17
        || ((MI_READ_PTE_LOCK_FREE(v20 + 8LL * v17) & 0xF000) != 0x1000
          ? (v24 = MI_READ_PTE_LOCK_FREE(v22 + 8), v23 = (unsigned int)MiGetPteTimeStamp(v24, v25, v26))
          : (v23 = 1LL),
            v21 + v23 != BugCheckParameter4) )
      {
        v27 = BugCheckParameter4 + v8 - 1;
        if ( v27 >= *(_QWORD *)a1 )
          goto LABEL_73;
        if ( v8 > 1 )
        {
          v28 = *(_QWORD *)(a1 + 8);
          v29 = (_QWORD *)(v28 + 8 * (BugCheckParameter4 >> 6));
          v30 = (_QWORD *)(v28 + 8 * (v27 >> 6));
          if ( v29 == v30 )
          {
            v18 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
          }
          else
          {
            if ( (*v29 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
              goto LABEL_73;
            if ( ++v29 != v30 )
            {
              while ( *v29 == -1LL )
              {
                if ( ++v29 == v30 )
                  goto LABEL_24;
              }
LABEL_73:
              KeBugCheckEx(0xDAu, 0x504uLL, v19, v8, BugCheckParameter4);
            }
LABEL_24:
            v18 = 0xFFFFFFFFFFFFFFFFuLL >> -(char)(BugCheckParameter4 + v8);
          }
          if ( (*v29 & v18) != v18 )
            goto LABEL_73;
        }
        else if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
        {
          goto LABEL_73;
        }
        if ( !v6 )
        {
          MiInsertTbFlushEntry(&v57, (__int64)(v19 << 25) >> 16, v8);
          if ( (unsigned int)MiFlushTbListEarly(&v57, 1LL) == 1 )
          {
            _InterlockedOr(v51, 0);
            if ( (unsigned int)(KiTbFlushTimeStamp - v7) > 2
              || (v7 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v7) >= 2 )
            {
              goto LABEL_69;
            }
          }
          goto LABEL_66;
        }
        do
        {
          *(_QWORD *)v19 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v19, v18) )
            MiWritePteShadow(v31, 0LL);
          v19 = v33 + 8;
        }
        while ( v32 != 1 );
        v34 = BugCheckParameter4 & 0x1F;
        v35 = v8;
        v36 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
        if ( v34 + v8 > 0x20 )
        {
          if ( (BugCheckParameter4 & 0x1F) != 0 )
          {
            _InterlockedAnd(v36, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v34));
            v35 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
            ++v36;
          }
          if ( v35 >= 0x20 )
          {
            v38 = v35 >> 5;
            v35 += -32LL * (v35 >> 5);
            do
            {
              *v36++ = 0;
              --v38;
            }
            while ( v38 );
          }
          if ( !v35 )
            goto LABEL_47;
          v37 = (1 << v35) - 1;
        }
        else
        {
          if ( v8 == 32 )
          {
            *v36 = 0;
LABEL_47:
            v39 = 512LL;
            if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
              v39 = 32LL;
            v40 = v39 - 1;
            v41 = ~(v39 - 1);
            v42 = BugCheckParameter4 & v41;
            v43 = (v41 & (BugCheckParameter4 + v39 + v8 - 1)) - (BugCheckParameter4 & v41);
            if ( !v43 )
            {
LABEL_65:
              v6 = v52;
              v5 = v8 + v54;
              v54 += v8;
LABEL_66:
              v8 = 0LL;
              goto LABEL_67;
            }
            v44 = -(__int64)v42;
            while ( 1 )
            {
              v45 = v40 + v42;
              if ( v40 + v42 < *(_QWORD *)a1 )
                break;
LABEL_63:
              v42 += v39;
              if ( v44 + v42 >= v43 )
              {
                v21 = v56;
                goto LABEL_65;
              }
            }
            v46 = *(_QWORD *)(a1 + 8);
            v47 = (_QWORD *)(v46 + 8 * (v42 >> 6));
            v48 = (_QWORD *)(v46 + 8 * (v45 >> 6));
            if ( v47 == v48 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v39) << v42) & *v47) != 0 )
                goto LABEL_62;
            }
            else
            {
              if ( ((-1LL << v42) & *v47) != 0 )
                goto LABEL_62;
              v49 = v47 + 1;
              if ( v49 != v48 )
              {
                while ( !*v49 )
                {
                  if ( ++v49 == v48 )
                    goto LABEL_59;
                }
                goto LABEL_62;
              }
LABEL_59:
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v45)) & *v49) != 0 )
              {
LABEL_62:
                v40 = v39 - 1;
                goto LABEL_63;
              }
            }
            if ( (unsigned int)RtlInterlockedSetClearRunEx(a1, v42, v39) == 1 )
              MiReturnSystemPtes(a1, v42, v39, 0LL);
            goto LABEL_62;
          }
          v37 = ((1 << v8) - 1) << v34;
        }
        _InterlockedAnd(v36, ~v37);
        goto LABEL_47;
      }
LABEL_67:
      v7 = v53;
      BugCheckParameter4 = v21;
    }
    while ( v21 );
    if ( !v6 )
    {
LABEL_69:
      if ( HIDWORD(v59) )
        MiFlushTbList(&v57);
    }
    BugCheckParameter4 = v55;
    ++v6;
    v7 = v53;
    v52 = v6;
  }
  while ( v6 < 2 );
  return v5;
}
