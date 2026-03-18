/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@QEAAXW4ScrollState@@@Z @ 0x180149D28
 * Callers:
 *     ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x18010B98C (-ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_D.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18014BD80 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CInteractionTracker::AddPendingStateChange(__int64 a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // eax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( !*(_DWORD *)(a1 + 584)
    || *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4LL * (unsigned int)(*(_DWORD *)(a1 + 584) - 1)) != a2 )
  {
    v2 = *(_DWORD *)(a1 + 584);
    v3 = v2 + 1;
    if ( v2 + 1 < v2 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v3 > *(_DWORD *)(a1 + 580) )
    {
      v4 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 560, 4u, 1, &v5);
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC0u);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4LL * v2) = a2;
      *(_DWORD *)(a1 + 584) = v3;
    }
  }
}
