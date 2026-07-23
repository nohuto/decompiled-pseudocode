/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140545528
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14002D850 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14002D93C (SepCopyTokenIntegrity.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SepIsChildTokenByPointer @ 0x1405456D0 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140545758 (SepIsSiblingTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // bl
  PERESOURCE *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  struct _KTHREAD *v9; // rax
  int v10; // r15d
  int v11; // edi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  NTSTATUS result; // eax
  char v15; // di
  PSID Sid2; // [rsp+20h] [rbp-20h]
  PSID Sid1; // [rsp+30h] [rbp-10h]
  char v18; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v20; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v18 = 0;
  v20 = 0;
  Dominates = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v5[6], 1u);
  SepCopyTokenIntegrity((__int64)v5);
  ExReleaseResourceLite(v5[6]);
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v5);
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v10 == 2 && v11 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v18);
      v15 = v18;
      if ( !v18 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v20);
      }
    }
    else
    {
      v15 = v18;
    }
    if ( result >= 0 )
    {
      if ( v15 || v20 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
