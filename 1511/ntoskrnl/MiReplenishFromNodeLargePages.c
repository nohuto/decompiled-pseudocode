/*
 * XREFs of MiReplenishFromNodeLargePages @ 0x1400193C8
 * Callers:
 *     MiGetLargePageChain @ 0x14001935C (MiGetLargePageChain.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiReplenishFromNodeLargePages(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r14d
  __int64 v6; // r11
  __int64 v7; // r13
  int v8; // r12d
  int v9; // r8d
  unsigned int v10; // edx
  unsigned __int8 *v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int8 v19; // al
  char v20; // cl
  __int64 v22; // rax
  int v24; // [rsp+68h] [rbp+10h]

  v4 = a3;
  v5 = a4;
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 40) + 1336LL * a3;
  if ( (a2 & 2) != 0 )
  {
    v8 = 0;
    v9 = 1;
  }
  else
  {
    v8 = 1;
    v9 = 0;
  }
  v10 = MmNumberOfChannels;
  v11 = 0LL;
  v12 = 0LL;
  v24 = v9;
  if ( (unsigned int)MmNumberOfChannels > 1 && a4 == 4 )
  {
    v11 = (unsigned __int8 *)(v7 + 1317);
    v12 = v7 + 1317 + (unsigned int)MmNumberOfChannels;
  }
  else
  {
    v5 = 0;
  }
  v13 = 0LL;
  v14 = 4LL * v8;
  while ( 1 )
  {
    if ( v11 )
      v5 = *v11;
    v15 = (_QWORD *)(v7 + 16 * (v14 + v5 + 1LL));
    if ( (_QWORD *)*v15 != v15 )
    {
      v22 = MiUnlinkNodeLargePage(v6, v4, v5, (unsigned int)v8);
      v18 = v22;
      if ( v22 )
      {
        v19 = MiLockPageInline(v22);
        v20 = v8 ^ *(_BYTE *)(v18 + 34);
        goto LABEL_12;
      }
      v10 = MmNumberOfChannels;
      v9 = v24;
      v4 = a3;
      v6 = a1;
    }
    v16 = (_QWORD *)(v7 + 16 * (v5 + 4 * (v9 + 2 * v13) + 1));
    if ( (_QWORD *)*v16 != v16 )
    {
      v17 = MiUnlinkNodeLargePage(v6, v4, v5, (unsigned int)v9);
      v18 = v17;
      if ( v17 )
      {
        v19 = MiLockPageInline(v17);
        v20 = v24 ^ *(_BYTE *)(v18 + 34);
LABEL_12:
        *(_BYTE *)(v18 + 34) ^= v20 & 7;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v19);
        return v18;
      }
      v10 = MmNumberOfChannels;
      v9 = v24;
    }
    if ( v11 )
    {
      if ( ++v11 == (unsigned __int8 *)v12 )
      {
        v11 -= v10;
      }
      else
      {
        --v13;
        v14 -= 8LL;
      }
    }
    ++v13;
    v14 += 8LL;
    if ( v13 > 1 )
      return 0LL;
    v4 = a3;
    v6 = a1;
  }
}
