/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1404753D4
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x14067F0C0 (PspAssignPrimaryToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14000DC90 (SepCopyTokenIntegrity.c)
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlSidDominates @ 0x140076140 (RtlSidDominates.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SepIsChildTokenByPointer @ 0x14047553C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1404755C4 (SepIsSiblingTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  PERESOURCE *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS result; // eax
  char v17; // bl
  PSID Sid2; // [rsp+20h] [rbp-20h]
  PSID Sid1; // [rsp+30h] [rbp-10h]
  char v20; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v22; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v20 = 0;
  v22 = 0;
  Dominates = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v5[6], 1u);
  SepCopyTokenIntegrity();
  ExReleaseResourceLite(v5[6]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v5);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity();
  v11 = *(_DWORD *)(a1 + 192);
  v12 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v11 == 2 && v12 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v20);
      v17 = v20;
      if ( !v20 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v22);
      }
    }
    else
    {
      v17 = v20;
    }
    if ( result >= 0 )
    {
      if ( v17 || v22 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
