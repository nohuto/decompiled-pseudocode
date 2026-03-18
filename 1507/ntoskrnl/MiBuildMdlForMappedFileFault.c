/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x1400DEFD0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140055320 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiBuildMdlForMappedFileFault(
        _KPROCESS *Process,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  _KPROCESS *v17; // rbp
  __int64 *v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  _WORD *v24; // rax
  __int16 v25; // dx
  __int64 Page; // rax
  __int64 v27; // r9
  _QWORD *v28; // r15
  unsigned __int64 *v30; // rdi
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rax
  char v33; // di
  int v34; // edi
  __int64 v35; // r11
  __int64 v36; // rcx
  signed __int64 v37; // r8
  __int64 v38; // rax
  _QWORD *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rsi
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // r10
  unsigned int v46; // edi
  __int64 v47; // rax
  __int64 TransitionPte; // rax
  unsigned int v49; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v50; // [rsp+28h] [rbp-70h]
  signed __int64 v51; // [rsp+28h] [rbp-70h]
  unsigned __int64 v52; // [rsp+30h] [rbp-68h]
  __int64 v53; // [rsp+38h] [rbp-60h]
  __int64 v54; // [rsp+40h] [rbp-58h]
  _QWORD *v55; // [rsp+48h] [rbp-50h]
  _KPROCESS *v56; // [rsp+A0h] [rbp+8h]
  char v58; // [rsp+A8h] [rbp+10h]
  _QWORD *v59; // [rsp+B0h] [rbp+18h]

  v59 = a3;
  v56 = Process;
  v9 = (unsigned __int64)a2;
  v10 = Process->Affinity.Bitmap[9];
  v11 = (unsigned __int64)a3;
  v12 = Process->Affinity.Bitmap[10];
  v14 = 0LL;
  v55 = (_QWORD *)Process->Affinity.Bitmap[17];
  v52 = 0LL;
  v15 = a3 - a2;
  v16 = &Process->ActiveProcessors.Bitmap[3];
  v50 = &Process->ActiveProcessors.Bitmap[3];
  LODWORD(v54) = v15 + 1;
  v17 = Process;
  v18 = (__int64 *)&Process->ActiveProcessors.Bitmap[3];
  v19 = v9;
  if ( v9 > v11 )
  {
LABEL_38:
    v28 = v59;
    goto LABEL_39;
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)v19;
    if ( v19 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v21)
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v22 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 8 * ((v19 >> 3) & 0x1FF));
        if ( (v23 & 0x20) != 0 )
          v21 |= 0x20uLL;
        if ( (v23 & 0x42) != 0 )
          v21 |= 0x42uLL;
      }
    }
    if ( v21 == v12 )
      break;
    *v18 = qword_14034F708;
LABEL_23:
    v19 += 8LL;
    ++v18;
    if ( v19 > v11 )
    {
      v9 = (unsigned __int64)a2;
LABEL_37:
      v17 = v56;
      v16 = v50;
      goto LABEL_38;
    }
  }
  if ( a6 != -1 )
  {
    *v18 = a6;
    a6 = -1LL;
LABEL_21:
    if ( *v18 == -1 )
      goto LABEL_26;
    v52 = ++v14;
    goto LABEL_23;
  }
  if ( v14 != a5
    && (!a8 || *(_BYTE *)a8 != 1 || MiGetAvailablePagesBelowPriority(a4, ((*(_DWORD *)(a8 + 80) >> 3) & 7u) + 1)) )
  {
    v24 = *(_WORD **)a9;
    v25 = *(_WORD *)(a9 + 8);
    Page = MiGetPage((__int64)a4, *(unsigned __int16 *)(a9 + 10) | (unsigned int)(unsigned __int16)(++*v24 & v25), 0);
    v14 = v52;
    v11 = (unsigned __int64)v59;
    *v18 = Page;
    goto LABEL_21;
  }
  *v18 = -1LL;
LABEL_26:
  v27 = a8;
  if ( a8 )
    *(_BYTE *)(a8 + 1) = 2;
  if ( v19 > (unsigned __int64)v55 )
  {
    v9 = (unsigned __int64)a2;
    v28 = (_QWORD *)(v19 - 8);
    v17 = v56;
    v16 = v50;
    v54 = (__int64)(v19 - (_QWORD)a2) >> 3;
    v59 = (_QWORD *)(v19 - 8);
    goto LABEL_40;
  }
  if ( !v52 )
    return 0LL;
  v16 = v50;
  v59 = v55;
  LODWORD(v54) = 1;
  v30 = v50;
  v9 = (unsigned __int64)v55;
  v28 = v55;
  if ( v52 > 1 )
  {
    v31 = v52 - 1;
    v52 = 1LL;
    do
    {
      v32 = v30[1];
      ++v30;
      if ( v32 != qword_14034F708 )
        MiReleaseFreshPage(48 * v32 - 0x58000000000LL);
      --v31;
    }
    while ( v31 );
    goto LABEL_37;
  }
  v17 = v56;
LABEL_39:
  v27 = a8;
LABEL_40:
  v33 = 0;
  v58 = 0;
  if ( a7 >> 3 == 3 && (a7 & 7) != 0 )
  {
    v49 = dword_1403D0480;
  }
  else
  {
    v34 = 1;
    if ( a7 >> 3 == 1 )
      v34 = MiPlatformCacheAttributes[0];
    v49 = v34;
    v33 = 0;
  }
  v35 = (__int64)(v10 + 0x58000000000LL) / 48;
  if ( v9 <= (unsigned __int64)v28 )
  {
    v36 = v9 - (_QWORD)v16 + 0x90482413000LL;
    v37 = (signed __int64)v16 - v9;
    v53 = v36;
    v51 = v37;
    while ( 1 )
    {
      v38 = *(_QWORD *)(v37 + v9);
      v39 = (_QWORD *)(v37 + v9);
      if ( v38 == qword_14034F708 )
      {
        v33 = 1;
        v58 = 1;
      }
      else
      {
        v40 = *(_QWORD *)v9;
        v41 = 48 * v38 - 0x58000000000LL;
        v42 = (unsigned __int64)v39 + v36;
        if ( (unsigned __int64)v39 + v36 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v36, v40)
          && (v40 & 1) != 0
          && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
        {
          v37 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v37 )
          {
            v43 = *(_QWORD *)(v37 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v43 & 0x20) != 0 )
              v40 |= 0x20uLL;
            if ( (v43 & 0x42) != 0 )
              v40 |= 0x42uLL;
          }
        }
        *(_QWORD *)v41 = &v17->ProfileListHead.Blink;
        if ( ((v12 >> 10) & 1) != 0 )
        {
          *(_QWORD *)(v41 + 16) = v40;
        }
        else
        {
          v44 = MiReverseSwizzleInvalidPte(v12, v40, v37, v27);
          *(_QWORD *)(v41 + 16) = *(_QWORD *)(48 * ((v45 & (v44 >> 12)) - 0x1D55555555LL));
        }
        *(_QWORD *)(v41 + 40) |= 0x200000000000000uLL;
        *(_BYTE *)(v41 + 34) |= 0x20u;
        *(_WORD *)(v41 + 32) = 1;
        if ( v27 )
          MiAdvanceFaultList(v27);
        v46 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v46 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v46);
          }
          while ( (*(_QWORD *)(v41 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
          v35 = (__int64)(v10 + 0x58000000000LL) / 48;
        }
        if ( (_QWORD *)v9 == v55 )
          *(_BYTE *)(v41 + 35) ^= (*(_BYTE *)(v41 + 35) ^ BYTE6(v56->Affinity.Bitmap[12])) & 7;
        else
          *(_BYTE *)(v41 + 35) ^= (*(_BYTE *)(v41 + 35) ^ (BYTE6(v56->Affinity.Bitmap[12]) >> 4)) & 7;
        v47 = (v35 ^ *(_QWORD *)(v41 + 40)) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v41 + 8) = v9;
        *(_QWORD *)(v41 + 40) ^= v47;
        LOBYTE(v47) = *(_BYTE *)(v41 + 34) & 0xF8 | 2;
        *(_BYTE *)(v41 + 34) = v47;
        if ( (unsigned __int8)v47 >> 6 != v49 )
          MiChangePageAttribute(v41, v49, 1LL);
        *(_QWORD *)(v41 + 24) &= 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( ((v12 >> 10) & 1) != 0 )
        {
          TransitionPte = MiMakeTransitionPte(*v39, a7);
          *(_QWORD *)v9 = TransitionPte;
          if ( v42 <= 0x7F8 )
            MiWritePteShadow(v9, TransitionPte);
        }
        v33 = v58;
        v36 = v53;
        v37 = v51;
      }
      v35 = (__int64)(v10 + 0x58000000000LL) / 48;
      v9 += 8LL;
      v27 = a8;
      if ( v9 > (unsigned __int64)v59 )
        break;
      v17 = v56;
    }
  }
  HIDWORD(v56->Affinity.Bitmap[11]) = (_DWORD)v54 << 12;
  if ( v33 == 1 )
    HIBYTE(v56->Affinity.Bitmap[12]) |= 1u;
  return v52;
}
