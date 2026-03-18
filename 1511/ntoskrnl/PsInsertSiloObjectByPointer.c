/*
 * XREFs of PsInsertSiloObjectByPointer @ 0x14063F8F0
 * Callers:
 *     ObSetSiloRootDirectoryByPointer @ 0x140630B4C (ObSetSiloRootDirectoryByPointer.c)
 *     PsInsertSiloObjectFromJob @ 0x14063F9E4 (PsInsertSiloObjectFromJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsInsertSiloObjectByPointer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  _QWORD *v13; // rcx

  v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6F6C6953u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a2;
  PoolWithTag[3] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 1248), 1u);
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 1248) + 104LL);
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
  {
    if ( a2 == i[2] )
    {
      v3 = -1073741771;
      ExFreePoolWithTag(v8, 0);
      goto LABEL_11;
    }
  }
  v13 = *(_QWORD **)(*(_QWORD *)(a1 + 1248) + 112LL);
  *v8 = v11;
  v8[1] = v13;
  if ( (_QWORD *)*v13 != v11 )
    __fastfail(3u);
  *v13 = v8;
  v11[1] = v8;
LABEL_11:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
