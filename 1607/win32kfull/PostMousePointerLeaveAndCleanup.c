/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01D87C0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B694 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000E28C (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000E2AC (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
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
  if ( !*(_QWORD *)(v4 + 1136) || (GetMiPWindowFlags((struct tagWND *)a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)a2);
  SetMiPWindowFlags((struct tagWND *)a2, MiPWindowFlags | 1);
  if ( !a1 || v4 != *(_QWORD *)(a1 + 16) )
  {
    **(_DWORD **)(v4 + 1136) &= ~4u;
    **(_DWORD **)(v4 + 1136) &= ~0x10u;
    **(_DWORD **)(v4 + 1136) &= ~2u;
  }
  v6 = *(_QWORD *)(v4 + 1136);
  if ( (*(_DWORD *)v6 & 1) != 0 )
  {
    if ( !a2 )
    {
LABEL_14:
      *(_QWORD *)(*(_QWORD *)(v4 + 384) + 392LL) = 0LL;
      goto LABEL_15;
    }
    PostTransformableMessage(a2, 586LL, ((unsigned __int16)(*(_WORD *)(v6 + 36) & 0xE1F7) << 16) | 1LL, 0LL, 0);
  }
  if ( !a2 || *(_QWORD *)a2 == *(_QWORD *)(*(_QWORD *)(v4 + 384) + 392LL) )
    goto LABEL_14;
LABEL_15:
  if ( a2 )
    StopMiPIdleNotificationTimer((struct tagWND *)a2);
  return 1LL;
}
