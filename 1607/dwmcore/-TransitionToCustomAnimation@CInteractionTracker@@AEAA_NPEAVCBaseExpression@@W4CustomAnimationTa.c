/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014C264
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B54C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014A3F0 (-DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18014C1C4 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(__int64 a1, struct CResource *a2, int a3)
{
  char v3; // bl
  unsigned __int64 v4; // rbp
  int v7; // r9d
  int v8; // r9d

  v3 = 0;
  v4 = a3;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a1 + 204);
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          *((_BYTE *)a2 + 260) = 0;
          return v3;
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, a3);
      }
      else
      {
        CInteractionTracker::DestroyScrollAnimations((CInteractionTracker *)a1);
      }
    }
    v3 = 1;
    if ( v4 < 2 )
    {
      CComposition::GetWeakReferenceBase(
        *(CComposition **)(a1 + 16),
        a2,
        (struct CWeakReferenceBase **)(a1 + 8 * (v4 + 55)));
      CInteractionTracker::SetState(a1, 3);
    }
  }
  return v3;
}
