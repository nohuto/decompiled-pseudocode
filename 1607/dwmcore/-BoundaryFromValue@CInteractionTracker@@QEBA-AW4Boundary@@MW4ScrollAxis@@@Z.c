/*
 * XREFs of ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180149F3C
 * Callers:
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

__int64 __fastcall CInteractionTracker::BoundaryFromValue(__int64 a1, float a2, unsigned int a3)
{
  __int64 result; // rax
  float v4; // [rsp+38h] [rbp+10h] BYREF
  float v5; // [rsp+48h] [rbp+20h] BYREF

  result = CInteractionTracker::GetScrollRange(a1, a3, &v4, &v5);
  if ( v4 >= a2 )
    result = (unsigned int)(result + 1);
  if ( a2 >= v5 )
    return (unsigned int)((_DWORD)result != 0) + 2;
  return result;
}
