/*
 * XREFs of PsRemoveSiloObjectByPointer @ 0x1406C115C
 * Callers:
 *     PsRemoveSiloObject @ 0x1406C10D8 (PsRemoveSiloObject.c)
 *     PsRemoveSiloObjectFromJob @ 0x1406C1254 (PsRemoveSiloObjectFromJob.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRemoveSiloObjectByPointer(__int64 a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rsi
  int v6; // edi
  struct _ERESOURCE *v7; // r14
  PVOID **v8; // rbx
  PVOID *i; // rax
  struct _KTHREAD *v10; // rdx
  __int16 v11; // ax
  PVOID *v13; // rdx
  PVOID **v14; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = -1073741275;
  --CurrentThread->SpecialApcDisable;
  v7 = (struct _ERESOURCE *)(a1 + 48);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 48), 1u);
  v8 = (PVOID **)(a1 + 216);
  for ( i = *v8; i != (PVOID *)v8; i = (PVOID *)*i )
  {
    v5 = i;
    if ( a2 == i[2] )
    {
      v13 = (PVOID *)*i;
      v14 = (PVOID **)i[1];
      if ( *((PVOID **)*i + 1) != i || *v14 != i )
        __fastfail(3u);
      *v14 = v13;
      v6 = 0;
      v13[1] = v14;
      break;
    }
  }
  ExReleaseResourceLite(v7);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable + 1;
  v10->SpecialApcDisable = v11;
  if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v6 >= 0 )
  {
    ObfDereferenceObject(v5[3]);
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v6;
}
