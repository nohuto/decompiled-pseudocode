/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x140098E10
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x140098DB8 (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x140098EDC (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall KiInsertSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _RTL_RB_TREE *v6; // rcx
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v8; // r8
  BOOLEAN result; // al
  int v10; // r9d
  int v11; // eax
  _RTL_BALANCED_NODE *v12; // rax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r8
  int v15; // r10d
  int v16; // eax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 408);
  if ( v3 )
    v6 = (_RTL_RB_TREE *)(v3 + 392);
  else
    v6 = a1 + 1423;
  Root = v6->Root;
  v8 = 0;
  if ( !v6->Root )
    goto LABEL_4;
  v10 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v11 = v10 - HIDWORD(Root[1].Left);
    if ( v10 != HIDWORD(Root[1].Left) )
      goto LABEL_9;
    v13 = *(_WORD *)(a2 + 114);
    if ( !v13 )
      break;
    v14 = WORD1(Root[1].Left);
    _BitScanReverse((unsigned int *)&v15, v13);
    v16 = 0;
    if ( v14 )
      _BitScanReverse((unsigned int *)&v16, v14);
    v11 = v16 - v15;
LABEL_9:
    if ( v11 >= 0 )
      goto LABEL_13;
LABEL_10:
    v12 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v8 = 0;
      goto LABEL_4;
    }
LABEL_19:
    Root = v12;
  }
  if ( v10 )
  {
    v11 = 1;
    goto LABEL_9;
  }
  if ( (_RTL_BALANCED_NODE *)*(_QWORD *)a2 <= Root[-4].Children[1] )
    goto LABEL_10;
LABEL_13:
  v12 = Root->Children[1];
  if ( v12 )
    goto LABEL_19;
  v8 = 1;
LABEL_4:
  result = RtlRbInsertNodeEx(v6, Root, v8, (PRTL_BALANCED_NODE)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
