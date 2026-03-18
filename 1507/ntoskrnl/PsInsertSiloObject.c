/*
 * XREFs of PsInsertSiloObject @ 0x1406C0CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 */

NTSTATUS __fastcall PsInsertSiloObject(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  char *CurrentSilo; // rdi
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  _QWORD *i; // rcx
  _QWORD *v14; // rcx
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  if ( a1 == (void *)-1LL )
  {
    CurrentSilo = (char *)PsGetCurrentSilo(-1LL, a2, a3, a4);
    if ( !CurrentSilo )
      return -1073741816;
  }
  else
  {
    result = ObReferenceObjectByHandle(a1, 2u, PsSiloType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    CurrentSilo = (char *)Object;
    v6 = result;
    if ( result < 0 )
      return result;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6F6C6953u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a2;
    PoolWithTag[3] = a3;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(CurrentSilo + 48), 1u);
    v12 = CurrentSilo + 216;
    for ( i = (_QWORD *)*((_QWORD *)CurrentSilo + 27); i != v12; i = (_QWORD *)*i )
    {
      if ( a2 == i[2] )
      {
        v6 = -1073741771;
        break;
      }
    }
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v14 = (_QWORD *)*((_QWORD *)CurrentSilo + 28);
      *v10 = v12;
      v10[1] = v14;
      if ( (_QWORD *)*v14 != v12 )
        __fastfail(3u);
      *v14 = v10;
      *((_QWORD *)CurrentSilo + 28) = v10;
    }
    ExReleaseResourceLite((PERESOURCE)(CurrentSilo + 48));
    v15 = KeGetCurrentThread();
    v16 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v16;
    if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    PspDereferenceSiloObject(CurrentSilo);
    return v6;
  }
  else
  {
    if ( CurrentSilo )
      PspDereferenceSiloObject(CurrentSilo);
    return -1073741670;
  }
}
