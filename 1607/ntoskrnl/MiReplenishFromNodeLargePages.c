/*
 * XREFs of MiReplenishFromNodeLargePages @ 0x140089BD0
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiGetLargePageChain @ 0x140089B54 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1401FD17C (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x140089F30 (MiUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiReplenishFromNodeLargePages(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r11d
  __int64 v6; // rsi
  __int64 v7; // r10
  int v8; // eax
  int v9; // r12d
  int v10; // r15d
  unsigned int v11; // edi
  unsigned __int8 *v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 result; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+90h] [rbp+8h]

  v22 = a1;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 48) + 2184LL * a4;
  v7 = 0LL;
  v8 = 1;
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    v10 = 1;
  }
  else
  {
    v9 = 1;
    v10 = 0;
  }
  v11 = a5;
  v12 = 0LL;
  v20 = 0LL;
  if ( a5 == 4 && (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v6 + 2165);
    v20 = v6 + 2165 + (unsigned int)MmNumberOfChannels;
  }
  else
  {
    v11 = 0;
  }
  v19 = 0LL;
  if ( (a3 & 1) != 0 )
    v8 = 0;
  v21 = v8;
  if ( v8 < 0LL )
    return 0LL;
  v13 = 4 * (v10 + 4LL * a2);
  v14 = 4 * (v9 + 4LL * a2);
  while ( 1 )
  {
    if ( v12 )
      v11 = *v12;
    v15 = (_QWORD *)(v6 + 16 * (v14 + v11 + 3LL));
    if ( (_QWORD *)*v15 != v15 )
    {
      result = MiUnlinkNodeLargePage(v22, a2, v5, v11, v9, 0LL);
      v7 = result;
      if ( result )
        return result;
      v5 = a4;
    }
    v17 = (_QWORD *)(v6 + 16 * (v11 + v13 + 3));
    if ( (_QWORD *)*v17 != v17 )
    {
      result = MiUnlinkNodeLargePage(v22, a2, v5, v11, v10, 0LL);
      v7 = result;
      if ( result )
        break;
    }
    v18 = v19;
    if ( v12 )
    {
      if ( ++v12 == (unsigned __int8 *)v20 )
      {
        v12 -= (unsigned int)MmNumberOfChannels;
      }
      else
      {
        v18 = v19 - 1;
        v14 -= 8LL;
        v13 -= 8LL;
      }
    }
    v14 += 8LL;
    v13 += 8LL;
    v19 = v18 + 1;
    if ( v18 + 1 > v21 )
      return v7;
    v5 = a4;
  }
  return result;
}
