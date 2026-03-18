/*
 * XREFs of xxxProcessTSFEvent @ 0x140044AA0
 * Callers:
 *     xxxFlushDeferredWindowEvents @ 0x14001A9A0 (xxxFlushDeferredWindowEvents.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyNotify @ 0x14013BFF0 (DestroyNotify.c)
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1401A6778 (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1402A65C8 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 */

__int64 __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  int v5; // edi
  struct tagTHREADINFO *v6; // rax
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // r9

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  v6 = PtiCurrent(v4);
  v7 = *((_DWORD *)a1 + 7);
  if ( v7 != 2147483408 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 7) - 2147483409) < 2 )
      v5 = 2;
    else
      v5 = 0;
  }
  *((_QWORD *)a1 + 8) = v6;
  v8 = TSFRangeFromEvent(v7, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 480) + 24LL) & (v5 | v8) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  return DestroyNotify(a1);
}
