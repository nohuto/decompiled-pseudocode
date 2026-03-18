/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140476504
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x14067EFDC (PspAssignPrimaryToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14000E110 (SepCopyTokenIntegrity.c)
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlSidDominates @ 0x1400760C0 (RtlSidDominates.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     SepIsChildTokenByPointer @ 0x14047666C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1404766F4 (SepIsSiblingTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
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
  __int64 result; // rax
  char v17; // bl
  char *Buf2; // [rsp+20h] [rbp-20h]
  char *Buf1; // [rsp+30h] [rbp-10h]
  char v20; // [rsp+78h] [rbp+38h] BYREF
  bool v21; // [rsp+80h] [rbp+40h] BYREF
  char v22; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v20 = 0;
  v22 = 0;
  v21 = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return 3221225473LL;
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
    return 3221225637LL;
  result = RtlSidDominates(Buf1, Buf2, &v21);
  if ( (int)result >= 0 )
  {
    if ( v21 )
    {
      result = SepIsChildTokenByPointer(a1, &v20);
      v17 = v20;
      if ( !v20 )
      {
        if ( (int)result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v22);
      }
    }
    else
    {
      v17 = v20;
    }
    if ( (int)result >= 0 )
    {
      if ( v17 || v22 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
