/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1403C2698
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140004D80 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140004E6C (SepCopyTokenIntegrity.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepIsChildTokenByPointer @ 0x1403C3438 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1403C34C0 (SepIsSiblingTokenByPointer.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  PERESOURCE *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  int v9; // r15d
  NTSTATUS result; // eax
  char v11; // bl
  PSID Sid2; // [rsp+20h] [rbp-20h]
  PSID Sid1; // [rsp+30h] [rbp-10h]
  char v14; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v16; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v14 = 0;
  v16 = 0;
  Dominates = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v5[6], 1u);
  SepCopyTokenIntegrity();
  ExReleaseResourceLite(v5[6]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v5);
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity();
  v8 = *(_DWORD *)(a1 + 192);
  v9 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v8 == 2 && v9 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v14);
      v11 = v14;
      if ( !v14 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v16);
      }
    }
    else
    {
      v11 = v14;
    }
    if ( result >= 0 )
    {
      if ( v11 || v16 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
