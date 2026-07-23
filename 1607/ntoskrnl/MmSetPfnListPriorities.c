/*
 * XREFs of MmSetPfnListPriorities @ 0x1400BC000
 * Callers:
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 */

__int64 __fastcall MmSetPfnListPriorities(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __m128i *v7; // rbx
  unsigned __int8 CurrentIrql; // si
  char v9; // r8
  int PfnPriority; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r8
  __int64 v15; // xmm1_8
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v2 = 0;
  v3 = a2 + 24 * a1;
  for ( i = a2; i < v3; i += 24LL )
  {
    if ( MiIsPfnInline(*(_QWORD *)(i + 8)) )
    {
      v7 = (__m128i *)(48 * v5 - 0x58000000000LL);
      *((_QWORD *)&v16 + 1) = v5;
      *(_QWORD *)&v16 = 0LL;
      v17 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      MiLockPageAtDpcInline((__int64)v7);
      MiIdentifyPfn(v7, &v16);
      if ( v17 == *(_QWORD *)(i + 16)
        && (((unsigned __int64)v16 ^ *(_QWORD *)i) & 0x1FFFFFFFFFFFE00LL) == 0
        && ((v9 = v7[2].m128i_i8[2] & 7, v9 == 6) || (unsigned __int8)(v9 - 2) <= 2u) )
      {
        PfnPriority = MiGetPfnPriority(v7);
        if ( (_DWORD)v11 != PfnPriority )
        {
          if ( v13 == 2 )
            MiRelinkStandbyPage(v12, v11, 1022LL);
          else
            v7[2].m128i_i8[3] ^= (v11 ^ v7[2].m128i_i8[3]) & 7;
        }
        _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      else
      {
        _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v17 |= 2uLL;
        v2 = -1073741788;
        v15 = v17;
        *(_OWORD *)i = v16;
        *(_QWORD *)(i + 16) = v15;
      }
    }
    else
    {
      v2 = -1073741584;
    }
  }
  return v2;
}
