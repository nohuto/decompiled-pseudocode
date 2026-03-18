/*
 * XREFs of KiFindReadyThread @ 0x140096A08
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x14002A6EC (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1400969D0 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140096AF4 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401C96E4 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // esi
  unsigned int v11; // eax
  _QWORD **v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // r11
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+68h] [rbp+10h]
  unsigned int v25; // [rsp+78h] [rbp+20h]

  v5 = a2 + 22784;
  v8 = a2;
  if ( !a2 )
    v5 = a3 + 16;
  v9 = *(_QWORD *)(a1 + 1608);
  v10 = 64;
  v24 = v9;
  v23 = v5;
  while ( 2 )
  {
    _BitScanReverse(&v11, a4);
    a4 ^= 1 << v11;
    v12 = (_QWORD **)(v5 + 16LL * v11);
    v25 = v11;
    v13 = *v12;
    do
    {
      v14 = v13 - 27;
      v15 = *((unsigned __int8 *)v13 - 91);
      v16 = v13[45];
      if ( v15 >= 5 )
      {
        v15 = KiConvertDynamicHeteroPolicy(v13 - 27, a2, a1);
        v9 = v24;
      }
      if ( v15 )
      {
        v21 = *(_QWORD *)(a1 + 1600);
        v22 = 2LL * (int)v15;
        a2 = v16 & *(_QWORD *)(v21 + 8 * v22 + 184);
        if ( a2 )
          v16 &= *(_QWORD *)(v21 + 8 * v22 + 184);
      }
      if ( (v16 & v9) != 0 )
      {
        v17 = v14[13];
        if ( !v17 || (v20 = *(unsigned int *)(a1 + 1624) + v17) == 0 || !KiCheckForMaxOverQuotaScb(v20) )
        {
          if ( v8 )
            KiRemoveThreadFromReadyQueue(v8, v13, v25);
          else
            KiRemoveThreadFromSharedReadyQueue(a3, v14, v25);
          result = v18;
          *(_DWORD *)(v18 + 536) = *(_DWORD *)(a1 + 36);
          return result;
        }
      }
      v13 = (_QWORD *)*v13;
      --v10;
    }
    while ( v13 != v12 && v10 );
    if ( a4 && v10 )
    {
      v5 = v23;
      continue;
    }
    break;
  }
  return 0LL;
}
