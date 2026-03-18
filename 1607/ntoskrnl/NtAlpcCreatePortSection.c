/*
 * XREFs of NtAlpcCreatePortSection @ 0x1404726B8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpDeleteBlob @ 0x14040BDA8 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, __int64 a3, void *a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  NTSTATUS Section; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  PVOID v13; // rsi
  ULONG_PTR v14; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

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
      v11 = (__int64)a5;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      v12 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v12 = *(_QWORD *)v12;
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
      v13 = Object;
      Section = AlpcpCreateSection(Object, a4, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v14 = BugCheckParameter2;
        *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
        *a6 = *(_QWORD *)(v14 + 8);
        AlpcpDereferenceBlobEx(v14, 1);
      }
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Section;
}
