/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x18006E5F8
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18001D0F0 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkCompare @ 0x18001D390 (RtlpHpVsChunkCompare.c)
 *     RtlpHpVsChunkComputeCost @ 0x18006E780 (RtlpHpVsChunkComputeCost.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  _RTL_RB_TREE *v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rdx
  BOOLEAN v9; // bl
  _RTL_BALANCED_NODE *Root; // rdi
  unsigned int v11; // esi
  _RTL_BALANCED_NODE *v12; // rax
  __int16 v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v14, &v15);
  v6 = (_RTL_RB_TREE *)(a1 + 8);
  v7 = RtlpLFHKey;
  v8 = (0x101010101010101LL
      * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 48) += (unsigned int)v8;
  v9 = 0;
  *(_WORD *)a3 = a3 ^ v7 ^ (v14 + v5 - v8);
  Root = v6->Root;
  if ( v6->Root )
  {
    v11 = a3 ^ v7 ^ *(_DWORD *)a3;
    while ( 1 )
    {
      if ( (int)RtlpHpVsChunkCompare(v11, (__int64)Root) < 0 )
      {
        v12 = Root->Children[0];
        if ( !Root->Children[0] )
          return RtlRbInsertNodeEx(v6, Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
      }
      else
      {
        v12 = Root->Children[1];
        if ( !v12 )
        {
          v9 = 1;
          return RtlRbInsertNodeEx(v6, Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      Root = v12;
    }
  }
  return RtlRbInsertNodeEx(v6, Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
}
