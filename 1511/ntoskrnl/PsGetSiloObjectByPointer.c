/*
 * XREFs of PsGetSiloObjectByPointer @ 0x14063F7B8
 * Callers:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140079DFC (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObGetRootDirectoryNameByPointer @ 0x140630A1C (ObGetRootDirectoryNameByPointer.c)
 *     PsGetCurrentSiloObject @ 0x14063F754 (PsGetCurrentSiloObject.c)
 *     PsGetSiloObjectFromJob @ 0x14063F86C (PsGetSiloObjectFromJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsGetSiloObjectByPointer(__int64 a1, __int64 *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  __int64 ***v8; // rax
  __int64 **i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 1248), 1u);
  *a3 = 0LL;
  v7 = -1073741275;
  v8 = (__int64 ***)(*(_QWORD *)(a1 + 1248) + 104LL);
  for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
  {
    if ( a2 == i[2] )
    {
      ObfReferenceObject(i[3]);
      v7 = 0;
      *a3 = i[3];
      break;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
