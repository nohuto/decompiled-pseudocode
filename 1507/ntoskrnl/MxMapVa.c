/*
 * XREFs of MxMapVa @ 0x1407C5B80
 * Callers:
 *     MxMapPfnRange @ 0x1407C59A0 (MxMapPfnRange.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MxGetNextLargePage @ 0x1407C5F90 (MxGetNextLargePage.c)
 *     MxFillPhysicalPage @ 0x1407C76BC (MxFillPhysicalPage.c)
 */

__int64 __fastcall MxMapVa(unsigned __int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r15
  __int64 *v5; // rdx
  int v6; // r9d
  __int64 *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // rbx
  unsigned int v15; // ebp
  unsigned __int64 v16; // rsi
  __int64 NextLargePage; // rax
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 *v21; // rcx
  ULONG_PTR v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // eax
  unsigned __int64 v26; // rdi
  char v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v5 = &v29;
  v6 = 2;
  v29 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = &v29;
  do
  {
    --v7;
    v8 = (unsigned __int64)*v5 >> 9;
    v5 = v7;
    *v7 = (v8 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v9 = qword_1403D0240 | 0xFFFFFFFFF021LL;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v9 |= 0x100uLL;
  v13 = (unsigned __int64 *)&v28;
  v14 = ~qword_1403D0220 & (v9 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
  v15 = v12;
  while ( 1 )
  {
    v16 = *v13;
    if ( (*(_BYTE *)*v13 & 1) != 0 )
      goto LABEL_46;
    if ( v15 == 2 )
    {
      NextLargePage = MxGetNextLargePage((unsigned int)v4, v10, v11, MxFreeDescriptor);
      if ( NextLargePage == -1 )
        return 0LL;
      v10 = (unsigned __int64)(word_14034EC18 & 1) << 8;
      v11 = (~qword_1403D0220 ^ (NextLargePage << 12)) & 0xFFFFFFFFF000LL;
      v14 = v11 ^ ~qword_1403D0220 & (v14 & 0xFFFFFFFFFFFFFEFFuLL | v10 | 0x8000FFFFFFFFF080uLL) | 0x80;
      *(_QWORD *)v16 = v14;
      if ( v16 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(v16, v14);
      if ( a3 == 1 )
        KeZeroPages((int *)((__int64)(v16 << 25) >> 16 << 25 >> 16), 0x200000uLL);
      goto LABEL_45;
    }
    v18 = v4;
    v19 = v12;
    do
    {
      v20 = 4LL * (unsigned int)v18;
      if ( MxFreeDescriptor[v20 + 1] != v12 && MxFreeDescriptor[v20 + 2] != -1 )
        break;
      v18 = (unsigned int)(v18 + 1);
      if ( (_DWORD)v18 == (unsigned __int16)KeNumberNodes )
        v18 = (unsigned int)v12;
      ++v19;
    }
    while ( v19 < (unsigned __int16)KeNumberNodes );
    if ( v19 == (unsigned __int16)KeNumberNodes )
      break;
    v21 = &MxFreeDescriptor[4 * v18];
    v22 = v21[2];
    if ( v22 == (v22 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v23 = v21[3];
      if ( v23 == -1 )
      {
        v21[2] = -1LL;
      }
      else
      {
        v21[2] = v23 + 511;
        if ( (unsigned __int64)(v23 - *v21) < 0x200 )
          v21[3] = -1LL;
        else
          v21[3] = v23 - 512;
      }
    }
    else
    {
      v21[2] = v22 - 1;
    }
    if ( v22 == -1LL )
      return 0LL;
    MxFillPhysicalPage(v22);
    v24 = qword_1403D0230 ^ (qword_1403D0230 ^ (v22 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( v16 + 0x904C0000000LL <= 0x3FFFFFFF )
      v24 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v16 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v16 >= 0xFFFFF68000000000uLL
      || v16 >= 0xFFFFF6FB40000000uLL
      && v16 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v16 >= 0xFFFFF6FB7DA00000uLL
      && v16 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v24 |= 4uLL;
    }
    v25 = MI_SHOULD_PTE_BE_GLOBAL(v16);
    v12 = 0LL;
    if ( v25 )
      v24 |= 0x100uLL;
    v26 = v24 & 0xFFFFFFFFFFFFFE7FuLL;
    v14 = v26 | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    if ( v15 != 3 )
      v14 = (v26 | ((unsigned __int64)(word_14034EC18 & 1) << 8)) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
    *(_QWORD *)v16 = v14;
    if ( v16 + 0x90482413000LL <= 0x7F8 )
    {
      MiWritePteShadow(v16, v14);
LABEL_45:
      v12 = 0LL;
    }
LABEL_46:
    ++v15;
    ++v13;
    if ( v15 >= 3 )
      return 1LL;
  }
  byte_14034F219 = 16;
  return 0LL;
}
