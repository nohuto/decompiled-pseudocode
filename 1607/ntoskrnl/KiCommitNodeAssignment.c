/*
 * XREFs of KiCommitNodeAssignment @ 0x140139BC0
 * Callers:
 *     KiConfigureInitialNodes @ 0x140139898 (KiConfigureInitialNodes.c)
 *     KxInitializeProcessorState @ 0x14054E9DC (KxInitializeProcessorState.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCommitNodeAssignment(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 *v2; // r8
  __int16 v3; // bx
  __int16 v4; // cx
  __int64 *v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // r9
  __int64 v10; // rdx

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  v3 = *(_WORD *)(a1 + 144);
  v4 = word_140328F18;
  if ( KeNumberNodes )
  {
    v5 = KeNodeBlock;
    v6 = (unsigned __int16)KeNumberNodes;
    do
    {
      v7 = *v5;
      v8 = *(_BYTE *)(*v5 + 173);
      if ( (v8 & 2) != 0 && *(_WORD *)(v7 + 144) == v3 )
      {
        *(_WORD *)(v7 + 144) = v4;
        *(_BYTE *)(v7 + 173) = v8 | 4;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v1 )
    {
      v9 = v1;
      do
      {
        v10 = *v2;
        LOBYTE(v1) = *(_BYTE *)(*v2 + 173) & 6;
        if ( (_BYTE)v1 == 2 && *(_WORD *)(v10 + 144) == v4 )
          *(_WORD *)(v10 + 144) = v3;
        ++v2;
        --v9;
      }
      while ( v9 );
    }
  }
  word_140328F18 = v4 + 1;
  return v1;
}
