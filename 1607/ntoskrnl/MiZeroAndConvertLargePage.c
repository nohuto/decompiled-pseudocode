/*
 * XREFs of MiZeroAndConvertLargePage @ 0x1401FC2F8
 * Callers:
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 */

void __fastcall MiZeroAndConvertLargePage(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v7; // rbp
  BOOL v8; // eax
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r9
  BOOL v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  ULONG_PTR v15; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v17; // r9
  _QWORD *v18; // r10
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 i; // r14
  _BYTE v24[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+42h] [rbp-26h]

  v25 = 0LL;
  v4 = a3;
  v5 = (*(_BYTE *)(a1 + 34) & 7) == 0;
  v26 = v26 & 0x3F | 0x40;
  if ( !v5 )
    MiSetOriginalPtePfnFromFreeList(&v25);
  v7 = 0LL;
  v8 = MiPfnZeroingNeeded((__int64)v24);
  v11 = v8;
  if ( (_DWORD)v4 == 1 )
  {
LABEL_10:
    if ( !v11 )
      return;
    goto LABEL_11;
  }
  v12 = a1;
  if ( a2 )
  {
    v13 = a2;
    do
    {
      *(_QWORD *)(v12 + 16) = v7;
      v7 = v12;
      v12 += 48LL;
      --v13;
    }
    while ( v13 );
  }
  if ( !v8 )
    goto LABEL_20;
  if ( *((_DWORD *)&unk_140326A60 + 4 * ((unsigned __int64)v10 >> 6) + v4) == (_DWORD)v4 )
  {
    MiChangePageAttributeBatch(v7, v4, 0LL);
    v7 = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  v14 = (a1 + 0x58000000000LL) / 48;
  v15 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)a2, v9);
  if ( v15 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
    v17 = MiMakeValidKernelPte((a1 + 0x58000000000LL) / 48, ProtectionPfnCompatible, v15) | 0x42;
    if ( a2 )
    {
      v18 = (_QWORD *)v15;
      v19 = v14 << 12;
      do
      {
        *v18 = (v17 ^ v19) & 0xFFFFFFFFF000LL ^ v17;
        if ( MiPteInShadowRange((unsigned __int64)v18) )
          MiWritePteShadow(v20, v17);
        v19 += 4096LL;
        v18 = (_QWORD *)(v21 + 8);
      }
      while ( v22 != 1 );
    }
    KeZeroPages((int *)((__int64)(v15 << 25) >> 16), a2 << 12);
    MiReleasePtes((__int64)&qword_1403278B0, v15, a2);
  }
  else
  {
    for ( i = 0LL; i < a2; ++i )
      MiZeroPhysicalPage(v14 + i, 2, (unsigned int)v4);
  }
LABEL_20:
  if ( v7 )
    MiChangePageAttributeBatch(v7, v4, 0LL);
}
