/*
 * XREFs of ?GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ @ 0x18015DE28
 * Callers:
 *     ??$RunForAllScrollAnimationsWithAxis@V_lambda_55738fce9ccb5b08587947e191557d76_@@@CInteractionTracker@@AEAAXAEBV_lambda_55738fce9ccb5b08587947e191557d76_@@@Z @ 0x180149788 (--$RunForAllScrollAnimationsWithAxis@V_lambda_55738fce9ccb5b08587947e191557d76_@@@CInteractionTr.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z @ 0x180149FD8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z.c)
 *     ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C (-ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

float __fastcall CScrollAnimation::GetBoundedEndpoint(CScrollAnimation *this)
{
  _DWORD **v1; // rax
  _DWORD *v3; // rcx
  float result; // xmm0_4
  __int64 v5; // r10
  float v6; // xmm2_4
  float v7; // [rsp+30h] [rbp+8h] BYREF
  float v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_DWORD **)*((_QWORD *)this + 54);
  v3 = 0LL;
  if ( v1 )
    v3 = *v1;
  CInteractionTracker::GetScrollRange(v3, *((_DWORD *)this + 72), &v8, &v7);
  result = v7;
  v6 = *(float *)(v5 + 400);
  if ( v6 <= v7 )
    return fmaxf(v6, v8);
  return result;
}
