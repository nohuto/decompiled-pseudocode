/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x14053AED8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14053ADB0 (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053B14C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053AF14 (CmpCleanupLightWeightUoWData.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1)
{
  _QWORD *v1; // rbx
  char *NextElement; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = 0LL;
    v1 = (_QWORD *)(a1 + 16);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v1, &v3, 0);
      if ( !NextElement )
        break;
      CmpCleanupLightWeightUoWData(NextElement);
    }
  }
}
