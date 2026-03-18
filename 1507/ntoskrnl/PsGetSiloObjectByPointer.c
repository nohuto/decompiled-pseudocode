/*
 * XREFs of PsGetSiloObjectByPointer @ 0x1406C0B54
 * Callers:
 *     PsGetSiloObject @ 0x140490B30 (PsGetSiloObject.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     PsGetSiloObjectFromJob @ 0x1406C0C20 (PsGetSiloObjectFromJob.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall PsGetSiloObjectByPointer(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  __int64 *v8; // rax
  unsigned int v9; // edi
  __int64 *i; // rbx
  struct _KTHREAD *v11; // rdx
  __int16 v12; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (struct _ERESOURCE *)(a1 + 48);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 48), 1u);
  v8 = (__int64 *)(a1 + 216);
  *a3 = 0LL;
  v9 = -1073741275;
  for ( i = *(__int64 **)(a1 + 216); i != v8; i = (__int64 *)*i )
  {
    if ( a2 == i[2] )
    {
      ObfReferenceObject((PVOID)i[3]);
      v9 = 0;
      *a3 = i[3];
      break;
    }
  }
  ExReleaseResourceLite(v7);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v12;
  if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  return v9;
}
