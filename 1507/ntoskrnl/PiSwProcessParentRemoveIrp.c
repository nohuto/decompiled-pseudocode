/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x1405386E4
 * Callers:
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiSwFindSwDevice @ 0x140538814 (PiSwFindSwDevice.c)
 *     PiSwFindChildren @ 0x140538A2C (PiSwFindChildren.c)
 *     PiSwCloseDecendents @ 0x140538D44 (PiSwCloseDecendents.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140539CF4 (PiSwDestroyDeviceObject.c)
 *     PiSwFindPdoAssociation @ 0x14053A0F8 (PiSwFindPdoAssociation.c)
 */

void __fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  __int64 v6; // r8
  _QWORD *v7; // r14
  __int64 SwDevice; // rax
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  __int64 PdoAssociation; // rax
  __int64 v14; // rbp

  v2 = 0LL;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
    v2 = v3 + 40;
  if ( *(_QWORD *)(v2 + 8) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    Children = (_QWORD **)PiSwFindChildren(v2);
    v7 = Children;
    if ( Children )
    {
      v11 = *Children;
      if ( *Children != Children )
      {
        do
        {
          v12 = v11 - 12;
          LOBYTE(v6) = 1;
          v11 = (_QWORD *)*v11;
          PdoAssociation = PiSwFindPdoAssociation(v12, a1, v6);
          if ( PdoAssociation )
          {
            v14 = *(_QWORD *)(PdoAssociation + 24);
            if ( (*(_DWORD *)(*(_QWORD *)(v14 + 64) + 8LL) & 0x20) == 0 )
              PiSwProcessRemove(v14, 0LL);
            PiSwDestroyDeviceObject(v14);
          }
        }
        while ( v11 != v7 );
      }
    }
    SwDevice = PiSwFindSwDevice(*(NTSTRSAFE_PCWSTR *)(v2 + 8));
    if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      PiSwCloseDecendents(v2);
    ExReleaseResourceLite(&PiSwLockObj);
    v9 = KeGetCurrentThread();
    v10 = v9->KernelApcDisable + 1;
    v9->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
      && !v9->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
