/*
 * XREFs of NtAlpcCreatePortSection @ 0x14052AF18
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, __int64 a3, void *a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  NTSTATUS Section; // edi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  ULONG_PTR v13; // rsi
  signed __int64 v14; // r14
  bool v15; // cc
  ULONG_PTR v16; // r14
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0xFFFBFFFF) != 0 || (a2 & 0x40000) != 0 && a3 )
  {
    Section = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      v11 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v11 = (_QWORD *)MmUserProbeAddress;
      *v11 = *v11;
      v12 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v12 = (_QWORD *)MmUserProbeAddress;
      *v12 = *v12;
    }
    Section = ObReferenceObjectByHandle(
                Handle,
                1u,
                AlpcPortObjectType,
                KeGetCurrentThread()->PreviousMode,
                &Object,
                0LL);
    if ( Section >= 0 )
    {
      Section = AlpcpCreateSection(Object, a4, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v13 = BugCheckParameter2;
        *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
        *a6 = *(_QWORD *)(v13 + 8);
        v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v15 = v14 <= 1;
        v16 = v14 - 1;
        if ( v15 )
        {
          if ( v16 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v16);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)Section;
}
