/*
 * XREFs of MiDeleteSystemPte @ 0x1401498C4
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1401495B0 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDeleteSystemPte(unsigned __int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r9
  _QWORD *v6; // rsi
  int v8; // ebp
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  char v18; // cl
  __int64 v19; // r8
  int IsZero; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rdi
  unsigned __int64 PteShadow; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r11
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // [rsp+30h] [rbp-38h] BYREF
  __int64 v35; // [rsp+38h] [rbp-30h]
  unsigned __int64 v36; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a1 + 0x90482413000LL;
  v6 = a3;
  v36 = a1 + 0x90482413000LL;
  v8 = 0;
  v9 = 2040LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)a1;
    if ( v5 <= 0x7F8
      && (unsigned int)MiPteHasShadow(a1, v10)
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v10 |= 0x20uLL;
        if ( (v12 & 0x42) != 0 )
          v10 |= 0x42uLL;
      }
    }
    v34 = v10;
    v13 = 0x3FFFFFFFFFFFFFFFLL;
    if ( !v10 )
      break;
    if ( (v10 & 1) != 0 )
    {
      if ( (unsigned __int64)&STACK[0x90482413030] <= v9 )
        v10 = MiReadPteShadow(&v34, v10);
      v15 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( v15 == qword_14034F6F0 )
      {
        *(_QWORD *)a1 = 0LL;
        if ( v5 <= v9 )
          MiWritePteShadow(a1, 0LL);
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFLL;
        *(_QWORD *)a1 = 0LL;
        v35 = v16;
        v17 = 48 * v16 - 0x58000000000LL;
        if ( v5 <= v9 )
          MiWritePteShadow(a1, 0LL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v4);
          }
          while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
        }
        v18 = *(_BYTE *)(v15 + 34);
        v19 = *(_QWORD *)(v15 + 24) | 0x4000000000000000LL;
        *(_QWORD *)(v15 + 24) = v19;
        if ( (v18 & 7) != 6 )
          KeBugCheckEx(0x4Eu, 0x99uLL, (v15 + 0x58000000000LL) / 48, v18 & 7, v19 & 0x3FFFFFFFFFFFFFFFLL);
        *(_QWORD *)(v15 + 24) = v19 ^ (((v19 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v19) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          IsZero = MiPfnShareCountIsZero(v15, 0LL);
        else
          IsZero = 2;
        if ( IsZero == 3 )
          ++a3[1];
        if ( v35 == 0xFFFFFFFFFLL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v21 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v21);
            }
            while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
          }
          if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v17 + 0x58000000000LL) / 48,
              *(_BYTE *)(v17 + 34) & 7,
              *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v22 = *(_QWORD *)(v17 + 24);
          v23 = (v22 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v17 + 24) = v22 ^ (v23 ^ v22) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v17, v23);
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v8 = 1;
      }
      MiInsertTbFlushEntry(a2, (__int64)(a1 << 25) >> 16, 1LL, 0);
      v6 = a3;
LABEL_57:
      if ( v8 == 1 )
        goto LABEL_58;
      goto LABEL_59;
    }
    if ( (v10 & 0x800) == 0 )
    {
      MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, v10, 1);
      *(_QWORD *)a1 = 0LL;
      if ( v36 <= 0x7F8 )
        MiWritePteShadow(a1, 0LL);
      v8 = 1;
      goto LABEL_57;
    }
    v14 = MiDeleteTransitionPte((_QWORD *)a1, 1);
    v5 = v36;
    v9 = 2040LL;
    if ( v14 != 1 )
    {
      if ( v14 == 3 )
        ++v6[1];
      v8 = 1;
LABEL_58:
      ++v6[3];
LABEL_59:
      v9 = 2040LL;
      v13 = 0x3FFFFFFFFFFFFFFFLL;
      break;
    }
  }
  if ( a1 >= (((unsigned __int64)qword_14034EA98 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a1 < (((unsigned __int64)qword_14034EAA8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v8 = 0;
  }
  if ( v8 == 1 )
    ++*v6;
  result = 0xFFFFF6FB7DBEDF68uLL;
  v25 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v25 != 0xFFFFF6FB7DBEDF68uLL )
  {
    PteShadow = *(_QWORD *)v25;
    v27 = 0x90482413000LL;
    if ( v25 + 0x90482413000LL <= v9 )
      PteShadow = MiReadPteShadow(v25, *(_QWORD *)v25);
    v34 = PteShadow;
    if ( (unsigned __int64)&v34 + v27 <= v9 )
      PteShadow = MiReadPteShadow(&v34, PteShadow);
    v28 = 6 * ((PteShadow >> 12) & 0xFFFFFFFFFLL);
    result = v13 & *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
    if ( result == 1 )
    {
      v29 = 4095LL;
      v30 = v25 << 25 >> 16;
      v31 = v30 + v27;
      do
      {
        v32 = *(_QWORD *)v30;
        if ( v31 <= 0x7F8 )
        {
          result = MiPteHasShadow(v28, v32);
          if ( (_DWORD)result )
          {
            if ( (v32 & 1) != 0 && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
            {
              result = (__int64)KeGetCurrentThread();
              v28 = *(_QWORD *)(result + 184);
              v33 = *(_QWORD *)(v28 + 1520);
              if ( v33 )
              {
                result = *(_QWORD *)(v33 + 8 * ((v30 >> 3) & 0x1FF));
                if ( (result & 0x20) != 0 )
                  v32 |= 0x20uLL;
                if ( (result & 0x42) != 0 )
                  v32 |= 0x42uLL;
              }
            }
          }
        }
        if ( v32 && (v32 & 1) == 0 )
          break;
        v30 += 8LL;
        v31 += 8LL;
      }
      while ( (v30 & v29) != 0 );
      if ( (v30 & v29) == 0 )
      {
        result = MiDeleteSystemPte(v25, a2, v6, a4);
        *a4 = 1;
      }
    }
  }
  return result;
}
