/*
 * XREFs of NtAlpcCreateSectionView @ 0x140473D80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateSectionView @ 0x140474264 (AlpcpCreateSectionView.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v6; // rcx
  int SectionView; // edi
  void *v8; // r12
  ULONG_PTR v9; // rsi
  signed __int64 v10; // rcx
  bool v11; // cc
  ULONG_PTR v12; // rcx
  signed __int64 v13; // r14
  ULONG_PTR v14; // r14
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  _ALPC_DATA_VIEW_ATTR v19; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_25;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = ViewAttributes;
    if ( (unsigned __int64)ViewAttributes >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[31] = v6[31];
    v19 = *ViewAttributes;
  }
  else
  {
    v19 = *ViewAttributes;
  }
  if ( v19.Flags || !v19.ViewSize || v19.ViewBase )
  {
LABEL_25:
    SectionView = -1073741811;
  }
  else
  {
    SectionView = ObReferenceObjectByHandle(
                    PortHandle,
                    1u,
                    AlpcPortObjectType,
                    KeGetCurrentThread()->PreviousMode,
                    Object,
                    0LL);
    if ( SectionView >= 0 )
    {
      v8 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, v19.SectionHandle, &AlpcSectionType);
      Object[1] = v8;
      if ( v8 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v8, (ULONG_PTR)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          v9 = BugCheckParameter2;
          ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
          ViewAttributes->ViewSize = *(_QWORD *)(v9 + 48);
          v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v11 = v10 <= 1;
          v12 = v10 - 1;
          if ( v11 )
          {
            if ( v12 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v12);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
        v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 - 3, 0xFFFFFFFFFFFFFFFFuLL);
        v11 = v13 <= 1;
        v14 = v13 - 1;
        if ( v11 )
        {
          if ( v14 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, v14);
          AlpcpDestroyBlob(v8);
        }
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(Object[0]);
    }
  }
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return SectionView;
}
