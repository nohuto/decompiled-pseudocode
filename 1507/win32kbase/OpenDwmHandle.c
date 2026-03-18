/*
 * XREFs of OpenDwmHandle @ 0x1C0021D1C
 * Callers:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0021CA0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x1C00D44F0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00D4690 (NtDesktopCaptureBits.c)
 *     NtVisualCaptureBits @ 0x1C00D4850 (NtVisualCaptureBits.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0045670 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00456A8 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDwmHandle(
        PVOID Object,
        POBJECT_TYPE ObjectType,
        ACCESS_MASK DesiredAccess,
        __int64 a4,
        int a5,
        PHANDLE Handle)
{
  char v9; // al
  char v10; // di
  struct _KPROCESS *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *v15; // rsi
  unsigned int v16; // ebx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = v9;
  v11 = (struct _KPROCESS *)ReferenceDwmProcess();
  v15 = v11;
  if ( v11 )
  {
    KeStackAttachProcess(v11, &ApcState);
    v16 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v15);
  }
  else
  {
    v16 = -1073741823;
  }
  if ( v10 )
    GreUnlockDwmState(v13, v12, v14);
  return v16;
}
