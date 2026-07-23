/*
 * XREFs of VfIrpLogDeleteDeviceLogs @ 0x140719390
 * Callers:
 *     VfIoDeleteDevice @ 0x14070D840 (VfIoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ViIrpLogDatabaseFindPointer @ 0x1407199DC (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogDeleteDeviceLogs(__int64 a1)
{
  KIRQL v2; // di
  __int64 Pointer; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  Pointer = ViIrpLogDatabaseFindPointer(a1, &v7);
  v4 = (_QWORD *)Pointer;
  if ( Pointer )
  {
    if ( *v7 )
    {
      *(_DWORD *)(Pointer + 24) |= 4u;
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)Pointer);
      v5 = v4[1];
      v6 = (_QWORD *)v4[2];
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (_QWORD *)*v6 != v4 + 1 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
    }
  }
  KeReleaseSpinLock(&ViIrpLogDatabaseLock, v2);
}
