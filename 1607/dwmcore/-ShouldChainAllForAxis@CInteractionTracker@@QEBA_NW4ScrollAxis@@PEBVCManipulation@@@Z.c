/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18014BECC
 * Callers:
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18014BEA0 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v5; // r9
  int v7; // [rsp+90h] [rbp-18h]

  v7 = *(_DWORD *)(a3 + 412);
  if ( !a2 )
  {
    v5 = (unsigned __int8)v7 >> 3;
    return (v5 & 1) == 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v5 = (unsigned __int8)v7 >> 4;
    return (v5 & 1) == 0;
  }
  return v3 == 1;
}
