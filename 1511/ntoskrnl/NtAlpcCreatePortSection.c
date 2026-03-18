/*
 * XREFs of NtAlpcCreatePortSection @ 0x14044DF54
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     AlpcpDeleteBlob @ 0x14047CE68 (AlpcpDeleteBlob.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  NTSTATUS Section; // ebx
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
      v10 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = *v10;
      v11 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v11 = (_QWORD *)MmUserProbeAddress;
      *v11 = *v11;
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
