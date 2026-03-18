/*
 * XREFs of MiReplenishBitMap @ 0x140013C80
 * Callers:
 *     MiEmptyPteBins @ 0x140013B2C (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x140068430 (MiInsertCachedPte.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1400153A0 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400159D0 (RtlInterlockedSetClearRunEx.c)
 *     MiFlushTbListEarly @ 0x140015ED0 (MiFlushTbListEarly.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReplenishBitMap(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v5; // r12
  __int64 v6; // r15
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  ULONG_PTR v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // r8
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // r10
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // r9
  unsigned __int64 v20; // rdx
  int v21; // ebx
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // r10
  unsigned __int64 v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rcx
  ULONG_PTR v29; // rbx
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  ULONG_PTR v32; // r9
  __int64 v33; // rdx
  volatile signed __int32 *v34; // rax
  volatile signed __int32 *v35; // rax
  signed __int32 v37[8]; // [rsp+0h] [rbp-158h] BYREF
  int v38; // [rsp+30h] [rbp-128h]
  int v39; // [rsp+34h] [rbp-124h]
  __int64 v40; // [rsp+38h] [rbp-120h]
  ULONG_PTR v41; // [rsp+40h] [rbp-118h]
  ULONG_PTR v42; // [rsp+48h] [rbp-110h]
  int v43; // [rsp+50h] [rbp-108h] BYREF
  __int16 v44; // [rsp+54h] [rbp-104h]
  __int64 v45; // [rsp+58h] [rbp-100h]
  __int64 v46; // [rsp+60h] [rbp-F8h]
  __int64 v47; // [rsp+68h] [rbp-F0h]

  v41 = a2;
  v40 = 0LL;
  BugCheckParameter4 = a2;
  v38 = 0;
  if ( a3 == 1 )
  {
    v45 = 20LL;
    v43 = 0;
    v44 = 0;
    v46 = 0LL;
    v47 = 0LL;
    _InterlockedOr(v37, 0);
    v39 = KiTbFlushTimeStamp;
  }
  else
  {
    v38 = 1;
    v39 = 0;
    HIDWORD(v45) = 0;
  }
  do
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(a1 + 16);
      v7 = (_QWORD *)(v6 + 8 * BugCheckParameter4);
      v8 = MI_READ_PTE_LOCK_FREE(v7);
      if ( (v8 & 0x1E) == 2 )
        v9 = 1LL;
      else
        v9 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v7 + 1) >> 32;
      v10 = HIDWORD(v8);
      v5 += v9;
      v42 = v10;
      v11 = v10;
      if ( !(_DWORD)v10
        || ((v12 = v6 + 8 * v10, (MI_READ_PTE_LOCK_FREE(v12) & 0x1E) != 2)
          ? (v15 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v12 + 8) >> 32)
          : (v15 = 1LL),
            v11 + v15 != BugCheckParameter4) )
      {
        v16 = BugCheckParameter4 + v5 - 1;
        if ( v16 >= *(_QWORD *)a1 )
          goto LABEL_74;
        if ( v5 > 1 )
        {
          v17 = *(_QWORD *)(a1 + 8);
          v18 = (_QWORD *)(v17 + 8 * (BugCheckParameter4 >> 6));
          v19 = (_QWORD *)(v17 + 8 * (v16 >> 6));
          if ( v18 == v19 )
          {
            v20 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << BugCheckParameter4;
          }
          else
          {
            if ( (*v18 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
              goto LABEL_74;
            if ( ++v18 != v19 )
            {
              while ( *v18 == -1LL )
              {
                if ( ++v18 == v19 )
                  goto LABEL_24;
              }
LABEL_74:
              KeBugCheckEx(0xDAu, 0x504uLL, v6 + 8 * BugCheckParameter4, v5, BugCheckParameter4);
            }
LABEL_24:
            v20 = 0xFFFFFFFFFFFFFFFFuLL >> -(char)(BugCheckParameter4 + v5);
          }
          if ( (*v18 & v20) != v20 )
            goto LABEL_74;
        }
        else if ( v5 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
        {
          goto LABEL_74;
        }
        v21 = v38;
        if ( !v38 )
        {
          MiInsertTbFlushEntry(&v43, (__int64)((_QWORD)v7 << 25) >> 16, v5, 0LL);
          if ( (unsigned int)MiFlushTbListEarly(&v43, 1LL) == 1 )
          {
            _InterlockedOr(v37, 0);
            if ( (unsigned int)(KiTbFlushTimeStamp - v39) > 2
              || (v39 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v39) >= 2 )
            {
              goto LABEL_70;
            }
          }
          goto LABEL_67;
        }
        v22 = v5;
        do
        {
          *v7 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v7) )
            MiWritePteShadow(v7, 0LL);
          ++v7;
          --v22;
        }
        while ( v22 );
        v23 = BugCheckParameter4 & 0x1F;
        v24 = v5;
        v14 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
        if ( v23 + v5 > 0x20 )
        {
          if ( (BugCheckParameter4 & 0x1F) != 0 )
          {
            _InterlockedAnd(v14, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v23));
            v24 = v5 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
            ++v14;
          }
          if ( v24 >= 0x20 )
          {
            v26 = v24 >> 5;
            v24 += -32LL * (v24 >> 5);
            do
            {
              *v14++ = 0;
              --v26;
            }
            while ( v26 );
          }
          if ( !v24 )
            goto LABEL_48;
          v25 = (1 << v24) - 1;
        }
        else
        {
          if ( v5 == 32 )
          {
            *v14 = 0;
LABEL_48:
            v27 = 512LL;
            if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
              v27 = 32LL;
            v13 = v27 - 1;
            v28 = ~(v27 - 1);
            v29 = BugCheckParameter4 & v28;
            v30 = (v28 & (BugCheckParameter4 + v27 + v5 - 1)) - (BugCheckParameter4 & v28);
            if ( !v30 )
            {
LABEL_66:
              v40 += v5;
LABEL_67:
              v5 = 0LL;
              goto LABEL_68;
            }
            v31 = -(__int64)v29;
            while ( 1 )
            {
              v32 = v13 + v29;
              if ( v13 + v29 < *(_QWORD *)a1 )
                break;
LABEL_64:
              v29 += v27;
              if ( v31 + v29 >= v30 )
              {
                v11 = v42;
                goto LABEL_66;
              }
            }
            v33 = *(_QWORD *)(a1 + 8);
            v34 = (volatile signed __int32 *)(v33 + 8 * (v29 >> 6));
            v14 = (volatile signed __int32 *)(v33 + 8 * (v32 >> 6));
            if ( v34 == v14 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v27) << v29) & *(_QWORD *)v34) != 0 )
                goto LABEL_63;
            }
            else
            {
              if ( ((-1LL << v29) & *(_QWORD *)v34) != 0 )
                goto LABEL_63;
              v35 = v34 + 2;
              if ( v35 != v14 )
              {
                while ( !*(_QWORD *)v35 )
                {
                  v35 += 2;
                  if ( v35 == v14 )
                    goto LABEL_60;
                }
                goto LABEL_63;
              }
LABEL_60:
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v32)) & *(_QWORD *)v35) != 0 )
              {
LABEL_63:
                v13 = v27 - 1;
                goto LABEL_64;
              }
            }
            if ( (unsigned int)RtlInterlockedSetClearRunEx(a1, v29, v27) == 1 )
              MiReturnSystemPtes(a1, v29, v27, 0LL);
            goto LABEL_63;
          }
          v25 = ((1 << v5) - 1) << v23;
        }
        _InterlockedAnd(v14, ~v25);
        goto LABEL_48;
      }
LABEL_68:
      BugCheckParameter4 = v11;
    }
    while ( v11 );
    v21 = v38;
    if ( !v38 )
    {
LABEL_70:
      if ( HIDWORD(v45) )
        MiFlushTbList(&v43, v13, v14);
    }
    BugCheckParameter4 = v41;
    v38 = v21 + 1;
  }
  while ( (unsigned int)(v21 + 1) < 2 );
  return v40;
}
