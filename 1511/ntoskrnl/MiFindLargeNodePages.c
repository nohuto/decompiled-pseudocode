/*
 * XREFs of MiFindLargeNodePages @ 0x1401D325C
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C0054 (MiSetPfnOwnedAndActive.c)
 */

__int64 __fastcall MiFindLargeNodePages(__int64 a1, unsigned int a2, int a3, unsigned __int64 *a4)
{
  unsigned int v4; // edi
  unsigned __int16 *v8; // rsi
  unsigned __int16 *v9; // r12
  char v10; // cl
  __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // ebp
  unsigned int v14; // edx
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // r11
  volatile signed __int32 *v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v23; // edi
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rbp
  int v27; // esi
  int v28; // r14d
  _QWORD *v29; // rcx
  unsigned __int8 v30; // al

  v4 = a2;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    v4 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23524);
    v8 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * v4 * (unsigned __int16)KeNumberNodes);
    v9 = &v8[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
  }
  v10 = byte_1402FE6D9;
  v11 = 0LL;
  v12 = v4 << byte_1402FE6D9;
  v13 = a3 & 1;
  while ( 1 )
  {
    v14 = v12 >> v10;
    if ( v13 )
    {
      v15 = MiUnlinkNodeLargePage(a1, v14, 4u, 1);
      if ( v15 )
        goto LABEL_7;
    }
    else
    {
      v15 = MiUnlinkNodeLargePage(a1, v14, 4u, 0);
      if ( v15 )
        goto LABEL_8;
    }
    v21 = v12 >> byte_1402FE6D9;
    if ( !v13 )
      break;
    v15 = MiUnlinkNodeLargePage(a1, v21, 4u, 0);
    if ( v15 )
      goto LABEL_8;
LABEL_15:
    if ( !v8 )
      return 3221225495LL;
    if ( ++v8 == v9 )
      return 3221225495LL;
    v10 = byte_1402FE6D9;
    v12 = *v8 << byte_1402FE6D9;
  }
  v15 = MiUnlinkNodeLargePage(a1, v21, 4u, 1);
  if ( !v15 )
    goto LABEL_15;
LABEL_7:
  v11 = 128LL;
LABEL_8:
  LOBYTE(v16) = 1;
  v17 = (v15 + 0x58000000000LL) / 48;
  v18 = (v17 >> 9) & 0x1F;
  v19 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v17 >> 14));
  if ( (unsigned __int64)(v18 + 1) <= 0x20 )
  {
    v20 = 1 << v18;
    goto LABEL_25;
  }
  if ( !v18 )
    goto LABEL_24;
  v23 = (v17 >> 9) & 0x1F;
  _InterlockedOr(v19++, ((1 << (32 - v23)) - 1) << v18);
  v16 = 1LL - (unsigned int)(32 - v23);
  if ( v16 >= 0x20 )
  {
    v24 = v16 >> 5;
    v16 += -32LL * (v16 >> 5);
    do
    {
      *v19++ = -1;
      --v24;
    }
    while ( v24 );
  }
  if ( v16 )
  {
LABEL_24:
    v20 = (1 << v16) - 1;
LABEL_25:
    _InterlockedOr(v19, v20);
  }
  v25 = (_QWORD *)(v15 + 40);
  v26 = 512LL;
  v27 = ((a3 & 0x200000) != 0) + 1;
  v28 = a3 & 0x40000000;
  do
  {
    *(v25 - 3) = v11;
    v29 = v25 - 5;
    if ( v28 )
    {
      v30 = MiLockPageInline((__int64)v29);
      *v25 &= 0xFFFFFFF000000000uLL;
      *((_BYTE *)v25 - 6) = *((_BYTE *)v25 - 6) & 0xF8 | 5;
      _InterlockedAnd64(v25 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v30);
    }
    else
    {
      *v29 = 0LL;
      *v25 &= ~0x200000000000000uLL;
      MiSetPfnOwnedAndActive((__int64)v29, -8LL, 1, v27);
    }
    v25 += 6;
    --v26;
  }
  while ( v26 );
  *a4 = v17;
  return 0LL;
}
