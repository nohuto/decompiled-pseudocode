/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1400545E0
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14000FF0C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x140054720 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x140054760 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IsMiPEnabledForWindow @ 0x140054BA0 (IsMiPEnabledForWindow.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2)
{
  struct tagTHREADINFO *v4; // rdi
  unsigned __int64 MiPWindowFlags; // rax
  struct tagWND *v6; // rcx
  __int64 v7; // r9

  if ( a2 )
    v4 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
  else
    v4 = PtiCurrent(a1);
  if ( !*((_QWORD *)v4 + 189) || (GetMiPWindowFlags(a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags(a2);
  SetMiPWindowFlags(a2, MiPWindowFlags | 1);
  if ( !a1 || v4 != *(struct tagTHREADINFO **)(a1 + 16) )
  {
    **((_DWORD **)v4 + 189) &= ~4u;
    **((_DWORD **)v4 + 189) &= ~0x10u;
    **((_DWORD **)v4 + 189) &= ~2u;
    **((_DWORD **)v4 + 189) &= ~8u;
  }
  if ( (**((_DWORD **)v4 + 189) & 1) != 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)IsMiPEnabledForWindow(a2) )
        PostTransformableMessage(v6, 0x24Au, ((*(_DWORD *)(v7 + 36) & 0xFFFFE1F7) << 16) | 1LL, 0LL, 0);
LABEL_12:
      if ( *(_QWORD *)a2 != *(_QWORD *)(*((_QWORD *)v4 + 58) + 488LL) )
      {
LABEL_14:
        StopMiPIdleNotificationTimer(a2);
        return 1LL;
      }
    }
  }
  else if ( a2 )
  {
    goto LABEL_12;
  }
  *(_QWORD *)(*((_QWORD *)v4 + 58) + 488LL) = 0LL;
  if ( a2 )
    goto LABEL_14;
  return 1LL;
}
