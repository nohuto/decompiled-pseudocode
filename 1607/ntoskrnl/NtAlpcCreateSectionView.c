/*
 * XREFs of NtAlpcCreateSectionView @ 0x140409A7C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpCreateSectionView @ 0x140409C78 (AlpcpCreateSectionView.c)
 *     AlpcReferenceBlobByHandle @ 0x14040BC58 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x14040BD7C (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  NTSTATUS SectionView; // ebx
  PVOID v8; // r15
  void *v9; // r14
  ULONG_PTR v10; // rdi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_19;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = a3;
    if ( a3 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 31) = *(_BYTE *)(v6 + 31);
    v13 = *(_OWORD *)a3;
    v14 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v13 = *(_OWORD *)a3;
    v14 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v13 || !*((_QWORD *)&v14 + 1) || (_QWORD)v14 )
  {
LABEL_19:
    SectionView = -1073741811;
  }
  else
  {
    SectionView = ObReferenceObjectByHandle(
                    Handle,
                    1u,
                    AlpcPortObjectType,
                    KeGetCurrentThread()->PreviousMode,
                    Object,
                    0LL);
    if ( SectionView >= 0 )
    {
      v8 = Object[0];
      v9 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, *((_QWORD *)&v13 + 1), &AlpcSectionType);
      Object[1] = v9;
      if ( v9 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v9, (ULONG_PTR)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          v10 = BugCheckParameter2;
          *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
          *(_QWORD *)(a3 + 24) = *(_QWORD *)(v10 + 48);
          AlpcpDereferenceBlobEx(v10);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v9);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v8);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SectionView;
}
