/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x14067E868
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x14067E9A4 (PspDeleteSilo.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     EtwDeleteSiloState @ 0x1406A3248 (EtwDeleteSiloState.c)
 *     ExpWnfDeleteScopeInstances @ 0x1406BA3A4 (ExpWnfDeleteScopeInstances.c)
 */

void __fastcall PspDeleteServerSiloGlobals(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx
  void *v7; // rcx
  struct _KEVENT *v8; // rcx

  if ( *(_QWORD *)(a1 + 888) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*(_QWORD *)(a1 + 888), 2LL);
    ExpWnfDeleteScopeInstances(*(_QWORD *)(a1 + 888), 0LL);
    ExFreePoolWithTag(*(PVOID *)(a1 + 888), 0x20666E57u);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  if ( *(_QWORD *)(a1 + 896) )
    ZwClose(*(HANDLE *)(a1 + 896));
  if ( *(_QWORD *)(a1 + 904) )
    ZwClose(*(HANDLE *)(a1 + 904));
  if ( *(_QWORD *)(a1 + 848) )
  {
    EtwDeleteSiloState();
    *(_QWORD *)(a1 + 848) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 976) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 968));
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  v6 = *(void **)(a1 + 944);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(a1 + 944) = 0LL;
  }
  v7 = *(void **)(a1 + 952);
  if ( v7 )
  {
    MmUnmapViewInSystemSpace(v7);
    *(_QWORD *)(a1 + 952) = 0LL;
  }
  v8 = *(struct _KEVENT **)(a1 + 1000);
  if ( v8 )
  {
    KeSetEvent(v8, 0, 0);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 1000), 0x65446953u);
    *(_QWORD *)(a1 + 1000) = 0LL;
  }
  ExFreePoolWithTag((PVOID)a1, 0x476C6953u);
}
