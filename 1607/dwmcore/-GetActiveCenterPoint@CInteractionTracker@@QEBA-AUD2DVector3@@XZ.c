/*
 * XREFs of ?GetActiveCenterPoint@CInteractionTracker@@QEBA?AUD2DVector3@@XZ @ 0x18014A680
 * Callers:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::GetActiveCenterPoint(__int64 a1, __int64 a2)
{
  __int64 v2; // xmm0_8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __m256i v7; // [rsp+10h] [rbp-98h]

  if ( *(_DWORD *)(a1 + 204) == 1 )
  {
    v4 = *(_QWORD *)(a1 + 544);
    if ( !v4 )
    {
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    v5 = v4 + 268;
    v7 = *(__m256i *)(v5 + 16);
    v2 = *(__int64 *)((char *)&v7.m256i_i64[1] + 4);
    v3 = HIDWORD(*(_QWORD *)(v5 + 32));
  }
  else if ( *(_DWORD *)(a1 + 204) == 2 )
  {
    v2 = *(_QWORD *)(a1 + 592);
    v3 = *(_DWORD *)(a1 + 600);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 188);
    v3 = *(_DWORD *)(a1 + 196);
  }
  *(_QWORD *)a2 = v2;
  *(_DWORD *)(a2 + 8) = v3;
  return a2;
}
