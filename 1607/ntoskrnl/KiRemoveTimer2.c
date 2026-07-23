/*
 * XREFs of KiRemoveTimer2 @ 0x1400F76D0
 * Callers:
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EA710 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14012AD94 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // r12d
  _BYTE *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  _RTL_BALANCED_NODE *Min; // rax
  _RTL_RB_TREE *v8; // r13
  _RTL_BALANCED_NODE *v9; // rdx
  BOOL v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // rdx

  v2 = 0;
  v3 = 0;
  v4 = (_BYTE *)(a1 + 130);
  v5 = -1LL;
  v6 = 6LL;
  do
  {
    LOBYTE(Min) = *v4;
    if ( (*v4 & 0x10) == 0 )
    {
      v8 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (*v4 & 3));
      v9 = (_RTL_BALANCED_NODE *)(a1 + 24 * (v2 + 1LL));
      v10 = v8->Min == v9;
      LOBYTE(Min) = RtlRbRemoveNode(v8, v9);
      if ( v10 )
      {
        Min = v8->Min;
        v3 = 1;
        if ( Min )
        {
          Min = Min->Children[v6];
          v8[1].Root = Min;
        }
        else
        {
          v8[1].Root = (_RTL_BALANCED_NODE *)-1LL;
        }
      }
    }
    ++v2;
    ++v4;
    v6 -= 2LL;
  }
  while ( v2 < 2 );
  if ( v3 )
  {
    Min = *(_RTL_BALANCED_NODE **)(a1 + 72);
    if ( (_RTL_BALANCED_NODE *)KiNextTimer2DueTime == Min )
    {
      v11 = qword_14030E330;
      v12 = 4LL;
      do
      {
        if ( *v11 < v5 )
          v5 = *v11;
        v11 += 3;
        --v12;
      }
      while ( v12 );
      KiNextTimer2DueTime = v5;
    }
  }
  return (char)Min;
}
