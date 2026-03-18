/*
 * XREFs of OpenDwmHandle @ 0x1C0037370
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0045F80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x1C00D61E0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00D6380 (NtDesktopCaptureBits.c)
 *     NtVisualCaptureBits @ 0x1C00D6540 (NtVisualCaptureBits.c)
 *     ?EmitCreate@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DA770 (-EmitCreate@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0037440 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0037478 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
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
  struct _KPROCESS *v12; // rsi
  unsigned int v13; // ebx
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = v9;
  v11 = (struct _KPROCESS *)ReferenceDwmProcess();
  v12 = v11;
  if ( v11 )
  {
    KeStackAttachProcess(v11, &ApcState);
    v13 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v12);
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v10 )
    GreUnlockDwmState();
  return v13;
}
