/*
 * XREFs of CmpCreateLayerLink @ 0x14060BB68
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmpAllocateLayerInfoForKcb @ 0x14060B89C (CmpAllocateLayerInfoForKcb.c)
 */

__int64 __fastcall CmpCreateLayerLink(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r8

  if ( *(__int16 *)(a1 + 58) >= 3 )
    return 3221225485LL;
  result = CmpAllocateLayerInfoForKcb(a1);
  if ( (int)result >= 0 )
  {
    result = CmpAllocateLayerInfoForKcb(a2);
    if ( (int)result >= 0 )
    {
      if ( CmpReferenceKeyControlBlock(a1) )
      {
        v5 = *(_QWORD **)(a2 + 184);
        *(_WORD *)(a2 + 58) = *(_WORD *)(a1 + 58) + 1;
        v6 = *(_QWORD *)(a1 + 184);
        v5[3] = v6;
        v7 = v6 + 32;
        v8 = *(_QWORD **)(v7 + 8);
        if ( *v8 != v7 )
          __fastfail(3u);
        *v5 = v7;
        v5[1] = v8;
        *v8 = v5;
        *(_QWORD *)(v7 + 8) = v5;
        return 0LL;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
