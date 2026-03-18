/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01E2660
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 * Callees:
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C0008858 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000C914 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000C938 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 MiPWindowFlags; // rax
  __int64 v6; // rcx

  if ( a2 )
    v4 = *(_QWORD *)(a2 + 16);
  else
    v4 = gptiCurrent;
  if ( !*(_QWORD *)(v4 + 1112) || (GetMiPWindowFlags((struct tagWND *)a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)a2);
  SetMiPWindowFlags((struct tagWND *)a2, MiPWindowFlags | 1);
  if ( !a1 || v4 != *(_QWORD *)(a1 + 16) )
  {
    **(_DWORD **)(v4 + 1112) &= ~4u;
    **(_DWORD **)(v4 + 1112) &= ~0x10u;
    **(_DWORD **)(v4 + 1112) &= ~2u;
  }
  v6 = *(_QWORD *)(v4 + 1112);
  if ( (*(_DWORD *)v6 & 1) != 0 )
  {
    if ( !a2 )
    {
LABEL_14:
      *(_QWORD *)(*(_QWORD *)(v4 + 384) + 384LL) = 0LL;
      goto LABEL_15;
    }
    PostTransformableMessage(a2, 586LL, ((unsigned __int16)(*(_WORD *)(v6 + 36) & 0xE1F7) << 16) | 1LL, 0LL, 0);
  }
  if ( !a2 || *(_QWORD *)a2 == *(_QWORD *)(*(_QWORD *)(v4 + 384) + 384LL) )
    goto LABEL_14;
LABEL_15:
  if ( a2 )
    StopMiPIdleNotificationTimer((struct tagWND *)a2);
  return 1LL;
}
