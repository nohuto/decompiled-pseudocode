/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18014AE14 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18014C1C4 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18014C374 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  _QWORD *i; // rcx
  struct CManipulation *v6; // rax
  struct CManipulation *v7; // rdx

  if ( a2 == 7 )
  {
    if ( !a3 )
      return 1LL;
    v6 = *(struct CManipulation **)(a1 + 544);
    v7 = (struct CManipulation *)(a3 - 8);
    if ( !v6 || *(_DWORD *)(a1 + 204) == 2 )
    {
      if ( (unsigned int)(*((_DWORD *)v7 + 100) - 2) <= 2 )
        CInteractionTracker::TransitionToInContact((CInteractionTracker *)a1, v7);
    }
    else if ( v6 == v7 && (unsigned int)(*((_DWORD *)v6 + 100) - 2) > 2 )
    {
      goto LABEL_19;
    }
  }
  else if ( (unsigned int)(a2 - 8) <= 1 && a3 )
  {
    v4 = 0;
    for ( i = (_QWORD *)(a1 + 440); !*i || *(_QWORD *)*i != a3; ++i )
    {
      if ( (unsigned __int64)++v4 >= 2 )
        return 1LL;
    }
    if ( v4 > -1 )
    {
      CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v4);
      if ( *(_DWORD *)(a1 + 204) == 3 )
      {
        if ( CInteractionTracker::CheckForIdle((CInteractionTracker *)a1, 0) )
        {
          if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) )
          {
            CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
            return 1LL;
          }
LABEL_19:
          CInteractionTracker::TransitionToInertia((CInteractionTracker *)a1);
        }
      }
    }
  }
  return 1LL;
}
