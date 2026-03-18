/*
 * XREFs of PsRemoveSiloObjectByPointer @ 0x14063FA94
 * Callers:
 *     PsRemoveSiloObjectFromJob @ 0x14063FB60 (PsRemoveSiloObjectFromJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRemoveSiloObjectByPointer(__int64 a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rdi
  int v6; // ebx
  PVOID **v7; // rdx
  PVOID *i; // rax
  PVOID *v10; // rdx
  PVOID **v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v6 = -1073741275;
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 1248), 1u);
  v7 = (PVOID **)(*(_QWORD *)(a1 + 1248) + 104LL);
  for ( i = *v7; i != (PVOID *)v7; i = (PVOID *)*i )
  {
    v3 = i;
    if ( a2 == i[2] )
    {
      v10 = (PVOID *)*i;
      v11 = (PVOID **)i[1];
      if ( *((PVOID **)*i + 1) != i || *v11 != i )
        __fastfail(3u);
      *v11 = v10;
      v6 = 0;
      v10[1] = v11;
      break;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 >= 0 )
  {
    ObfDereferenceObject(v3[3]);
    ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)v6;
}
