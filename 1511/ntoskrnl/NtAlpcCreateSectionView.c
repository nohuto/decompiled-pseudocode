/*
 * XREFs of NtAlpcCreateSectionView @ 0x14047E500
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CC20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x14047CE3C (AlpcpDeleteView.c)
 *     AlpcpCreateSectionView @ 0x14047D390 (AlpcpCreateSectionView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  _BYTE *v7; // rcx
  NTSTATUS v8; // ebx
  unsigned __int64 *v9; // r15
  void *v10; // r14
  ULONG_PTR v11; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  _ALPC_DATA_VIEW_ATTR v14; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = ViewAttributes;
    if ( (unsigned __int64)ViewAttributes >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[31] = v7[31];
    v14 = *ViewAttributes;
  }
  else
  {
    v14 = *ViewAttributes;
  }
  if ( v14.Flags || v14.ViewBase )
  {
LABEL_23:
    v8 = -1073741811;
  }
  else
  {
    v8 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = (unsigned __int64 *)Object[0];
      v10 = (void *)AlpcReferenceBlobByHandle(
                      *((_QWORD *)Object[0] + 2) + 40LL,
                      (int)v14.SectionHandle,
                      AlpcSectionType);
      Object[1] = v10;
      if ( v10 )
      {
        v8 = AlpcpCreateSectionView((ULONG_PTR)v10, v9, 0LL, v14.ViewSize, &BugCheckParameter2);
        if ( v8 >= 0 )
        {
          if ( PreviousMode )
          {
            v11 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v11 + 48);
            if ( v8 < 0 )
              AlpcpDeleteView(v11);
          }
          else
          {
            v11 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v11 + 48);
          }
          AlpcpDereferenceBlobEx(v11, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v10, 1);
      }
      else
      {
        v8 = -1073741816;
      }
      ObfDereferenceObject(v9);
    }
  }
  KeLeaveCriticalRegion();
  return v8;
}
