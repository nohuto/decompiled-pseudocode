/*
 * XREFs of OpenDwmHandle @ 0x1C001D698
 * Callers:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x1C00E3960 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00E3B00 (NtDesktopCaptureBits.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C00E4B5C (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 *     ?EmitCreate@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E7740 (-EmitCreate@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ReferenceDwmProcess @ 0x1C001D760 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C001D798 (CheckOrAcquireDwmStateLock.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
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
  __int64 v15; // r9
  struct _KPROCESS *v16; // rsi
  unsigned int v17; // ebx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = v9;
  v11 = (struct _KPROCESS *)ReferenceDwmProcess();
  v16 = v11;
  if ( v11 )
  {
    KeStackAttachProcess(v11, &ApcState);
    v17 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v16);
  }
  else
  {
    v17 = -1073741823;
  }
  if ( v10 )
    GreUnlockDwmState(v13, v12, v14, v15);
  return v17;
}
