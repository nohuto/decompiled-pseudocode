/*
 * XREFs of W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14029FB14
 * Callers:
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x14029FBE0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14029F99C (W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 *     ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x14029FC08 (-DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e_(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v10; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v12; // rsi

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return DeviceClassCDROMNotifyWorker(*(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION **)(a2 + 8));
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount && W32GetSessionState(v8, v7) )
      return DeviceClassCDROMNotifyWorker(*(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION **)(a2 + 8));
    else
      return 3221225485LL;
  }
  else
  {
    v10 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, 0LL);
    v12 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v10 = W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v12, 0x47727355u);
    }
    return v10;
  }
}
