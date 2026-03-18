/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01E2140
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00069F0 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C0009180 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C00091A4 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  struct tagWND *v5; // rcx
  __int64 MiPWindowFlags; // rax
  struct tagWND *v7; // rcx
  __int64 v8; // rcx

  if ( a2 )
    v4 = *(_QWORD *)(a2 + 16);
  else
    v4 = gptiCurrent;
  if ( !*(_QWORD *)(v4 + 1120) || (GetMiPWindowFlags((struct tagWND *)a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags(v5);
  SetMiPWindowFlags(v7, MiPWindowFlags | 1);
  if ( !a1 || v4 != *(_QWORD *)(a1 + 16) )
  {
    **(_DWORD **)(v4 + 1120) &= ~4u;
    **(_DWORD **)(v4 + 1120) &= ~0x10u;
    **(_DWORD **)(v4 + 1120) &= ~2u;
  }
  v8 = *(_QWORD *)(v4 + 1120);
  if ( (*(_DWORD *)v8 & 1) != 0 )
  {
    if ( !a2 )
    {
LABEL_14:
      *(_QWORD *)(*(_QWORD *)(v4 + 392) + 384LL) = 0LL;
      goto LABEL_15;
    }
    PostTransformableMessage(
      (struct tagWND *)a2,
      0x24Au,
      ((unsigned __int16)(*(_WORD *)(v8 + 36) & 0xE1F7) << 16) | 1LL,
      0LL,
      0);
  }
  if ( !a2 || *(_QWORD *)a2 == *(_QWORD *)(*(_QWORD *)(v4 + 392) + 384LL) )
    goto LABEL_14;
LABEL_15:
  if ( a2 )
    StopMiPIdleNotificationTimer((struct tagWND *)a2);
  return 1LL;
}
