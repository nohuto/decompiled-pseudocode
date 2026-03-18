/*
 * XREFs of MmSetPfnListPriorities @ 0x140011DA0
 * Callers:
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MmSetPfnListPriorities(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rdi
  unsigned int i; // r15d
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v10; // esi
  char v11; // dl
  char v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // xmm1_8
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]

  v2 = (unsigned __int64)&a2[3 * a1];
  v3 = a2;
  for ( i = 0; (unsigned __int64)v3 < v2; v3 += 3 )
  {
    if ( (unsigned int)MI_IS_PFN(v3[1]) )
    {
      *(_QWORD *)&v17 = 0LL;
      v8 = 48 * v5 - v6;
      v18 = 0LL;
      *((_QWORD *)&v17 + 1) = v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v7);
      v10 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
        while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
      }
      MiIdentifyPfn(v8, &v17);
      if ( v18 == v3[2]
        && (((unsigned __int64)v17 ^ *v3) & 0x1FFFFFFFFFFFE00LL) == 0
        && ((v11 = *(_BYTE *)(v8 + 34) & 7, v11 == 6) || (unsigned __int8)(v11 - 2) <= 2u) )
      {
        v12 = *(_BYTE *)(v8 + 35);
        v13 = (*v3 >> 57) & 7LL;
        if ( (v12 & 8) != 0 )
          v14 = 5;
        else
          v14 = v12 & 7;
        if ( (_DWORD)v13 != v14 )
        {
          if ( v11 == 2 )
            MiRelinkStandbyPage(v8, (*v3 >> 57) & 7LL, 1022LL);
          else
            *(_BYTE *)(v8 + 35) = v12 ^ (v13 ^ v12) & 7;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v18 |= 2uLL;
        i = -1073741788;
        v16 = v18;
        *(_OWORD *)v3 = v17;
        v3[2] = v16;
      }
    }
    else
    {
      i = -1073741584;
    }
  }
  return i;
}
