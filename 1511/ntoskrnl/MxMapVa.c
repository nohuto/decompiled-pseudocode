/*
 * XREFs of MxMapVa @ 0x140747468
 * Callers:
 *     MxMapPfnRange @ 0x140747288 (MxMapPfnRange.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxGetNextLargePage @ 0x140747728 (MxGetNextLargePage.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MxMapVa(unsigned __int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 *v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  __int64 NextLargePage; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 *v20; // rcx
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r9
  char v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF

  v3 = a2;
  v4 = &v26;
  v26 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = &v26;
  LODWORD(v7) = 2;
  do
  {
    --v6;
    v8 = ((unsigned __int64)*v4 >> 9) & 0x7FFFFFFFF8LL;
    v4 = v6;
    *v6 = v8 - 0x98000000000LL;
    v9 = (_DWORD)v7 == 1;
    v7 = (unsigned int)(v7 - 1);
  }
  while ( !v9 );
  v10 = (unsigned __int64 *)&v25;
  v11 = 0;
  v13 = ~qword_140381310 & (MiMakeValidKernelPte(-1LL, (int)v7 + 6, 0LL, v7) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  while ( 1 )
  {
    v15 = *v10;
    if ( (*(_BYTE *)*v10 & 1) != 0 )
      goto LABEL_28;
    if ( v11 == 2 )
    {
      NextLargePage = MxGetNextLargePage((unsigned int)v3, v12, v14, MxFreeDescriptor);
      if ( NextLargePage == -1 )
        return 0LL;
      v13 = (~qword_140381310 ^ (NextLargePage << 12)) & 0xFFFFFFFFF000LL ^ ~qword_140381310 & (v13 & 0xFFFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_1402FE760 & 1) << 8) | 0x8000FFFFFFFFF080uLL) | 0x80;
      *(_QWORD *)v15 = v13;
      if ( MiPteInShadowRange(v15) )
        MiWritePteShadow(v15, v13);
      if ( a3 == 1 )
        KeZeroPages((int *)((__int64)(v15 << 25) >> 16 << 25 >> 16), 0x200000uLL);
      goto LABEL_28;
    }
    v17 = v3;
    v18 = 0;
    do
    {
      v19 = 4LL * (unsigned int)v17;
      if ( MxFreeDescriptor[v19 + 1] && MxFreeDescriptor[v19 + 2] != -1 )
        break;
      v17 = (unsigned int)(v17 + 1);
      if ( (_DWORD)v17 == (unsigned __int16)KeNumberNodes )
        v17 = 0LL;
      ++v18;
    }
    while ( v18 < (unsigned __int16)KeNumberNodes );
    if ( v18 == (unsigned __int16)KeNumberNodes )
      break;
    v20 = &MxFreeDescriptor[4 * v17];
    v21 = v20[2];
    if ( v21 == (v21 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v22 = v20[3];
      if ( v22 == -1 )
      {
        v20[2] = -1LL;
      }
      else
      {
        v20[2] = v22 + 511;
        if ( (unsigned __int64)(v22 - *v20) < 0x200 )
          v20[3] = -1LL;
        else
          v20[3] = v22 - 512;
      }
    }
    else
    {
      v20[2] = v21 - 1;
    }
    if ( v21 == -1LL )
      return 0LL;
    MxFillPhysicalPage(v21);
    v13 = MiMakeValidKernelPte(v21, 4, v15, v23) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
    *(_QWORD *)v15 = v13;
    if ( MiPteInShadowRange(v15) )
      MiWritePteShadow(v15, v13);
LABEL_28:
    ++v11;
    ++v10;
    if ( v11 >= 3 )
      return 1LL;
  }
  byte_1402FED75 = 16;
  return 0LL;
}
