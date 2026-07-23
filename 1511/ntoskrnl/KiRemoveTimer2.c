/*
 * XREFs of KiRemoveTimer2 @ 0x1400338E0
 * Callers:
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140034D90 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140120830 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveTimer2(__int64 a1)
{
  int v2; // ebp
  unsigned int v3; // esi
  unsigned __int64 v4; // rbx
  _BYTE *v5; // r14
  __int64 v6; // r12
  _RTL_BALANCED_NODE *Min; // rax
  _RTL_RB_TREE *v8; // r13
  _RTL_BALANCED_NODE *v9; // rdx
  BOOL v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // rdx

  v2 = 0;
  v3 = 0;
  v4 = -1LL;
  v5 = (_BYTE *)(a1 + 130);
  v6 = 6LL;
  do
  {
    LOBYTE(Min) = *v5;
    if ( (*v5 & 0x10) == 0 )
    {
      v8 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (*v5 & 3));
      v9 = (_RTL_BALANCED_NODE *)(a1 + 24 * (v3 + 1LL));
      v10 = v8->Min == v9;
      LOBYTE(Min) = RtlRbRemoveNode(v8, v9);
      if ( v10 )
      {
        Min = v8->Min;
        v2 = 1;
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
    ++v3;
    ++v5;
    v6 -= 2LL;
  }
  while ( v3 < 2 );
  if ( v2 )
  {
    Min = *(_RTL_BALANCED_NODE **)(a1 + 72);
    if ( (_RTL_BALANCED_NODE *)KiNextTimer2DueTime == Min )
    {
      v11 = &qword_1402E8910;
      v12 = 4LL;
      do
      {
        if ( *v11 < v4 )
          v4 = *v11;
        v11 += 3;
        --v12;
      }
      while ( v12 );
      KiNextTimer2DueTime = v4;
    }
  }
  return (char)Min;
}
