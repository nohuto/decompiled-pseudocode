/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x1400AB410
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r13
  __int64 *v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v13; // r9
  unsigned int v14; // ebp
  __int64 *v15; // rbx
  __int64 *v16; // rsi
  __int64 result; // rax
  _WORD *v19; // rax
  __int16 v20; // dx
  __int64 v21; // r14
  char v22; // r8
  int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r13
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int8 v35; // r11
  unsigned __int8 v36; // al
  __int64 v37; // rbx
  unsigned int v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+24h] [rbp-54h] BYREF
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]
  __int64 *v42; // [rsp+38h] [rbp-40h]
  char v45; // [rsp+88h] [rbp+10h]
  unsigned __int64 v46; // [rsp+90h] [rbp+18h]

  v46 = a3;
  v9 = *(_QWORD *)(a1 + 160);
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 168);
  v13 = a1 + 304;
  v14 = 0;
  v42 = *(__int64 **)(a1 + 224);
  v40 = a1 + 304;
  v38 = 0;
  v15 = (__int64 *)(a1 + 304);
  v16 = a2;
  v41 = (unsigned int)((__int64)(a3 - (_QWORD)a2) >> 3) + 1;
  if ( (unsigned __int64)a2 > a3 )
  {
LABEL_15:
    v21 = a8;
    goto LABEL_16;
  }
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v16) != v11 )
    {
      *v15 = qword_1402FF248;
      goto LABEL_13;
    }
    if ( a6 == -1 )
      break;
    *v15 = a6;
    a6 = -1LL;
LABEL_11:
    if ( *v15 == -1 )
      goto LABEL_20;
    ++v38;
LABEL_13:
    ++v16;
    ++v15;
    if ( (unsigned __int64)v16 > v46 )
    {
      v10 = a2;
      v14 = v38;
      v13 = v40;
      goto LABEL_15;
    }
  }
  result = v38;
  if ( v38 != a5 )
  {
    if ( a8 && *(_BYTE *)a8 == 1 && !MiGetAvailablePagesBelowPriority(a4, ((*(_DWORD *)(a8 + 80) >> 3) & 7u) + 1) )
    {
      *v15 = -1LL;
LABEL_20:
      result = v38;
      goto LABEL_21;
    }
    v19 = *(_WORD **)a9;
    v20 = *(_WORD *)(a9 + 8);
    *v15 = MiGetPage((__int64)a4, *(unsigned __int16 *)(a9 + 10) | (unsigned int)(unsigned __int16)(++*v19 & v20), 0);
    goto LABEL_11;
  }
  *v15 = -1LL;
LABEL_21:
  v21 = a8;
  if ( a8 )
    *(_BYTE *)(a8 + 1) = 2;
  if ( v16 > v42 )
  {
    v10 = a2;
    v14 = v38;
    v13 = v40;
    v41 = v16 - a2;
    v46 = (unsigned __int64)(v16 - 1);
    goto LABEL_16;
  }
  if ( (_DWORD)result )
  {
    v13 = v40;
    v14 = v38;
    v10 = v42;
    v41 = 1LL;
    v24 = v40;
    v46 = (unsigned __int64)v42;
    if ( (unsigned int)result > 1 )
    {
      v25 = (unsigned int)(result - 1);
      do
      {
        v26 = *(_QWORD *)(v24 + 8);
        v24 += 8LL;
        if ( v26 != qword_1402FF248 )
          MiReleaseFreshPage(48 * v26 - 0x58000000000LL);
        --v14;
        --v25;
      }
      while ( v25 );
      v13 = v40;
      v38 = v14;
    }
LABEL_16:
    v22 = 0;
    v45 = 0;
    if ( a7 >> 3 == 3 && (a7 & 7) != 0 )
    {
      v23 = dword_1403812A8;
    }
    else
    {
      v23 = 1;
      if ( a7 >> 3 == 1 )
        v23 = MiPlatformCacheAttributes[0];
    }
    v27 = (__int64)((unsigned __int128)((v9 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v28 = (v27 >> 63) + v27;
    if ( (unsigned __int64)v10 <= v46 )
    {
      v29 = v13 - (_QWORD)v10;
      v40 = v29;
      do
      {
        v30 = *(__int64 *)((char *)v10 + v29);
        if ( v30 == qword_1402FF248 )
        {
          v22 = 1;
          v45 = 1;
        }
        else
        {
          v31 = 48 * v30 - 0x58000000000LL;
          v32 = MI_READ_PTE_LOCK_FREE(v10);
          *(_QWORD *)v31 = a1 + 32;
          if ( ((v11 >> 10) & 1) == 0 )
            v32 = *(_QWORD *)(48 * (((v11 >> 12) & 0xFFFFFFFFFLL) - 0x1D55555555LL));
          *(_BYTE *)(v31 + 34) |= 0x20u;
          v35 = 1;
          *(_QWORD *)(v31 + 16) = v32;
          *(_QWORD *)(v31 + 40) |= 0x200000000000000uLL;
          *(_WORD *)(v31 + 32) = 1;
          if ( v21 )
            MiAdvanceFaultList(v21);
          v39 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v39, v33, v34);
              while ( (*(_QWORD *)(v31 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
            v21 = a8;
            v35 = 1;
          }
          if ( v10 == v42 )
            *(_BYTE *)(v31 + 35) ^= (*(_BYTE *)(v31 + 35) ^ *(_BYTE *)(a1 + 190)) & 7;
          else
            *(_BYTE *)(v31 + 35) ^= (*(_BYTE *)(v31 + 35) ^ (*(_BYTE *)(a1 + 190) >> 4)) & 7;
          *(_QWORD *)(v31 + 8) = v10;
          *(_QWORD *)(v31 + 40) ^= (*(_QWORD *)(v31 + 40) ^ v28) & 0xFFFFFFFFFLL;
          v36 = *(_BYTE *)(v31 + 34) & 0xF8 | 2;
          *(_BYTE *)(v31 + 34) = v36;
          if ( v36 >> 6 != v23 )
            MiChangePageAttribute(v31, v23, v35);
          *(_QWORD *)(v31 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( ((v11 >> 10) & 1) != 0 )
          {
            v37 = 32 * (a7 & 0x1F | ((*(__int64 *)((char *)v10 + v40) & 0xFFFFFFFFFLL) << 7) | 0x40);
            *v10 = v37;
            if ( (unsigned int)MiPteInShadowRange(v10) )
              MiWritePteShadow(v10, v37);
          }
          v22 = v45;
          v29 = v40;
        }
        ++v10;
      }
      while ( (unsigned __int64)v10 <= v46 );
      v14 = v38;
    }
    *(_DWORD *)(a1 + 180) = (_DWORD)v41 << 12;
    if ( v22 == 1 )
      *(_BYTE *)(a1 + 191) |= 1u;
    return v14;
  }
  return result;
}
