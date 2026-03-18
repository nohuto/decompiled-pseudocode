/*
 * XREFs of MiAddToReservationCluster @ 0x14013AA00
 * Callers:
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 * Callees:
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int16 v6; // ax
  unsigned int v7; // ebp
  __int64 v8; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned __int8 CurrentIrql; // r15
  __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned __int64 v21; // r10
  __int64 v22; // r11
  __int16 v23; // r8
  const signed __int64 *v24; // rcx
  unsigned int v25; // r10d
  _DWORD *v26; // r8
  _DWORD *v27; // r9
  unsigned int v28; // edx
  bool i; // zf
  int v30; // ecx
  __int64 v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+70h] [rbp+8h]
  unsigned int v34; // [rsp+80h] [rbp+18h]

  v34 = a3;
  v6 = *(_WORD *)(a1 + 164);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 216);
  v33 = v8;
  v10 = (unsigned int)a3;
  v11 = 5LL * (v6 & 0xF);
  v32 = v11;
  if ( (_DWORD)a3 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 8 * v11 + 2128);
      if ( v13 == 0xFFFFFFFFFLL )
        return v7;
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = 0;
      CurrentIrql = KeGetCurrentIrql();
      v17 = 2LL;
      __writecr8(2uLL);
      v18 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( *(__int64 *)(v14 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
        v10 = v34;
        v11 = v32;
        v8 = v33;
      }
      if ( v13 == *(_QWORD *)(v8 + 8 * v11 + 2128) )
      {
        v19 = MiReverseSwizzleInvalidPte(*(_QWORD *)(v14 + 16), v17, a3, v10);
        if ( HIDWORD(v19) != a4 )
        {
          if ( (v15 = HIDWORD(v19) - a4,
                v23 = *(_WORD *)(qword_1403551E0[(unsigned __int8)HIBYTE(*(_WORD *)(v14 + 16)) >> 4] + 164LL),
                (v23 & 0x10) == 0)
            && ((v23 & 0x20) == 0 || (*(_QWORD *)(v14 + 16) & 2) == 0)
            || HIDWORD(v19) < a4
            || v15 > 0x1F
            || v15 + v7 >= v20 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v21);
            goto LABEL_44;
          }
        }
        v24 = *(const signed __int64 **)(v22 + 8);
        if ( _bittest64(v24, HIDWORD(v19)) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v21);
          __writecr8(CurrentIrql);
          return v7;
        }
        if ( v15 )
        {
          v25 = v15 + a4 - 1;
          if ( v25 >= *(_DWORD *)v22 )
            goto LABEL_25;
          if ( v15 > 1 )
          {
            v26 = (_DWORD *)v24 + ((unsigned __int64)a4 >> 5);
            v27 = (_DWORD *)v24 + ((unsigned __int64)v25 >> 5);
            if ( v26 != v27 )
            {
              for ( i = ((-1 << a4) & *v26) == 0; i; i = *v26 == 0 )
              {
                if ( ++v26 == v27 )
                {
                  v28 = 0xFFFFFFFF >> -(char)(v15 + a4);
                  goto LABEL_33;
                }
              }
LABEL_25:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_44:
              __writecr8(CurrentIrql);
              return v7;
            }
            v28 = 0xFFFFFFFF >> (32 - v15) << a4;
LABEL_33:
            if ( (v28 & *v26) != 0 )
              goto LABEL_25;
          }
          else if ( _bittest((const signed __int32 *)v24, a4) )
          {
            goto LABEL_25;
          }
        }
        v30 = MiReferencePageForModifiedWrite(48 * v13 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( !v30 )
          return v7;
        if ( v15 )
        {
          v7 += v15;
          a4 += v15;
          *a6 += v15;
          do
          {
            *a5++ = qword_14034F6F8;
            --v15;
          }
          while ( v15 );
        }
        *a5 = v13;
        ++v7;
        ++a5;
        ++a4;
        if ( v30 == 3 && v7 >= 0x10 )
          return v7;
        v8 = v33;
        v10 = v34;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      if ( v7 == (_DWORD)v10 )
        return v7;
      v11 = v32;
    }
  }
  return v7;
}
