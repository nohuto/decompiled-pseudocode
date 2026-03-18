/*
 * XREFs of MmSetPfnListPriorities @ 0x1400145D0
 * Callers:
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MmSetPfnListPriorities(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rdi
  unsigned int i; // r14d
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  char v10; // dl
  char v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // xmm1_8
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v2 = (unsigned __int64)&a2[3 * a1];
  v3 = a2;
  for ( i = 0; (unsigned __int64)v3 < v2; v3 += 3 )
  {
    if ( (unsigned int)MI_IS_PFN(v3[1]) )
    {
      *(_QWORD *)&v16 = 0LL;
      v8 = 48 * v5 - v6;
      v17 = 0LL;
      *((_QWORD *)&v16 + 1) = v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v7);
      MiLockPageAtDpcInline(v8);
      MiIdentifyPfn(v8, &v16);
      if ( v17 == v3[2]
        && (((unsigned __int64)v16 ^ *v3) & 0x1FFFFFFFFFFFE00LL) == 0
        && ((v10 = *(_BYTE *)(v8 + 34) & 7, v10 == 6) || (unsigned __int8)(v10 - 2) <= 2u) )
      {
        v11 = *(_BYTE *)(v8 + 35);
        v12 = (*v3 >> 57) & 7LL;
        if ( (v11 & 8) != 0 )
          v13 = 5;
        else
          v13 = v11 & 7;
        if ( (_DWORD)v12 != v13 )
        {
          if ( v10 == 2 )
            MiRelinkStandbyPage(v8, (*v3 >> 57) & 7LL, 1022LL);
          else
            *(_BYTE *)(v8 + 35) = v11 ^ (v12 ^ v11) & 7;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v17 |= 2uLL;
        i = -1073741788;
        v15 = v17;
        *(_OWORD *)v3 = v16;
        v3[2] = v15;
      }
    }
    else
    {
      i = -1073741584;
    }
  }
  return i;
}
