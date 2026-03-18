/*
 * XREFs of W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x14029FA4C
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x14024A120 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402521D0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x14029F8E8 (W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(__int64 a1, __int64 a2)
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
      return DeviceCDROMNotifyWorker(
               *(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION **)a2,
               *(struct _CDROM_NOTIFY **)(a2 + 8));
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount && W32GetSessionState(v8, v7) )
      return DeviceCDROMNotifyWorker(
               *(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION **)a2,
               *(struct _CDROM_NOTIFY **)(a2 + 8));
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
      v10 = W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v12, 0x47727355u);
    }
    return v10;
  }
}
