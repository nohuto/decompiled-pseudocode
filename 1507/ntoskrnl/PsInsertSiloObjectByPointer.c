/*
 * XREFs of PsInsertSiloObjectByPointer @ 0x1406C0E40
 * Callers:
 *     ObSetSiloRootDirectoryByPointer @ 0x1406AECC4 (ObSetSiloRootDirectoryByPointer.c)
 *     PsInsertSiloObjectFromJob @ 0x1406C0F4C (PsInsertSiloObjectFromJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsInsertSiloObjectByPointer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  _QWORD *v13; // rcx
  struct _KTHREAD *v14; // rdx
  __int16 v15; // cx

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6F6C6953u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a2;
  PoolWithTag[3] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 48), 1u);
  v11 = (_QWORD *)(a1 + 216);
  for ( i = *(_QWORD **)(a1 + 216); i != v11; i = (_QWORD *)*i )
  {
    if ( a2 == i[2] )
    {
      v6 = -1073741771;
      ExFreePoolWithTag(v8, 0);
      goto LABEL_11;
    }
  }
  v13 = *(_QWORD **)(a1 + 224);
  *v8 = v11;
  v8[1] = v13;
  if ( (_QWORD *)*v13 != v11 )
    __fastfail(3u);
  *v13 = v8;
  *(_QWORD *)(a1 + 224) = v8;
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(a1 + 48));
  v14 = KeGetCurrentThread();
  v15 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v15;
  if ( !v15 && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return v6;
}
