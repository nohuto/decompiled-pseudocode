/*
 * XREFs of ObpGetObjectRefInfo @ 0x140667B6C
 * Callers:
 *     ObpPushRefDerefInfo @ 0x140668054 (ObpPushRefDerefInfo.c)
 *     ObpRegisterObject @ 0x1406682E0 (ObpRegisterObject.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpGetObjectRefInfo(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rbp
  unsigned __int16 *v6; // rbx
  unsigned __int16 v7; // ax
  _WORD *PoolWithTag; // rdi

  v3 = 0LL;
  v4 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
  v5 = (unsigned int)v4;
  v6 = (unsigned __int16 *)*((_QWORD *)ObpObjectTable + v4);
  if ( v6 )
  {
    do
    {
      if ( *(_QWORD *)v6 == a1 )
        break;
      v3 = v6;
      v6 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
    }
    while ( v6 );
    if ( v6 )
    {
      v7 = v6[17];
      if ( v6[16] == v7 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 12LL * (v7 + 512) + 40, 0x7452624Fu);
        if ( !PoolWithTag )
          return 3221225495LL;
        memmove(PoolWithTag, v6, 12LL * v6[16] + 40);
        PoolWithTag[17] += 512;
        if ( v3 )
          *((_QWORD *)v3 + 1) = PoolWithTag;
        else
          *((_QWORD *)ObpObjectTable + v5) = PoolWithTag;
        ExFreePoolWithTag(v6, 0x7452624Fu);
        v6 = PoolWithTag;
      }
    }
  }
  *a2 = v6;
  return 0LL;
}
